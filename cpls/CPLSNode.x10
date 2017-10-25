package cpls;

import x10.util.ArrayList;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.entities.State;
import cpls.problem.ProblemGenericModel;
import cpls.measurements.GlobalStats;
import cpls.util.Logger;
import cpls.util.Utils;
import cpls.util.Maybe;
import cpls.util.Valuation;
import cpls.solver.HeuristicSolver;
import cpls.solver.EOSearch;
import cpls.solver.PopulBasedHeuristic;
import x10.util.Random;
import x10.util.concurrent.AtomicBoolean;
import x10.util.RailUtils;
import x10.util.StringUtil;
//import cpls.util.Monitor;

public class CPLSNode(sz:Long){
 	//property(sz);//=sz;
 	/*********Variables para la configuración del nodo**********/
 	private var nodeConfig:NodeConfig;
 	protected var heuristicSolver:HeuristicSolver(sz);
 	
 	private var pointersComunication:PlaceLocalHandle[CPLSNode(sz)];
 	var teamPool:SmartPool(sz);
 	var offspringPool:SmartPool(sz);
 	var stackForDiv:StackForDiv(sz);
 	var globalBestConf:GlobalBestConf(sz);
 	/***********************************************************/
 	/*********Variables para el manejo de estadísticas**********/
 	val stats = new GlobalStats();
 	val sampleAccStats = new GlobalStats();
 	val genAccStats = new GlobalStats();
 	var time:Long;
 	/***********************************************************/
 	/***********************************************************/
 	val winnerLatch = new AtomicBoolean(false);
 	val winnerLatchForDivs = new AtomicBoolean(false);
 	var bcost:Long;
 	var solString : String =  new String();
 	var cGroupReset:Int = 0n;
 	val random:Random;
 	private var deltaFact : Double = 1.0;
 	private var divOption:Int;
 	private var ns:Int;
 	private var pSendLM:Double = 0.0;
 	var interTeamKill:Boolean = false;
 	var confArray:Rail[State];/*******Para diversificar Teams en caso que converjan*******/
 	/*************************************************************************************/
 	/***Variable copiadas desde la heuristica***/
 	protected var target : Long = 0;
 	protected var strictLow : Boolean = false;
 	protected var targetSucc : Boolean = false;
 	// -> Statistics
 	protected var nRestart : Int = 0n;
 	protected var nIter : Int;
 	//Jason: Migration begin
 	protected var itersWhitoutImprovements : Int = 0n;
 	//protected var nItersForUpdate:Int = 0n;
 	//Jason: Migration end
 	protected var nForceRestart : Int = 0n;
 	/** Total Statistics */
 	protected var nIterTot : Int;
 	protected var nSwapTot : Int;
 	// -> Result
 	protected var bestConf:Rail[Int] = new Rail[Int](sz, 0n);
 	protected var bestConfForTeam:State(sz) = new State(sz, Long.MAX_VALUE, null, -1 as Int,null);
 	protected var bestCost:Long = Long.MAX_VALUE;
 	protected var currentCost:Long;
 	// -> Stop search process 
 	protected var kill:Boolean = false;
 	// -> Max time
 	protected var initialTime:Long;
 	// RESTART
 	protected var restart:Boolean = false;
 	// not sure
 	protected var forceRestart : Boolean = false;
 	/** Number time to change vector due to communication */ 
 	protected var nChangeV : Int = 0n;
 	//protected var nChangeforDiv : Int = 0n;
 	protected var bestSent:Boolean=false;
 	protected var newBestConfReportedForTeam:Boolean = false;
 	protected var numberofTeams:Int;
 	protected var randomIWI:Int;
 	//protected var spreadDivConf:Boolean = false;
 	//protected var isOnDiversification:Boolean = false;
 	/*************************************************************************************/
 
 	public def this(size:Long){
 		property(size);
 		this.random = new Random();
 		val str = System.getenv("DELTA");
 		if (str != null)
 			this.deltaFact = StringUtil.parseInt(str)/ 100.0;
 		val lmstr = System.getenv("LM");
 		if (lmstr != null)
 			pSendLM = StringUtil.parseInt(lmstr)/ 100.0;
 	}
 
 	public def initialize(config:NodeConfig, cplsPoolConfig:PoolConfig, problemSize:Long, inSeed:Long){
 		val nsStr = System.getenv("NS");
 		if (nsStr != null) 
 			this.ns = StringUtil.parseInt(nsStr);
 		else
 			this.ns = sz as Int / 4n;
 		this.heuristicSolver = HeuristicFactory.make(config.getHeuristic(), this.sz);
 		this.random.setSeed(inSeed + here.id);
 		do{
 			this.randomIWI = this.random.nextInt((5000*sz) as Int);
 		}while(this.randomIWI < 50*sz);
 		Console.OUT.println("Nodo: " + here.id + " IWI: " + this.randomIWI);
 		this.heuristicSolver.setSeed(random.nextLong());
 		//semilla = inSeed + here.id; //La conservo solo para imprimirla juntos con la solución inicial
 		//this.heuristicSolver.setSolverType(config.getHeuristic()); //Ya fue seteado en el constructor de la heurística
 		this.nodeConfig = config;
 		this.numberofTeams = config.getNumberOfTeams(); //Es necesario guardarla para la reinicialización
 		this.confArray = new Rail[State](numberofTeams, new State(sz,-1n,null,-1n,null));
 
 		if(config.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 			this.globalBestConf = new GlobalBestConf(sz, config.getNumberOfTeams(), this.random.nextLong());
 			//this.divCplsPool = new SmartPool(sz, configPool);
 			//this.flagsForMaster = new Rail[Boolean](config.getNumberOfTeams(), false);
 			//Console.OUT.println("MsgType_0. Se inicializa smartpool en el master. Place: " + here.id + ". TeamId: " + config.getTeamId());
 		}else if(config.getRol() == CPLSOptionsEnum.NodeRoles.HEAD_NODE){
 			this.teamPool = new SmartPool(sz, cplsPoolConfig);
 			this.offspringPool = new SmartPool(sz, cplsPoolConfig);
 			this.stackForDiv = new StackForDiv(sz);
 			//this.divCplsPool = new SmartPool(sz, cplsPoolConfig);
 			//if(this.nodeConfig.getMasterHeuristic() != null && this.nodeConfig.getMasterHeuristic().equals("GA")){
 				//this.fromTheExplorersConfigs = new Rail[Rail[Int]](this.nodeConfig.getNodesPerTeam(), new Rail[Int](sz));
 			//}
 			//Console.OUT.println("MsgType_0. Se inicializa smartpool en head. Place: " + here.id + ". TeamId: " + config.getTeamId());
 		}
 		//printConfig();
 	}
 
 	public def reInitialize(){
 		clear();
 		//val semill = random.nextLong();
 		this.heuristicSolver.setSeed(random.nextLong());
 		this.heuristicSolver.clearProblemModel();
 		this.confArray = new Rail[State](numberofTeams, new State(sz,-1n,null,-1n,null));
 		do{
 			this.randomIWI = this.random.nextInt((5000*sz) as Int);
 		}while(this.randomIWI < 50*sz);
 		Console.OUT.println("Nodo: " + here.id + " IWI: " + this.randomIWI);
 		//this.heuristicSolver.initVariables();
 		//this.heuristicSolver.initVar();
 		//Console.OUT.print("MsgType_0. Nodo " + here.id + ", re-inicializado con semilla: " + semill + ", variables: ");
 		//printVector(this.heuristicSolver.getVariables());
 	}
 
