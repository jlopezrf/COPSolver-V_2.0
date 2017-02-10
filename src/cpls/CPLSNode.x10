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
import x10.util.Random;
import cpls.util.Valuation;
import x10.util.concurrent.AtomicBoolean;
import x10.util.RailUtils;

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
 
 	var confArray:Rail[State];
 	
 	public def this(){
 		random = new Random();
 	}
 
 	public def initialize(config:NodeConfig, idPlace:Int, cplsPoolConfig:PoolConfig, problemSize:Long, inSeed:Long, maxIter:Long){
 		this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		this.heuristicSolver.setMaxIters(maxIter);
 		this.heuristicSolver.setSeed(inSeed);
 		this.bestSolHere = new Rail[Int](problemSize, 0n);
 		this.random.setSeed(inSeed);
 		this.problemSize = problemSize;
 		this.nodeConfig = config;
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
