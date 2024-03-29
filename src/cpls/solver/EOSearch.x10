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

import cpls.CPLSOptionsEnum;
import cpls.util.MovePermutation;
import cpls.util.Utils;
import cpls.util.Valuation;
import x10.util.RailUtils;
import cpls.ParamManager;
import cpls.problem.ProblemGenericModel;

public class EOSearch extends SingleSolHeuristic{

 	private var pdf:Rail[Double];
 	private var fit:Rail[Long];

 	// var index is stored in the 10 LSB and the cost is stored on the remaining MSB
 	private val cmp : (Long,Long) => Int = (a:Long, b:Long) => {return((b >> 10) - (a >> 10))as Int;}; 
 	val powFnc = (tau : Double, x : Long):Double => {return Math.pow(x, -tau);};
 	val expFnc = (tau : Double, x : Long):Double => { return Math.exp(-tau * x);};
 	val gammaFnc = (tau : Double, x : Long):Double => {val k = tau;
 													   val theta = Math.exp(tau);
 													   val constk = Math.pow(theta,k)*EOSearch.gamma(k);
 													   val f =  Math.pow(x, k-1) * Math.exp(-x/theta) / constk;
 													   return f;
 	};
 
 	static def gamma(n:Double):Double{
 		val invn = 1.0 / n;
 		val g = ( 2.506628274631 * Math.sqrt(invn) + 
 					0.208885689552583 * Math.pow(invn, 1.5) + 
 					0.00870357039802431 * Math.pow(invn, 2.5) - 
 					(174.210665086855 * Math.pow(invn, 3.5)) / 25920.0 - 
 					(715.642372407151 * Math.pow(invn, 4.5)) / 1244160.0
 				) * Math.exp((-Math.log(invn) - 1) * n);
 		return g;
 	}
 
 
 	// Communication Variables
 	private var tauUserSel:Double;
 	private var tau:Double;
 	private var pdfUserSel:Int; //pdf initial selection
 	private var pdfS:Int = 1n;  //pdf state
 	private var selSecond:Int; 
 	private var expDown : Double;
 	private var expUp : Double;
 	private var powDown : Double;
 	private var powUp : Double;

 	public def this(sz:Long){
 		super(sz);
 		super.mySolverType = CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		this.pdf = new Rail[Double] (problemModel.size +1, 0.0);// +1 since x in 1..size
 		this.fit = new Rail[Long](problemModel.size, 0);
 		this.expDown = 6.385378048 * Math.pow(problemModel.size,-1.033400799);
 		this.expUp = 8.867754442 * Math.pow(problemModel.size,-0.895936426);
 		this.powDown = 1.575467001 * Math.pow(problemModel.size,-0.1448643794);
 		this.powUp = 2.426369897 * Math.pow(problemModel.size,-0.1435045369);
 		//Jason: Se cambia la forma como estan siendo leidos los parametros.
 		this.tauUserSel = opts("-EO_t", (1.0 + 1.0 / Math.log(problemModel.size)));
 		this.pdfUserSel = opts("-EO_p", -1n); 
 		this.selSecond = opts("-EO_ss", 1n);
 	}
 
 	/**
  	*  Initialize variables of the solver
  	*  Executed once before the main solving loop
  	*/
 	public def initVar(){
 		super.initVar();
 		//Console.OUT.println("Se llega al initvar de EOSearch");
 		if ( this.pdfUserSel == -1n ) { // Select a random PDF
 			this.pdfS = random.nextInt(2n)+1n;
 		}else
 			this.pdfS = pdfUserSel;
 
 		if ( this.tauUserSel == -1.0 ) { // Select a random tau from 0 to tau 
 			if ( this.pdfS == 1n) {
 				this.tau = this.powDown + (powUp - powDown) * random.nextDouble();
 			}else if ( this.pdfS == 2n) {
 				this.tau = this.expDown + (expUp - expDown) * random.nextDouble();
 			}
 		}else
 			this.tau = this.tauUserSel;
 
 		if (this.pdfS == 3n)
 			initPDF( this.gammaFnc );
 		else if (this.pdfS == 2n)
 			initPDF( this.expFnc );
 		else //( this.pdfS == 1n )
 			initPDF( this.powFnc );
 	}
 
