package cpls;

import cpls.ParamManager;
import cpls.util.RandomTools;
import cpls.util.Logger;
import cpls.util.CPLSFileReader;
import cpls.problem.ProblemGenericModel;
import cpls.problem.*;
import cpls.entities.NodeConfig;
import cpls.entities.*;
import cpls.entities.CPLSConfig;
import cpls.entities.PoolConfig;
import x10.array.Array_2;
import cpls.util.CPLSFileReader;
import x10.util.StringUtil;
import x10.util.Random;

public class Main {
 	
 	public static def main(args: Rail[String]) {
 		
 		val problemParams = new Rail[Long](3, -1);
 		var opts:ParamManager = new ParamManager(args);
 		var configCPLS:CPLSConfig = new CPLSConfig();
 		val inSeed = opts("-S", System.nanoTime());
 		configCPLS.setSeed(inSeed);
 		Console.OUT.println("The initial seed is: " + inSeed);
 
 		/*********************Problem Model Creation**************************/
 		val problemString = opts("-p", "QAP");
 		val problemInt = CPLSOptionsEnum.stringToIntPassOfProblemId(problemString);
 		val problemModel = ProblemModelFactory.make(opts, problemInt, problemParams, inSeed);
 		configCPLS.setProblemModel(problemModel);
 		/*********************************************************************/
 		
 		/***************************Mode Definition***************************************************/
 		/**ce=0 (Independent Walk), ce=1 (Cooperative Whitout master), ce=2 (Cooperative with master)*/
 		/*********************************************************************************************/
 		var modeIndicator:Int = opts("-ce", 0n);
 		val verify  = opts("-v", 0n) == 1n;	//For indicating if at the final of execution, will be verified if the solution does not have any error
 		configCPLS.setVerify(verify);
 		configCPLS.setModeIndicator(modeIndicator);
 		/*********************************************************************************************/
 		
 		/*********************Solver Structure Definition*********************************************/
 		/** If the execution include a master node (ce=2), then, the fist metaheuristic indicate in the
 		 * -sl parameter will be set to the master node. This metaheuristic must be indicated separately
 		 * from the rest of the string indicated in -sl parameter by a '*' character
 		 * TODO: This part need more validations. It has some inconsistencies
 		/*********************************************************************************************/
 		var withmasterHeurusticSeparated:Rail[String];
 		var masterHeuristic:String = "";
 		var heuristicsString:String = opts("-sl", "AS");

 		//If no indicate a metaheuristic for master, then the masterConfig atribute of the ConfigCPLS is empty
 		if(modeIndicator == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER && heuristicsString.indexOf('*') != -1n){
 			 withmasterHeurusticSeparated = heuristicsString.split("*");
			 heuristicsString = withmasterHeurusticSeparated(1);//In the one position will be the metaheuristic for all teams 
			 masterHeuristic = withmasterHeurusticSeparated(0); //In the zero position will be the master metaheuristic 
			 masterConfig:NodeConfig = makeMasterConfig(opts, problemModel.size, masterHeuristic);
			 configCPLS.setMasterConfig(masterConfig);
 		}
 
 		val nodeConfigs = heuristicsAndRolesDefinition(opts, problemModel.size, heuristicsString);
 		
 		if(modeIndicator == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER && (Place.MAX_PLACES != (nodeConfigs.numElems_2*nodeConfigs.numElems_1 + 1))){
 			Console.OUT.println("Error_Ini. if - Inconsistency in the total number of nodes: " + nodeConfigs.numElems_2*nodeConfigs.numElems_1);
 				return;
 		}
 		configCPLS.setConfigNodes(nodeConfigs);
 		/*********************************************************************************************/
 		
 		/***************************Pools Options*****************************/
 		/* We keep the cpls pool, but at the moment it is not being used	 */
 		/*********************************************************************/
 		val cplsPoolConfig = new PoolConfig(problemModel.size as Long, opts("-P_lm", 4n), opts("-P_lmM", 0n), opts("-P_lmD", 0.5));
 		val teamsPoolConfig = new PoolConfig(problemModel.size as Long, opts("-P_e", 4n), opts("-P_eM", 0n), opts("-P_eD", 0.5));
 		configCPLS.setCPLSPoolConfig(cplsPoolConfig);
 		configCPLS.setTeamsPoolConfig(teamsPoolConfig);
 		/*********************************************************************/
 		
 		/*********************Generic Parameters******************************/
 		/** See the ParamManager class for understand every opts option 	 */
 		/*********************************************************************/
 		val testNb         = opts("-b", 10n);
 		configCPLS.setTimesPerInstance(opts("-b", 10n));
 		
 		val outFormat	   = opts("-of", 1n);
 		configCPLS.setOutFormat(outFormat);
 		
 		val costFromF      = opts("-tf", 0);
 		val tCostFromCL    = opts("-tc", 0n);

 		var c : Long = 0;
 		var sl : Boolean = false;

 		if (costFromF == 0){ 		// target cost loaded from command line parameter
 			if (tCostFromCL >= 0){ 	// get lower or equal to target 
 				c = tCostFromCL;
 				sl = false;
 
 				Console.OUT.println("Info: Target from CL: lower or equal than "+c);
 			} else { 
 				c = tCostFromCL * -1;
 				sl = true;
 				Console.OUT.println("Info: Target from CL: strictly lower than "+c);
 			}
 		} else { 					// target cost loaded from file
 			sl = costFromF < 0; 	// strictly lower true for negative numbers
 			if ( costFromF == 1  || costFromF == -1  ) // try to get optimal cost
 				c = problemParams(1); //opt 
 			else
 				c = problemParams(2); //bks
 			Console.OUT.println("Info: Target from file: "+(sl?"strictly lower than ":" lower or equal than ")+c);
 		}
 		val tCost = c >= 0 ? c : 0; // if negative cost put default value
 		val sLow = sl;
 
 		configCPLS.setTargetCost(tCost);
 		configCPLS.setStrictLow(sLow);
 		/*********************************************************************/

 		/****************** Parameters for master node action ****************/
 		configCPLS.setMinDistance(opts("-D", 0.3));
 		/*********************************************************************/
 
 		NodeInstancer.installSolvers(configCPLS, opts);
 		 
    }
 
