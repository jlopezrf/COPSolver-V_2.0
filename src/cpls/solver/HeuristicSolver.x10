package cpls.solver;

import cpls.problem.ProblemGenericModel;
import cpls.util.MovePermutation;
import cpls.util.Utils;
import cpls.util.Valuation;
import cpls.util.Logger;
import cpls.measurements.GlobalStats;
import x10.util.Random;

public abstract class HeuristicSolver{
	
	private var problemModel:ProblemGenericModel;
	private var size:Long;
 	
 	// Move information
 	protected val move = new MovePermutation(-1n, -1n);
 	
 	// Random Number Generator
 	protected var random : Random;
 	protected var seed:Long;	
 	
 	// Variables
 	// -> Target
 	protected var target : Long = 0;
 	protected var strictLow : Boolean = false;
 	protected var targetSucc : Boolean = false;
 	
 	// -> Statistics
 	protected var nRestart : Int = 0n;
 	protected var nIter : Int;
 	protected var nSwap : Int;
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
 	protected var maxTime:Long;
 	protected var initialTime:Long;
 	// RESTART
 	protected var restart:Boolean = false;
 	protected var maxIters:Long;
 	protected var maxRestarts:Int;
 	
 	// not sure
 	protected var forceRestart : Boolean = false;
 	protected var forceReset : Boolean = false;
 	
 	// Report results
 	protected var reportPart:Boolean;
 	
 	/** Number time to change vector due to communication */ 
 	protected var nChangeV : Int = 0n;
 	protected var bestSent:Boolean=false;
 	
 	protected var updateI:Int;
 	protected var reportI:Int;// = (sz* Math.log(sz)) as Int ;//10n; 
 	protected var adaptiveComm:Boolean = false;
 	protected var modParams:Int;
 	
 	protected var costLR:Long = Long.MAX_VALUE;
 	protected var maxUpdateI : Int = 100000n;
 	protected var changeOnDiver : Int;
 	
 	public def this(){
 	}
 	
 	public def setProblemModel(problemModel:ProblemGenericModel){
 		this.problemModel = problemModel;
 		this.size = problemModel.getSize();
 	}
 	
 	public def solve(){
 		Console.OUT.println("Heuristic solve invocado");
 	}
 	
 	public def solve(tCost : Long, sLow: Boolean):Long {
 		// Initialize all variables of the search process
 		initVar(tCost, sLow);
 		// Initialize Cost
 		this.currentCost = problemModel.costOfSolution(true);
 		// Copy the first match to bestConf vector
 		val size = problemModel.getSize();
 		Rail.copy(problemModel.getVariables(), bestConf as Valuation(size));
 		if (this.currentCost == 0)
 			bestCost = currentCost;
 		else
 			bestCost = x10.lang.Int.MAX_VALUE;
 		
 		// Main Loop 
 		while( this.currentCost != 0 ){
 			if (this.nIter >= this.maxIters){
 				//restart or finish
 				if(nRestart >= maxRestarts){
 					break;
 				}else{
 					nRestart++;
 					problemModel.initialize(); 
 					currentCost = problemModel.costOfSolution(true);
 					updateTotStats();
 					restartVar();
 					continue;
 				}
 			}
 			nIter++;
 			this.currentCost = search();
 			
 			//Update the best configuration found so far
 			updateCosts();
 			
 			//Kill solving process
 			Runtime.probe();	// Give a chance to the other activities
 			if (kill)
 				break;  // kill: End solving process
 			
 			//Time out
 			if(maxTime > 0){
 				val eTime = System.nanoTime() - initialTime; 
 				if(eTime/1e6 >= maxTime){ //comparison in miliseconds
 					Logger.debug(()=>{" Time Out"});
 					break;
 				}
 			}
 			//Possible interaction with other solvers
 			//Jason: include this method for cooperative form -> interact(problemModel);
 		}
 		updateTotStats();
 		return bestCost;
 	}
 	
