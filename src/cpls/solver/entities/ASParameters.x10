package cpls.solver.entities;

public class ASParameters {

 	private var nVarToReset:Long;
 	private var resetPercent:Int;
 	private var exhaustive:Boolean; 
 	private var freezeLocMin:Int;
 	private var freezeSwap:Int;
 	private var resetLimit:Int;
 	private var probSelectLocMin:Int;
 	private var firstBest:Boolean;
 
 	public def this(nVarToReset:Long, resetPercent:Int, exhaustive:Boolean, freezeLocMin:Int, freezeSwap:Int,
 					resetLimit:Int, probSelectLocMin:Int, firstBest:Boolean){
 		this.nVarToReset = nVarToReset; 
 		this.resetPercent = resetPercent;
 		this.exhaustive = exhaustive;
 		this.freezeLocMin = freezeLocMin;
 		this.freezeSwap = freezeSwap;
 		this.resetLimit = resetLimit;
 		this.probSelectLocMin = probSelectLocMin;
 		this.firstBest = firstBest;
 	}
 
 	public def getNVarToReset(){
 		return this.nVarToReset;
 	}
 
 	public def getResetPercent(){
 		return this.resetPercent;
 	}
 
 	public def getExhaustive(){
 		return this.exhaustive;
 	}
 
 	public def getFreezeLocMin(){
 		return this.freezeLocMin;
 	}
 
 	public def getFreezeSwap(){
 		return this.freezeSwap;
 	}
 
 	public def getResetLimit(){
 		return this.resetLimit;
 	}
 
 	public def getProbSelectLocMin(){
 		return this.probSelectLocMin;
 	}
 
 	public def getFirstBest(){
 		return this.firstBest;
 	}
}