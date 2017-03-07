package cpls.solver;

import cpls.util.MovePermutation;

import x10.util.StringUtil;
import cpls.CPLSOptionsEnum;
import cpls.measurements.GlobalStats;
import cpls.ParamManager;
import cpls.problem.ProblemGenericModel;
import cpls.util.Valuation;
import cpls.util.Utils;

public class AdaptiveSearch extends SingleSolHeuristic{

 		private var mark : Rail[Int]; 
 		private var listInb : Int;
 		private var listJnb : Int;

 		private var listIJ : Rail[MovePermutation];
 		private var listI : Rail[Long];

 		private var nVarMarked : Int = 0n; 

 		/**	Statistics	*/
 		private var nReset : Int;
 		private var nSameVar : Int;
 		private var nLocalMin : Int;

 		/** Total Statistics */
 		private var nResetTot : Int;	
 		private var nSameVarTot : Int;
 		private var nLocalMinTot : Int; 
 		private var nInPlateau:Int; 
 
 		/** For Exhaustive search */
 		private var nListIJ : Int;

 		/** Parameters of the AS solver */
 		private var nVarToReset:Long;
 		private var resetPercent:Int;
 		private var exhaustive:Boolean; 
 		private var freezeLocMin:Int;
 		private var freezeSwap:Int;
 		private var resetLimit:Int;
 		private var probSelectLocMin:Int;
 		private var firstBest:Boolean;