 	private def initPDF( fnc:(tau : Double, x : Long)=>Double ){
 		var sum:Double = 0.0;
 		var y:Double = 0.0;
 		for (var x:Int = 1n; x <= super.problemModel.size; x++){
 			y = fnc(this.tau, x);
 			this.pdf(x) = y;
 			sum += y; 
 		}
 		for (var x:Int = 1n; x <= super.problemModel.size; x++){
 			this.pdf(x) /= sum;
 			//Console.OUT.println("Se inicializa pdf, posiciion: " + x + ". Valor: " + this.pdf(x));
 		}
 		// for (x in pdf.range())
 	}

 	/**
  	*  Extremal Search process (in loop functionality)
  	*/
 	public def search(currentCost:Long, bestCost:Long, nIter:Int) : Long{
 		this.selFirstVar(this.move, problemModel);
 		//val sz = this.problemModel.size;
 		var newCost:Long = currentCost;
 		if (this.selSecond == 0n)
 			newCost = this.selSecondRandom(super.move, problemModel, currentCost);
 		else 
 			newCost = this.selSecondMinConf(super.move, problemModel, currentCost);
 		swapVariables(super.move.getFirst(), super.move.getSecond()); //adSwap(maxI, minJ,csp);
 		super.nSwap++;
 		this.problemModel.executedSwap(sz, super.move.getFirst(), super.move.getSecond(), super.variables);
 		/*if(newCost < bestCost){
 			Console.OUT.print("Costo (EOSearch) in " + here + ". " + Runtime.worker() + ": " + newCost);
 			Utils.show(". Con variables: " , super.variables);
 			//displaySolution();
 		}*/
 		return newCost;
 	}
 
 
 	private def pdfPick():Int {
 		var p:Double = random.nextDouble();
 		var fx:Double;
 		var x:Int = 0n;
 		while( (fx = pdf(++x)) < p ){
 			//Console.OUT.println("Valor fx: " + fx + ". Valor p: " + p);
 			p -= fx;
 		}
 		return x - 1n ;
 	}
 
 	private def selFirstVar(move:MovePermutation, problemModel:ProblemGenericModel){
 		var i: Long =-1n;
 		var cost: Long;
 		var selIndex:Long = 0; 
 		var locMin:Boolean = true;
 		while((i = problemModel.nextI(i)) as ULong < super.problemModel.size as ULong) { //False if i < 0
 			cost = problemModel.costOnVariable(i);
 			// each position on the fit array is divided to contain both i and cost
 			// variable index "i" is stored in the 10 LSB 
 			// the cost is stored in the remaining MSB 
 			this.fit(i) = cost << 10 | i;
 			//Console.OUT.printf("%d %X %X \n",cost,cost,fit(i)); 
 			// Detect local min: 
 			// can be applied on "first variable selction" only for QAP
 			if ( cost > 0 ) // cost is -delta for QAP.
 				locMin = false; 
 		}
 		RailUtils.sort(this.fit, this.cmp);	
 
 		if (locMin) this.onLocMin();
 			// for (v in fit)
 			//   Console.OUT.printf("%d %d \n",(v & 0xFFF),(v >>12));
 			val index = this.pdfPick();
 			val sVar = this.fit(index) & 0x3FF;
 			val sCost = this.fit(index) >> 10;
 			//Console.OUT.printf("svar %d scost %d \n",sVar,sCost);
 			var nSameFit:Int = 0n; 
 			for(var k:Int=0n; k < super.problemModel.size; k++){
 				val cCost = this.fit(k) >> 10; 
 				//Console.OUT.printf("cCost %d scost %d \n",cCost,sCost);
 				if ( cCost < sCost)   // descending order
 					break;
 
 				if (cCost == sCost && random.nextInt(++nSameFit) == 0n)
 					selIndex = fit(k) & 0x3FF;
 			}
 			// Save first variable selected into the move object
 			this.move.setFirst(selIndex);
 	} 
 
