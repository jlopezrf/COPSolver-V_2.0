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

public abstract class HeuristicSolver{
 	protected val move = new MovePermutation(-1n, -1n);
 	protected var random : Random;
 	protected var nSwap : Int;
 	protected var problemSize:Long;
 	protected var mySolverType:Int;

 	public def this(){
 
 	}
 
 	public def configHeuristic(sizeProblem:Long, opts:ParamManager){
 		this.problemSize = sizeProblem;
 	}
 	/**
 	 *  Search process (in loop functionality)
 	 *  To be overwrited for each child class (solver) 
 	 */
 	public def search(problemModel:ProblemGenericModel, currentCost:Long, bestCost:Long, nIter:Int):Long{
 		// Swap two random variables
 		val sz = problemModel.getSize();
 		move.setFirst(random.nextLong(sz));
 		move.setSecond(random.nextLong(sz));
 		
 		problemModel.swapVariables(move.getFirst(), move.getSecond());
 		nSwap++;
 		
 		problemModel.executedSwap(move.getFirst(), move.getSecond());
 		val costo = problemModel.costOfSolution(true);
 		if(costo < currentCost){
 			Console.OUT.print("Costo (RandomSearch): " + costo + ". Con variables: ");
 			Console.OUT.print("\n");
 		}
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
}