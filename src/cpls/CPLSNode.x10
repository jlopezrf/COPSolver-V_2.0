package cpls;

import x10.util.ArrayList;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.solver.HeuristicSolver;
import cpls.problem.ProblemGenericModel;
import cpls.measurements.GlobalStats;
import cpls.util.Logger;
import x10.util.Random;

public abstract class CPLSNode{
 	
 	private var nodeConfig:NodeConfig;
 	protected var heuristicSolver:HeuristicSolver;
 	private var pointersComunication:ArrayList[PlaceLocalHandle[CPLSNode]];
 	private var myPlaceId:Int;
 
 	/*********Variables para el reporte de estadísticas*********/
 	val stats = new GlobalStats();
 	val sampleAccStats = new GlobalStats();
 	val genAccStats = new GlobalStats();
 	/***********************************************************/
 
 	public def this(){
 		this.pointersComunication = new ArrayList[PlaceLocalHandle[CPLSNode]]();
 	}
 
 	public def initialize(config:NodeConfig, idPlace:Int, poolConfig:PoolConfig){
 		this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		Console.OUT.println("Nodo inicializado en el proceso" + idPlace);
 	}
 
 	public def setHeuristicSolver(hs:HeuristicSolver){
 		this.heuristicSolver = hs;
 	}
 
 	public def setPlaceId(placeId:Int){
 		this.myPlaceId = placeId;
 	}
 
 	public def setPointersCommunication(pointersComunication:ArrayList[PlaceLocalHandle[CPLSNode]]){
 		this.pointersComunication = pointersComunication;
 	}
 
 	public def addPointerComm(ponterToPlaces:PlaceLocalHandle[CPLSNode]){
 		//Console.OUT.println("Se setea un conjunto de apuntadores a los demás nodos.");
 		this.pointersComunication.add(ponterToPlaces);
 	}
 	
 	public def configHeuristic(problemModel:ProblemGenericModel){
 		this.heuristicSolver.setProblemModel(problemModel);
 	}
 	
 	public def sendkill(){
 		this.heuristicSolver.kill();
 	}
 
 	//Jason: Only for dont Show the error in NodeInstancer
 	public def start(){
 		Console.OUT.println("Se invoca metodo start");
 		this.heuristicSolver.solve();
 	}
 	
 	/*public def start(seedIn :Long, targetCost : Long, strictLow: Boolean ):void{ 
 	 	stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 
 	 	val random = new Random(seedIn);
 	 
 	 	var cost:Long = Long.MAX_VALUE;
 	 
 	 	heuristicSolver.setSeed(random.nextLong()); 
 	 
 	 	if(this instanceof MasterNode){
 	 		async{
 	 			System.sleep(iniDelay);
 	 			interTeamActivity(random.nextLong());
 	 		} 
 	 	}
 	 	//Jason: Cambiando un poco esta parte 	 
 	 	//if (nodeConfig.getOutTeamTime() > 0 && nTeams > 1n && here.id == commM.LOCAL_MIN_NODE){
 	 		//// if (outTeamTime > 0 && nTeams > 1n && here.id >= nTeams && here.id < nTeams+nTeams) 
 	 		//async{
 	 		//	System.sleep(iniDelay);
 	 		//	interTeamActivity(refPlaces, random.nextLong());
 	 		//} 
 	 	//}
 	 
 	 	csp_ = cspGen(); // use the supplied generator to generate the problem
 	 	csp_.setSeed(random.nextLong()); //This is important to ensure different paths into each problem
 	  
 	 	time = -System.nanoTime();
 	 	cost = solver.solve(csp_, targetCost, strictLow);
 	 	time += System.nanoTime();
 	  
 	 	interTeamKill = true;
 	 
 	 	if ( ( strictLow && cost < targetCost ) || (!strictLow && cost <= targetCost) ){
 	 		// A solution has been found! Huzzah! 
 	 		// Light the candles! Kill the blighters!
 	 		val home = here.id;
 	 		val winner = at(Place.FIRST_PLACE) refPlaces().announceWinner( refPlaces, home );
 	 
 	 		bcost = cost;
 	 
 	 		if (winner){ 
 	 			setStats_(refPlaces);
 	 			if (verify){
 	 				csp_.displaySolution(solver.getBestConfiguration());
 	 				Console.OUT.println(", Solution is " + 
 	 				(csp_.verify(solver.getBestConfiguration())? "perfect !!!" : "not perfect "));
 	 			} 
 	 		}
 	 	}else{
 	 		solString = "Solution "+here+ " is "+(csp_.verify(solver.getBestConfiguration())? "perfect !!!" : "not perfect, maybe wrong ...");
 	 		Rail.copy(solver.getBestConfiguration(),bestSolHere as Valuation(sz));
 	 	}			
 	 }*/
 	
