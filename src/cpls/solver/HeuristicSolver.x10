package cpls.solver;

import cpls.problem.ProblemGenericModel;

public abstract class HeuristicSolver{
	
	private var problemModel:ProblemGenericModel;
	private var kill:Boolean = false;
 	private var seed:Long;
	
 	public def this(){
 	}
 	
 	public def setProblemModel(problemModel:ProblemGenericModel){
 		this.problemModel = problemModel;
 	}
 	
 	/*public def solve(tCost : Long, sLow: Boolean):Long {
 		// Initialize all variables of the search process
 		initVar(problemModel, tCost, sLow);
 		// Initialize Cost
 		this.currentCost = problemModel.costOfSolution(true);
 		// Copy the first match to bestConf vector
 		Rail.copy(problemModel.getVariables(), bestConf as Valuation(sz));
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
 			this.currentCost = search( problemModel );
 			
 			//Update the best configuration found so far
 			updateCosts(problemModel);
 			
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
 			interact(problemModel);
 		}
 		updateTotStats();
 		return bestCost;
 	}*/
 	
 	public def kill(){
 		this.kill = true;
 	}
 
 	public def setSeed(inSeed:Long){
 		this.seed = inSeed;
 	}
}
//public type HeuristicSolver = HeuristicSolver{};