 	public def setPointersCommunication(pointersComunication:PlaceLocalHandle[CPLSNode(sz)]){
 		this.pointersComunication = pointersComunication;
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		this.heuristicSolver.configHeuristic(problemModel, opts);
 		this.heuristicSolver.initVariables();
 		//Console.OUT.print("MsgType_0. Nodo " + here.id + ". TeamId: " + this.nodeConfig.getTeamId() + ", inicializado con semilla: " + semilla + ", variables: ");
 		//printVector(this.heuristicSolver.getVariables());
 	}
 
 	public static def printVector(vector:Rail[Int]){
 		for(var i:Int = 0n; i < vector.size; i++){
 			Console.OUT.print(vector(i) + "  ");
 		}
 		Console.OUT.print("\n");
 	}
 
 	public def start(targetCost : Long, strictLow: Boolean):void{
 		//Console.OUT.println("MsgType_0. Nodo " + here + ". Arrancando");
 	 	val refsToPlaces = pointersComunication;
 		stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 	var cost:Long = Long.MAX_VALUE;
 	 	this.interTeamKill = false;
 	 	if (nodeConfig.getInterTeamCommTime() > 0 && nodeConfig.getNodesPerTeam() > 1n &&
 	 			nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 	 		async{
 	 			System.sleep(nodeConfig.getIniDelay());
 	 			interTeamActivity();
 	 		} 
 	 	}
 	 	//heuristicSolver.setSeed(random.nextLong());
 	 	time = -System.nanoTime();
 	 	cost = solve(targetCost, strictLow);
 	 	time += System.nanoTime();
 	 	interTeamKill = true;
 	 	Runtime.probe();
 	 	//if(kill){//&& here != Place.FIRST_PLACE)
 	 		//Console.OUT.print("Soy el nodo: " + here.id + ", y me mataron cuando tenia: (Costo) => " + bestCost + " (variables) => ");
 	 		//printVector(bestConf);
 	 		//return;
 	 	//}
 	 	if ( ( strictLow && cost < targetCost ) || (!strictLow && cost <= targetCost) ){
 	 		val home = here.id;
 	 		val winner = at(Place.FIRST_PLACE) refsToPlaces().announceWinner(home); //Comunicate operation
 	 		bcost = cost;
 	 		if (winner){ 
 	 			//Console.OUT.println("Soy el nodo " + here + "Y soy el ganador");
 	 			//val changeForDivs = getChangeforDiv();
 	 			setStats_(targetCost, home as Int, 0n);
 	 			if (nodeConfig.getVerify()){
 	 				displaySolution();
 	 				Console.OUT.println(", Solution is " + 
 	 				(verify() ? "perfect !!!" : "not perfect "));
 	 				return;
 	 			} 
 	 		}else{
 	 			//Console.OUT.println("Soy el nodo " + here + " y perdi la carrera para ganar");
 	 		}
 	 	}else{
 	 		solString = "Solution "+here+ " is "+(verify()? "perfect !!!" : "not perfect, maybe wrong ...");
 	 		//Console.OUT.println("Se termina el start y no se llego a la solucion: " + here.id);
 	 	}
 	 	//Jason: Pruebas del GA
 	 	//Console.OUT.print("MsgType_0. Nodo:" + here + ". Solucion final. Costo: " + this.currentCost + ". Variables: " );
 	 	//printVector(this.heuristicSolver.getVariables());
 	 	//Console.OUT.println("MsgType_0. Nodo " + here + ". Liberando pal finish.");
 	}
 
 	public def solve(tCost : Long, sLow: Boolean):Long{
 		//Console.OUT.println("MsgType_0. Nodo: " + here + " pasando por solve.");
 		initVar(tCost, sLow);
 		this.currentCost = this.heuristicSolver.costOfSolution();
 		try{
 			Rail.copy(this.heuristicSolver.getVariables() as Valuation(sz), this.bestConf as Valuation(sz));
 		}catch(e:Exception){
 			Console.OUT.println("Ocurrió una excepción en el Rail.Copy. " + "sz: " + sz  + ". Tamaño variables: " + this.heuristicSolver.getVariables().size);
 		}
 
 		if (this.currentCost == 0)
 			this.bestCost = currentCost;
 		else
 			this.bestCost = x10.lang.Int.MAX_VALUE;
 
 		//var count:Int = 1n;
 		while( this.currentCost != 0 ){
 			if (this.nIter >= this.nodeConfig.getMaxIters() as Int){
 				//restart or finish
 				if(nRestart >= this.nodeConfig.getMaxRestarts() as Int){
 					break;
 				}else{
 					nRestart++;
 					this.heuristicSolver.initVariables(); 
 					currentCost = this.heuristicSolver.costOfSolution();
 					updateTotStats();
 					restartVar();
 					//bestSent = false;
 					continue;
 				}
 			}
 			//Console.OUT.println("Debug mark: Next step after of restart-end verification (HeuristicSolver.solve)");
 			this.nIter++;
 			this.currentCost = this.heuristicSolver.search(this.currentCost, this.bestCost, this.nIter);
 			//if(!isOnDiversification){
 			//	this.nItersForUpdate++;
 			//}
 			//Update the best configuration found so far
 			updateCosts();

 			//Kill solving process	
 			Runtime.probe();	// Give a chance to the other activities
 			if (kill){
 				break;  // kill: End solving process
 			}
 			//if(solForDiv){
 			//	this.heuristicSolver.tryInsertIndividual();
 			//}
 			//Console.OUT.println("in maIN LOOP " + here.id+ " time "+(System.nanoTime() - this.initialTime) +" cost="+this.currentCost);
 			//Time out
 			if(this.nodeConfig.getMaxTime() > 0n){
 				val eTime = System.nanoTime() - this.initialTime; 
 				if(eTime/1e6 >= this.nodeConfig.getMaxTime()){ //comparison in miliseconds
 					//Console.OUT.print("MsgType_0. Nodo " + here.id + ", finalizacion por Time Out: (tiempo) " + eTime/1e6
 					//	 + ". mi costo: " + bestCost + ", mis variables: ");
 					//printVector(bestConf);
 					Logger.debug(()=>{" Time Out"});
 					break;
 				}
 			}
 			//val eTime = System.nanoTime() - this.initialTime;
 			//if((eTime/1e6)/30000 > count){
 			//	count++;
 			//	this.heuristicSolver.displayInfo();
 			//}
 			interact();
 		}
 		//this.heuristicSolver.printPopulation();
 		//Console.OUT.println("Saliendo para el finish " + here);
 		updateTotStats();
 		return this.currentCost;
 	}
 
 	protected def restartVar(){
 		this.bestSent = false;
 		//this.heuristicSolver.restartVar();
 	}
 