 	public static def makeMasterConfig(opts:ParamManager, problemSize:Long, solverIn:String):NodeConfig{
 		val nodesPerTeam:Int = opts("-N", 1n);
 		val intHeuristicId = CPLSOptionsEnum.stringToIntPassForHeuristicId(solverIn);
 		masterConfig:NodeConfig = new NodeConfig(intHeuristicId, CPLSOptionsEnum.NodeRoles.MASTER_NODE);
 		masterConfig.setHeuristic(CPLSOptionsEnum.stringToIntPassForHeuristicId(solverIn));
 		masterConfig.setNumberOfTeams(Place.MAX_PLACES as Int/nodesPerTeam);
 		masterConfig.setNodesPerTeam(nodesPerTeam);
 		masterConfig.setTeamId(-1n);//This is an indicator for the masterNodeTeam
 		masterConfig.setInterTeamCommTime(opts("-I", 0));
 		masterConfig.setAffectedPer(opts("-A", 1.0));
 		masterConfig.setIniDelay(opts("-W", 0));
 		masterConfig.setVerify(opts("-v", 0n) == 1n);
 		masterConfig.setChangeProb(opts("-C", 100n));
 		masterConfig.setDiversificationOption(opts("O", 0n));
 		masterConfig.setMaxTime(opts("-mt", 0));
 		masterConfig.setMaxIters(opts("-mi", 100000000));
 		masterConfig.setMaxRestarts(opts("-mr", 0n));
 		masterConfig.setReportPart(opts("-rp", 0n) == 1n);
 		masterConfig.setModParams(opts("-M", 1n));
 		masterConfig.setChangeOnDiver(opts("-CD", 1n));
 		//Jason: Migration
 		var dCKI:Int = opts("-dCKI", problemSize*1500n) as Int;
 		if(dCKI > 100000){
 			dCKI = 100000n;
 		}
 		masterConfig.setDCKI(dCKI);
 		val rep = opts( "-R", 0n );
 		val upd = opts( "-U", 0n );
 		val adaptiveComm = ( rep == -1n );
 		val reportI =  adaptiveComm ? ((problemSize* Math.log(problemSize)) as Int) : rep;
 		val updateI =  adaptiveComm ? (2n * reportI) : upd;
 		var maxUpdateI:Int;
 		val mustr = System.getenv("MU");
 		if (mustr != null)
 			maxUpdateI = StringUtil.parseInt(mustr);
 		else
 			maxUpdateI = 100000n;
 
 		masterConfig.setReportI(reportI);
 		masterConfig.setUpdateI(updateI);
 		masterConfig.setMaxUpdateI(maxUpdateI);
 		return masterConfig;
 	}
 
