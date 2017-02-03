package cpls.solver.entities;

public class ASParameters extends HeuristicParameters{

 	private var nVarToReset:Long;
 	private var resetPercent:Int;
 	private var exhaustive:Boolean; 
 	private var freezeLocMin:Int;
 	private var freezeSwap:Int;
 	private var resetLimit:Int;
 	private var probSelectLocMin:Int;
 	private var firstBest:Boolean;
 
 	public def this(){
 
 	}
 
 	/*public static operator (n:HeuristicParameters) as ASParameters = new ASParameters(n.getNVarToReset(),
 																					  n.getResetPercent(),
 																					  n.getExhaustive(),
 																					  n.getFreezeLocMin(),
 																					  n.getFreezeSwap(),
 																					  n.getResetLimit(),
 																					  n.getProbSelectLocMin(),
 																					  n.getFirstBest());*/
 
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
 
 	public def setParameters(parameters:ASParameters){
		 this.nVarToReset = parameters.nVarToReset; 
		 this.resetPercent = parameters.resetPercent;
		 this.exhaustive = parameters.exhaustive;
		 this.freezeLocMin = parameters.freezeLocMin;
		 this.freezeSwap = parameters.freezeSwap;
		 this.resetLimit = parameters.resetLimit;
		 this.probSelectLocMin = parameters.probSelectLocMin;
		 this.firstBest = parameters.firstBest;
 	}
}