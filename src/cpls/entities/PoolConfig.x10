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

package cpls.entities;

public class PoolConfig {
	private var problemSize:Long;
	private var poolSize:Int;
	private var poolMode:Int;
	private var minDist:Double;
	
	public def this(problemSize:Long, poolSize:Int, poolMode:Int, minDist:Double){
		this.problemSize = problemSize;
		this.poolSize = poolSize;
		this.poolMode = poolMode;
		this.minDist = minDist;
	}
	
	public def getProblemSize(){
		return this.problemSize;
	}
	
	public def getPoolSize(){
		return this.poolSize;
	}
	
	public def getPoolMode(){
		return this.poolMode;
	}
	
	public def getMinDist(){
		return this.minDist;
	}
	
	public def setProblemSize(problemSize:Long){
		this.problemSize = problemSize;
	}
	
	public def setPoolSize(poolSize:Int){
		this.poolSize = poolSize;
	}
	
	public def setPoolMode(poolMode:Int){
		this.poolMode = poolMode;
	}
	
	public def setMinDist(minDist:Double){
		this.minDist = minDist;
	}
}
