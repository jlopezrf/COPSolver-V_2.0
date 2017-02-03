package cpls;

import x10.util.ArrayList;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.solver.HeuristicSolver;
import cpls.problem.ProblemGenericModel;
import cpls.measurements.GlobalStats;
import cpls.util.Logger;
import x10.util.Random;
import cpls.util.Valuation;
import x10.util.concurrent.AtomicBoolean; 

public abstract class CPLSNode{
 	
 	private var nodeConfig:NodeConfig;
 	protected var heuristicSolver:HeuristicSolver;
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
 
 	val winnerLatch = new AtomicBoolean(false);
 	var bcost : Long;
 	var verify:Boolean = false;
 	var bestSolHere : Rail[Int];
 	var solString : String =  new String();
 	var cGroupReset:Int = 0n;
 	
 	public def this(){
 		this.pointersComunication = new ArrayList[PlaceLocalHandle[CPLSNode]]();
 	}
 
 	public def initialize(config:NodeConfig, idPlace:Int, cplsPoolConfig:PoolConfig, problemSize:Long, inSeed:Long, maxIter:Long){
 		//Console.OUT.println("Se inicializa con la heurisica" + HeuristicFactory.getHeuristicName(config.getHeuristic()));
 		this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		this.heuristicSolver.setMaxIters(maxIter);
 		this.heuristicSolver.setSeed(inSeed);
 		this.heuristicSolver.setHeuristicParameters(config.getHeuristicParameters());
 		this.bestSolHere = new Rail[Int](problemSize, 0n);
 		this.myPlaceId = idPlace;
 		//Console.OUT.println("Nodo inicializado en el proceso" + idPlace);
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
 	
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		//Console.OUT.println("Se ingresa a setear el ProblemModel en " + here.id);
 		this.heuristicSolver.configHeuristic(problemModel, opts);
 	}
 	
 	public def sendkill(){
 		this.heuristicSolver.kill();
 	}
 
 	//Jason: Only for dont Show the error in NodeInstancer
 	public def start(){
 		Console.OUT.println("Se invoca metodo start");
 		this.heuristicSolver.solve();
 	}
 	
 	public def start(seedIn :Long, targetCost : Long, strictLow: Boolean, iterations:Long):void{
 		//Console.OUT.println("Se ingresa al start en " + here.id);
 	 	stats.setTarget(targetCost);
 	 	sampleAccStats.setTarget(targetCost);
 	 	genAccStats.setTarget(targetCost);
 	 
 	 	val random = new Random(seedIn);
 	 
 	 	var cost:Long = Long.MAX_VALUE;
 	 
 	 	//if(this instanceof MasterNode){
 	 	//	async{
 	 	//		System.sleep(iniDelay);
 	 	//		//Jason: Organizar este método. interTeamActivity(random.nextLong());
 	 	//	} 
 	 	//}

 	 	//Jason: Elimine una porción de código que verificaba si habían varios teams y si era nodo que maneja LocalMin pool	 
 	  	//Jason: También eliminé una parte que era la construcción del modelo del problema y su inicialización con una semilla random
 	 	for(var i:Long = 0; i < iterations; i++){
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
 	 				setStats_();
 	 				if (verify){
 	 					heuristicSolver.displaySolution();
 	 					Console.OUT.println(", Solution is " + 
 	 					(heuristicSolver.verify() ? "perfect !!!" : "not perfect "));
 	 				} 
 	 			}
 	 		}else{
 	 			solString = "Solution "+here+ " is "+(heuristicSolver.verify()? "perfect !!!" : "not perfect, maybe wrong ...");
 	 			val sz = heuristicSolver.getSizeProblem();
 	 			//Console.OUT.println("Antes del Rail.Copy del método start()");
 	 			Rail.copy(heuristicSolver.getBestConfiguration(),bestSolHere as Valuation(sz));
 	 			//Console.OUT.println("Después del Rail.Copy del método start()");
 	 		}			
 		}
 	}
 	
 	public def setStats_()
 	{
 		val winPlace = here.id;
 		val time = time/1e9;
 		val c = new GlobalStats();
 		heuristicSolver.reportStats(c);
 		
 		//val head = here.id % nTeams;
 		//val gR = at(Place(head)) refPlaces().getGroupReset();
 		
 		//val gReset = (c.getForceRestart() > gR) ? c.getForceRestart() : gR;
 		
 		//val fft = c.getCost() - tcost;
 		c.setTime(time);
 		c.setTeam(winPlace as Int);
 		//c.setGroupR(gReset);
 		//c.setFFTarget(fft as Int);
 		c.setExplorer(0n); //To notify that there was a solution
 		
 		at (Place.FIRST_PLACE) /*async*/ 
 			setStats(c);
 		//refPlaces().setStats(cost, winPlace as Int, 0n, time, iters, locmin, swaps, reset, same, restart, change,fr, 
 		//bp as Int, singles as Int, gReset, target, fft);
 	}
 	
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
 	
 	public def announceWinner(p:Long):Boolean {
 		val result = winnerLatch.compareAndSet(false, true);
 		if (result) 
 		{
 			for (k in Place.places()) 
 				if (p != k.id){Console.OUT.println("Acá debo implementar un Kill");}
 					//at(k) kill(); // at(k) async ss().kill();  // Testing the use of this async v1
 		}
 		return result;
 	}
 	
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