 	protected def initVar(tCost : Long, sLow: Boolean){
 		this.heuristicSolver.initVar();
 		this.target = tCost;
 		this.strictLow = sLow;
 		this.targetSucc = false;
 		this.nIter = 0n;
 		this.nRestart = 0n;
 		this.bestConf = new Rail[Int](this.heuristicSolver.getSizeProblem(), 0n);
 		this.bestConfForTeam = new State(sz, Long.MAX_VALUE, null, -1 as Int,null);
 		// clear Tot stats
 		this.nIterTot = 0n;
 		//Jason: Migration begin		
 		this.itersWhitoutImprovements = 0n;
 		//this.nItersForUpdate = 0n;
 		//Jason: Migration end
 		this.nSwapTot = 0n;
 		this.initialTime = System.nanoTime();
 		// Comm
 		this.bestSent = false;
 		this.nForceRestart = 0n;
 		this.nChangeV = 0n;
 		//this.nChangeforDiv = 0n;
 
 		if (this.nodeConfig.getAdaptiveComm())
 			this.nodeConfig.setUpdateI(2n * this.nodeConfig.getReportI());
 	}
 
 	protected def updateCosts(){
 		//val sz = this.heuristicSolver.getSizeProblem();
 		if(this.currentCost < this.bestCost){ //(totalCost <= bestCost)
 			//Console.OUT.println("Por lo menos una vez se supera " + here);
 			Rail.copy(this.heuristicSolver.getVariables() as Valuation(sz), this.bestConf as Valuation(sz));
 			this.bestCost = this.currentCost;
 
 			bestSent = false; // new best found, I must send it!
 
 			if (this.nodeConfig.getReportPart()){
 				val eT = (System.nanoTime() - initialTime)/1e9;
 				val gap = (this.bestCost-this.target)/(this.bestCost as Double)*100.0;

 				Utils.show("Solution",this.bestConf);
 				Console.OUT.printf("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n",here,eT,this.bestCost,gap);
 			}
 			if ((this.strictLow && this.bestCost < this.target)
 					||(!this.strictLow && this.bestCost <= this.target)){
 				this.targetSucc = true;
 				this.kill = true;
 				//Console.OUT.println("Soy nodo " + here + " y he encontrado la solucion");
 			}
 			//Console.OUT.println("La heuristica consigue mejorar el costo. CPLSNode en " + here);
 			this.itersWhitoutImprovements = 0n;

 		}else{
 			this.itersWhitoutImprovements++;
 		}
 		
 		if(this.heuristicSolver instanceof PopulBasedHeuristic){
	 		if(this.itersWhitoutImprovements == this.randomIWI ){//this.nodeConfig.getItersWhitoutImprovements()){
	 			this.itersWhitoutImprovements = 0n;
	 			val solverState = createSolverState();
	 			communicate(new State(sz, this.bestCost, this.bestConf as Valuation(sz), here.id as Int, solverState));
	 			bestSent = false;
	 			this.heuristicSolver.launchEventForStagnation();
	 			Rail.copy(this.heuristicSolver.getVariables() as Valuation(sz), this.bestConf as Valuation(sz));
	 			this.bestCost = this.heuristicSolver.costOfSolution();
	 		}else{
	 			val result = getIPVector(this.currentCost);
	 			if (result) {
	 				//this.nChangeV++;
	 				restartVar();
	 			}
	 		}
 		}
 	}
 
 	/*********************************************This is the comunication section****************************************/
 	/*********************************************************************************************************************/
 
 	/*******This methods are used when a node found a solution and then may send a kill message at the others nodes*******/
 	public def announceWinner(p:Long):Boolean {
 		val refsToPlaces = pointersComunication;
 		val result = winnerLatch.compareAndSet(false, true);
 		if (result)	{
 			//finish{ //Jason:Puse este finish a ver que pasa con la terminación de la ejecución.
	 			for (k in Place.places()) 
	 				if (p != k.id){
	 					at(k) refsToPlaces().kill(); // at(k) async ss().kill();  // Testing the use of this async v1
	 			}
 			//}
 		}
 		//winnerLatch.set(false); //Jason: Esto fue solo para probar que no se quede colgado
 		return result;
 	}
 
 	/*Jason: Se crea este método para reemplazar el mecanismo de generación de soluciones hacia los StackForDivs*/
 	/*public def spreadDivConfigs():Boolean{
 		val refsToPlaces = pointersComunication;
 		val result = winnerLatchForDivs.compareAndSet(false, true);
 		if(result){
 			this.spreadDivConf = true;
 			return true;
 		}else{
 			return false;
 		}
 	}*/

 	public def kill(){
 		if (heuristicSolver != null){
 			this.kill = true; 
 			this.interTeamKill = true;
 			//Console.OUT.println("MsgType_0. Nodo: " + here + "y pasaron a killiarme");
 		}else{
 			Logger.debug(()=>{"Solver is not yet started. Kill is not set"});	
 		}
 	}
 	
 	protected def interact(){
 		interactForIntensification();
 		//interactForDiversification();
 	} 
 
 	protected def interactForIntensification(){ 
 		if(this.nodeConfig.getRol() != CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 			if( this.nodeConfig.getReportI() != 0n && this.nIter % this.nodeConfig.getReportI() == 0n){
 				if(!bestSent){ 
 					val solverState = createSolverState();
 					communicate(new State(sz, this.bestCost, this.bestConf as Valuation(sz), here.id as Int, solverState));
 					bestSent = true;
 					
 				}else{
 					if (random.nextInt(this.nodeConfig.getReportI()) == 0n){
 						val solverState = createSolverState();
 						communicate(new State(sz, this.currentCost, this.heuristicSolver.getVariables() as Valuation(sz), here.id as Int, solverState));
 					}		  
 				}
 				//Console.OUT.println("Ingresa a Report " + here + "nIters: " + nIter);
 			}
 
 			if( this.nodeConfig.getUpdateI() != 0n && this.nIter % this.nodeConfig.getUpdateI() == 0n){// && !this.isOnDiversification){
 				if ( this.nodeConfig.getAdaptiveComm() && this.nodeConfig.getUpdateI() < this.nodeConfig.getMaxUpdateI()){ 
 					this.nodeConfig.setUpdateI(this.nodeConfig.getUpdateI()*2n);
 				}
 				val result = getIPVector(this.currentCost);
 				if (result) {
 					this.nChangeV++;
 					restartVar();
 				}
 				//this.nItersForUpdate = 0n;
 				//Console.OUT.println("Ingresa a Update " + here);
 			}
 			// Force Restart: Inter Team Communication
 			if (this.forceRestart){
 				//restart
 				Console.OUT.println("Entra en el forceRestart de interactForIntensification() " + here);
 				Logger.info(()=>{"   AdaptiveSearch : force Restart"});
 				this.forceRestart = false;
 				this.nForceRestart++;
 				// get a new conf according the diversification approach
 				val result = getPR();
 				if (result != null){	
 					if(this.nodeConfig.getChangeOnDiver() == 1n) {
 						this.heuristicSolver.setVariables(result().vector);
 						this.currentCost = this.heuristicSolver.costOfSolution();
 						restartVar();
 					}
 					//if(this.modParams == 1n) //Solo para RoTS y para EOSearch
 						//processSolverState(result().solverState);
 				} else {
 					if(this.nodeConfig.getChangeOnDiver() == 1n) {
 						this.heuristicSolver.initVariables();
 						this.currentCost = this.heuristicSolver.costOfSolution();
 						restartVar();
 					}
 				}
 			}
 		}
 	}
 
