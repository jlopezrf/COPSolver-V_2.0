package cpls.solver;

import cpls.problem.ProblemGenericModel;
import cpls.util.MovePermutation;
import cpls.util.Utils;
import cpls.util.Valuation;
import cpls.util.Logger;
import cpls.measurements.GlobalStats;
import x10.util.Random;
import cpls.ParamManager;
import x10.util.StringUtil;

public class HeuristicSolver{
 	protected val move = new MovePermutation(-1n, -1n);
 	protected var random : Random;
 	protected var nSwap : Int;
 	protected var problemModel:ProblemGenericModel;
 	protected var mySolverType:Int;
 	protected var variables:Rail[Int]{};

 	public def this(){
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		this.variables = new Rail[Int](problemModel.size, (i:Long) => i as Int);
 		this.problemModel = problemModel;
 	}
 	/**
 	 *  Search process (in loop functionality)
 	 *  To be overwrited for each child class (solver) 
 	 */
 	public def search(currentCost:Long, bestCost:Long, nIter:Int):Long{
 		// Swap two random variables
 		val sz = this.problemModel.size;
 		move.setFirst(random.nextLong(problemModel.size));
 		move.setSecond(random.nextLong(problemModel.size));
 		swapVariables(move.getFirst(), move.getSecond());
 		nSwap++;
 		
 		this.problemModel.executedSwap(move.getFirst(), move.getSecond(), variables as Rail[Int]{self.size == sz});
 		val costo = problemModel.costOfSolution(true, variables as Rail[Int]{self.size == sz});
 		/*if(costo < currentCost){
 			Console.OUT.print("Costo (RandomSearch): " + costo + ". Con variables: ");
 			Console.OUT.print("\n");
 		}*/
 		return costo;
 	}
 	
 	public def initVar(){
 		this.nSwap = 0n;
 	}
 	
 	public def clearNSwap(){
 		this.nSwap = 0n;
 	}
 	
 	public def getNSwap(){
 		return nSwap;
 	}

 	public def setSeed(inSeed:Long){
 		this.random = new Random(inSeed);
 	}
 	
 	public def setSolverType(mySolverType:Int){
 		this.mySolverType = mySolverType;
 	}
 
 	public def getVariables():Rail[Int]{
 		return this.variables;
 	}
 
 	public def setVariables(variables:Rail[Int]){
 		this.variables = variables;
 	}
 
 	public def swapVariables( i:Long, j:Long):void{
 		val x = variables(i);
 		variables(i) = variables(j); 
 		variables(j) = x;
 	}
 
 	public def reset ( var n : Long, totalCost : Long ) : Long {
  	 	while( n-- != 0 ){
  	 		val i = random.nextLong(variables.size);
 			val j = random.nextLong(variables.size);
  			swapVariables(i,j);
  		}
  		return -1n;
  	}
 
 	public def initVariables(){
 		this.variables = this.problemModel.initialize(this.random.nextLong());
 	}
 
 	public def costOfSolution(){
 		return this.problemModel.costOfSolution(true, variables);
 	}
 
 	public def getSizeProblem(){
 		return this.problemModel.size;
 	}
 
 	public def getDistance(a:Rail[Int], b:Rail[Int]){
 		val sz = this.problemModel.size;
 		return this.problemModel.distance(a as Rail[Int]{a.size == sz}, b as Rail[Int]{b.size == sz});

 	}
 
 	public def verify(conf:Rail[Int]){
 		val sz = this.problemModel.size;
 		return this.problemModel.verify(conf);

 	}
 
 	public def displaySolution(conf:Rail[Int]){
 		val sz = this.problemModel.size;
 		this.problemModel.displaySolution(conf);
 	}
}