 	public def this(){
 		super();
 	}
 
  	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		this.mark = new Rail[Int] (problemModel.size, 0n);
 		this.listIJ = new Rail[MovePermutation](problemModel.size);
 		this.listI = new Rail[Long](problemModel.size, 0);
 		this.nVarToReset = opts("--AS_varToReset",-1);
 		this.resetPercent = opts("--AS_resetPer",10n);
 		this.freezeLocMin = opts("--AS_freezeLocMin",5n);
 		this.freezeSwap = opts("--AS_freezeSwap",5n);
 		this.resetLimit = opts("--AS_resetLimit",5n);
 		this.probSelectLocMin = opts("--AS_probSelecLocMin", 0n);
 		this.firstBest = opts("--AS_firstBest",0n) == 1n;
 		this.exhaustive = opts("--AS_exhaustive",0n) == 1n;
 	}


 	public def initVar(){
 		super.initVar();
 		if (this.nVarToReset == -1){
 			this.nVarToReset = (((super.problemModel.size * resetPercent as Long) + 99) / 100);
 			if (this.nVarToReset < 2){
 				this.nVarToReset = 2;
 			}
 		}
 		mark.clear();
 		listI.clear();
 		//nRestart = 0n;
 		nSameVar = 0n;
 		nLocalMin = 0n;
 		nReset = 0n;
 		nInPlateau = 0n;
 		nResetTot = 0n;	
 		nSameVarTot = 0n;
 		nLocalMinTot = 0n; 
 	}

 	/**
 	*  Search process (in loop functionality)
 	*  To be overwrited for each child class (solver) 
 	*/
 	public def search(currentCost:Long, bestCost:Long, nIter:Int) : Long{
 		var newCost:Long = -1;
 		val sz = this.problemModel.size;
 		if( !this.exhaustive ){
 			selectVarHighCost(problemModel);
 			newCost = selectVarMinConflict( currentCost);
 		} else {
 			newCost = selectVarsToSwap(currentCost);
 		}
 		if (currentCost != newCost) {
 			nInPlateau = 0n;
 		}
 		nInPlateau++;
 		var returnCost:Long = currentCost;
 		if (move.getFirst() == move.getSecond()){
 			this.nLocalMin++;
 			mark(move.getFirst()) = super.nSwap + this.freezeLocMin; //Mark(maxI, freeze_loc_min);
 			
 			if (this.nVarMarked + 1 >= this.resetLimit){	
 				onLocMin();
 				val cost:Long = doReset(this.nVarToReset, currentCost);//doReset(nb_var_to_reset,csp);
 				returnCost = (cost < 0) ? this.problemModel.costOfSolution(true, super.variables as Rail[Int]{self.size == sz}) : cost;
 			}
 			//return otherCost;
 		}else{
 			mark(move.getFirst()) = super.nSwap + this.freezeSwap; //Mark(maxI, ad.freeze_swap);
 			mark(move.getSecond()) = super.nSwap + this.freezeSwap; //Mark(minJ, ad.freeze_swap);
 			swapVariables(move.getFirst(), move.getSecond()); //adSwap(maxI, minJ,csp);
 			super.nSwap++;
 			problemModel.executedSwap(move.getFirst(), move.getSecond(), super.variables as Rail[Int]{self.size == sz});
 			//currentCost = newCost;
 			returnCost = newCost ;
 		}
 		//val sz = problemModel.getSize();
 		//var variables:Rail[Int] = new Rail[Int](sz as Int, 0n);
 		//Rail.copy(problemModel.getVariables(), variables as Valuation(sz));
 		/*if(returnCost < currentCost){
 			Console.OUT.print("Costo (AdaptiveSearch): " + returnCost);
 			Utils.show(". Con variables: " , super.variables);
 		}*/
 		//displaySolution();
 		//Console.OUT.print("\n");
 		return returnCost;
 	}

 	protected def restartVar(){
 		//super.restartVar();
 		mark.clear();
 	}

 	private def doReset(n:Long, currentCost:Long) {
 		var cost : Long = -1;		//reset(n, csp);
 		cost = reset( n, currentCost );
 		mark.clear();
 		nReset++;
 		return cost;
 		//currentCost = (cost < 0) ? problemModel.costOfSolution(true) : cost; //Arg costofsol(1)
 	}

 	/**
 	* 	SelectVarHighCost 
 	* 	Select the maximum cost variable of the problem 
 	*   (Modify the first variable of the move object )
 	*   Also computes the number of marked variables.
 	*   
 	*   @param csp problem model
 	* 	@param move object (permutation)
 	*/
 	private def selectVarHighCost(problemModel:ProblemGenericModel){
 		var i: Long =-1;
 		var maxCost: Long = 0;
 		var maxVar:Long = -1;
 		this.listInb = 0n; //Number of elements
 		this.nVarMarked = 0n; 

 		while((i = problemModel.nextI(i))as ULong < super.problemModel.size as ULong) { //False if i < 0
 			if (super.nSwap < this.mark(i)) {
 				this.nVarMarked++;
 				continue;
 			}
 			val x = problemModel.costOnVariable(i);
 			if (x >= maxCost){
 				if (x > maxCost){
 					maxCost = x;
 					this.listInb = 0n;
 				}
 				this.listI(this.listInb++) = i; 
 			}
 		}
 		if (this.listInb == 0n) // all variables are OK but the global cost is > 0 (can occur in SMTI with no BP but singles)
 			maxVar = random.nextLong(super.problemModel.size);
 		else {
 			// select a maxCost variable from array
 			val sel = random.nextInt(this.listInb);
 			maxVar = this.listI(sel); //This maxI must be local or only returns the value
 		}
 		this.nSameVar += this.listInb;
 		super.move.setFirst(maxVar);
 	}

 	/**
 	* 	selectVarMinConflict( csp : ModelAS) : Int
 	* 	Computes swap and selects the minimum of cost if swap
 	* 	@param csp problem model
 	* 	@param move object (permutation)
 	* 	@return new cost of the possible move
 	*/
 	private def selectVarMinConflict(currentCost:Long ) : Long {
 		var j: Long;
 		var cost: Long;
 		var flagOut:Boolean = false; 
 		var second : Long = -1;
 		var nCost:Long;
 		var first:Long = move.getFirst();

 		do {
 			flagOut = false;
 			this.listJnb = 0n;
 			nCost = currentCost;
 			j = -1n;
 			while((j = problemModel.nextJ(first, j, false)) as ULong < super.problemModel.size as ULong){// false if j < 0 //solverP.exhaustive???	
 				if (super.nSwap < this.mark(j)) {
 					continue;
 				}
 				cost = problemModel.costIfSwap(currentCost, j, first);
 				if (this.probSelectLocMin <= 100n && j == first) continue;

 				if (cost < nCost){
 					this.listJnb = 1n;
 					nCost = cost;
 					second = j;
 					if (this.firstBest){
 						super.move.setSecond(second);
 						return nCost;
 					}
 				} else if (cost == nCost){
 					if (random.nextInt(++this.listJnb) == 0n)
 					second = j;
 				}
 			}

 			if (this.probSelectLocMin <= 100n) {
 				if (nCost >= currentCost && (random.nextInt(100n) < this.probSelectLocMin ||(this.listInb <= 1n && this.listJnb <= 1n))) {
 					second = first;
 					super.move.setSecond(second);
 					return nCost;
 				}
 				if (this.listJnb == 0n) {
 					//this.nIter++;
 					val sel = random.nextInt(this.listInb);
 					first = listI(sel);
 					super.move.setFirst(first);
 					flagOut = true;
 				}
 			}
 		} while(flagOut);
 		super.move.setSecond(second);
 		return nCost;
 	}

