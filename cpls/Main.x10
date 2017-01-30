package cpls;

import cpls.util.RandomTools;
import cpls.util.Logger;
import cpls.util.CPLSFileReader;
import cpls.ParamManager;
import cpls.problem.ProblemGenericModel;
import cpls.problem.*;
import cpls.entities.NodeConfig;
import cpls.entities.*;
import cpls.entities.CPLSConfig;
import cpls.entities.PoolConfig;
import cpls.solver.entities.*;
import cpls.solver.entities.ASParameters;
import cpls.solver.entities.EOParameters;
import cpls.solver.entities.RoTSParameters;
import x10.array.Array_2;
import cpls.util.CPLSFileReader;

public class Main {
 	
 	public static def main(args: Rail[String]) {
 		var opts:ParamManager = new ParamManager(args);
 		//val path = opts("-f","."); TODO: Jason. Esto lo hago cuando quiera resolver todas las instancias de una carpeta
 		//var listOfInstances : Rail[String] = CPLSFileReader.loadDir(path);
 		var configCPLS:CPLSConfig = new CPLSConfig();
 
 		//********************Params for ProblemGenericModel********************//
 		//val baseValue = opts("-bv", 1n);
 		//val inPath = opts("-if",".");
 		//**********************************************************************//
 
 		//*********************Model Problem Creation**************************//
 		val problemModel = COPProblemModelFactory.make(opts);
 		//problemModel.setBaseValue(baseValue);
 		//problemModel.setInPath(inPath);
 		configCPLS.setProblemModel(problemModel);
 		//*********************************************************************//
 		
 		//**********************Structure Definition***************************//
 		val nodesPerTeam = opts("-N", 1n);
 		val numberOfTeams = Place.MAX_PLACES as Int/nodesPerTeam;
 		val heuristicString = opts("-sl", "AS");
 		var whitMasterNode:Boolean = true;
 		if(opts("-ce", 1n)==0n){
 			whitMasterNode = false;
 		}
 		val nodeConfigs = heuristicsAndRolesDefinition(heuristicString, numberOfTeams, nodesPerTeam, whitMasterNode);
 		configCPLS.setConfigNodes(nodeConfigs);
 		configCPLS.setIsThereAMasterNode(whitMasterNode);
 		//*********************************************************************//
 		
 		//***************************Pools Options*****************************//
 		val cplsPoolConfig = new PoolConfig(problemModel.getSize() as Long, opts("P_lm", 4n), opts("P_lmM", 0n), opts("P_lmD", 0.5));
 		val teamsPoolConfig = new PoolConfig(problemModel.getSize() as Long, opts("P_e", 4n), opts("P_eM", 0n), opts("P_eD", 0.5));
 		configCPLS.setCPLSPoolConfig(cplsPoolConfig);
 		configCPLS.setTeamsPoolConfig(teamsPoolConfig);
 		//*********************************************************************//
 
 		//*********************Heuristic Parameters read***********************//
 		
 		//*********************Generic Parameters******************************//
 		configCPLS.setMaxTime(opts("-mt", 0));
 		configCPLS.setPMaxIters(opts("-mi", 100000000));
 		configCPLS.setMaxRestarts(opts("-mr", 0n));
 		configCPLS.setReportPart(opts("-rp", 0n) == 1n);
 		configCPLS.setModParams(opts("-M", 1n));
 		configCPLS.setChangeOnDiver(opts("-CD", 1n));
 		configCPLS.setVerify(opts("-v", 0n) == 1n);
 		configCPLS.setSeed(opts("-S", System.nanoTime()));
 		configCPLS.setIterations(opts("-b", 10n));
 		//*************************In/Out forms of params************************//
 		val outFormat	   = opts("-of", 1n);
 		val costFromF      = opts("-tf", 0);
 		val tCostFromCL    = opts("-tc", 0n);
 		val testNb         = opts("-b", 10n);
 		//**********************************************************************//

 		var c : Long = 0;
 		var sl : Boolean = false;
 		if ( costFromF == 0 ) { // target cost loaded from command line parameter
 			if (tCostFromCL >= 0){ // get lower or equal to target 
 				c = tCostFromCL;
 				sl = false;
 			} else { 
 				c = tCostFromCL * -1;
 				sl = true;
 			}
 		} 	//Jason: Comento esta parte por la lectura de parametros desde archivo
 			//else { // target cost loaded from file
 			//sl = costFromF < 0; // strictly lower true for negative numbers
 			//if ( costFromF == 1  || costFromF == -1  ) // try to get optimal cost
 			//	c = opt; 
 			//else
 			//	c = bks;
 			//Console.OUT.println("Target from file: "+(sl?"strictly lower than ":" lower or equal than ")+c);
 			//}
 		val tCost = c >= 0 ? c : 0; // if negative cost put default value
 		val sLow = sl;
 		/***********************************************************************/
 		configCPLS.setTargetCost(tCost);
 		configCPLS.setStrictLow(sLow);
 		
 		val rep = opts( "-R", 0n );
 		val upd = opts( "-U", 0n );
 		val adaptiveComm = ( rep == -1n );
 		val reportI =  adaptiveComm ? ((problemModel.size* Math.log(problemModel.size)) as Int) : rep;
 		val updateI =  adaptiveComm ? (2n * reportI) : upd;
 
 		configCPLS.setReport(reportI);
 		configCPLS.setUpdate(updateI);
 		//********************************************************************//
 		//*****************Parameters for AdaptiveSearch**********************//
 		val asParam = new ASParameters(opts("--AS_varToReset",-1) as Long,
 										opts("--AS_resetPer",10n),
 										opts("--AS_exhaustive",0n) == 1n,
 										opts("--AS_freezeLocMin",5n),
 										opts("--AS_freezeSwap",5n),
 										opts("--AS_resetLimit",5n),
 										opts("--AS_probSelecLocMin", 0n),
 										opts("--AS_firstBest",0n) == 1n);
 		//********************************************************************//
 		//**************************Parameters for EOSearch*******************//
 		val eoParam = new EOParameters(opts("--EO_tau", (1.0 + 1.0 / Math.log(problemModel.size))),
 										opts("--EO_pdf", -1n),
 										opts("--EO_selSec", 1n));
 		//********************************************************************//
 		//***********************Parameters for RoTS**************************//
 		val roTSParam = new RoTSParameters(opts("--RoTS_tabu_duration", -1.0),
 											opts("--RoTS_aspiration", -1.0));
 		//*********************************************************************//
 		//******************Setting params to NodeConfigs**********************//
 		for(a in nodeConfigs){
 			if(a.getHeuristicParameters() instanceof ASParameters){
 				a.setHeuristicParameters(asParam);
 			}else if(a.getHeuristicParameters() instanceof EOParameters){
 				a.setHeuristicParameters(eoParam);
 			}else if(a.getHeuristicParameters() instanceof RoTSParameters){
 				a.setHeuristicParameters(roTSParam);
 			} 				
 		}
 		//*********************************************************************//
 		
 		//******************InterTeam Communication Parameters*****************//
 		//Jason: Maybe this is only necessary for Master or Header Nodes, REVIEW !!
 		configCPLS.setOutTeamTime(opts("-I", 0));
 		configCPLS.setMinDistance(opts("-D", 0.3));
 		configCPLS.setIniDelay(opts("-W", 0));
 		configCPLS.setAffectedPer(opts("-A", 1.0));
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
 			Logger.debug(()=>{"HRP Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM;
 		}else if(problem.equals("QAP")){
 			Logger.debug(()=>{"QAP Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.QA_PROBLEM;
 		}else{
 			problemParam = CPLSOptionsEnum.SupportedProblems.UNKNOWN_PROBLEM;
 			Console.OUT.println("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP");
 		}
 		return problemParam;
 	}
 
  	public static struct COPProblemModelFactory{
 		public static def make(opts:ParamManager){
 			val problemString = opts("-p", "MSP");
 			val problem = problemDetect(problemString);
 			val size = opts("-s", 10);
 			val baseValue = opts("-bv", 0n);
 			val inPathDataProblem = opts("-f",".");
 			val inPathVectorSol =  opts("-if",".");
 			val inSeed = opts("-S", System.nanoTime());
 			switch(problem as Int){
 				case CPLSOptionsEnum.SupportedProblems.MAGIC_SQUARE_PROBLEM: return new MSPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.COSTAS_PROBLEM: return new CAPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.ALL_INTERVAL_PROBLEM: return new AIPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.LANGFORD_PROBLEM: return new LNPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM: return new SMTIModel(size);
 				case CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM: return new SMTIModel(size);
 				case CPLSOptionsEnum.SupportedProblems.QA_PROBLEM:
 					val params:Rail[Long] = CPLSFileReader.tryReadParameters(inPathDataProblem);
 					val n1 = params(0) < 0 ? 1 : params(0);
 					var problemModel:QAPModel = new QAPModel(n1, inPathDataProblem, inPathVectorSol, baseValue, inSeed);
 					problemModel.initialize();
 					problemModel.loadData(inPathDataProblem);
 					//problemModel.setBaseValue(baseValue);
 					//problemModel.setInPath(inPath);
 					//problemModel.setSeed(inSeed);
 					return problemModel;
 				default: return new PNPModel(size);
 			}
 		}
 	}
 
 	public static def heuristicsAndRolesDefinition(solverIn:String, numberOfTeams:Int, nodesPerTeam:Int, whitMasterNode:boolean):Array_2[NodeConfig]{
 		//TODO: Validar este parámetros
 		var nodeConfigs:Array_2[NodeConfig] = new Array_2[NodeConfig](numberOfTeams, nodesPerTeam, new ExplorerConfig());	
 		var eachTeam:Rail[String] = solverIn.split("/");
 		var eachNode:Rail[String];

 		for(var i:long=0; i<eachTeam.size; i++){
 			eachNode = eachTeam(i).split(",");
			 for(var j:long=0; j<eachNode.size; j++){

			 	if(whitMasterNode){
			 		if(i == 0){
			 			if(j == 0){
			 				nodeConfigs(i,j) = new MasterConfig();
			 			}else if(j == 1){
			 				nodeConfigs(i,j) = new HeadConfig();
			 			}else{
			 				nodeConfigs(i,j) = new ExplorerConfig();
			 			}
			 		}else{
			 			if(j == 0){
			 				nodeConfigs(i,j) = new HeadConfig();
			 			}else{
			 				nodeConfigs(i,j) = new ExplorerConfig();
			 			}
			 		}
			 	}else{
			 		if(j == 0){
			 			nodeConfigs(i,j) = new HeadConfig();
			 		}else{
			 			nodeConfigs(i,j) = new ExplorerConfig();
			 		}
			 	}
				nodeConfigs(i,j).setHeuristicParameters(whichHeuristicParam(eachNode(j)));
 				nodeConfigs(i,j).setHeuristic(whichHeuristicInt(eachNode(j)));
			 }
 		}
 		return nodeConfigs;
 	}
 
	public static def whichHeuristicParam(solverIn:String):HeuristicParameters{
		//Console.OUT.println("Imprimiendo desde whichHeuristic (String): " + solverIn);
	 	var heuParam:HeuristicParameters;
		if (solverIn.equalsIgnoreCase("AS"))
			heuParam = new ASParameters();// CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
		else if(solverIn.equals("EO"))
		 	heuParam = new EOParameters();//CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
		else if(solverIn.equals("RoTS"))
		 	heuParam = new RoTSParameters(); //CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
		else if(solverIn.equals("HY"))
		 	heuParam = new RoTSParameters();//CPLSOptionsEnum.HeuristicsSupported.Hybrid_SOL;
		else
		 	heuParam = new RoTSParameters();//CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
			//Console.OUT.println("Imprimiendo desde whichHeuristic (Int): " + solParam);
		return heuParam;
	 }

 	public static def whichHeuristicInt(solverIn:String):Int{
 		var heuParam:Int;
 		if (solverIn.equalsIgnoreCase("AS"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
 		else if(solverIn.equals("EO"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
 		else if(solverIn.equals("RoTS"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
 		else if(solverIn.equals("HY"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.Hybrid_SOL;
 		else
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
 		//Console.OUT.println("Imprimiendo desde whichHeuristic (Int): " + solParam);
 		return heuParam;
 	}

}