 	//Jason: Migration
 	//Si después de cierto número de iteraciones el nodo no consigue una mejora, entonces decide tomar una nueva
 	//solución. Con una probabilidad del 50% se toma una solución o bien del teamPool, o bien del trasnferIndividual.
 	//El head entonces tendrá tres pool, uno para intensificación en el team (probada por Danny suficientemente), otro
 	//para almacenar los individuos que el GA propone para explorar, y otro para almacenar las soluciones que los nodos
 	//van reportando para que empiecen a hacer parte de la población del GA
 	/*public def interactForDiversification(){
 		val refsToPlace = pointersComunication;
 		if((this.nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.EXPLORER_NODE || this.nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.HEAD_NODE)
 			&& this.nodeConfig.getModeIndicator() != CPLSOptionsEnum.ModeIndicator.IW){
 			if(!(this.heuristicSolver instanceof PopulBasedHeuristic)){
 				if(this.nIterWhitoutImprovements >= this.nodeConfig.getItersWhitoutImprovements()){
 					this.isOnDiversification = !this.isOnDiversification;
 					if(this.isOnDiversification){
	 					val solverState = createSolverState();
	 					val state = new State(sz, this.bestCost, this.bestConf as Valuation(sz), here.id as Int, solverState);
	 					val result = at(Place(nodeConfig.getTeamId())) refsToPlace().communicateForDiversification(state);
	 					if (result.vector != null){
	 						this.nChangeforDiv++;
	 						this.heuristicSolver.setVariables(result.vector as Valuation(sz));
	 						this.currentCost = this.heuristicSolver.costOfSolution();
	 						bestSent = false;
	 						this.nIterWhitoutImprovements = 0n;
	 						
	 					}
 					}
 				}
 			}else{
 				//Implementar lógica para cuando la heurística es poblacional
 			}
 		}
 		if(this.nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.HEAD_NODE
 			&& this.newBestConfReportedForTeam && this.nodeConfig.getModeIndicator() == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER){
 				//Console.OUT.println("Head: " + here.id + " inicia ida al master a reportar una nueva mejor solución");
 				val indice = here.id/this.nodeConfig.getNodesPerTeam();
 				val aux = this.bestConfForTeam;
 				at(Place(0)) refsToPlace().newBestConfForTeam(aux, indice as Int);
 				this.newBestConfReportedForTeam = false;
 				//if (this.nodeConfig.getReportPart()){
 					//val eT = (System.nanoTime() - initialTime)/1e9;
 					//var gap:Double = (this.bestConfForTeam.cost-this.target)/(this.bestConfForTeam.cost as Double)*100.0;
 					//Utils.show("Head reporta nueva mejor solucion para su team: ", this.bestConfForTeam.vector);
 					//Console.OUT.printf("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n",here,eT,this.bestConfForTeam.vector,gap);
 				//}
 				//Console.OUT.println("Head: " + here.id + " termina ida al master a reportar una nueva mejor solución");
 		}
 		if(this.nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){	
 			if(this.globalBestConf.isANewBestConfEver()){
 				val conf = this.globalBestConf.getBestConfEver();
 				//Console.OUT.println("Master: " + here.id + " ingresa a su diversificación y toma mejor de mejores soluciones");
 				if(this.heuristicSolver instanceof PopulBasedHeuristic){
 					this.heuristicSolver.tryInsertIndividual(conf.vector, sz);
 				}else{
 					this.heuristicSolver.setVariables(conf.vector);
 					this.currentCost = this.heuristicSolver.costOfSolution();
 					//updateTotStats();
 					bestSent = false;
 				}
 				this.nChangeforDiv++;
 				this.nIterWhitoutImprovements = 0n;
 				//if (this.nodeConfig.getReportPart()){
 					val eT = (System.nanoTime() - initialTime)/1e9;
 					var gap:Double = (conf.cost-this.target)/(conf.cost as Double)*100.0;
 					//Utils.show("Master toma una nueva solucion: ", conf.vector);
 					//Console.OUT.println("Tamaño de GlobalBestConf del master: " + this.globalBestConf.getSize());
 					//Console.OUT.printf("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n",here,eT,conf.vector,gap);
 				//}
 			}
 			//val auxDiv:Long = 2n*this.nodeConfig.getNodesPerTeam();
 			//if(this.nIter%(this.nodeConfig.getItersWhitoutImprovements()/auxDiv) == 0){ //Jason: Pongo a generar cada mitad de IWI para ver si se suple
 			if(spreadDivConf){	
 				//Console.OUT.println("***********Inicio: Master distribuyendo soluciones a los teams***************");
 				//Generar una solución diversa para cada Head y enviarla
 				//Console.OUT.println("Master: " + here.id + " distribuye soluciones por IWI");
 				var node:Long = 0;
 				for(var i:Int = 0n; i < this.nodeConfig.getNumberOfTeams(); i++){
 					node = 1 + i*this.nodeConfig.getNodesPerTeam();
 					val newDivConf = createDivConf();
 					at(Place(node)) refsToPlace().insertConfOnDivPool(newDivConf);
 					//if (this.nodeConfig.getReportPart()){
 						//val eT = (System.nanoTime() - initialTime)/1e9;
 						//var gap:Double = (newDivConf.cost-this.target)/(newDivConf.cost as Double)*100.0;
 						//Console.OUT.println("Solucion para nodo: " + node);
 						//Utils.show("Conf: ", newDivConf.vector);
 						//Console.OUT.printf("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n",here,eT,newDivConf.vector,gap);
 					//}
 				}
 				this.spreadDivConf = false;
 				this.winnerLatchForDivs.set(false);
 				//Console.OUT.println("***********Fin: Master distribuyendo soluciones a los teams******************");
 				//Console.OUT.println("Master: " + here.id + " termina de distribuir soluciones");
 			}
 		}
 	}*/
 
 	public def getnIter(){
 		return this.nIter;
 	}
 
 	/**
 	 * Método que se ejecuta en el head cuando el explorer se estanca por IWI
 	 **/
 	/*public def communicateForDiversification(info:State(sz)):State(sz){
 		val refsToPlaces = pointersComunication;
 		this.teamPool.insertFromIWI(info);
 		if(this.bestConfForTeam.cost > info.cost){
 			//Console.OUT.println("Efectivamente el costo es mejor y entonces el bestConfForTeam cambia");
 			this.newBestConfReportedForTeam = true;
 			this.bestConfForTeam =  new State(info.sz, info.cost, info.vector, info.place, info.solverState);
 			//Console.OUT.println("Costo del bestConfForTeam: " + this.bestConfForTeam.cost);
 			//Console.OUT.println("INSERT: communicateForDiversification: " + this.bestConfForTeam.vector);
 		}
 		val newConf = this.stackForDiv.pop();
 		if(newConf.vector != null){
 			//Console.OUT.println("La solucion para explorer provino del stackForDiv: " + newConf);
 			return newConf;
 		}else{
 			val conf = this.heuristicSolver.createNewSol();
 			if(this.nodeConfig.getModeIndicator() == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER)
 				at(Place.FIRST_PLACE) refsToPlaces().spreadDivConfigs(); 
 			//Console.OUT.println("at CPLSNode created Solution: " + conf);
 			//val cost = this.heuristicSolver.costOfSolution(sz, conf as Valuation(sz));
 			//Console.OUT.println("La solucion para explorer fue creada desde cero: " + conf);
 			val randomConf = new State(sz, -1, conf as Rail[Int]{self.size==sz} , -1n, null);
 			return randomConf;
 		}
 	}*/
 
 	/**
 	 * Método que se ejecuta en el master cuando lo llaman porque un team mejoró
 	 * su solución
 	 * */
 	public def newBestConfForTeam(info:State(sz), place:Int){
 		//Que retorne un booleano para indicar si la nueva solución que llegó es mejor
 		//que todas las demás que hay en el pool; en ese caso empezar desde esa
 		//Console.OUT.println("   INSERT: " + info.vector);
 		this.globalBestConf.put(info, place);
 	}
 	
