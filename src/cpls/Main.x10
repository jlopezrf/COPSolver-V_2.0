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
import x10.array.Array_2;
import cpls.util.CPLSFileReader;

public class Main {
 	
 	public static def main(args: Rail[String]) {
 		val problemParams = new Rail[Long](2, -1 );
 		var opts:ParamManager = new ParamManager(args);
 		var configCPLS:CPLSConfig = new CPLSConfig();//val path = opts("-f","."); TODO: Jason. Esto lo hago cuando quiera resolver todas las instancias de una carpeta
 													//var listOfInstances : Rail[String] = CPLSFileReader.loadDir(path)
 		//*********************Model Problem Creation**************************//
 		val problemString = opts("-p", "QAP");
 		val problem = problemDetect(problemString);
 		val problemModel = COPProblemModelFactory.make(opts, problem, problemParams);
 		configCPLS.setProblemModel(problemModel);
 		//*********************************************************************//
 		
 		//**********************Structure Definition***************************//
 		val nodesPerTeam = opts("-N", 1n);
 		val numberOfTeams = Place.MAX_PLACES as Int/nodesPerTeam;
 		var heuristicString:String = opts("-sl", "AS");
 		var modeIndicator:Boolean = (opts("-ce", 1n)==0n)?false:true;
 		val interTeamCommTime:Long = opts("-I", 0);
 		val affectedPer = opts("-A", 1.0);
 		val iniDelay = opts("-W", 0);
 		val verify  = opts("-v", 0n) == 1n;
 		val changeProb = opts("-C", 100n);
 		val divOption = opts("O", 0n);
 		configCPLS.setVerify(verify);
 		configCPLS.setIsThereAMasterNode(modeIndicator);
 
 		var masterHeuristicAndOthers:Rail[String];
 		if(heuristicString.indexOf('*') != -1n){
 			 masterHeuristicAndOthers = heuristicString.split("*");
			 heuristicString = masterHeuristicAndOthers(1);
			 masterConfig:NodeConfig = new NodeConfig(whichHeuristicInt(masterHeuristicAndOthers(0)), CPLSOptionsEnum.NodeRoles.MASTER_NODE);
			 masterConfig.setHeuristic(whichHeuristicInt(masterHeuristicAndOthers(0)));
			 masterConfig.setNumberOfTeams(numberOfTeams);
			 masterConfig.setNodesPerTeam(nodesPerTeam);
			 masterConfig.setTeamId(-1n);//This is an indicator for the masterNodeTeam
			 masterConfig.setInterTeamCommTime(interTeamCommTime);
			 masterConfig.setAffectedPer(affectedPer);
			 masterConfig.setIniDelay(iniDelay);
			 masterConfig.setVerify(verify);
			 masterConfig.setChangeProb(changeProb);
			 masterConfig.setDiversificationOption(divOption);
			 configCPLS.setMasterConfig(masterConfig);
 		}else if(modeIndicator){
 			Console.OUT.println("Debe indicar una heurística para el nodo master");
 		}
 		
 		val nodeConfigs = heuristicsAndRolesDefinition(heuristicString,
 														numberOfTeams,
 														nodesPerTeam,
 														modeIndicator,
 														interTeamCommTime as Int,
 														affectedPer,
 														iniDelay,
 														verify,
 														changeProb,
 														divOption);
 		if(modeIndicator && (Place.MAX_PLACES != (nodeConfigs.numElems_2*nodeConfigs.numElems_1 + 1))){
 			Console.OUT.println("Inconsistencia en el numero total de nodos");
 				return;
 		}else if(!modeIndicator && (Place.MAX_PLACES != nodeConfigs.numElems_2*nodeConfigs.numElems_1)){
 			Console.OUT.println("Inconsistencia en el numero total de nodos");
 				return;
 		}
 		configCPLS.setConfigNodes(nodeConfigs);
 
 		//*********************************************************************//
 		
 		//***************************Pools Options*****************************//
 		val cplsPoolConfig = new PoolConfig(problemModel.getSize() as Long, opts("P_lm", 4n), opts("P_lmM", 0n), opts("P_lmD", 0.5));
 		val teamsPoolConfig = new PoolConfig(problemModel.getSize() as Long, opts("P_e", 4n), opts("P_eM", 0n), opts("P_eD", 0.5));
 		configCPLS.setCPLSPoolConfig(cplsPoolConfig);
 		configCPLS.setTeamsPoolConfig(teamsPoolConfig);
 		//*********************************************************************//
 		
 		//*********************Generic Parameters******************************/
 		configCPLS.setSeed(opts("-S", System.nanoTime()));
 		configCPLS.setTimesPerInstance(opts("-b", 10n));
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
 				Console.OUT.println("Target from CL: lower or equal than "+c);
 			} else { 
 				c = tCostFromCL * -1;
 				sl = true;
 				Console.OUT.println("Target from CL: strictly lower than "+c);
 			}
 		} else { // target cost loaded from file
 			sl = costFromF < 0; // strictly lower true for negative numbers
 			if ( costFromF == 1  || costFromF == -1  ) // try to get optimal cost
 				c = problemParams(1); //opt 
 			else
 				c = problemParams(2); //bks
 			Console.OUT.println("Target from file: "+(sl?"strictly lower than ":" lower or equal than ")+c);
 		}
 		val tCost = c >= 0 ? c : 0; // if negative cost put default value
 		val sLow = sl;
 
 		//Jason: Ver si esto modifica algo de forma considerable, estas lineas las comenté
 		//insNb++;
 		//if ( mode == 1 && outFormat == 1n )
 		//	Console.OUT.println("\n"+instance);
 		printHeader(outFormat,problem);

 		/***********************************************************************/
 		configCPLS.setTargetCost(tCost);
 		configCPLS.setStrictLow(sLow);
 		//********************************************************************//

 		//******************InterTeam Communication Parameters*****************//
 		//Jason: Maybe this is only necessary for Master or Header Nodes, REVIEW !!
 		configCPLS.setMinDistance(opts("-D", 0.3));
 		//*********************************************************************//
 		NodeInstancer.installSolvers(configCPLS, opts);
 		 
    }
 
 
 	public static def heuristicsAndRolesDefinition(solverIn:String,
 													numberOfTeams:Int,
 													nodesPerTeam:Int,
 													modeIndicator:boolean,
 													interTeamCommTime:Int,
 													affectedPer:Double,
 													iniDelay:Long,
 													verify:Boolean,
 													changeProb:Int,
 													divOption:Int):Array_2[NodeConfig]{
 		var nodeConfigs:Array_2[NodeConfig] = new Array_2[NodeConfig](numberOfTeams, nodesPerTeam, new NodeConfig());
 		var teamsWithMultiplicity:Rail[String];
 		if(solverIn.indexOf('-') != -1n)
 			teamsWithMultiplicity = solverIn.split("-");
 		else
 			teamsWithMultiplicity = new Rail[String](1, solverIn);
 		var teams:Rail[String];
 		var nodesWithMultiplicity:Rail[String];
 		var nodes:Rail[String];
 		var heuristic:String;
 		var multiplicityOfTeam:Int;
 		var multiplicityOfNode:Int;
 		var counter:Int = 0n;
 		var k:Int = 0n,l:Int = 0n,m:Int = 0n,n:Int = 0n, i:Int= 0n, j:Int = 0n;
 		if(teamsWithMultiplicity != null && teamsWithMultiplicity.size > 0){
 			for(k = 0n; k < teamsWithMultiplicity.size; k++){
 				if(teamsWithMultiplicity(k).indexOf('/') != -1n){
 					teams = teamsWithMultiplicity(k).split("/");
 				}else{
 					teamsWithMultiplicity(k) = teamsWithMultiplicity(k) + "/1";
 					teams = teamsWithMultiplicity(k).split("/");
 				}
 				if(teams != null && teams.size > 0){
 					nodesWithMultiplicity = teams(0).split(",");
 					multiplicityOfTeam = Int.parseInt(teams(1));
 					for(l = 0n; l < multiplicityOfTeam; l++){
 						for(m = 0n; m < nodesWithMultiplicity.size; m++){
 							if(nodesWithMultiplicity(m).indexOf("x") != -1n){
 								nodes = nodesWithMultiplicity(m).split("x");
 							}else{
 								nodesWithMultiplicity(m) = nodesWithMultiplicity(m) + "x1";
 								nodes = nodesWithMultiplicity(m).split("x");
 							}
 							multiplicityOfNode = Int.parseInt(nodes(1));	
 							heuristic = nodes(0);
 							for(n = 0n; n < multiplicityOfNode; n++){
 								i = counter/nodesPerTeam;
 								j = counter%nodesPerTeam;
 								if(counter%nodesPerTeam == 0n)
									nodeConfigs(i,j) = new NodeConfig(whichHeuristicInt(heuristic),
									 						CPLSOptionsEnum.NodeRoles.HEAD_NODE);
 								else
 									nodeConfigs(i,j) = new NodeConfig(whichHeuristicInt(heuristic),
 															CPLSOptionsEnum.NodeRoles.EXPLORER_NODE);
								nodeConfigs(i,j).setHeuristic(whichHeuristicInt(heuristic));
								nodeConfigs(i,j).setNumberOfTeams(numberOfTeams);
								nodeConfigs(i,j).setNodesPerTeam(nodesPerTeam);
								nodeConfigs(i,j).setTeamId(i as Int);
								nodeConfigs(i,j).setInterTeamCommTime(interTeamCommTime);
								nodeConfigs(i,j).setAffectedPer(affectedPer);
								nodeConfigs(i,j).setIniDelay(iniDelay);
								nodeConfigs(i,j).setVerify(verify);
								nodeConfigs(i,j).setChangeProb(changeProb);
								nodeConfigs(i,j).setDiversificationOption(divOption);
 								counter++;
 							}
 						}
 					}
 				}
 			}
 		}
 		
 		/*var eachNodeWithoutMulti:Rail[String];
 		for(var i:long=0; i<eachTeam.size; i++){
 			
 			eachNodeWithMulti = multiplicityOfTeams(0).split(",");
 			eachNodeWithoutMulti = eachNodeWithMulti(0).split("x");
 
 			for(var j:long=0; j< eachNodeWithoutMulti.size; j++){
 				if(j == 0){
 					nodeConfigs(i,j) = new NodeConfig(whichHeuristicInt(eachNode(j)), CPLSOptionsEnum.NodeRoles.HEAD_NODE);
 				}else{
 					nodeConfigs(i,j) = new NodeConfig(whichHeuristicInt(eachNode(j)), CPLSOptionsEnum.NodeRoles.EXPLORER_NODE);
 				}
 				nodeConfigs(i,j).setHeuristic(whichHeuristicInt(eachNode(j)));
 				nodeConfigs(i,j).setNumberOfTeams(numberOfTeams);
 				nodeConfigs(i,j).setNodesPerTeam(nodesPerTeam);
 				nodeConfigs(i,j).setTeamId(i as Int);
 				nodeConfigs(i,j).setInterTeamCommTime(interTeamCommTime);
 				nodeConfigs(i,j).setAffectedPer(affectedPer);
 				nodeConfigs(i,j).setIniDelay(iniDelay);
 				nodeConfigs(i,j).setVerify(verify);
 				nodeConfigs(i,j).setChangeProb(changeProb);
 				nodeConfigs(i,j).setDiversificationOption(divOption);
 			}
 		}*/
 		return nodeConfigs;
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
 		public static def make(opts:ParamManager, problem:Int, problemParams:Rail[Long]){
 			val size = opts("-s", 10);
 			val baseValue = opts("-bv", 0n);
 			val inPathDataProblem = opts("-f",".");
 			val inPathVectorSol =  opts("-if",".");
 			val inSeed = opts("-S", System.nanoTime());
 			switch(problem as Int){
 				case CPLSOptionsEnum.SupportedProblems.MAGIC_SQUARE_PROBLEM:
 					return new MSPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.COSTAS_PROBLEM: return new CAPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.ALL_INTERVAL_PROBLEM: return new AIPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.LANGFORD_PROBLEM: return new LNPModel(size);
 				case CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM: return new SMTIModel(size);
 				case CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM: return new SMTIModel(size);
 				case CPLSOptionsEnum.SupportedProblems.QA_PROBLEM:
 					val params:Rail[Long] = CPLSFileReader.tryReadParameters(inPathDataProblem, problemParams);
 					val n1 = params(0) < 0 ? 1 : params(0);
 					var problemModel:QAPModel = new QAPModel(n1, inPathDataProblem, inPathVectorSol, baseValue, inSeed);
 					problemModel.initialize();
 					problemModel.loadData(inPathDataProblem);
 					return problemModel;
 				default: return new PNPModel(size);
 			}
 		}
 	}

 	public static def whichHeuristicInt(solverIn:String):Int{
 		var heuParam:Int;
 		if (solverIn.equalsIgnoreCase("AS"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
 		else if(solverIn.equals("EO"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
 		else if(solverIn.equals("RoTS"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
 		else if(solverIn.equals("GA"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.GA_SOL;
 		else if(solverIn.equals("HY"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.Hybrid_SOL;
 		else
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
 		return heuParam;
 	}
 
 	public static def printHeader(outF : Int, problem:Int){
 		if(outF == 1n){
 			if (problem == CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM || problem == CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM){	
 				Console.OUT.println("|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|");
 				Console.OUT.println("| Count | Time (s) |  Iters   | Place  |  LocMin  |  Swaps   |  Resets  | Sa/It |ReSta| BP  | Sng | Cng  | frP-frT |  PS | TS |final cost|  gap  |   state   |   wtime  |");
 				Console.OUT.println("|-------|----------|----------|--------|----------|----------|----------|-------|-----|-----|-----|------|---------|-----|----|----------|-------|-----------|----------|");
 			}else {
 				Console.OUT.println("|-----------------------------------------------------------------------------------------------------------------------------------------------------------|");
 				Console.OUT.println("| Count | Time (s) |  Iters   | Place  |  LocMin  |  Swaps   |  Resets  | Sa/It |ReSta| Cng  | frP-frT |  PS | TS |final cost|  gap  |   state   |   wtime  |");
 				Console.OUT.println("|-------|----------|----------|--------|----------|----------|----------|-------|-----|------|---------|-----|----|----------|-------|-----------|----------|");		 
 			}
 		}
 	}

}
