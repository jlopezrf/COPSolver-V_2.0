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

package cpls;

import cpls.entities.State;
import cpls.util.Utils;
import x10.util.Random;

public class GlobalBestConf(sz:Long, globalBestConfSize:Long){
	
	protected var globalBestConf:Rail[State(sz)];
	protected var bestConfEver:State(sz) = new State(sz, Long.MAX_VALUE, null, -1 as Int,null);
	protected var bestConfEverChanged:Boolean = false;
 	protected var randomGenerator:Random;
	
	public def this(size:Long, globalBestConfSize:Long, seed:Long){
		property(size, globalBestConfSize);
 		this.randomGenerator = new Random();
 		randomGenerator.setSeed(seed);
		this.globalBestConf = new Rail[State(sz)](globalBestConfSize, new State(sz, Long.MAX_VALUE, new Rail[Int](sz, 1n), -1 as Int,null));
 		//Console.OUT.println("Creacion del GlobalBestConf: ");
 		var variables:Rail[Int];
 		for(var l:Int = 0n; l < globalBestConfSize; l++){
 			variables = new Rail[Int](sz, (i:Long) => i as Int);
 			for(k in variables.range()){
 				variables(k) = k as Int;
 			}
 			for( var i:Long = sz - 1 ; i > 0 ; i-- ){
 				val j = randomGenerator.nextLong( i + 1 );
 				val x = variables(i);
 				variables(i) = variables(j); 
 				variables(j) = x;
 			}
 			this.globalBestConf(l) = new State(sz, Long.MAX_VALUE, variables as Rail[Int]{self.size == sz}, -1 as Int,null);
 			//Console.OUT.println(this.globalBestConf(i));
 		}
	}
	
	public def put(info:State(sz), index:Int){
		this.globalBestConf(index) = new State(info.sz, info.cost, info.vector, info.place, info.solverState);
		if(info.cost < this.bestConfEver.cost){
			this.bestConfEver = new State(info.sz, info.cost, info.vector, info.place, info.solverState);
			this.bestConfEverChanged = true;
		}
 		//Console.OUT.println("    Informacion en el GlobalBestConf");
 		//for(var i:Int = 0n; i < this.globalBestConf.size; i++){
 		//	Console.OUT.println("    "+ this.globalBestConf(i).vector + "Costo: " +  this.globalBestConf(i).cost);
 		//}
	}
	
	public def get(index:Int):State(sz){
 		val info = new State(this.globalBestConf(index).sz, this.globalBestConf(index).cost, this.globalBestConf(index).vector, this.globalBestConf(index).place, this.globalBestConf(index).solverState);
 		//Console.OUT.println("Se realiza extraccion del globalBestConf");
 		//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
		return info;
	}
	
	public def getBestConfEver(){
		val copy = new State(this.bestConfEver.sz, this.bestConfEver.cost, this.bestConfEver.vector, this.bestConfEver.place, this.bestConfEver.solverState);
		this.bestConfEverChanged = false;
		return copy;
	}
	
	public def isANewBestConfEver(){
		return this.bestConfEverChanged;
	}

 	public def getSize(){
 		return this.globalBestConf.size;
 	}

}
public type GlobalBestConf(s:Long) = GlobalBestConf{self.sz==s};
