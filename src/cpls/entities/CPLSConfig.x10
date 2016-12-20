package cpls.entities;

import cpls.problem.ProblemGenericModel;
import x10.array.Array_2; 

public class CPLSConfig {
 	private var isThereAMasterNode:boolean;
 	private var configNodes:Array_2[NodeConfig];
 	private var problemModel:ProblemGenericModel;
 
 	public def setProblemModel(problemModel:ProblemGenericModel){
 		this.problemModel = problemModel;
 	}
 	
 	public def setIsThereAMasterNode(isThereAMasterNode:boolean){
 		this.isThereAMasterNode = isThereAMasterNode;
 	}
 	
 	public def setConfigNodes(configNodes:Array_2[NodeConfig]){
 		this.configNodes = configNodes;
 	}
 	
 	public def getConfigNodes(){
 		return this.configNodes;
 	}
}