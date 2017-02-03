package cpls.solver.entities;

public class RoTSParameters extends HeuristicParameters{
	private var tabuDurationFactorUS:Double;
	private var aspirationFactorUS:Double;
	
 	public def this(){

 	}

 	public def this(tabuDurationFactorUS:Double, aspirationFactorUS:Double){
		this.tabuDurationFactorUS = tabuDurationFactorUS;
		this.aspirationFactorUS = aspirationFactorUS;
	}
	
	public def getTabuDurationFactorUS(){
		return this.tabuDurationFactorUS;
	}
	
	public def getAspirationFactorUS(){
		return this.aspirationFactorUS;
	}

 	public def setParameters(parameters:RoTSParameters){
 		this.tabuDurationFactorUS = parameters.tabuDurationFactorUS;
 		this.aspirationFactorUS = parameters.aspirationFactorUS;
 	}
}