 	 /*public def interTeamActivity(seed:Long){
	 	val r = new Random(seed);
	 	while (!interTeamKill) {
	 		Logger.debug(()=>{" kill "+interTeamKill});
	 		
	 		if (!System.sleep(outTeamTime)){ 
	 			//Logger.info(()=>"interTeamActivity error: cannot execute sleep");
	 			Console.OUT.println(here+" interTeamActivity error: cannot execute sleep");
	 			//err++;
	 			continue;
	 		}
	 		//while(commM.ep.countInsert % 10n != 0n);
	 		
	 		// woken up
	 		Logger.info(()=>{" interTeamActivity - run : woken up (every "+outTeamTime+" ms)"});
	 		//val random = new Random(seed);
	 		//if (random.nextInt(100n) < 16) 
	 		interTeamComm(refPlaces, r);
	 		Runtime.probe();		// Give a chance to the other activities
	 	}
 	 }*/
 	 
 	 /*public def interTeamComm(r:Random){
 		 var teamToRest:Long = -1;

 		 for ( var head:Int = 0n; head < nTeams; head++) {
 			 val h = head;
 			 val conf = at( Place(h) ) refPlaces().getBestConf();
 			 if (conf == null) {
 				 confArray(h) = State(sz, -1, null, h as Int,null);
 			 } else {
 				 confArray(h) = State(sz, conf().cost, conf().vector, h as Int, conf().solverState);
 			 }
 		 }
 		 
 		 var nEqTeams:Int = 0n;
 		 
 		 val eqTeams : Rail[Long] =  new Rail[Long](nTeams, -1);
 		 
 		 RailUtils.sort(confArray, cmp);
 		 var c:Int; 
 		 
 		 for (c = 0n; c < nTeams - 1 ; c++) {
 							confArray(c+1).vector as Valuation(sz)));
 			 
 			 
 			 if (confArray(c).cost != -1 && confArray(c).cost == confArray(c + 1).cost 
 					 && csp_.distance( confArray(c).vector as Valuation(sz),
 							 confArray(c+1).vector as Valuation(sz)) == 0.0){
 				 // Team c is equal to c+1
 				 eqTeams( nEqTeams++ ) = confArray(c+1).place;
 			 } else if ( nEqTeams > 0n && confArray(c).cost != confArray(c + 1).cost )
 				 break;
 		 }
 		 
 		 var worstTeam:Long = confArray(nTeams - 1).place; 
 		 
 		 
 		 if (nEqTeams == 0n && worstTeam == -1){
 			 if (debug) {
 				 p.print("\033[H\033["+(nTeams+2)+"B");
 				 p.printf("\033[2K\rRestart Team   N/A");
 				 p.flush();
 			 }
 			 return;	
 		 }
 		 
 		 if (nEqTeams == 0n && worstTeam != -1)
 			 eqTeams( nEqTeams++ ) = worstTeam;
 		 
 		 if (debug) {
 			 p.print("\033[H\033["+(nTeams+2)+"B");
 			 p.printf("\033[2K\rRestart Team ");
 			 for (var rp:Long = 0; rp < nEqTeams; rp++) {
 				 p.printf(" %3d",eqTeams(rp));				
 			 }
 			 p.flush();
 		 }
 		 
 	
 		 for (var rp:Long = 0; rp < nEqTeams; rp++) {
 			 teamToRest = eqTeams(rp);
 			 val ttr = teamToRest; 
 			 

 			 

 			 // Count total group partial restart
 			 at( Place(teamToRest) ) refPlaces().incGroupReset(); 
 			 Logger.info(()=>{"reset team "+ttr});
 			 
 			 for (var i:Long = teamToRest; i < Place.MAX_PLACES; i += nTeams){
 				 val vali = i;
 				 Logger.info(()=>{"MW - interTeamComm : send signal force Restart on place "+vali});
 				 if (r.nextDouble() <= affectedPer)
 					 at(Place(i)) refPlaces().diversify();
 			 }
 			 at(Place(teamToRest)) refPlaces().clearIntPool();
 		 }
 		 
 		 
 	 }*/
}
public type CPLSNode(nodeRole:Int) = CPLSNode{};