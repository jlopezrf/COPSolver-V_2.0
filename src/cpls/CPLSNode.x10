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
 	/***********************************************************/

 	/*********Variables para el reporte de estadísticas*********/
 	val stats = new GlobalStats();
 	val sampleAccStats = new GlobalStats();
 	val genAccStats = new GlobalStats();
 	var time:Long;
 	/***********************************************************/
 
 	/***Variables útiles para la comunicación entre los nodos***/
 	private var pointersComunication:PlaceLocalHandle[CPLSNode];
 	var interTeamKill:Boolean = false;
 	var teamPool:SmartPool;
 	var cplsPool:SmartPool;
 	/***********************************************************/
 
 	val winnerLatch = new AtomicBoolean(false);
 	var bcost:Long;
 	var bestSolHere : Rail[Int];
 	var solString : String =  new String();
 	var cGroupReset:Int = 0n;
 	val random:Random;
 	var problemSize:Long;
 	private var deltaFact : Double = 1.0;
 	var changeProb:Int;
 	private var divOption:Int;
 	private var ns:Int;
 	private var pSendLM:Double = 0.0;
 
 	var confArray:Rail[State];
 	
 	public def this(){
 		random = new Random();
 		val str = System.getenv("DELTA");
 		if (str != null)
 			deltaFact = StringUtil.parseInt(str)/ 100.0;
 		val nsStr = System.getenv("NS");
 		if (nsStr != null) 
 			ns = StringUtil.parseInt(nsStr);
 		else
 			ns = this.problemSize as Int / 4n;
 		val lmstr = System.getenv("LM");
 		if (lmstr != null)
 			pSendLM = StringUtil.parseInt(lmstr)/ 100.0;
 	}
 
 	public def initialize(config:NodeConfig, idPlace:Int, cplsPoolConfig:PoolConfig, problemSize:Long, inSeed:Long, maxIter:Long){
 		this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		this.heuristicSolver.setMaxIters(maxIter);
 		this.heuristicSolver.setSeed(inSeed);
 		this.bestSolHere = new Rail[Int](problemSize, 0n);
 		this.random.setSeed(inSeed);
 		this.problemSize = problemSize;
 		this.nodeConfig = config;
 		this.changeProb = config.getChangeProb();
 		this.confArray = new Rail[State](config.getNumberOfTeams(), State(problemSize,-1n,null,-1n,null)); 
 		if(config.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 			this.cplsPool = new SmartPool(cplsPoolConfig);
 		}else if(config.getRol() == CPLSOptionsEnum.NodeRoles.HEAD_NODE){
 			this.teamPool = new SmartPool(cplsPoolConfig);
 		}
 	}
 
 	public def getStatsObject(){
 		return this.stats;
 	}
 
 	public def setHeuristicSolver(hs:HeuristicSolver){
 		this.heuristicSolver = hs;
 	}
 
 	public def setPointersCommunication(pointersComunication:PlaceLocalHandle[CPLSNode]){
 		this.pointersComunication = pointersComunication;
 	}
 	
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		this.heuristicSolver.configHeuristic(problemModel, opts);
 	}
 	
 	public def kill(){
 		if (heuristicSolver != null){
 			heuristicSolver.kill(); 
 			interTeamKill = true;
 		}else{
 			Logger.debug(()=>{"Solver is not yet started. Kill is not set"});	
 		}
 	}
 	
 	public def start(seedIn :Long, targetCost : Long, strictLow: Boolean):void{
 		//Console.OUT.println("Se ingresa al start en " + here.id);
 	 	stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 
 	 	this.random.setSeed(seedIn);
 	 
 	 	var cost:Long = Long.MAX_VALUE;
 	 	if (nodeConfig.getInterTeamCommTime() > 0 && nodeConfig.getNodesPerTeam() > 1n &&
 	 			nodeConfig.getRol() == CPLSOptionsEnum.NodeRoles.MASTER_NODE){
 	 		async{
 	 			System.sleep(nodeConfig.getIniDelay());
 	 			interTeamActivity();
 	 		} 
 	 	}

 	 	//for(var i:Long = 0; i < iterations; i++){
 	 		heuristicSolver.setSeed(random.nextLong());
 	 		time = -System.nanoTime();
 	 		cost = heuristicSolver.solve(targetCost, strictLow);
 	 		time += System.nanoTime();
 	 		interTeamKill = true;
 	 
 	 		if ( ( strictLow && cost < targetCost ) || (!strictLow && cost <= targetCost) ){
 	 			// A solution has been found! Huzzah! 
 	 			// Light the candles! Kill the blighters!
 	 			val home = here.id;
 	 			val winner = at(Place.FIRST_PLACE) announceWinner(home);
 	 			bcost = cost;
 	 
 	 			if (winner){ 
 	 				setStats_(targetCost);
 	 				if (nodeConfig.getVerify()){
 	 					heuristicSolver.displaySolution();
 	 					Console.OUT.println(", Solution is " + 
 	 					(heuristicSolver.verify() ? "perfect !!!" : "not perfect "));
 	 				} 
 	 			}
 	 		}else{
 	 			solString = "Solution "+here+ " is "+(heuristicSolver.verify()? "perfect !!!" : "not perfect, maybe wrong ...");
 	 			val sz = heuristicSolver.getSizeProblem();
 	 			Rail.copy(heuristicSolver.getBestConfiguration(),bestSolHere as Valuation(sz));
 	 		}			
 		//}
 	}
 
 	private val cmp : (State,State) => Int = (a:State, b:State) => {return(a.cost - b.cost) as Int;};
 	
 	public def setStats(c : GlobalStats){
 		stats.setStats(c);
 		accStats(stats);
 	}
 	
 	public def accStats( c : GlobalStats ):void 
 	{
 		genAccStats.accStats(c);
 		sampleAccStats.accStats(c);
 	}
 	
 	public def getGroupReset():Int{
 		return this.cGroupReset;
 	}
 	
 	public def getCost():Long {
 		return heuristicSolver.getBestCost();
 	}
 	
 	public def setStats_(targetCost:Long){
 		val winPlace = here.id;
 		val time = time/1e9;
 		val c = new GlobalStats();
 		heuristicSolver.reportStats(c);
 		
 		val head = here.id % nodeConfig.getNumberOfTeams();
 		val gR = at(Place(head)) pointersComunication().getGroupReset();
 		
 		val gReset = (c.getForceRestart() > gR)? c.getForceRestart() : gR;
 		
 		val fft = c.getCost() - targetCost;
 		c.setTime(time);
 		c.setTeam(winPlace as Int);
 		c.setGroupR(gReset);
 		c.setFFTarget(fft as Int);
 		c.setExplorerWinner(0n); //To notify that there was a solution
 		
 		at (Place.FIRST_PLACE) /*async*/ 
 		pointersComunication().setStats(c);
 	}
 	
 	public def announceWinner(p:Long):Boolean {
 		//Console.OUT.println("Dentro de anounceWinner");
 		val result = winnerLatch.compareAndSet(false, true);
 		if (result) 
 		{
 			for (k in Place.places()) 
 				if (p != k.id){
 					at(k) kill(); // at(k) async ss().kill();  // Testing the use of this async v1
 				}
 		}
 		return result;
 	}
 	
 	public def interTeamActivity(){
	 	while (!interTeamKill) {
	 		Logger.debug(()=>{" kill " + interTeamKill});
	 		
	 		if (!System.sleep(nodeConfig.getInterTeamCommTime())){ 
	 			//Logger.info(()=>"interTeamActivity error: cannot execute sleep");
	 			Console.OUT.println(here+" interTeamActivity error: cannot execute sleep");
	 			//err++;
	 			continue;
	 		}
	 		//while(commM.ep.countInsert % 10n != 0n);
	 		
	 		// woken up
	 		Logger.info(()=>{" interTeamActivity - run : woken up (every "+ nodeConfig.getInterTeamCommTime() +" ms)"});
	 		//val random = new Random(seed);
	 		//if (random.nextInt(100n) < 16) 
	 		interTeamComm();
	 		Runtime.probe();		// Give a chance to the other activities
	 	}
 	}
 	 
 	public def interTeamComm(){
 		var teamToRest:Long = -1;	
 		//TODO:Jason. Verificar esta parte de la comunicación //for ( head in 0..(nTeams-1) ) 
 		for ( var head:Int = 0n; head < nodeConfig.getNumberOfTeams(); head++){
 			val h = head;
 			val conf = at( Place(h) ) pointersComunication().teamPool.getBestConf();
 			if (conf == null) {
 				confArray(h) = State(problemSize, -1, null, h as Int,null);
 			} else {
 				confArray(h) = State(problemSize, conf().cost, conf().vector, h as Int, conf().solverState);
 			}
 		}
 		
 		var nEqTeams:Int = 0n;

 		val eqTeams : Rail[Long] =  new Rail[Long](nodeConfig.getNumberOfTeams(), -1);
 		
 		RailUtils.sort(confArray, cmp);
 		var c:Int; 
 		for (c = 0n; c < nodeConfig.getNumberOfTeams() - 1 ; c++) {
 			val sz = problemSize;
 			if (confArray(c).cost != -1 && confArray(c).cost == confArray(c + 1).cost 
 					&& heuristicSolver.getProblemModel().distance( confArray(c).vector as Valuation(sz),	confArray(c+1).vector as Valuation(sz)) == 0.0){
 				// Team c is equal to c+1
 				eqTeams( nEqTeams++ ) = confArray(c+1).place;
 			} else if ( nEqTeams > 0n && confArray(c).cost != confArray(c + 1).cost )
 				break;
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
 		
 		// Console.OUT.print("Restart Teams:");
 		for (var rp:Long = 0; rp < nEqTeams; rp++) {
 			teamToRest = eqTeams(rp);
 			val ttr = teamToRest; 
 			
 			//Console.OUT.print(" "+teamToRest);
 			

 			// Count total group partial restart
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
 	
 	//public def communicate(totalCost : Long, variables : Rail[Int]{self.size==sz} ) {
 	public def communicate( info:State) {  
 		Logger.debug(()=>" communicate: entering.");
 		
 		val placeid = here.id as Int;
 		
 		if ( Place(nodeConfig.getTeamId()) == here ){
 			Logger.debug(()=>"CommManager: try to insert in local place: "+here);
 			teamPool.tryInsertConf(info);
 		}else{
 			Logger.debug(()=>"CommManager: try to insert in remote place: "+Place(nodeConfig.getTeamId()));
 			at(Place(nodeConfig.getTeamId())) async pointersComunication().teamPool.tryInsertConf( info );
 		}
 		
 		
 		// Print debug information
 		//Jason: Comente esta parte de debug
 		/*if (this.debug && this.isHeadNode){
 			val bc = ep.getBestConf();
 			if (bc != null){
 				p.print ("\033[H\033["+ ( myTeamId + 1 ) + "B");
 				p.printf("\033[2K\rTeam %3d          best cost %10d    solver %1d  param1 %3d  param2 %3d",
 						myTeamId,bc().cost,bc().solverState(0),bc().solverState(1),bc().solverState(2));
 				p.flush();
 			}
 		}*/
 		
 		//Debug
 		// if(here.id as Int == myTeamId ){ //group head
 		//  Console.OUT.println("I'm "+myTeamId+" head group, here my ELITE pool Vectors");
 		// ep.printVectors();
 		// }
 		/*********************************************************/
 		
 		return;
 	}
 	
 	public def communicateLM(info:State) {
 		Logger.debug(()=>" communicate: entering.");
 		
 		// decrease the number of vectors send it to the pool
 		if (random.nextDouble() >= pSendLM) return;		
 		
 		val placeid = here.id as Int;
 		Logger.debug(()=>"CommManager: solver mode -> Places.");
 		
 		//val variables = csp.variables; 
 		
 		if (Place(nodeConfig.getTeamId()) == Place.FIRST_PLACE){
 			Logger.debug(()=>"CommManager: try to insert in local place: "+here);
 			this.cplsPool.tryInsertConf( info );
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
 	
 	public def tryInsertLM(info:State) 
 	{
 		cplsPool.tryInsertConf( info ); 
 	}
 
 	public def getIPVector(myCost : Long):Boolean {
 		Logger.debug(()=> "CommManager: getIPVector: entering.");
 		val sz = problemSize;
 		var a : Maybe[State];
 		val place = Place(nodeConfig.getTeamId());
 		if (place == here )
 			a = pointersComunication().teamPool.getPConf();
 		else{
 			a = at(place) pointersComunication().teamPool.getPConf();
 		}
 		if ( a!=null && myCost  > a().cost * deltaFact &&  random.nextInt(100n) < changeProb ){
 			heuristicSolver.getProblemModel().setVariables(a().vector);
 			return true; 
 		}
 		return false;
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
 	
 	// only get a new pdf and tau and force random restart
 	public def getPR0() : Maybe[State]{ 
 		//return null;//false;
 		val geta = this.getLM();
 		if ( geta != null ){
 			val c = new Rail[Int](this.problemSize, 0n);
 			Rail.copy(geta().vector, c);
 			
 			
 			for( var i:Long = this.problemSize - 1 ; i > 0 ; i-- )
 			{
 				val j = random.nextLong( i + 1 );
 				val tmp = c(i);
 				c(i) = c(j); 
 				c(j) = tmp;
 			}
 			val newConf =  new State( this.problemSize, -1n, c, geta().place, geta().solverState);
 			return new Maybe(newConf as State);
 		}else
 			return null;
 	}
 	
 	public def getPR1() : Maybe[State] { 
 		Logger.debug(()=> "CommManager: getPR: entering.");
 		
 		// PATH RELINKING-based approach
 		//val a = new Rail[Int](sz, 0n);
 		//val b = new Rail[Int](sz, 0n);
 		val c = new Rail[Int](this.problemSize, 0n);
 		val geta = this.getLM();
 		val getb = this.getLM();

 		if(geta != null && getb != null) { // are they valid conf?
 			// Utils.show("a=",a);
 			// Utils.show("b=",b);
 			
 			// Copy remote conf. "a" and "b" to vectors 
 			//Rail.copy(geta.vector, a);
 			//Rail.copy(getb.vector, b);
 			
 			Rail.copy(geta().vector, c);
 			val nSteps = random.nextLong(ns);
 			for(i in 0..nSteps) {
 				val bi = random.nextLong(this.problemSize);
 				val bval = getb().vector(bi);
 				var ci:Long = -1;
 				// search bval in vector a
 				for (cit in c.range()){
 					if (c(cit) == bval){
 						ci = cit;
 						break;
 					}
 				}
 				// swap variables
 				if(bi != ci){
 					//steps++;
 					val tmp = c(bi);
 					c(bi) = c(ci);
 					c(ci) = tmp;
 					// Utils.show("c=", c);
 				}
 			}
 			
 			//Rail.copy(c,vector);
 			//return true;
 			
 			// return parameters of one of the LM pool (I selected send "a" params, todo: try "b" or random)
 			//Maybe[CSPSharedUnit(sz)]
 			val mutConf =  new State( this.problemSize, geta().cost, c, geta().place, geta().solverState);
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
 		
 		//val seedConf = new Rail[Int](sz, 0n);
 		val finalConf = new Rail[Int](this.problemSize, 0n);
 		
 		val getSeedC = this.getLM();
 		var position:Long = 0;
 		
 		if(getSeedC != null){
 			val step = random.nextLong(this.problemSize/4) + 1;
 			//val step = 2;
 			//Utils.show("seed conf=",seedConf);
 			//Console.OUT.println("step = " + step);
 			for(var start:Long = step; start > 0; start--) {
 				for(var j:Long = start; j <= this.problemSize; j += step) {
 					//Console.OUT.println("j = " + j);		  
 					finalConf( position++ ) = getSeedC().vector( j - 1 );
 				}
 			}
 			//Rail.copy( finalConf, vector );
 			//Utils.show("final conf=",finalConf);
 			//return true;
 			val newConf = new State( this.problemSize, getSeedC().cost, finalConf, getSeedC().place, getSeedC().solverState);
 			return new Maybe(newConf as State); //true;
 		}else
 			return null; //Snew CSPSharedUnit( sz, -1n, null, -1n, -1.0, -1n); //return false;
 	}
 	
 	public def getLM() : Maybe[State] { 
 		Logger.debug(()=> "CommManager: getLM: entering.");
 		var a : Maybe[State];
 		val place = Place(nodeConfig.getTeamId());
 		if (place == Place.FIRST_PLACE)
 			a = cplsPool.getPConf();
 		else{
 			a = at(Place.FIRST_PLACE) pointersComunication().teamPool.getPConf();
 		}	
 		if (a != null){
 			return a;
 		}
 		return null;//false;
 	}
 	
 	public def clear(){
 		winnerLatch.set(false);
 		teamPool.clear();
 		cplsPool.clear();
 		stats.clear();
 		//bestC.clear(); //TODO: Jason. Esta variable la borré porque al parecer nunca es accedida
 		heuristicSolver.clear();
 		cGroupReset = 0n;
 	}
 	
 	public def verify_(){
 		Utils.show("Solution",bestSolHere);
 		Console.OUT.println(solString);
 	}
 	
 	public def diversify():void{
 		heuristicSolver.forceRestart();
 	}
 	
 	public def incGroupReset():void{
 		this.cGroupReset++;
 	}
 	
}
public type CPLSNode(nodeRole:Int) = CPLSNode{};
