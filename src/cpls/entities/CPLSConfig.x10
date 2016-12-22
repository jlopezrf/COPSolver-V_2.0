package cpls.entities;

import cpls.problem.ProblemGenericModel;
import x10.array.Array_2;
import cpls.entities.NodeConfig;

public class CPLSConfig {
 	private var isThereAMasterNode:boolean;
 	private var configNodes:Array_2[cpls.entities.NodeConfig];
 	private var problemModel:ProblemGenericModel;
 
 	public def setProblemModel(problemModel:ProblemGenericModel){
 		this.problemModel = problemModel;
 	}
 	
 	public def setIsThereAMasterNode(isThereAMasterNode:boolean){
 		this.isThereAMasterNode = isThereAMasterNode;
 	}
 	
 	public def getIsThereAMasterNode(){
 		return this.isThereAMasterNode;
 	}
 	
 	public def setConfigNodes(configNodes:Array_2[NodeConfig]){
 		this.configNodes = configNodes;
 	}
 	
 	public def getConfigNodes():Array_2[cpls.entities.NodeConfig]{
 		return this.configNodes;
 	}
 	
}