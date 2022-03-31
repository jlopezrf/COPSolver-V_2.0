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

package cpls.util;

/**
 *  Class MovePermutation
 *  This calss models the information related to a Local Move 
 *  on a Permutation problem
 *  The first an second variables contains the index number of 
 *  the variables to swap in the variables array
 */

public class MovePermutation {
	 private var first:Long = -1;
	 private var second:Long = -1;
	 
	 public def this (f:Long, s:Long){
		  this.first = f;
		  this.second = s;
	 }
	 
	 public def getFirst():Long{
		  return first;
	 }
	 public def getSecond():Long{
		  return second;
	 }
	  public def setFirst(f:Long){
		  this.first = f;
	 }
	 public def setSecond(s:Long){
		  this.second = s;
	 }	 
	 
}
