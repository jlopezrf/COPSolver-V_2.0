/* 
 * PHYSH - Parallel HYbridization for Simple Heuristics
 * 
 * MIT License
 *
 * Copyright (c) 2022 Jheisson Argiro López Restrepo
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

package cpls.solver;

import x10.array.Array_2;
import cpls.problem.ProblemGenericModel;
import cpls.util.Utils;
import cpls.CPLSOptionsEnum;
import cpls.ParamManager;
import cpls.util.Valuation;

public class RoTSearch extends SingleSolHeuristic{
 	
	private var tabuDurationFactorUS : Double;
	private var aspirationFactorUS : Double;
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
	
	public def this(sz:Long){
		super(sz);
		super.mySolverType = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
	}

 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		this.tabuList = new Array_2 [Long](problemModel.size, problemModel.size, 0);
 		this.tabuDurationFactorUS = opts("-RoTS_t", -1.0);
 		this.aspirationFactorUS = opts("-RoTS_a", -1.0);
 	}
	
	var tabuDurationLower:Int;
	var tabuDurationUpper:Int;
	
	/**
	 *  Initialize variables of the solver
	 *  Executed once before the main solving loop
	 */
	public def initVar(){
		super.initVar();
		this.tabuList.clear();
		if (this.tabuDurationFactorUS < 0){
			this.tabuDurationFactor = -this.tabuDurationFactorUS;
		} else {
			this.tabuDurationFactor = this.tabuDurationFactorUS;
		}
 		//Console.OUT.println("this.tabuDurationFactor: " + this.tabuDurationFactor);
		this.tabuDuration = (this.tabuDurationFactor * super.problemModel.size) as Int;
 		//Console.OUT.println("this.tabuDuration: " + this.tabuDuration);
		if (this.aspirationFactorUS == -1.0) 
			this.aspirationFactor = al + (au-al) * random.nextDouble();
		else
			this.aspirationFactor = this.aspirationFactorUS;
 		//Console.OUT.println("this.aspirationFactor: " + this.aspirationFactor);
		
		this.aspiration = (this.aspirationFactor * super.problemModel.size * super.problemModel.size) as Int;
 		//Console.OUT.println("this.aspiration: " + this.aspiration + "\n" + "Matriz tabulist: ");
		for (var i:Long = 0 ; i < super.problemModel.size; i++){
			for (var j:Long = 0 ; j < super.problemModel.size; j++){
				this.tabuList(i,j) = -(super.problemModel.size * i + j);
 				//Console.OUT.print(this.tabuList(i,j) + " ");
			}
 			//Console.OUT.println("\n");
		}
	}
	
	public def search(currentCost:Long, bestCost:Long, nIter:Int) : Long{
		var i : Long;
		var j : Long;
		
		var newCost : Long;
		var delta : Long;
		var minDelta : Long = Long.MAX_VALUE;
		move.setFirst(Long.MAX_VALUE);
		move.setSecond(Long.MAX_VALUE);
		this.alreadyAspired = false;
		
		//Utils.show("Solution",super.variables);
		
		for (i = 0; i < super.problemModel.size - 1; i++){
			for (j = i + 1; j < super.problemModel.size; j++) {
				
				newCost = problemModel.costIfSwap(currentCost,i,j);
 				//Console.OUT.println("Costifswap in RoTS " + i + "," + j + ": " + newCost);
				delta = newCost - currentCost;
				
				this.autorized =
					( tabuList (i, super.variables(j)) < nIter) ||
					( tabuList (j, super.variables(i)) < nIter);
				
				this.aspired =
					( tabuList(i,super.variables(j)) < nIter - this.aspiration) ||
					( tabuList(j,super.variables(i)) < nIter - this.aspiration) ||
					( newCost < bestCost);
				
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
		}
		
		
		if(move.getFirst() == Long.MAX_VALUE){
			Console.OUT.println("All moves are tabu!");
			return currentCost;
		}else{
			//Console.OUT.println("swap pos "+move.getFirst()+" "+move.getSecond());
 			swapVariables(move.getFirst(), move.getSecond()); //adSwap(maxI, minJ,csp);	
 			nSwap++;
			//val sz =  super.problemModel.size;
			super.problemModel.executedSwap(sz, move.getFirst(), move.getSecond(), super.variables  as Valuation(sz));
			/* forbid reverse move for a random number of iterations */
			
			//tabuList( move.getFirst(), cop_.variables(move.getSecond())) = this.nIter + (cube() * this.tabuDuration) as Int;
			var t1 :Int, t2:Int;
			// t1 = (cube() * this.tabuDuration) as Int; 
			// t2 = (cube() * this.tabuDuration) as Int; 
			do t1 = (cube() * this.tabuDuration) as Int; while(t1 <= 2);
			do t2 = (cube() * this.tabuDuration) as Int; while(t2 <= 2);
			
			
			tabuList( move.getFirst(), super.variables(move.getSecond())) = nIter + t1;
			tabuList( move.getSecond(), super.variables(move.getFirst())) = nIter + t2;
			
			//Utils.show("after swap", super.variables);
			// detect loc min
			//if (minDelta >= 0)
			//	onLocMin();
 			
			return currentCost + minDelta;
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
				this.tabuDuration = (this.tabuDurationFactor * super.problemModel.size) as Int;
			
			this.aspiration = (this.aspirationFactor * super.problemModel.size * super.problemModel.size) as Int;
		}
	} 	 

 	//public def restartVar(){
 	//	this.tabuList.clear();
 	//}
	
	/**
	 *  Interact when Loc min is reached
	 */
	//private def onLocMin(){
		// communicate Local Minimum
		// solver.communicateLM( this.currentCost, cop.getVariables() as Valuation(sz));
		//val solverState = this.createSolverState();
		//this.solver.communicateLM( new State(sz, this.currentCost, cop.getVariables() as Valuation(sz), here.id as Int, solverState) );
	//}
}
public type RoTSearch(s:Long)=RoTSearch{self.sz==s};