 	/**
 	 * Método que se ejecuta en el head cuando lo llaman porque un team mejoró la mejor solución
 	 **/
 	public def insertConfOnDivPool(newDivConf:State(sz)){
 		this.stackForDiv.push(newDivConf);
 	}
 	
 	/**
  	* Método que se ejecuta en el master para generar las soluciones que va a distribuir
  	* en cada equipo. Se generan cada IWI iteraciones.
  	* */
 	public def createDivConf():State(sz){
 		if(this.heuristicSolver instanceof PopulBasedHeuristic){
 			//this.heuristicSolver.printPopulation();
 			var conf:Rail[Int]; 
 			//do{
 				conf = this.heuristicSolver.getConfigForPop(true);
 			//}while(verifyDiference(conf));
 			//val cost = this.heuristicSolver.costOfSolution(sz, conf as Valuation(sz));
 			//Console.OUT.println("Lo saco de la poblacion");
 			val cost = this.heuristicSolver.costOfSolution(sz, conf as Valuation(sz));
 			return new State(sz, cost, conf as Valuation(sz), -1n, null);
 		}else{
 			val state1 = this.globalBestConf.get(this.random.nextInt(sz as Int));
 			val state2 = this.globalBestConf.get(this.random.nextInt(sz as Int));
 			val conf = insertPathConf(state1.vector, state2.vector);
 			val cost = this.heuristicSolver.costOfSolution(sz, conf as Valuation(sz));
 			//val cost = this.heuristicSolver.costOfSolution(sz, conf as Valuation(sz));
 			//Console.OUT.println("Lo creo con el insertPath");
 			return new State(sz, cost, conf as Valuation(sz), -1n, null);
 		}
 	}
 
 	public def verifyDiference(conf:Rail[Int]):Boolean{
 		var dist:Double;
 		for(var i:Int = 0n; i < this.globalBestConf.getSize(); i++){
 			dist = this.heuristicSolver.getDistance(conf, this.globalBestConf.get(i).vector);
 			if(dist == 0.0) return false;
 		}
 		return true;
 	}
 
 	public def insertPathConf(padre1:Rail[Int], padre2:Rail[Int]):Rail[Int]{
 		var copyMyGenes:Rail[Int] = new Rail[Int](padre1); 
 		var genesOther:Rail[Int] = new Rail[Int](padre2);
 		val randomGenerator:Random = new Random();
 		val size = copyMyGenes.size;
 		var son1:Rail[Int] = new Rail[Int](size, -1n);
 		var initializedPositions:Int = 0n;
 		var insertedinSon1:Int = -1n;
 		var indexIni:Long = randomGenerator.nextLong(size);
 		//Console.OUT.println("Indice inicial: " + indexIni);
 		var index:Long = 0n;
 		var indexBack:Long = 0n;
 		var insertFlag:Boolean = false;
 		while(initializedPositions < size){
 			index = indexIni%size;
 			if(copyMyGenes(index) != -1n && copyMyGenes(index) == genesOther(index)){
 				son1(index) = copyMyGenes(index);
 				genesOther(index) = -1n;
 				copyMyGenes(index) = -1n;
 				//Console.OUT.println("Dos posiciones iguales. primero");
 			}else{
 				if(!insertFlag){
 					insertedinSon1 = genesOther(index);
 					son1(index) = insertedinSon1;
 					insertFlag = true;
 					//Console.OUT.println("Dos posiciones iguales");
 				}else{
 					indexBack = indexIni%size;
 					do{
 						indexBack = (indexBack-1) >= 0 ? indexBack - 1:size-1;
 					}while(copyMyGenes(indexBack) == -1n
 						|| copyMyGenes(indexBack) == genesOther(indexBack)
 						|| (insertFlag && copyMyGenes(indexBack) == insertedinSon1));
 					//Console.OUT.println("IndexBack: " + indexBack + ". IndexIni: " + indexIni + ". index: " + index);
 					son1(index) = copyMyGenes(indexBack);
 					copyMyGenes(indexBack) = -1n;
 					genesOther(indexBack) = -1n;
 				}
 			}
 			initializedPositions++;
 			indexIni++;
 		}
 		return son1;
 	}
 
 	//Jason: Migration
 	//public def tryInsertForGADiversification(info:State(sz)):Rail[Int]{
 	//	tryInsertLM(info);
 	//	solForDiv = true;
 	//	return this.heuristicSolver.getConfigForPop(true);
 	//}
 			
 	//public def tryInsertForGADiversification(info:State(sz)):Rail[Int] =
 	//	monitor.atomicBlock(()=> {return this.heuristicSolver.getConfigForPop(this.heuristicSolver.tryInsertIndividual(info.vector, sz));
 	//});
 	/*public def tryInsertForGADiversification(info:State(sz)):Boolean =
 		monitor.atomicBlock(()=> {
 			async responseToExplorer(info.place);
 			return this.heuristicSolver.tryInsertIndividual(info.vector, sz);	
 		});
 
 	public def responseToExplorer(place:Int){
 		val newSol = this.heuristicSolver.getConfigForPop(true);
 		at (Place(place)) receiveSolFromMaster(newSol);
 	}*/
 
 	/*public def receiveSolFromMaster(sol:Rail[Int]) =
 		monitor.atomicBlock(()=> {
 			if (sol != null){
 				this.nChangeV++;
 				this.heuristicSolver.setVariables(sol as Valuation(sz));
 				this.currentCost = this.heuristicSolver.costOfSolution();
 				bestSent = false;
 				this.nIterWhitoutImprovements = 0n;
 				return true;
 			}
 			return false;
 	});*/
 
 	public def communicate( info:State(sz)) {
 		Logger.debug(()=>" communicate: entering.");
 		val refsToPlaces = pointersComunication;
 		val placeid = here.id as Int;
 		if(this.heuristicSolver instanceof PopulBasedHeuristic){
 			if ( Place(nodeConfig.getTeamId()) == here ){
 				Logger.debug(()=>"CommManager: try to insert in local place: "+here);
 				async this.tryInsertConfOffspringPool(info); //Jason:Puse esta Async para que incluso si es el mismo nodo se lance esta actividad en paralelo
 			}else{
 				Logger.debug(()=>"CommManager: try to insert in remote place: "+Place(nodeConfig.getTeamId()));
 				at(Place(nodeConfig.getTeamId())) async refsToPlaces().tryInsertConfOffspringPool(info);
 			}
 		}else{
			if ( Place(nodeConfig.getTeamId()) == here ){
				Logger.debug(()=>"CommManager: try to insert in local place: "+here);
			 	async this.tryInsertConfTeamPool(info); //Jason:Puse esta Async para que incluso si es el mismo nodo se lance esta actividad en paralelo
			}else{
				Logger.debug(()=>"CommManager: try to insert in remote place: "+Place(nodeConfig.getTeamId()));
				at(Place(nodeConfig.getTeamId())) async refsToPlaces().tryInsertConfTeamPool( info );
			}
 		}
 		
 		//Jason: Pruebas para debuguiar la comunicación
 		//if(this.counterForReport%100 == 0){
 		//	Console.OUT.println("Nodo " + here + ". Reportando a head en place: " + this.nodeConfig.getTeamId());
 		//}
 		// Print debug information
 		//Jason: Comente esta parte de debug
 		/*if (this.debug && this.isHeadNode){
  		* val bc = ep.getBestConf();
  		* if (bc != null){
  		* p.print ("\033[H\033["+ ( myTeamId + 1 ) + "B");
  		* p.printf("\033[2K\rTeam %3d          best cost %10d    solver %1d  param1 %3d  param2 %3d",
  		* myTeamId,bc().cost,bc().solverState(0),bc().solverState(1),bc().solverState(2));
  		* p.flush();
  		* }
  		* }*/
 		//Debug
 		// if(here.id as Int == myTeamId ){ //group head
 		//  Console.OUT.println("I'm "+myTeamId+" head group, here my ELITE pool Vectors");
 		// ep.printVectors();
 		// }
 		return;
 	}
 