 	/**
  	* 	selectVarMinConflict( csp : ModelAS) : Int
  	* 	Computes swap and selects the minimum of cost if swap
  	* 	@param csp problem model
  	*   @param move object
  	* 	@return the cost of the best move
  	*/
 	private def selSecondMinConf(move:MovePermutation, problemModel:ProblemGenericModel, currentCost:Long) : Long {
 		var j: Long;
 		var cost: Long;
 		var second : Long = 0;
 		var nSameMin:Int = 0n;
 		var minCost:Long = Long.MAX_VALUE;
 		val first = this.move.getFirst(); 
 		for (j = 0; j < super.problemModel.size; j++){	
 			if (first == j) continue;
 			cost = problemModel.costIfSwap(currentCost, j, first);
 			if (cost < minCost){
 				minCost = cost;
 				second = j;
 				nSameMin = 1n;
 			} else if (cost == minCost && random.nextInt(++nSameMin) == 0n){
 				second = j;
 			}
 		}
 		this.move.setSecond(second);
 		return minCost;
 	}
 
 
 
 	private def selSecondRandom(move:MovePermutation, problemModel:ProblemGenericModel, currentCost:Long) : Long {
 		val randomJ = random.nextLong(super.problemModel.size);
 		val newCost = problemModel.costIfSwap(currentCost, randomJ, this.move.getFirst());	 
 		this.move.setSecond(randomJ);
 		return newCost; 
 	}
 
 	/**
  	*  Interact when Loc min is reached
  	*/
 	private def onLocMin(){
 		// communicate Local Minimum
 		// solver.communicateLM( this.currentCost, cop.getVariables() as Valuation(sz));
 		val solverState = this.createSolverState();
 		//this.solver.communicateLM( new State(sz, this.currentCost, problemModel.getVariables() as Valuation(sz), here.id as Int, solverState) );
 	}
 
 
 	/**
  	*  Create EO Solver State array to be send to Pool
  	*  oeState(0) = solverType  
  	*  oeState(1) = EO pdf type
  	*  oeState(2) = EO "tau" value
  	*/
 	protected def createSolverState( ) : Rail[Int]{self.size==3}{
 		val eoState = new Rail[Int](3,-1n);
 		eoState(0) = super.mySolverType as Int;
 		eoState(1) = this.pdfS;
 		eoState(2) = (this.tau * 1000.0) as Int; // TODO: convert double to Int??? levels ranges ???
 		return eoState;  
 	}
 
 	/**
  	*  Process Solver State Array received from Pool
  	* 
  	*/
 	protected def processSolverState( state : Rail[Int]{self.size==3}){
 		// Random Search has no parameters to process 
 		val inSolverType = state(0); 
 		if (inSolverType == super.mySolverType as Int){
 			val inpdf = state(1);
 			val intau = state(2) / 1000.0;
 			if (this.pdfS == inpdf) {
 				this.tau = intau; 
 			} else {
 				if ( this.pdfS == 1n) {
 					this.tau = this.powDown + (powUp - powDown) * random.nextDouble();
 				}else if ( this.pdfS == 2n) {
 					this.tau = this.expDown + (expUp - expDown) * random.nextDouble();
 				}
 			}
 			if (this.pdfS == 3n)
 				initPDF( this.gammaFnc );
 			else if (this.pdfS == 2n)
 				initPDF( this.expFnc );
 			initPDF( this.powFnc );
 		}
 	} 	
}
public type EOSearch(s:Long)=EOSearch{self.sz==s};