/**
 *  Computes maxI and minJ, the 2 variables to swap.
 *  All possible pairs are tested exhaustively.
 *  @param csp problem model
 *  @param move object (permutation)
 *  @return new cost of the possible move
 */
 	private def selectVarsToSwap(currentCost:Long):Long {
 		var first : Long;
 		var second : Long;
 		//var x : Int;
 		this.nListIJ = 0n;
 		var nCost:Long = Long.MAX_VALUE ;
 		this.nVarMarked = 0n;
 		first = -1n;
 		
 		while((first = problemModel.nextI(first))as ULong < super.problemModel.size as ULong) {
 			if ( super.nSwap < this.mark(first) ) {
 				this.nVarMarked++;
 				continue;
 			} 
 			second = -1n;
 			while((second = problemModel.nextJ(first, second, true))as ULong < super.problemModel.size as ULong ){
 				if ( super.nSwap < this.mark(second) ) {
 					continue;
 				}
 				val x = problemModel.costIfSwap(currentCost, first, second);
 				if (x <= nCost) {
 					if (x < nCost) {
 						nCost = x;
 						this.nListIJ = 0n;
 						if (this.firstBest == true && x < currentCost) {
 							super.move.setFirst(first);
 							super.move.setSecond(second);
 							return nCost; 
 						}
 					}
 					this.listIJ(this.nListIJ) = new MovePermutation(first,second);
 					this.nListIJ = ((this.nListIJ + 1) % super.problemModel.size) as Int;
 				}
 			}
 		}

 		this.nSameVar += this.nListIJ;
 		if (nCost >= currentCost) {
 			if (this.nListIJ == 0n || (( this.probSelectLocMin <= 100n) && random.nextInt(100n) < this.probSelectLocMin)) {
 				var i:Int;
 				for(i = 0n; super.nSwap < mark(i); i++){}
 				super.move.setFirst(i);
 				super.move.setSecond(i);
 				return nCost;//goto end;
 			}

 			var lm:Long;
 			if (!(this.probSelectLocMin <= 100n) && (lm = random.nextLong(this.nListIJ + super.problemModel.size)) < super.problemModel.size) {
 				super.move.setFirst(lm);
 				super.move.setSecond(lm);
 				return nCost;//goto end;
 			}
 		}

 		val sel = random.nextInt(this.nListIJ);
 		super.move.setFirst(listIJ(sel).getFirst());
 		super.move.setSecond(listIJ(sel).getSecond());
 		return nCost;
 	}

 	/**
 	* 	Report statistics from the solving process
 	*/
 	public def reportStats( c : GlobalStats){
 		//super.reportStats(c);
 		c.locmin = this.nLocalMinTot;
 		c.reset = this.nResetTot;
 		c.same = this.nSameVarTot;
 	}

 	protected def updateTotStats(){
 		//super.updateTotStats();
 		nResetTot += nReset;
 		nSameVarTot += nSameVar;
 		nLocalMinTot += nLocalMin;
 		nSameVar = 0n;
 		nLocalMin = 0n;
 		nReset = 0n;
 	}

/**
 *  Interact when Loc min is reached
 */
 	private def onLocMin(){
 		// communicate Local Minimum
 		//solver.communicateLM( this.currentCost, cop.getVariables() as Valuation(sz));
 		//val solverState = createSolverState();
 		//solver.communicateLM( new State(sz,this.currentCost, cop.getVariables() as Valuation(sz), here.id as Int, solverState) );
 	}
}