 	public def tryInsertConfTeamPool(info:State(sz)){
 		if(teamPool != null){
 			this.teamPool.tryInsertConf(info);
 		}
 	}
 
 	public def tryInsertConfOffspringPool(info:State(sz)){
 		if(offspringPool != null){
 			this.offspringPool.tryInsertConf(info);
 		}
 	}
 
 	public def getIPVector(myCost:Long):Boolean {
 		Logger.debug(()=> "CommManager: getIPVector: entering.");
 		//val sz = this.heuristicSolver.getSizeProblem();
 		val a : Maybe[State];
 		val place = Place(nodeConfig.getTeamId());
 		val refsToPlace = pointersComunication;
 		if(this.heuristicSolver instanceof PopulBasedHeuristic){
 			a = at(place) refsToPlace().getPConfFromTeamPool();
 		}else{
 			a = at(place) refsToPlace().getPConfFromOffspringPool();
 		}
 		if ( a!=null && myCost  > a().cost * deltaFact &&  random.nextInt(100n) < this.nodeConfig.getChangeProb() ){
 			//Jason: Migración
 			if(this.nodeConfig.getHeuristic() == CPLSOptionsEnum.HeuristicsSupported.GA_SOL){
 				this.heuristicSolver.tryInsertIndividual(a().vector as Valuation(sz), sz);
 			}else{
 				this.heuristicSolver.setVariables(a().vector as Valuation(sz));
 				this.currentCost = this.heuristicSolver.costOfSolution();
 				return true; 
 			}
 			
 		}
 		return false;
 	}
 
 	public def getPConfFromTeamPool(): Maybe[State(sz)]{
 		if(teamPool != null){
 			return teamPool.getPConf();
 		}
 		return null;
 	}
 
 	public def getPConfFromOffspringPool(): Maybe[State(sz)]{
 		if(offspringPool != null){
 			return offspringPool.getPConf();
 		}
 		return null;
 	}
 	
 	/*************************** For diversify when the nodes are close to each other *****************************/
 	public def interTeamActivity(){
	 	Console.OUT.println("MsgType_0. Nodo: " + here + " perdido en interTeamActivity.");
 		while (!interTeamKill) {
	 		Logger.debug(()=>{" kill " + interTeamKill});
	 		if (!System.sleep(nodeConfig.getInterTeamCommTime())){ 
	 			Console.OUT.println(here+" interTeamActivity error: cannot execute sleep");
	 			continue;
	 		}
	 		Logger.info(()=>{" interTeamActivity - run : woken up (every "+ nodeConfig.getInterTeamCommTime() +" ms)"});
	 		interTeamComm();
	 		Runtime.probe();		// Give a chance to the other activities
	 	}
 	}
 
 	private val cmp : (State,State) => Int = (a:State, b:State) => {return(a.cost - b.cost) as Int;};
 	 
 	public def interTeamComm(){
 		//val sz = this.heuristicSolver.getSizeProblem();
 		//Jason: En este punto podemos dar por sentado que el place 0 es master y que los temas empiezan desde el place 1
 		//ya que este método solo se invoca si estamos en el nodo master.
 		val refsToPlaces = pointersComunication;
 		var teamToRest:Long = -1;
 		for(var head:Int = 0n; head < nodeConfig.getNumberOfTeams(); head++){
 			val h = head*nodeConfig.getNodesPerTeam() + 1; //Jason: Cambio esta línea por el tema de mis head en otro lugar: val h = head;
 			val conf:Maybe[State] = at( Place(h) ) refsToPlaces().teamPool.getBestConf();
 			if (conf == null) {
 				confArray(h) = new State(sz, -1, null, h as Int,null);
 			} else {
 				//Console.OUT.println("Ingresa a else del primer for de interTeamComm");
 				confArray(h) = new State(sz, conf().cost, conf().vector as Rail[Int]{self.size == sz}, h as Int, conf().solverState as Rail[Int]{self.size == 3});
 			}
 		}
 		var nEqTeams:Int = 0n;
 		val eqTeams : Rail[Long] =  new Rail[Long](nodeConfig.getNumberOfTeams(), -1);
 		RailUtils.sort(confArray, cmp);
 		var c:Int; 
 		for (c = 0n; c < nodeConfig.getNumberOfTeams() - 1 ; c++) {
 			if (confArray(c).cost != -1 && confArray(c).cost == confArray(c + 1).cost 
 					&& this.heuristicSolver.getDistance( confArray(c).vector, confArray(c+1).vector) == 0.0){
 				// Team c is equal to c+1
 				eqTeams( nEqTeams++ ) = confArray(c+1).place;
 			} else if ( nEqTeams > 0n && confArray(c).cost != confArray(c + 1).cost )
 				continue;//break;
 		}
 		var worstTeam:Long = confArray(nodeConfig.getNumberOfTeams() - 1).place; 
 		/*if (nEqTeams == 0n && worstTeam == -1){
 			if (debug) {
 				p.print("\033[H\033["+(nodeConfig.getNumberOfTeams()+2)+"B");
 				p.printf("\033[2K\rRestart Team   N/A");
 				p.flush();
 			}
 			return;	
 		}*/
 		if (nEqTeams == 0n && worstTeam != -1)
 			eqTeams( nEqTeams++ ) = worstTeam;
 		
 		/*if (debug) {
 			p.print("\033[H\033["+(nodeConfig.getNumberOfTeams()+2)+"B");
 			p.printf("\033[2K\rRestart Team ");
 			for (var rp:Long = 0; rp < nEqTeams; rp++) {
 				p.printf(" %3d",eqTeams(rp));				
 			}
 			p.flush();
 		}*/
 		for (var rp:Long = 0; rp < nEqTeams; rp++) {
 			teamToRest = eqTeams(rp);
 			val ttr = teamToRest; 
 			at( Place(teamToRest) ) refsToPlaces().incGroupReset(); 
 			Logger.info(()=>{"reset team "+ttr});
 			
 			for (var i:Long = teamToRest; i < Place.MAX_PLACES; i += nodeConfig.getNumberOfTeams()){
 				val vali = i;
 				Logger.info(()=>{"MW - interTeamComm : send signal force Restart on place "+vali});
 				if (random.nextDouble() <= nodeConfig.getAffectedPer());
 					at(Place(i)) refsToPlaces().diversify();
 			}
 			at(Place(teamToRest)) refsToPlaces().clearPools();
 		}	
 	}
 
 	public def clearPools(){
 		this.teamPool.clear();
 		this.offspringPool.clear();
 	}
 	
