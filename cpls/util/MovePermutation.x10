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