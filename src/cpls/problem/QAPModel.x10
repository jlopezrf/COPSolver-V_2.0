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

package cpls.problem;

import x10.io.File;
import x10.io.FileReader;
import x10.array.Array_2;
import cpls.util.Logger;
import cpls.util.Valuation;

public class QAPModel extends ProblemGenericModel{

 	var flow : Rail[Rail[Int]];
 	var dist : Rail[Rail[Int]];
 	var delta : Array_2[Long];
 	var opt : Int = 0n;/** optimal cost (0 if unknown) */
 	var bound : Int = 0n;/** best bound (0 if unknown) */
 	var bks : Int = 0n;/** best known solution cost (0 if unknown) */
 	
 	public def this(size:Long){
 		super(size);
 		//Console.OUT.println("Constructor de QAPModel invocado");
 	}
 
 	public def this(size:Long, inPathDataProblem:String, inPathVectorSol:String, baseValue:Int){
 		super(size);
 		super.inPathDataProblem = inPathDataProblem;
 		super.inPathVectorSol = inPathVectorSol;
 		super.baseValue = baseValue;
 		this.flow = new Rail[Rail[Int]](size, (Long) => new Rail[Int]( size, 0n ));
 		this.dist = new Rail[Rail[Int]](size, (Long) => new Rail[Int]( size, 0n ));
 		delta = new Array_2 [Long](size, size , 0);
 	}

 	public def this (size :Long, mf:Rail[Rail[Int]], md:Rail[Rail[Int]] ) : QAPModel(size){
 		super(size);
 		flow = mf;
 		dist = md;
 		delta = new Array_2 [Long](size, size , 0);
 	}

 	/**
 	*  Compute the cost difference if elements i and j are permuted
 	*/
 	public def computeDelta(sz:Long, i:Long, j:Long, variables:Valuation(sz)): Long{
 		var pi : Long = variables(i) as Long;
 		var pj : Long = variables(j) as Long;
 		var k : Long, pk :Long;
 		var dis : Long = (flow(i)(i) - flow(j)(j)) * (this.dist(pj)(pj) - this.dist(pi)(pi)) +
 							(flow(i)(j) - flow(j)(i)) * (this.dist(pj)(pi) - this.dist(pi)(pj));

 		for(k = 0; k < i; k++){
 			pk = variables(k);
 			dis += (this.flow(k)(i) - this.flow(k)(j)) * (this.dist(pk)(pj) - this.dist(pk)(pi)) +
 					(this.flow(i)(k) - this.flow(j)(k)) * (this.dist(pj)(pk) - this.dist(pi)(pk));
 		}

 		while(++k < j){
 			pk = variables(k);
 			dis += (this.flow(k)(i) - this.flow(k)(j)) * (this.dist(pk)(pj) - this.dist(pk)(pi)) +
 					(this.flow(i)(k) - this.flow(j)(k)) * (this.dist(pj)(pk) - this.dist(pi)(pk));
 		}

 		while(++k < size){
 			pk = variables(k);
 			dis += (this.flow(k)(i) - this.flow(k)(j)) * (this.dist(pk)(pj) - this.dist(pk)(pi)) +
 					(this.flow(i)(k) - this.flow(j)(k)) * (this.dist(pj)(pk) - this.dist(pi)(pk));
 		}
 		return dis;
 	}

 	/**
 		*  As above, compute the cost difference if elements i and j are permuted
 		*  but the value of delta[i][j] is supposed to be known before
 		*  the transposition of elements r and s.
 	*/
 	public def computeDeltaPart(sz:Long, i : Long, j : Long, r : Long, s : Long, variables:Valuation(sz)) : Long{
 		var pi : Long = variables(i) as Long;
 		var pj : Long = variables(j) as Long;
 		var pr : Long = variables(r) as Long;
 		var ps : Long = variables(s) as Long;

 		return (delta(i,j) +
 			(this.flow(r)(i) - this.flow(r)(j) + this.flow(s)(j) - this.flow(s)(i)) *
 			(this.dist(ps)(pi) - this.dist(ps)(pj) + this.dist(pr)(pj) - this.dist(pr)(pi)) +
 			(this.flow(i)(r) - this.flow(j)(r) + this.flow(j)(s) - this.flow(i)(s)) *
 			(this.dist(pi)(ps) - this.dist(pj)(ps) + this.dist(pj)(pr) - this.dist(pi)(pr)));
 	}

