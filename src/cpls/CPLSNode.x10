package cpls;

import x10.util.ArrayList;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.entities.State;
import cpls.solver.HeuristicSolver;
import cpls.problem.ProblemGenericModel;
import cpls.measurements.GlobalStats;
import cpls.util.Logger;
import cpls.util.Utils;
import cpls.util.Maybe;
import x10.util.Random;
import cpls.util.Valuation;
import x10.util.concurrent.AtomicBoolean;
import x10.util.RailUtils;
import x10.util.StringUtil;

public class CPLSNode{

 	/*********Variables para la configuración del nodo**********/
 	private var nodeConfig:NodeConfig;
 	protected var heuristicSolver:HeuristicSolver;
 	private var pointersComunication:PlaceLocalHandle[CPLSNode];
 	var teamPool:SmartPool;
 	var cplsPool:SmartPool;
 	/***********************************************************/
 	/*********Variables para el manejo de estadísticas**********/
 	val stats = new GlobalStats();
 	val sampleAccStats = new GlobalStats();
 	val genAccStats = new GlobalStats();
 	var time:Long;
 	/***********************************************************/
 	/***********************************************************/
 	val winnerLatch = new AtomicBoolean(false);
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
 	protected var nForceRestart : Int = 0n;
 	/** Total Statistics */
 	protected var nIterTot : Int;
 	protected var nSwapTot : Int;
 	// -> Result
 	protected var bestConf:Rail[Int];
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
 	protected var bestSent:Boolean=false;
 	/*************************************************************************************/
 
 	public def this(){
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
 			this.ns = problemSize as Int / 4n;
 		this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		this.random.setSeed(inSeed + here.id);
 		val semilla = inSeed + here.id;
 		Console.OUT.println("Nodo " + here.id + "inicializado con semilla: " + semilla);
 		this.heuristicSolver.setSeed(random.nextLong());
 		this.heuristicSolver.setSolverType(config.getHeuristic());
 		this.nodeConfig = config;
 		this.confArray = new Rail[State](config.getNumberOfTeams(), State(problemSize,-1n,null,-1n,null));
 		if(config.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 			this.cplsPool = new SmartPool(cplsPoolConfig);
 		}else if(config.getRol() == CPLSOptionsEnum.NodeRoles.HEAD_NODE){
 			this.teamPool = new SmartPool(cplsPoolConfig);
 		}
 	}
 
 	public def setPointersCommunication(pointersComunication:PlaceLocalHandle[CPLSNode]){
 		this.pointersComunication = pointersComunication;
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		this.heuristicSolver.configHeuristic(problemModel, opts);
 		this.heuristicSolver.initVariables();
 	}
 
 	public def start(targetCost : Long, strictLow: Boolean):void{
 	 	val refs = pointersComunication;
 		stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 	//this.random.setSeed(seedIn);
 	 	var cost:Long = Long.MAX_VALUE;
 	 	interTeamKill = false;
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
 	 	if ( ( strictLow && cost < targetCost ) || (!strictLow && cost <= targetCost) ){
 	 		val home = here.id;
 	 		val winner = at(Place.FIRST_PLACE) refs().announceWinner(home); //Comunicate operation
 	 		bcost = cost;
 	 		if (winner){ 
 	 			//Console.OUT.println("Encontro un ganador");
 	 			setStats_(targetCost);
 	 			if (nodeConfig.getVerify()){
 	 				displaySolution();
 	 				Console.OUT.println(", Solution is " + 
 	 				(verify() ? "perfect !!!" : "not perfect "));
 	 			} 
 	 		}
 	 	}else{
 	 		solString = "Solution "+here+ " is "+(verify()? "perfect !!!" : "not perfect, maybe wrong ...");
 	 	}
 	}
 
