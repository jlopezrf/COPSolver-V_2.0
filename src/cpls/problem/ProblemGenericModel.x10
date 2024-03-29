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

import x10.util.Random;
import x10.io.FileReader;
import x10.io.File;
import cpls.util.Utils;
import cpls.util.Valuation;

public class ProblemGenericModel(size:Long){
 
 	//public val variables = new Rail[Int](size, (i:Long) => i as Int);
 	protected var baseValue:Int;
 	protected var inSeed:Long;
 	protected var r:Random;
 	protected var inPathDataProblem:String;
 	protected var inPathVectorSol:String;
 
 	public def this(sizeProblem:Long){
 		property(sizeProblem);
 		this.r = new Random(); //TODO: Jason. Verificar si es necesario crear este Random con una semilla
 		//Console.OUT.println("Constructor de ProblemGenericModelInvocado");
 	}

 	public def setBaseValue(baseValue:Int){
 		this.baseValue = baseValue;
 	}
 
 	public def setInPathDataProblem(inPathDataProblem:String){
 		this.inPathDataProblem = inPathDataProblem;
 	}
 
 	public def getInPathVectorSol(){
 		return this.inPathVectorSol;
 	}
 
 	public def getBaseValue(){
 		return this.baseValue;
 	}
 
 	public def getInPathDataProblem(){
 		return this.inPathDataProblem;
 	}
 
 	public def setInPathVectorSol(inPathVectorSol:String){
 		this.inPathVectorSol = inPathVectorSol;
 	}


 	public def setSeed(seed:Long){
 		this.inSeed = seed;
 	}
 	
 	public def getSize(){
 		return size;
 	}
      
      /**
       * 	Cost on variable function (may be virtual)
       */
    public def costOnVariable(i:Long):Long{
  		Console.OUT.println("Error bad costOnVariable");
  		return 0;
  	}
  
  /**
   * 	Cost if swap function
   */
  	public def costIfSwap(current_cost:Long, i1:Long, i2:Long):Long{
  		Console.OUT.println("Error costIfSwap");
  		return 0;
  	}
  
  /**
   * 	executed swap
   */
  	//variables:Rail[Int]{self.size == this.size}
  	public def executedSwap(sz:Long, i1:Long, i2:Long, variables:Valuation(sz)):void{
  		Console.OUT.println("Error no executedSwap implementation");
  	}

  	/*public def swapVariables( i:Long, j:Long, variables):void{
  		val x = variables(i);
  		variables(i) = variables(j); 
  		variables(j) = x;
  	}*/
  
  	public def costOfSolution(sz:Long, shouldBeRecorded:Boolean, solution:Valuation(sz)):Long{
  		Console.OUT.println("Error costOfSolution");
  		return 0;
  	}
  	
  	public def costOfSolution(sz:Long, solution:Valuation(sz)):Long {
  		Console.OUT.println("Error costOfSolution");
  		return 0;
  	}
  
  	static def show(s:String, d: Rail[Int]) {
  		x10.io.Console.OUT.print(s + " = ");
  		for(p in d.range()) 
  			x10.io.Console.OUT.print(" " + d(p));
  			x10.io.Console.OUT.println("");
  	}
  