 	public def costOfSolution(sz:Long, shouldBeRecorded : Boolean, variables:Valuation(sz)): Long{
 		var i : Long, j : Long;
 		var r : Long  = 0;
 		for(i = 0; i < size; i++)
 			for(j = 0; j < size; j++)
 				r += this.flow(i)(j) * this.dist(variables(i))(variables(j));
 				if (shouldBeRecorded)
 					for(i = 0; i < size; i++)
 						for(j = i + 1; j < size; j++){
 							delta(i,j) = computeDelta(sz, i, j, variables);
  							//Console.OUT.println("DeltaPart calculado");
  						}
 		//Console.OUT.println("MsgType_0. CostOfSolution ejecutado en QAPModel");
 		return r;
 	}
 
 	//Jason: New method for calculate costofSolution for an input solution 
 	public def costOfSolution(sz:Long, solution:Valuation(sz)):Long{
 		var i : Long, j : Long;
 		var r : Long  = 0;
 		for(i = 0; i < size; i++)
 			for(j = 0; j < size; j++)
 				r += this.flow(i)(j) * this.dist(solution(i))(solution(j));
 		return r;
 	}

 	public def costIfSwap(currentCost:Long, i1:Long, i2:Long) : Long{
 		//return currentCost + delta(i1 as Int , i2 as Int) as Int;
 		var i1v:Long = i1;
 		var i2v:Long = i2;
 		if (i1 > i2){	
 			i1v = i2;
 			i2v = i1;
 		}
 		//Console.OUT.println("currentCost + delta(i1v, i2v): " + (currentCost + delta(i1v, i2v)));
 		return currentCost + delta(i1v, i2v);
 	}


 	//variables:Rail[Int]{self.size == this.size}
 	public def executedSwap(sz:Long, var i1:Long, var i2:Long, variables:Valuation(sz)):void{
 		var temp : Long = variables(i1);
 		if (i1 >= i2){
 			var tmp : Long = i1;
 			i1 = i2;
 			i2 = tmp;
 		}
 		var i : Long, j : Long;
 		for (i = 0; i < size; i++)
 			for (j = i + 1; j < size; j++)
 				if (i != (i1 as Long) && i != (i2 as Long) && j != (i1 as Long) && j != (i2 as Long))
 					delta(i,j) = computeDeltaPart(sz, i, j, i1, i2, variables);
 				else
 					delta(i,j) = computeDelta(sz, i, j, variables);
 	}

 	/** 
 		* 	costOnVariable( i : Int ) : Int
 		* 	This function computes the cost of individual variable i
 		* 	@param i This is the variable that we want to know the cost
 		*  @return Int value with the cost of this variable
 	*/
 	public def costOnVariable( i : Long ) : Long{
 		var r : Long = Long.MIN_VALUE; 
 		for (var j:Long = 0; j < size; j++){
 			if (i == j) continue;
 			var d : Long = (i < j)? delta(i,j) :delta(j,i) ;
 			d = -d;
 			if (d > r) r = d;
 		}
 		return r;
 	}

 	/** load data
 		*  load the data in filePath to the data structures matrixFlow and matrixDist 
 		*  @param filePath path of the data file to be loaded
 		*  @param mFlow flow matrix (parameter by reference)
 		*  @param mDist distance matrix  (parameter by reference)
 		*  @return true if success, false if filePath is a directory
 	*/
 	public def loadData(filePath : String):Boolean{
 		var loadTime:Long = -System.nanoTime();
 		val filep = new File(filePath);
 		if (filep.isDirectory()) return false;
 		Console.OUT.println("\n--   Solving "+filePath+" ");
 		//Load first line wtith headers size p1 p2
 		val fr = filep.openRead();
 		val fLine = fr.readLine(); //get first line
 		val header = readParameters(fLine);
 		val sizeF = header(0); var opt : Int = header(1); val bks = header(2);
 		var bound : Int = 0n;
 		if(opt < 0){
 			bound = -opt;
 			opt = 0n;
 		}else{
 			bound = opt;
 		}
 		val vopt=opt; val vb = bound;
 		Logger.info(()=>{"file: "+filePath+" size: "+sizeF+" bound: "+vb+" opt: "+vopt+" bks: "+bks});

 		//Load Problem
 		readMatrix(fr, sizeF);
 		fr.close();
 		return true;
 	}

