package cpls;

import x10.util.ArrayList;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.solver.HeuristicSolver;
import cpls.problem.ProblemGenericModel;
import cpls.measurements.GlobalStats;
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
 	
 	public def start(seedIn :Long, targetCost : Long, strictLow: Boolean ):void{ 
 	 	stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 
 	 	//Jason: it is neccesary?  
 	 	//assert refPlaces() == this : "Whoa, basic plumbing problem -- I am not part of solvers!";
 	 
 	 	val random = new Random(seedIn);
 	 
 	 	var cost:Long = Long.MAX_VALUE;
 	 
 	 	//Jason: Organize this line When the CommManager will be defined
 	 	//commM.setSeed(random.nextLong());
 	 
 	 	heuristicSolver.setSeed(random.nextLong()); 
 	 
 	 	//interTeamKill = false;
 	 
 	 	// verify if inter team comm is able, if the number of teams is greater than 1 and 
 	 	//        if place(here) is a head node 
 	 	//if (outTeamTime > 0 && nTeams > 1n && here.id < nTeams) //node O to nteams
 	 	/*if(this instanceof MasterNode){
 	 		async{
 	 			System.sleep(iniDelay);
 	 			interTeamActivity(refPlaces, random.nextLong());
 	 		} 
 	 	}*/
 	 	//Jason: Cambiando un poco esta parte 	 
 	 	/*if (nodeConfig.getOutTeamTime() > 0 && nTeams > 1n && here.id == commM.LOCAL_MIN_NODE){
 	 		// if (outTeamTime > 0 && nTeams > 1n && here.id >= nTeams && here.id < nTeams+nTeams) 
 	 		async{
 	 			System.sleep(iniDelay);
 	 			interTeamActivity(refPlaces, random.nextLong());
 	 		} 
 	 	}*/
 	 
 	 	/*csp_ = cspGen(); // use the supplied generator to generate the problem
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
 	 	}*/			
 	 }
}
public type CPLSNode(nodeRole:Int) = CPLSNode{};