 	public def solve(tCost : Long, sLow: Boolean):Long{
 		// Initialize all variables of the search process
 		initVar(tCost, sLow);
 		val sz = this.heuristicSolver.getSizeProblem();
 		this.currentCost = this.heuristicSolver.costOfSolution();
 		// Copy the first match to bestConf vector
 		try{
 			Rail.copy(this.heuristicSolver.getVariables() as Valuation(sz), this.bestConf as Valuation(sz));
 		}catch(e:Exception){
 			Console.OUT.println("Ocurrió una excepción en el Rail.Copy. " + "sz: " + sz  + "Tamaño variables: " + this.heuristicSolver.getVariables().size);
 		}
 
 		if (this.currentCost == 0)
 			this.bestCost = currentCost;
 		else
 			this.bestCost = x10.lang.Int.MAX_VALUE;
 
 		// Main Loop
 		while( this.currentCost != 0 ){
 			if (this.nIter >= this.nodeConfig.getMaxIters() as Int){
 				//restart or finish
 				if(nRestart >= this.nodeConfig.getMaxRestarts() as Int){
 					break;
 				}else{
 					nRestart++;
 					this.heuristicSolver.initVariables(); 
 					currentCost = this.heuristicSolver.costOfSolution();
 					Console.OUT.println("Current cost: " + currentCost);
 					updateTotStats();
 					bestSent = false;
 					continue;
 				}
 			}
 			//Console.OUT.println("Debug mark: Next step after of restart-end verification (HeuristicSolver.solve)");
 			this.nIter++;
 			this.currentCost = this.heuristicSolver.search(this.currentCost, this.bestCost, this.nIter);
 
 			//Update the best configuration found so far
 			updateCosts();

 			//Kill solving process
 			Runtime.probe();	// Give a chance to the other activities
 			if (kill)
 				break;  // kill: End solving process
 
 			//Time out
 			if(this.nodeConfig.getMaxTime() > 0n){
 				val eTime = System.nanoTime() - this.initialTime; 
 				if(eTime/1e6 >= this.nodeConfig.getMaxTime()){ //comparison in miliseconds
 					Logger.debug(()=>{" Time Out"});
 					break;
 				}
 			}
 			interact();
 		}
 		//Console.OUT.println("Valores estadisticos: " + this.time + ", " + this.nRestart + ", " + this.nIter + ", " + this.nForceRestart);
 		updateTotStats();
 		return this.currentCost;

 	}
 
 	protected def initVar(tCost : Long, sLow: Boolean){
 		this.heuristicSolver.initVar();
 		this.target = tCost;
 		this.strictLow = sLow;
 		this.targetSucc = false;
 		this.nIter = 0n;
 		this.nRestart = 0n;
 		this.bestConf = new Rail[Int](this.heuristicSolver.getSizeProblem(), 0n);
 		// clear Tot stats
 		this.nIterTot = 0n;
 		this.nSwapTot = 0n;
 		this.initialTime = System.nanoTime();
 		// Comm
 		this.bestSent = false;
 		this.nForceRestart = 0n;
 		this.nChangeV = 0n;
 
 		if (this.nodeConfig.getAdaptiveComm())
 			this.nodeConfig.setUpdateI(2n * this.nodeConfig.getReportI());		
 	}
 
