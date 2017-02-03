package cpls.solver;

import x10.array.Array_2;
import cpls.problem.ProblemGenericModel;
import cpls.util.Utils;
import cpls.solver.entities.RoTSParameters;
import cpls.CPLSOptionsEnum;

public class RoTSearch extends SingleSolHeuristic{
 	
	private val tabuDurationFactorUS : Double;
	private val aspirationFactorUS : Double;
	private var tabuDurationFactor : Double;
	private var aspirationFactor : Double;
	private var tabuDuration : Int;
	private var aspiration : Int;
	
	private var autorized : Boolean; 
	private var aspired : Boolean;
	private var alreadyAspired : Boolean;
	
	/** Tabu List Matrix */
	private var tabuList : Array_2[Long];
	
	//val tdl = 0.9;
	val tdl = 0.8;
	val tdu = 1.2;
	
	val al = 2.0;
	val au = 5.0;
	
	public def this(){
		super();
		super.mySolverType = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
 		if(super.heuristicParams instanceof RoTSParameters){
 			var params:RoTSParameters = super.heuristicParams as RoTSParameters;
			this.tabuDurationFactorUS = params.getTabuDurationFactorUS();//opts("--RoTS_tabu_duration", -1.0);
			this.aspirationFactorUS = params.getAspirationFactorUS();//opts("--RoTS_aspiration", -1.0);
 			Console.OUT.println("RoTSearch. Parametros inicializados");
 		}else{
 			this.tabuDurationFactorUS = -1n;
 			this.aspirationFactorUS = -1n;
 		}
	}

 	public def configHeuristic(problemModel:ProblemGenericModel){
 		super.configHeuristic(problemModel);
 		this.tabuList = new Array_2 [Long](problemModel.getSize(), problemModel.getSize(), 0);
 	}
	
	var tabuDurationLower:Int;
	var tabuDurationUpper:Int;
	
	/**
	 *  Initialize variables of the solver
	 *  Executed once before the main solving loop
	 */
	protected def initVar(tCost : Long, sLow: Boolean){
		super.initVar(tCost, sLow);
		
		if (this.tabuDurationFactorUS < 0){
			this.tabuDurationFactor = -this.tabuDurationFactorUS;
		} else {
			this.tabuDurationFactor = this.tabuDurationFactorUS;
		}
		this.tabuDuration = (this.tabuDurationFactor * super.size) as Int;
		
		if (this.aspirationFactorUS == -1.0) // Random initialitation of Tabu duration Factor 
			this.aspirationFactor = al + (au-al) * random.nextDouble();
		else
			this.aspirationFactor = this.aspirationFactorUS;
		
		
		this.aspiration = (this.aspirationFactor * super.size * super.size) as Int;
		
		for (var i:Long = 0 ; i < super.size; i++)
			for (var j:Long = 0 ; j < super.size; j++){
 				//Console.OUT.println("Este es el punto del error antes");
				this.tabuList(i,j) = -(super.size * i + j);
 				//Console.OUT.println("Este es el punto del error antes");
			}
	}
	
