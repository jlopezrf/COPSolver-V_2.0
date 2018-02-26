package cpls.entities;

public class ConfigSol {

 	private var variables:Rail[Int];
 	private var cost:Long;
 
 	public def this(){
 	}
 	
 	public def this(variables:Rail[Int], cost:Long){
 		this.variables =variables;
 		this.cost = cost;
 	}
 
 	public def getCost(){
 		return cost;
 	}
 
 	public def setCost(cost:Long){
 		this.cost =cost;
 	}
 
 	public def getVariables(){
 		return variables;
 	}
 
 	public def setVariables(variables:Rail[Int]){
 		this.variables = variables;
 	}
 
}