 	protected def updateCosts(){
 		val sz = this.heuristicSolver.getSizeProblem();
 		if(this.currentCost < this.bestCost){ //(totalCost <= bestCost)
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
 			}
 		}
 	}
 
 	/*********************************************This is the comunication section****************************************/
 	/*********************************************************************************************************************/
 
 	/*******This methods are used when a node found a solution and then may send a kill message at the others nodes*******/
 	public def announceWinner(p:Long):Boolean {
 		val refs = pointersComunication;
 		val result = winnerLatch.compareAndSet(false, true);
 		if (result)	{
 			for (k in Place.places()) 
 				if (p != k.id){
 					at(k) refs().kill(); // at(k) async ss().kill();  // Testing the use of this async v1
 			}
 		}
 		return result;
 	}

 	public def kill(){
 		if (heuristicSolver != null){
 			this.kill = true; 
 			this.interTeamKill = true;
 		}else{
 			Logger.debug(()=>{"Solver is not yet started. Kill is not set"});	
 		}
 	}
 
 	protected def interact(){ 
 		// Interaction with other places
 		val sz = this.heuristicSolver.getSizeProblem();
 		if( this.nodeConfig.getReportI() != 0n && this.nIter % this.nodeConfig.getReportI() == 0n){
 			if(!bestSent){ 
 				val solverState = createSolverState();
 				communicate(new State(sz, this.bestCost, this.bestConf as Valuation(sz), here.id as Int, solverState as Rail[Int]{self.size == 3}));
 				bestSent = true;
 			}else{
 				if (random.nextInt(this.nodeConfig.getReportI()) == 0n){
 					val solverState = createSolverState();
 					communicate(new State(sz, this.currentCost, this.heuristicSolver.getVariables() as Valuation(sz), here.id as Int, solverState as Rail[Int]{self.size == 3}));
 				}		  
 			}
 		}
 
 		if( this.nodeConfig.getUpdateI() != 0n && this.nIter % this.nodeConfig.getUpdateI() == 0n ){
 			if ( this.nodeConfig.getAdaptiveComm() && this.nodeConfig.getUpdateI() < this.nodeConfig.getMaxUpdateI()){ 
 				this.nodeConfig.setUpdateI(this.nodeConfig.getUpdateI()*2n);
 			}
 			val result = getIPVector(this.currentCost);
 			if (result) {
 				this.nChangeV++;
 				this.currentCost = this.heuristicSolver.costOfSolution();
 				bestSent = false;
 			} 
 		}
 		// Force Restart: Inter Team Communication
 		if (this.forceRestart){
 			//restart
 			Logger.info(()=>{"   AdaptiveSearch : force Restart"});
 			this.forceRestart = false;
 			this.nForceRestart++;
 			// get a new conf according the diversification approach
 			val result = getPR();
 			if (result != null){	
 				if(this.nodeConfig.getChangeOnDiver() == 1n) {
 					this.heuristicSolver.setVariables(result().vector);
 					this.currentCost = this.heuristicSolver.costOfSolution();
 					bestSent = false;
 				}
 				//if(this.modParams == 1n) //Solo para RoTS y para EOSearch
 					//processSolverState(result().solverState);
 			} else {
 				if(this.nodeConfig.getChangeOnDiver() == 1n) {
 					this.heuristicSolver.initVariables();
 					this.currentCost = this.heuristicSolver.costOfSolution();
 					bestSent = false;
 				}
 			}
 		}
 	}
 
 	public def communicate( info:State{info.solverState.size ==3, info.vector.size == info.sz}) {  
 		Logger.debug(()=>" communicate: entering.");
 		val placeid = here.id as Int;
 		if ( Place(nodeConfig.getTeamId()) == here ){
 			Logger.debug(()=>"CommManager: try to insert in local place: "+here);
 			tryInsertConf(info);
 		}else{
 			Logger.debug(()=>"CommManager: try to insert in remote place: "+Place(nodeConfig.getTeamId()));
 			at(Place(nodeConfig.getTeamId())) async pointersComunication().tryInsertConf( info );
 		}
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
 
 	public def tryInsertConf(info:State{info.solverState.size ==3, info.vector.size == info.sz}){
 		if(teamPool != null){
 			teamPool.tryInsertConf(info as State(info.sz){info.vector.size == info.sz});
 		}
 	}
 
 	public def getIPVector(myCost:Long):Boolean {
 		Logger.debug(()=> "CommManager: getIPVector: entering.");
 		val sz = this.heuristicSolver.getSizeProblem();
 		var a : Maybe[State];
 		val place = Place(nodeConfig.getTeamId());
 		if (place == here )
 			a = getPConf();
 		else{
 			a = at(place) pointersComunication().getPConf();
 		}
 		if ( a!=null && myCost  > a().cost * deltaFact &&  random.nextInt(100n) < this.nodeConfig.getChangeProb() ){
 			this.heuristicSolver.setVariables(a().vector);
 			return true; 
 		}
 		return false;
 	}
 
 	public def getPConf(): Maybe[State]{
 		if(teamPool != null){
 			return teamPool.getPConf();
 		}
 		return null;
 	}
 	
 	/*************************** For diversify when the nodes are close to each other *****************************/
 	public def interTeamActivity(){
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
 	 
 	public def interTeamComm(){
 		val sz = this.heuristicSolver.getSizeProblem();
 		var teamToRest:Long = -1;
 		for ( var head:Int = 0n; head < nodeConfig.getNumberOfTeams(); head++){
 			val h = head;
 			val conf = at( Place(h) ) pointersComunication().teamPool.getBestConf();
 			if (conf == null) {
 				confArray(h) = State(sz, -1, null, h as Int,null);
 			} else {
 				confArray(h) = State(sz, conf().cost, conf().vector as Rail[Int]{self.size == sz}, h as Int, conf().solverState as Rail[Int]{self.size == 3});
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
 			at( Place(teamToRest) ) pointersComunication().incGroupReset(); 
 			Logger.info(()=>{"reset team "+ttr});
 			
 			for (var i:Long = teamToRest; i < Place.MAX_PLACES; i += nodeConfig.getNumberOfTeams()){
 				val vali = i;
 				Logger.info(()=>{"MW - interTeamComm : send signal force Restart on place "+vali});
 				if (random.nextDouble() <= nodeConfig.getAffectedPer());
 					at(Place(i)) pointersComunication().diversify();
 			}
 			at(Place(teamToRest)) pointersComunication().teamPool.clear();
 		}	
 	}
 	
 	public def communicateLM(info:State) {
 		Logger.debug(()=>" communicate: entering.");
 		
 		// decrease the number of vectors send it to the pool
 		if (random.nextDouble() >= pSendLM) return;		
 		if (here == Place.FIRST_PLACE){
 			Logger.debug(()=>"try to insert in local place: " + here);
 			tryInsertLM(info);
 		}else{
 			Logger.debug(()=>"CommManager: try to insert in remote place: "+Place(nodeConfig.getTeamId()));
 			at(Place.FIRST_PLACE) pointersComunication().tryInsertLM( info );
 		}
 		//Debug
 		// if(here.id == LOCAL_MIN_NODE ){ //group head
 		//   	Console.OUT.println("I'm "+myTeamId+" head group, here my Local MIN pool Vectors");
 		//   	lmp.printVectors();
 		// }
 		//TODO: Jason: Comente esta parte de debug 
 		/*if (this.debug && here.id == Place.FIRST_PLACE.id()){
 			val s = cplsPool.getCostList();
 			p.print("\033[H\033["+(nodeConfig.getNumberOfTeams() + 1)+"B");
 			p.print("\033[2K\rDiv Pool Costs: "+s);
 			p.flush();
 		}*/
 		return;
 	}
 	
 	public def tryInsertLM(info:State{info.solverState.size ==3, info.vector.size == info.sz}){
 		if(cplsPool != null){
 			cplsPool.tryInsertConf( info as State(info.sz){info.vector.size == info.sz});
 		} 
 	}
 	
 	public def getPR() : Maybe[State] { 
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
 	
 	public def getPR0() : Maybe[State]{ 
 		val geta = this.getLMVector();
 		val sz = this.heuristicSolver.getSizeProblem();
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
 			val newConf =  new State(sz, geta().cost, c as Rail[Int]{self.size == sz}, geta().place, geta().solverState); //Jason: Aca en cost iba -1
 			return new Maybe(newConf as State);
 		}else
 			return null;
 	}
 	
 	public def getPR1() : Maybe[State] {
 		Logger.debug(()=> "CommManager: getPR: entering.");
 		val sz = this.heuristicSolver.getSizeProblem();
 		val c = new Rail[Int](this.heuristicSolver.getSizeProblem(), 0n);
 		val geta = this.getLMVector();
 		val getb = this.getLMVector();
 		if(geta != null && getb != null) {
 			Rail.copy(geta().vector as Valuation(sz), c as Valuation(sz));
 			val nSteps = random.nextLong(ns);
 			for(i in 0..nSteps) {
 				val bi = random.nextLong(this.heuristicSolver.getSizeProblem());
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
 			val mutConf =  new State(sz, geta().cost, c as Rail[Int]{self.size == sz}, geta().place, geta().solverState);
 			return new Maybe(mutConf as State);//true;
 		}else
 			return null;//false;
 	}
 	
 	/**
 	 * get a diversified vector using Div technique by Glover 
 	 * "A template for scatter search and path relinking" 1998
 	 * 
 	 */
 	public def getPR2() : Maybe[State] {
 		Logger.debug(()=> "CommManager: getPR2: entering.");
 		val sz = this.heuristicSolver.getSizeProblem();
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
 			val newConf = new State(sz, getSeedC().cost, finalConf as Rail[Int]{self.size == sz}, getSeedC().place, getSeedC().solverState);
 			return new Maybe(newConf as State); //true;
 		}else
 			return null; //Snew CSPSharedUnit( sz, -1n, null, -1n, -1.0, -1n); //return false;
 	}
 	
 	public def getLMVector() : Maybe[State] { 
 		Logger.debug(()=> "getLM: entering.");
 		var a : Maybe[State];
 		if (here == Place.FIRST_PLACE)
 			a = getPConfFromLM();
 		else{
 			a = at(Place.FIRST_PLACE) pointersComunication().getPConfFromLM();
 		}	
 		if (a != null){
 			return a;
 		}
 		return null;//false;
 	}
 
 	public def getPConfFromLM(){
 		if(teamPool != null)
 			return teamPool.getPConf();
 		return null;
 	}
 	
 	public def clear(){
 		winnerLatch.set(false);
 		if(teamPool != null)
 			teamPool.clear();
 		if(cplsPool != null)
 			cplsPool.clear();
 		stats.clear();
 		//bestC.clear(); //TODO: Jason. Esta variable la borré porque al parecer nunca es accedida
 		this.kill = false;
 		cGroupReset = 0n;
 		this.heuristicSolver.initVariables();
 	}
 	
 	public def verify_(){
 		Utils.show("Solution", this.bestConf);
 		Console.OUT.println(solString);
 	}
 
 	public def verify(){
 		val sz = this.heuristicSolver.getSizeProblem();
 		return this.heuristicSolver.verify(this.bestConf);
 	}
 
 	public def displaySolution(){
 		val sz = this.heuristicSolver.getSizeProblem();
 		this.heuristicSolver.displaySolution(this.bestConf as Valuation(sz));
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
 		c.setForceRestart(this.nForceRestart);
 		val state = createSolverState();
 		c.setSState(state);
 	}
 
 	/**
  	*  Create Solver State array to be send to Pool
  	*/
 	protected def createSolverState():Rail[Int]{self.size==3}{
 		val rsState = new Rail[Int](3,-1n);
 		rsState(0) = 1n;
 		return rsState;  
 	}
 
 	private val cmp : (State,State) => Int = (a:State, b:State) => {return(a.cost - b.cost) as Int;};
 
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
 
 	public def setStats_(targetCost:Long){
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
 		c.setExplorerWinner(0n); //To notify that there was a solution
 		at (Place.FIRST_PLACE) /*async*/ 
 			refsToPlaces().setStats(c);
 	}
 
 	public def getCost(){
 		return this.bestCost;
 	}
 
 	protected def updateTotStats(){
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
}
public type CPLSNode(nodeRole:Int) = CPLSNode{};