 	//public def communicateLM(info:State(sz)){
 	//	val refsToPlaces = pointersComunication;
 	//	Logger.debug(()=>" communicate: entering.");
 	//	
 	//	// decrease the number of vectors send it to the pool
 	//	if (random.nextDouble() >= pSendLM) return;		
 	//	if (here == Place.FIRST_PLACE){
 	//		Logger.debug(()=>"try to insert in local place: " + here);
 	//		tryInsertLM(info);
 	//	}else{
 	//		Logger.debug(()=>"CommManager: try to insert in remote place: "+Place(nodeConfig.getTeamId()));
 	//		at(Place.FIRST_PLACE) refsToPlaces().tryInsertLM( info );
 	//	}
 	//	//Debug
 	//	// if(here.id == LOCAL_MIN_NODE ){ //group head
 	//	//   	Console.OUT.println("I'm "+myTeamId+" head group, here my Local MIN pool Vectors");
 	//	//   	lmp.printVectors();
 	//	// }
 	//	//TODO: Jason: Comente esta parte de debug 
 	//	/*if (this.debug && here.id == Place.FIRST_PLACE.id()){
  	//		val s = cplsPool.getCostList();
  	//	p.print("\033[H\033["+(nodeConfig.getNumberOfTeams() + 1)+"B");
  	//		p.print("\033[2K\rDiv Pool Costs: "+s);
  	//		p.flush();
    //	}*/
   	//	return;
 	//}
 	
 	//public def tryInsertLM(info:State(sz)){
 	//	if(cplsPool != null){
 	//		cplsPool.tryInsertConf( info as State(sz));
 	//	} 
 	//}
 	
 	public def getPR() : Maybe[State(sz)] { 
 		var opt:Int = nodeConfig.getDiversificationOption();
 		if (nodeConfig.getDiversificationOption() == 3n)
 			opt = random.nextInt(3n);
 		if (opt == 0n) //Restart from Scratch
 			return getPR0();//return null;//return false;
 		else  if (opt == 1n)   // Restart PR-based
 			return getPR1();
 		else // opt == 2   // Restart using divTS
 			return getPR2();
 	}
 	
 	public def getPR0() : Maybe[State(sz)]{ 
 		val geta = this.getLMVector();
 		//val sz = this.heuristicSolver.getSizeProblem();
 		if ( geta != null ){
 			val c = new Rail[Int](sz, 0n);
 			Rail.copy(geta().vector as Valuation(sz), c as Valuation(sz));
 			for( var i:Long = sz - 1 ; i > 0 ; i-- )
 			{
 				val j = random.nextLong( i + 1 );
 				val tmp = c(i);
 				c(i) = c(j); 
 				c(j) = tmp;
 			}
 			val newConf =  new State(sz, -1n, c , geta().place, geta().solverState);
 			return new Maybe(newConf as State(sz));
 		}else
 			return null;
 	}
 	
 	public def getPR1() : Maybe[State(sz)] {
 		Logger.debug(()=> "CommManager: getPR: entering.");
 		//val sz = this.heuristicSolver.getSizeProblem();
 		val c:Rail[Int]{self.size == sz} = new Rail[Int](sz, 0n);
 		val geta = this.getLMVector();
 		val getb = this.getLMVector();
 		if(geta != null && getb != null) {
 			Rail.copy(geta().vector as Valuation(sz), c as Valuation(sz));
 			val nSteps = random.nextLong(ns);
 			for(i in 0..nSteps) {
 				val bi = random.nextLong(sz);
 				val bval = getb().vector(bi);
 				var ci:Long = -1;
 				for (cit in c.range()){
 					if (c(cit) == bval){
 						ci = cit;
 						break;
 					}
 				}
 				if(bi != ci){
 					//steps++;
 					val tmp = c(bi);
 					c(bi) = c(ci);
 					c(ci) = tmp;
 				}
 			}
 			val mutConf =  new State(sz, geta().cost, c, geta().place, geta().solverState as Rail[Int]{self.size == 3});
 			return new Maybe[State(sz)](mutConf);//true;
 		}else
 			return null;//false;
 	}
 	
 	/**
 	 * get a diversified vector using Div technique by Glover 
 	 * "A template for scatter search and path relinking" 1998
 	 * 
 	 */
 	public def getPR2() : Maybe[State(sz)] {
 		Logger.debug(()=> "CommManager: getPR2: entering.");
 		//val sz = this.heuristicSolver.getSizeProblem();
 		val finalConf = new Rail[Int](sz, 0n);
 		val getSeedC = this.getLMVector();
 		var position:Long = 0;
 		if(getSeedC != null){
 			val step = random.nextLong(sz/4) + 1;
 			for(var start:Long = step; start > 0; start--) {
 				for(var j:Long = start; j <= sz; j += step) { 
 					finalConf( position++ ) = getSeedC().vector( j - 1 );
 				}
 			}
 			val newConf = new State(sz, getSeedC().cost, finalConf, getSeedC().place, getSeedC().solverState);
 			return new Maybe[State(sz)](newConf); //true;
 		}else
 			return null; //Snew CSPSharedUnit( sz, -1n, null, -1n, -1.0, -1n); //return false;
 	}
 	
 	public def getLMVector() : Maybe[State] { 
 		Logger.debug(()=> "getLM: entering.");
 		val reftsToPlace = pointersComunication;
 		//var a : Maybe[State(sz)];
 		//if (here == Place.FIRST_PLACE)
 		//	a = getPConfFromLM();
 		//else{
 			val a:Maybe[State] = at(Place.FIRST_PLACE) reftsToPlace().getPConfFromLM();
 		//}	
 		if (a != null){
 			return a;
 		}
 		return null;//false;
 	}
 
 	public def getPConfFromLM(): Maybe[State(sz)] {
 		if(teamPool != null)
 			return teamPool.getPConf();
 		return null;
 	}
 	
 	//public def getConfFromCPLSPool(){
 	//	if(this.cplsPool != null)
 	//		return cplsPool.getPConf();
 	//	return null;
 	//}
 	
 	public def clear(){
 		winnerLatch.set(false);
 		winnerLatchForDivs.set(false);
 		if(teamPool != null)
 			teamPool.clear();
 		if(offspringPool != null)
 			offspringPool.clear();
 		this.stackForDiv = new StackForDiv(sz);
 		if(this.nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 			this.globalBestConf = new GlobalBestConf(sz, nodeConfig.getNumberOfTeams(), this.random.nextLong());
 		}
 		//this.flagsForMaster = new Rail[Boolean](nodeConfig.getNumberOfTeams(), false);
 		//if(divCplsPool != null)
 		//	divCplsPool.clear();
 		stats.clear();
 		//bestC.clear(); //TODO: Jason. Esta variable la borré porque al parecer nunca es accedida
 		this.kill = false;
 		cGroupReset = 0n;
 		//this.counterForReport = 0n;
 		//this.counterForUpdate = 0n;
 		this.nForceRestart = 0n;
 		//this.nChangeforDiv = 0n;
 		this.heuristicSolver.initVariables();
 		this.bestConf = new Rail[Int](this.heuristicSolver.getSizeProblem(), 0n);
 		this.bestConfForTeam = new State(sz, Long.MAX_VALUE, null, -1 as Int,null);
 		this.newBestConfReportedForTeam = false;
 		//this.spreadDivConf = false;
 		//this.nItersForUpdate = 0n;
 		this.itersWhitoutImprovements = 0n;
 		//this.isOnIntensification = false;
 	}
 	