  	public def initialize(inSeed:Long):Valuation(size){;//Rail[Int]{self.size == this.size}{
  		var variables:Valuation(size) = new Rail[Int](size, (i:Long) => i as Int);//Rail[Int]{self.size == this.size} = new Rail[Int](size, (i:Long) => i as Int);
  		this.r.setSeed(inSeed);
  		if (!inPathVectorSol.equalsIgnoreCase(".")){
  			//initialize from inVector
  			val fileIn = new FileReader(new File(inPathVectorSol));
  			val line = fileIn.readLine();
  			var i : Int;
  			var j : Long = 0;
  			var buffer:String = "";
  			for(i = 0n ; i < line.length() ; i++){
  				if( line(i) == ' ' || line(i) == '\n' ){
  					variables(j++) = Int.parse(buffer);
  					//Console.OUT.println("var "+(j-1)+" = "+variables(j-1));
  					buffer = "";
  				}else{
  					buffer += line(i);
  				}
  			}
  			if ( !buffer.equals("") ){
  				variables(j++) = Int.parse(buffer);
  				//Console.OUT.println("var "+(j-1)+" = "+variables(j-1));
  			}
  			if(j < size)
  				Console.OUT.println("ModelAS ERROR: The input vector is shorter than the variables array. Valor j: " + j);  
  				// check permutation, if a value is repeated, then its not a valid permutation
  				val permutV = new Rail[Int](size, 0n);
  				for (mi in variables.range()){
  					val value = variables(mi);
  					permutV(value-1)++;
  					if (permutV(value-1)>1){
  						Console.OUT.println("ERROR: Not valid permutation, value "+ value +" is repeted "+mi);
  					}
  				}
  				Utils.show("after ini",variables);  
  		}else{
  			for(k in variables.range()){
  				variables(k) = this.baseValue + k as Int;
  				//Console.OUT.println("Variables position " + k + ": " + variables(k));
  			}
  			for( var i:Long = size - 1 ; i > 0 ; i-- ){
  				val j = r.nextLong( i + 1 );
  				val x = variables(i);
  				variables(i) = variables(j); 
  				variables(j) = x;
  			}
  		}
  		return variables as Valuation(size);
 	}
  
  	public def clearProblemModel(){
  		Console.OUT.println("Error. clearProblemModel invoke in HeuristicSolver");
  	}
  
  /**
   * 	Default Reset function
   * 	@param n number of variables to reset
   * 	@param totalcost not used (for support more complex implementations)
   * 	@return -1 for recompute cost
   */
  	/*public def reset ( var n : Long, totalCost : Long ) : Long {
  		while( n-- != 0 ){
  			val i = r.nextLong(this.size);
  			val j = r.nextLong(this.size);
  			swapVariables(i,j);
  		}
  		return -1n;
  	}*/
  
  	/*public def setVariables(array : Rail[Int]{self.size==variables.size}){
  		Rail.copy(array,this.variables);
  	}*/
  
  	public def displaySolution(sz:Long, conf:Valuation(sz)){
  		Utils.show("Solution",conf);
  	}
  
  	//public def verify(conf:Valuation(size)):Boolean=false;
  	public def verify(sz:Long, conf:Valuation(sz)):Boolean{
  		Console.OUT.println("Se ingresa al Verify de ProblemGenericModel");
  		return true;
  	}
  
  	/*public def getVariables():Valuation(size){
  		return variables;
  	}*/
  
  	public def nextJ(i:Long, j:Long, exhaustive:Boolean) : Long {
  		///Console.OUT.println("i= "+i+"  j= "+j+"  bp-i= "+bpi(i));
  		var newj:Long = j;
  		if (j < 0 && exhaustive) // != 0n)
  			newj = i;
  		return newj + 1;
  	}
  
  	public def nextI(i:Long) : Long{
  		return i + 1;
  	}
  
  public def createNewSol(){
  	var variables:Valuation(size) = new Rail[Int](size, (i:Long) => i as Int);
  	for(k in variables.range()){
  		variables(k) = this.baseValue + k as Int;
  	}
  	for( var i:Long = size - 1 ; i > 0 ; i-- ){
  		val j = r.nextLong( i + 1 );
  		val x = variables(i);
  		variables(i) = variables(j); 
  		variables(j) = x;
  	}
  	return variables as Valuation(size);
  }
 
  //Jason: Esta es como una especie de distancia de Hamming normalizada
  //Devuelve una medida entre 0 y 1 de cuantas componenes tienen iguales
  	public def distance(sz:Long, conf1 : Rail[Int]{self.size == sz}, conf2 : Rail[Int]{self.size == sz}): Double {
  		var count : Int = 0n;
  		for (i in 0n..(size as Int - 1n)){
  			//Logger.debug("comparing: "+conf1(i)+" - "+conf2(i));
  			if(conf1(i) != conf2(i)) count++; 
  		}
  		val dis = count as Double / size;
  		//Console.OUT.println("distance in ModelAS = "+dis);
  		return dis;
  	}
}
public type ProblemGenericModel(sz:Long) = ProblemGenericModel{self.size==sz};