 	static def readParameters(line : String):Rail[Int]{
 		var i : Int;
 		var j : Int = 0n;
 		var buffer:String =  "";
 		val x = new Rail[Int](3,0n); // three parameters are expected
 		for(i = 0n ; i < line.length() ; i++){
	 		if( line(i) == ' ' || line(i) == '\n' ){// Skip blank spaces and new line
	 			x(j++) = Int.parse(buffer);
	 			//Console.OUT.println("x "+(j-1)+" = "+x(j-1));
	 			buffer = "";
	 		}else{
	 			buffer += line(i);
	 		}
 		}
 		x(j) = Int.parse(buffer);
 		return x;
 	}

 	private def readMatrix(fr:FileReader, sizeF:Int){
 		try{
 			var i : Int = 0n;
 			var j : Int;
 			var buffer:String;
 			var fLine:Int = 0n;
 			var dLine:Int = 0n;
 			for (line in fr.lines()){// It seems that the end of line characters '\n' are removed from the line
 				//Console.OUT.println("Línea: " + line);
 				i++;
 				buffer = ""; j = 0n;
 				if (i >= 2n && i < sizeF + 2){
 					for(char in line.chars()){
 						if(char == ' '){
 							if(!buffer.equals("")){
 								if (j < sizeF){
 									this.flow(fLine)(j++) = Int.parse(buffer);
 								}
 							}
 							buffer = "";
 						}else{
 							buffer += char;
 						}                       
 					}
 					// Get the last number before the end of line  
 					if(!buffer.equals("")){
 						flow(fLine)(j++) = Int.parse(buffer);
 					}
 					fLine++;
 				}else if (i > sizeF + 2 && i <= sizeF * 2 + 2){
 					//Console.OUT.println("mD:"+i+" :"+line);
 					// Reading Distance Matrix
 					for(char in line.chars()){
 						if( char == ' '){
 							if(!buffer.equals("")){
 								if (j < sizeF){
 									dist(dLine)(j++)= Int.parse(buffer);
 									//Console.OUT.println("mDist "+(dLine)+","+(j-1)+" = "+(mD(dLine)(j-1)));
 								}
 							}
 							buffer = "";	
 						}else{
 							buffer += char;
 						}                       
 					}
 					// Get the last number before the end of line  
 					if(!buffer.equals("")) {
 						dist(dLine)(j++)= Int.parse(buffer);
 						//Console.OUT.println("mDist "+(dLine)+","+(j-1)+" = "+(mD(dLine)(j-1)));
 					}
 					dLine++;
 				}
 			}
 			//printMatrix(sizeF, flow);
 			//printMatrix(sizeF, dist);
 		}catch(Exception){
 			Console.OUT.println("Error reading file");
 			//EOF
 		}
 	}
 
 	public def clearProblemModel(){
 		this.delta = new Array_2 [Long](size, size , 0);
 	}
 
 	public def printMatrix(size:Int, matrix:Rail[Rail[Int]]){
 		Console.OUT.println("*******");
 		for(var i:Int = 0n; i < size; i++){
 			for(var j:Int = 0n; j < size; j++){
 				Console.OUT.print(matrix(i)(j) + " ");
 			}
 			Console.OUT.println("");
 		}
 	}

/**
 *  CHECK_SOLUTION
 * 
 *  Checks if the solution is valid.
 */

 	public def verify(sz:Long, match:Valuation(sz)) : Boolean{
 		//Check Permutation
 		val permutV = new Rail[Int](sz, 0n);
 		val baseV = this.baseValue;
 		for (mi in match.range()){
 			val value = match(mi);
 			permutV(value-baseV)++;
 			if (permutV(value-baseV) > 1){
 				Console.OUT.println("Not valid permutation, value "+ value +" is repeted");
 			}
 		}
 		var i : Long, j : Long;
 		var r : Long  = 0;

 		for(i = 0; i < sz; i++)
 			for(j = 0; j < sz; j++)
 				r += this.flow(i)(j) * this.dist(match(i))(match(j));
 		return (r == 0);
 	}

 	private def printMatrices(){
 		Console.OUT.println("\nMatrix1");
 		var i : Int = 0n;
 		for ( i = 0n; i < size; i++ ){
 			Console.OUT.print( (i+1) + " : ");
 			for(j in this.flow(i))
 				Console.OUT.print( j + " ");
 			Console.OUT.println("");
 		}
 		Console.OUT.println("Matrix2");
 		for ( i = 0n; i < size; i++ ){
 			Console.OUT.print( (i+1) + ": ");
 			for( j in this.dist(i))
 				Console.OUT.print( j + " ");
 			Console.OUT.println("");
 		}
 	}
}
public type QAPModel(sz:Long)=QAPModel{self.size==sz};