 	public def verify_(){
 		Utils.show("Solution", this.bestConf);
 		Console.OUT.println(solString);
 		//Console.OUT.println("Changes for diversification: " + this.nChangeforDiv);
 	}
 
 	/*public def getChangeforDiv(){
 		return this.nChangeforDiv; 
 	}*/
 	
 	public def verify(){
 		//val sz = this.heuristicSolver.getSizeProblem();
 		return this.heuristicSolver.verify(this.bestConf);
 	}
 
 	public def displaySolution(){
 		//val sz = this.heuristicSolver.getSizeProblem();
 		this.heuristicSolver.displaySolution(this.bestConf);
 	}
 	
 	public def diversify():void{
 		forceRestart();
 	}
 
 	public def forceRestart(){
 		Logger.info(()=>"Force Restart True");
 		forceRestart = true;
 	}
 	
 	public def incGroupReset():void{
 		this.cGroupReset++;
 	}
 
 	public def reportStats( c : GlobalStats){
 		//Console.OUT.println("Se setean los valores en el objeto GlobalStats");
 		c.setIters(this.nIterTot);
 		c.setSwaps(this.nSwapTot);
 		c.setVectorSize(this.heuristicSolver.getSizeProblem());
 		c.setTarget(this.targetSucc);
 		c.setCost(this.bestCost);
 		c.setRestart(this.nRestart);
 		c.setChange(this.nChangeV);
 		//c.setChangeForDiv(this.nChangeforDiv);
 		c.setForceRestart(this.nForceRestart);
 		val state = createSolverState();
 		c.setSState(state);
 	}
 
 	/**
  	*  Create Solver State array to be send to Pool
  	*/
 	protected def createSolverState(){
 		val rsState = new Rail[Int](3,-1n);
 		rsState(0) = 1n;
 		//Console.OUT.println("Nodo: " + here.id + " saliendo de la creación del SolverState");
 		return rsState;  
 	}
 
 	public def setStats(c : GlobalStats){
 		stats.setStats(c);
 		accStats(stats);
 	}
 
 	public def accStats( c : GlobalStats ):void {
 		genAccStats.accStats(c);
 		sampleAccStats.accStats(c);
 	}
 
 	public def getGroupReset():Int{
 		//Console.OUT.println("Se solicita group reset en " + here.id);
 		return this.cGroupReset;
 	}
 
 	public def setStats_(targetCost:Long, explorerWinner:Int, nChangesForDivers:Int){
 		//Console.OUT.println("MsgType_0. Nodo: " + here + " reportando estadisticas");
 		val refsToPlaces = pointersComunication;
 		val winPlace = here.id;
 		val time = time/1e9;
 		val c = new GlobalStats();
 		reportStats(c);
 		var placeHead:Place;
 		if(here == Place.FIRST_PLACE){
 			placeHead =  here;
 		}else{
 			placeHead = Place.place(nodeConfig.getTeamId());
 		}
  		//val head2 = nodeConfig.getTeamId();//here.id % nodeConfig.getNumberOfTeams();
 		val gR = at(placeHead) refsToPlaces().getGroupReset();
 		val gReset = (c.getForceRestart() > gR)? c.getForceRestart() : gR;
 		val fft = c.getCost() - targetCost;
 		c.setTime(time);
 		c.setTeam(winPlace as Int);
 		c.setGroupR(gReset);
 		c.setFFTarget(fft as Int);
 		c.setChangeForDiv(nChangesForDivers);
 		c.setExplorerWinner(explorerWinner); //To notify that there was a solution
 		at (Place.FIRST_PLACE) /*async*/ 
 			refsToPlaces().setStats(c);
 	}
 
 	public def getCost(){
 		return this.bestCost;
 	}
 
 	public def getVariables(){
 		return this.heuristicSolver.getVariables();
 	}
 	
 	public def getBestConf(){
 		return this.bestConf;
 	}
 
 	protected def updateTotStats(){
 		//Console.OUT.println("Ingresa a reportar las estadisticas totales");
 		this.nIterTot += this.nIter;
 		this.nSwapTot += this.heuristicSolver.getNSwap(); 
 		this.heuristicSolver.clearNSwap();
 		this.nIter = 0n;
 	}

 	public def getStatsObject(){
 		return this.stats;
 	}
 	
 	public def clearSample(){
 		sampleAccStats.clear();
 	}
 	
 	public def printStats(count:Int, oF:Int, problem:Int):void{
 		stats.print(count,oF,problem);
 	}
 	
 	public def printAVG(count:Int, oF:Int, problem:Int):void{
 		sampleAccStats.printAVG(count,oF,problem);
 	}
 
 	public def printChangesForDivs(){
 		stats.printChangesForDivs();
 	}
 
 	public def printConfig(){
 		Console.OUT.println("************************************************************************************************");
 		Console.OUT.println("****************Informacion comun a todos los nodos*************************");
 		Console.OUT.println("Id del equipo: " + this.nodeConfig.getTeamId() + " Nodo: " + here);
 		Console.OUT.println("Heuristica: " + this.nodeConfig.getHeuristic() + " Nodo: " + here);
 		Console.OUT.println("Numero de equipos: " + this.nodeConfig.getNumberOfTeams() + " Nodo: " + here);
 		Console.OUT.println("Nodos por equipo: " + this.nodeConfig.getNodesPerTeam() + " Nodo: " + here);
 		Console.OUT.println("InterTeamCommTime: " + this.nodeConfig.getInterTeamCommTime() + " Nodo: " + here);
 		Console.OUT.println("AffectedPer: " + this.nodeConfig.getAffectedPer() + " Nodo: " + here);
 		Console.OUT.println("IniDelay (InterTeamCommTime): " + this.nodeConfig.getIniDelay() + " Nodo: " + here);
 		Console.OUT.println("Verify: " + this.nodeConfig.getVerify() + " Nodo: " + here);
 		Console.OUT.println("ChangeProb?: " + this.nodeConfig.getChangeProb() + " Nodo: " + here);
 		Console.OUT.println("DiversificationOption?: " + this.nodeConfig.getDiversificationOption() + " Nodo: " + here);
 		Console.OUT.println("Tiempo maximo de ejecucion: " + this.nodeConfig.getMaxTime() + " Nodo: " + here);
 		Console.OUT.println("Maximo numero de iteraciones: " + this.nodeConfig.getMaxIters() + " Nodo: " + here);
 		Console.OUT.println("Maximo numero de restarts: " + this.nodeConfig.getMaxRestarts() + " Nodo: " + here);
 		Console.OUT.println("ReportPart?: " + this.nodeConfig.getReportPart() + " Nodo: " + here);
 		Console.OUT.println("Modo de ingreso de parametros: " + this.nodeConfig.getModParams() + " Nodo: " + here);
 		Console.OUT.println("ChangeOnDiver: " + this.nodeConfig.getChangeOnDiver() + " Nodo: " + here);
 		Console.OUT.println("ReportTime: " + this.nodeConfig.getReportI() + " Nodo: " + here);
 		Console.OUT.println("UpdateTime: " + this.nodeConfig.getUpdateI() + " Nodo: " + here);
 		Console.OUT.println("MaxUpdateI?: " + this.nodeConfig.getMaxUpdateI() + " Nodo: " + here);
 	}
}
public type CPLSNode(s:Long) = CPLSNode{self.sz==s};