	protected def search() : Long{
		var i : Long;
		var j : Long;
		
		var newCost : Long;
		var delta : Long;
		var minDelta : Long = Long.MAX_VALUE;
		move.setFirst(Long.MAX_VALUE);
		move.setSecond(Long.MAX_VALUE);
		this.alreadyAspired = false;
		
		//Utils.show("Solution",cop_.getVariables());
		
		for (i = 0; i < super.size - 1; i++)
			for (j = i + 1; j < super.size; j++) {
				
				newCost = super.problemModel.costIfSwap(super.currentCost,i,j);
				delta = newCost - super.currentCost;
				
				this.autorized =
					( tabuList (i, super.problemModel.variables(j)) < super.nIter) ||
					( tabuList (j, super.problemModel.variables(i)) < super.nIter);
				
				this.aspired =
					( tabuList(i,super.problemModel.variables(j)) < this.nIter - this.aspiration) ||
					( tabuList(j,super.problemModel.variables(i)) < this.nIter - this.aspiration) ||
					( newCost < super.bestCost);
				
				if ((aspired && !alreadyAspired) ||	/* first move aspired */
						(aspired && alreadyAspired &&	/* many move aspired */
								(delta <= minDelta)) ||	/* => take best one */
								(!aspired && !alreadyAspired &&	/* no move aspired yet */
										(delta <= minDelta) && autorized)) {

					//   #ifdef USE_RANDOM_ON_BEST
					//   if (delta[i][j] == min_delta){
					// 		if (Random(++best_nb) > 0)
					// 			 continue;
					//   }
					//   else
					// 		best_nb = 1;
					//   #endif
					
					move.setFirst(i);
					move.setSecond(j);
					minDelta = delta;
					
					// #ifdef FIRST_BEST
					// if (current_cost + min_delta < best_cost)
					// goto found;
					// #endif
					
					if (aspired)
						alreadyAspired = true;
				}
			}
		
		
		if(move.getFirst() == Long.MAX_VALUE){
			Console.OUT.println("All moves are tabu!");
			return currentCost;
		}else{
			//Console.OUT.println("swap pos "+move.getFirst()+" "+move.getSecond());
			
			super.problemModel.swapVariables(move.getFirst(), move.getSecond()); //adSwap(maxI, minJ,csp);	
			nSwap++;
			super.problemModel.executedSwap(move.getFirst(), move.getSecond());
			
			/* forbid reverse move for a random number of iterations */
			
			//tabuList( move.getFirst(), cop_.variables(move.getSecond())) = this.nIter + (cube() * this.tabuDuration) as Int;
			var t1 :Int, t2:Int;
			// t1 = (cube() * this.tabuDuration) as Int; 
			// t2 = (cube() * this.tabuDuration) as Int; 
			do t1 = (cube() * this.tabuDuration) as Int; while(t1 <= 2);
			do t2 = (cube() * this.tabuDuration) as Int; while(t2 <= 2);
			
			
			tabuList( move.getFirst(), super.problemModel.variables(move.getSecond())) = this.nIter + t1;
			tabuList( move.getSecond(), super.problemModel.variables(move.getFirst())) = this.nIter + t2;
			
			//Utils.show("after swap",cop_.getVariables());
			// detect loc min
			if (minDelta >= 0)
				onLocMin();
 			val v = this.currentCost + minDelta;
			Console.OUT.print("Costo (RoTSearch): " + v + ". Con variables: ");
 			displaySolution();
  			Console.OUT.print("\n");
			return this.currentCost + minDelta;
		}
		
	}
	
	public def randomInterval(low:Int, up:Int):Int{
		return (random.nextDouble()*(up - low + 1n )) as Int + low;
	}
	
	private def cube():Double{
		
		val ran1 = random.nextDouble();
		if (this.tabuDurationFactorUS < 0)
			return ran1;
		return ran1 * ran1 * ran1;
		
	}
	
	/**
	 *  Create RoTS Solver State array to be send to Pool
	 *  oeState(0) = solverType  
	 *  oeState(1) = RoTS tabu duration Factor * 100
	 *  oeState(2) = RoTS aspiration Factor * 100
	 */
	protected def createSolverState( ) : Rail[Int]{self.size==3}{
		val rotsState = new Rail[Int](3,-1n);
		rotsState(0) = super.mySolverType as Int;
		rotsState(1) = (this.tabuDurationFactor * 10.0) as Int;
		rotsState(2) = (this.aspirationFactor * 10.0) as Int; 
		return rotsState;  
	}
	
	/**
	 *  Process Solver State Array received from Pool
	 * 
	 */
	protected def processSolverState( state : Rail[Int]{self.size==3}){
		// Random Search has no parameters to process
		
		val inSolverType = state(0);
		
		if (inSolverType == super.mySolverType as Int){
			val intdf = state(1)/ 10.0;
			val inaf = state(2) / 10.0;
			
			// this.tabuDurationFactor = intdf;
			// this.aspirationFactor = inaf;
			
			this.tabuDurationFactor = (this.tabuDurationFactor + intdf) / 2.0;
			this.aspirationFactor = (this.aspirationFactor + inaf) / 2.0;
			
			if (this.tabuDuration != -1n)
				this.tabuDuration = (this.tabuDurationFactor * super.size) as Int;
			
			this.aspiration = (this.aspirationFactor * super.size * super.size) as Int;
		}
	} 	 
	
	protected def restartVar(){
		super.restartVar();
		tabuList.clear();
	}
	
	/**
	 *  Interact when Loc min is reached
	 */
	private def onLocMin(){
		// communicate Local Minimum
		// solver.communicateLM( this.currentCost, cop.getVariables() as Valuation(sz));
		val solverState = this.createSolverState();
		//Jason: Line of interaction -> this.solver.communicateLM( new State(sz, this.currentCost, cop.getVariables() as Valuation(sz), here.id as Int, solverState) );
	}
}