 	/*****************************************************************************************/
 	/** This method has the logic for the logic for temas instantiotion **********************/
 	/** - The character ',', indicate the separation of every team.
 	*   - The multiplexity of each team must be indicated with the '/' character followed
  	* 	by an integer indicating the times that this tema will be repeated
 	*   - The multiplexity of each metaheuristic must be indicated with the 'x' character
  	* 	followed by an integer indicating the times that this heuristic will be repeated*/
 	/******** TODO: It should be possible to identify the nodes by team from the string
  	*   of the heuristics that would be used in the solution, combined with the number
  	*   of nodes to be used and the indication of the type of strategy (ce) **********/
 	/*****************************************************************************************/
 	public static def heuristicsAndRolesDefinition(opts:ParamManager, problemSize:Long, solverIn:String):Array_2[NodeConfig]{
 
 		val nodesPerTeam:Int = opts("-N", 1n);
 		val numberOfTeams:Int = Place.MAX_PLACES as Int/nodesPerTeam;
 		var modeIndicator:Int = opts("-ce", 0n);

 		val interTeamCommTime = opts("-I", 0);
 		val affectedPer:Double = opts("-A", 1.0);
 		val iniDelay:Long = opts("-W", 0);
 		val verify:Boolean = opts("-v", 0n) == 1n;
 		val changeProb:Int = opts("-C", 100n);

 		val divOption:Int = opts("O", 0n);
 		//Jason: Migration
 		var dCKI:Int = opts("-dCKI", problemSize*1500n) as Int;
 		if(dCKI > 100000){
 			dCKI = 100000n;
 		}

 		val maxTime = opts("-mt", 0);
 		val maxIters = opts("-mi", 100000000); 
 		val maxRestarts = opts("-mr", 0n);
 		val reportPart = opts("-rp", 0n) == 1n; 
 		val modParams = opts("-M", 1n);
 		val changeOnDiver = opts("-CD", 1n);
 		val rep = opts( "-R", 0n );
 		val upd = opts( "-U", 0n );
 		val adaptiveComm = ( rep == -1n );
 		val reportI =  adaptiveComm ? ((problemSize* Math.log(problemSize)) as Int) : rep;
 		val updateI =  adaptiveComm ? (2n * reportI) : upd;
 		var maxUpdateI:Int;
 		val mustr = System.getenv("MU");
 		if (mustr != null)
 			maxUpdateI = StringUtil.parseInt(mustr);
 		else
 			maxUpdateI = 100000n;
 		
 		var nodeConfigs:Array_2[NodeConfig] = new Array_2[NodeConfig](numberOfTeams, nodesPerTeam, new NodeConfig());
 		//Console.OUT.println("Indices de nodeConfigs: " + numberOfTeams + ", " + nodesPerTeam);
 		var teamsWithMultiplicity:Rail[String];
 		if(solverIn.indexOf('-') != -1n)
 			teamsWithMultiplicity = solverIn.split("-");
 		else
 			teamsWithMultiplicity = new Rail[String](1, solverIn);
 		var teams:Rail[String];
 		var nodesWithMultiplicity:Rail[String];
 		var nodes:Rail[String];
 		var intHeuristicId:Int;
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
 							intHeuristicId = CPLSOptionsEnum.stringToIntPassForHeuristicId(nodes(0));
 							for(n = 0n; n < multiplicityOfNode; n++){
 								i = counter/nodesPerTeam;
 								j = counter%nodesPerTeam;
 								if(counter%nodesPerTeam == 0n && (modeIndicator == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER ||
 										modeIndicator == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITHOUT_MASTER))
									nodeConfigs(i,j) = new NodeConfig(intHeuristicId,
									 						CPLSOptionsEnum.NodeRoles.HEAD_NODE);
 								else
 									nodeConfigs(i,j) = new NodeConfig(intHeuristicId,
 															CPLSOptionsEnum.NodeRoles.EXPLORER_NODE);
								nodeConfigs(i,j).setHeuristic(intHeuristicId);
								nodeConfigs(i,j).setNumberOfTeams(numberOfTeams);
								nodeConfigs(i,j).setNodesPerTeam(nodesPerTeam);
								if(modeIndicator == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER){
 									nodeConfigs(i,j).setTeamId(1n + i*nodesPerTeam);
								}else{
 									nodeConfigs(i,j).setTeamId(i*nodesPerTeam);
								}
								nodeConfigs(i,j).setInterTeamCommTime(interTeamCommTime);
								nodeConfigs(i,j).setAffectedPer(affectedPer);
								nodeConfigs(i,j).setIniDelay(iniDelay);
								nodeConfigs(i,j).setVerify(verify);
								nodeConfigs(i,j).setChangeProb(changeProb);
								nodeConfigs(i,j).setDiversificationOption(divOption);
								nodeConfigs(i,j).setMaxTime(maxTime);
								nodeConfigs(i,j).setMaxIters(maxIters);
								nodeConfigs(i,j).setMaxRestarts(maxRestarts);
								nodeConfigs(i,j).setReportPart(reportPart);
								nodeConfigs(i,j).setModParams(modParams);
								nodeConfigs(i,j).setChangeOnDiver(changeOnDiver);
								nodeConfigs(i,j).setReportI(reportI);
								nodeConfigs(i,j).setUpdateI(updateI);
								nodeConfigs(i,j).setMaxUpdateI(maxUpdateI);
 								//Jason: Migration
 								nodeConfigs(i,j).setDCKI(dCKI as Int);
 								nodeConfigs(i,j).setModeIndicator(modeIndicator);
 								counter++;
 							}
 						}
 					}
 				}
 			}
 		}
 		return nodeConfigs;
 	}
}