 	protected def initVar(tCost : Long, sLow: Boolean){
 		// Set Target
 		this.target = tCost;
 		this.strictLow = sLow;
 		this.targetSucc = false;
 		problemModel.initialize(); 
 		//Main.show("initial= ",csp.variables);
 		this.nSwap = 0n;
 		this.nIter = 0n;
 		this.nRestart = 0n;
 		
 		// clear Tot stats
 		this.nIterTot = 0n;
 		this.nSwapTot = 0n;
 		this.initialTime = System.nanoTime();
 		// Comm
 		this.bestSent = false;
 		this.nForceRestart = 0n;
 		this.nChangeV = 0n;
 		
 		this.costLR = Long.MAX_VALUE;;
 		
 		if (this.adaptiveComm)
 			this.updateI = 2n * this.reportI;
 		
 	}
 	
 	protected def updateTotStats(){
 		this.nIterTot += this.nIter;
 		this.nSwapTot += this.nSwap; 
 		nSwap = 0n;
 		nIter = 0n;
 	}
 	
 	/**
 	 *  Restart solver state variables
 	 */
 	protected def restartVar(){
 		bestSent = false;
 	}
 	
 	/**
 	 *  Search process (in loop functionality)
 	 *  To be overwrited for each child class (solver) 
 	 */
 	protected def search():Long{
 		// Swap two random variables
 		val sz = problemModel.getSize();
 		move.setFirst(random.nextLong(sz));
 		move.setSecond(random.nextLong(sz));
 		
 		problemModel.swapVariables(move.getFirst(), move.getSecond());
 		nSwap++;
 		
 		problemModel.executedSwap(move.getFirst(), move.getSecond());
 		return problemModel.costOfSolution(true);
 	}
 	
 	protected def updateCosts(){
 		val sz = problemModel.getSize();
 		if(this.currentCost < this.bestCost){ //(totalCost <= bestCost)
 			Rail.copy(problemModel.getVariables() as Valuation(sz), this.bestConf as Valuation(sz));
 			this.bestCost = this.currentCost;
 			
 			bestSent = false; // new best found, I must send it!
 			
 			if (this.reportPart){
 				val eT = (System.nanoTime() - initialTime)/1e9;
 				val gap = (this.bestCost-this.target)/(this.bestCost as Double)*100.0;

 				Utils.show("Solution",this.bestConf);
 				Console.OUT.printf("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n",here,eT,this.bestCost,gap);
 			}
 			
 			// Console.OUT.println(here+" best cost= "+bestCost);
 			// Compare cost and break if target is accomplished
 			if ((this.strictLow && this.bestCost < this.target)
 					||(!this.strictLow && this.bestCost <= this.target)){
 				this.targetSucc = true;
 				this.kill = true;
 			}
 		}
 	}
 	
 	public def verify(){
 		Console.OUT.println("Se ingresa al Verify del HeuristicSolver");
 		return problemModel.verify(getBestConfiguration());
 	}
 	
 	public def getSizeProblem(){
 		return problemModel.getSize();
 	}
 	
 	public def reportStats( c : GlobalStats){
 		c.setIters(this.nIterTot);
 		c.setSwaps(this.nSwapTot);
 		c.setVectorSize(problemModel.getSize());
 		c.setTarget(this.targetSucc);
 		c.setCost(this.bestCost);
 		c.setRestart(this.nRestart);
 		c.setChange(this.nChangeV);
 		c.setForceRestart(this.nForceRestart);
 		val state = createSolverState();
 		c.setSState(state);
 	}
 	
 	public def displaySolution(){
 		problemModel.displaySolution(getBestConfiguration());
 	}
 	
 	public def getBestConfiguration(){
 		val sz = size;
 		return this.bestConf as Valuation(sz);
 	}
 	/**
 	 *  Create Solver State array to be send to Pool
 	 */
 	protected def createSolverState():Rail[Int]{self.size==3}{
 		val rsState = new Rail[Int](3,-1n);
 		//Jason: Verificar para que es necesario esto: rsState(0) = this.mySolverType;
 		return rsState;  
 	}
 	
 	public def kill(){
 		this.kill = true;
 	}
 
 	public def setSeed(inSeed:Long){
 		this.seed = inSeed;
 	}
}
//public type HeuristicSolver = HeuristicSolver{};