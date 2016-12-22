package cpls;

import cpls.util.RandomTools;
import cpls.util.Logger;
import cpls.ParamManager;
import cpls.problem.ProblemGenericModel;
import cpls.problem.*;
import cpls.entities.NodeConfig;
import cpls.entities.CPLSConfig;
import x10.array.Array_2;

public class Main {
 	
 	public static def main(args: Rail[String]) {
 
 		var opts:ParamManager = new ParamManager(args);
 		var configCPLS:CPLSConfig = new CPLSConfig();
 		
 		//*********************Problem Identification***************************//
 		val problemString = opts("-p", "MSP");
 		val problem = problemDetect(problemString);
 		val size = opts("-s", 10);
 		val problemModel = COPModelProblemFactory.make(problem, size as Int);
 		configCPLS.setProblemModel(problemModel);
 		//*********************************************************************//
 		
 		//**********************Structure Definition***************************//
 		val nodesPerTeam = opts("-N", 1n);
 		val numberOfTeams = Place.MAX_PLACES as Int/nodesPerTeam;
 		val heuristicString = opts("-sl", "AS");
 		val whitMasterNode = opts("-ce", 1n)==0n|false|true; //TODO:Verificar esta asignación condicional
 		val nodeConfigs = heuristicsAndRolesDefinition(heuristicString, numberOfTeams, nodesPerTeam, whitMasterNode);
 		configCPLS.setConfigNodes(nodeConfigs);
 		configCPLS.setIsThereAMasterNode(whitMasterNode);
 		//*********************************************************************// 		
 		NodeInstancer.installSolvers(configCPLS);
 		 
    }
 
 	public static def problemDetect(problem:String):Int{
 		var problemParam:Int;	//
 		if (problem.equalsIgnoreCase("MSP")){
 			Logger.debug(()=>{"Magic Square Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.MAGIC_SQUARE_PROBLEM;
 		}else if(problem.equals("CAP")){
 			Logger.debug(()=>{"Costas Array Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.COSTAS_PROBLEM;
 		}else if(problem.equals("AIP")){
 			Logger.debug(()=>{"All-Interval Array Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.ALL_INTERVAL_PROBLEM;
 		}else if(problem.equals("LNP")){
 			Logger.debug(()=>{"Langford Pairing Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.LANGFORD_PROBLEM;
 		}else if(problem.equals("NPP")){
 			Logger.debug(()=>{"Number Partition Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.PARTIT_PROBLEM;
 		}else if(problem.equals("SMP")){
 			Logger.debug(()=>{"Stable Marriage Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM;
 		}else if(problem.equals("HRP")){
 			Logger.debug(()=>{"Stable Marriage Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM;
 		}else if(problem.equals("QAP")){
 			Logger.debug(()=>{"Stable Marriage Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.QA_PROBLEM;
 		}else{
 			problemParam = CPLSOptionsEnum.SupportedProblems.UNKNOWN_PROBLEM;
 			Console.OUT.println("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP");
 		}
 		return problemParam;
 	}
 
  	public static struct COPModelProblemFactory{
 		public static def make(kind:Int, size:Long):ProblemGenericModel(size){
 			switch(kind as Int){
 				case CPLSOptionsEnum.SupportedProblems.MAGIC_SQUARE_PROBLEM: return new MSPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.COSTAS_PROBLEM: return new CAPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.ALL_INTERVAL_PROBLEM: return new AIPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.LANGFORD_PROBLEM: return new LNPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM: return new SMTIModel(size);
 				case CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM: return new SMTIModel(size);
 				case CPLSOptionsEnum.SupportedProblems.QA_PROBLEM: return new QAPModel(size);
 				default: return new PNPModel(size);
 			}
 		}
 	}
 
 	public static def heuristicsAndRolesDefinition(solverIn:String, numberOfTeams:Int, nodesPerTeam:Int, whitMasterNode:boolean):Array_2[NodeConfig]{
 		//TODO: Validar este parámetros
 		val nodeConfigs = new Array_2[NodeConfig](numberOfTeams, nodesPerTeam, new NodeConfig());	
 		var eachTeam:Rail[String] = solverIn.split("/");
 		var eachNode:Rail[String];
 		
 		for(var i:long=0; i<eachTeam.size; i++){
 			eachNode = eachTeam(i).split(",");
			 for(var j:long=0; j<eachNode.size; j++){
				 nodeConfigs(i,j).setHeuristic(whichHeuristic(eachNode(j)));
				 if(whitMasterNode && i==0){
					 if(j==0){
						 nodeConfigs(i,j).setRol(CPLSOptionsEnum.NodeRoles.MASTER_NODE);
					 }else if(j==1){
						 nodeConfigs(i,j).setRol(CPLSOptionsEnum.NodeRoles.HEAD_NODE);
					 }else{
						 nodeConfigs(i,j).setRol(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE);
					 }				 
				 }else{
					if(j==0){
						nodeConfigs(i,j).setRol(CPLSOptionsEnum.NodeRoles.HEAD_NODE);
					}else{
						nodeConfigs(i,j).setRol(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE);
					} 
				 }
			 }
 		}
 		return nodeConfigs;
 	}
 
	 public static def whichHeuristic(solverIn:String):Int{
		 var solParam:Int;
		 if (solverIn.equalsIgnoreCase("AS"))
		 	solParam = CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
		 else if(solverIn.equals("EO"))
		 	solParam = CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
		 else if(solverIn.equals("RoTS"))
		 	solParam = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
		 else if(solverIn.equals("HY"))
		 	solParam = CPLSOptionsEnum.HeuristicsSupported.Hybrid_SOL;
		 else
		 	solParam = CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
		 return solParam;
	 }

}