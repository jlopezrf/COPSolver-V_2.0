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
 	private var heuristicSolver:HeuristicSolver;
 	private var pointersComunication:ArrayList[PlaceLocalHandle[CPLSNode]];
 	private var myPlaceId:Int;
 
 	/*********Variables para el reporte de estadísticas*********/
 	val stats = new GlobalStats();
 	val sampleAccStats = new GlobalStats();
 	val genAccStats = new GlobalStats();
 	var time:Long;
 	/***********************************************************/
 
 	/*********Variables la comunicación entre los nodos*********/
 	var interTeamKill:Boolean = false;
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
 
 	public def addPointerComm(pointerToPlaces:PlaceLocalHandle[CPLSNode]){
 		this.pointersComunication.add(pointerToPlaces);
 	}
 	
 	public def configHeuristic(problemModel:ProblemGenericModel){
 		this.heuristicSolver.setProblemModel(problemModel);
 	}
 	
 	public def sendkill(){
 		this.heuristicSolver.kill();
 	}
 	
 	public def start(){}
 	
 	public def start(seedIn :Long, targetCost : Long, strictLow: Boolean ):void{
 	 	stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 
 	 	val random = new Random(seedIn);
 	 
 	 	var cost:Long = Long.MAX_VALUE;
 	 
 	 	heuristicSolver.setSeed(random.nextLong()); 
 	 
 	 	if(this instanceof MasterNode){
 	 		async{
 	 			System.sleep(iniDelay);
 	 			//Jason: Organizar este método. interTeamActivity(random.nextLong());
 	 		} 
 	 	}
 	 	
 	 	//Jason: Elimine una porción de código que verificaba si habían varios teams y si era nodo que maneja LocalMin pool	 
 	  	//Jason: También eliminé una parte que era la construcción del modelo del problema y su inicialización con una semilla random
 	 	time = -System.nanoTime();
 	 	cost = heuristicSolver.solve(targetCost, strictLow);
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
 	 }
}
public type CPLSNode(nodeRole:Int) = CPLSNode{};