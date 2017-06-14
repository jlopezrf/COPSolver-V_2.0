//Estrategia de depuración:
//MsgType_0: Mensajes para probar la instanciación de lo nodos y las iteraciones correspondientes a la
//cantidad de veces que se resuelve una misma instancia. Sirve para determinar que se cumplan los ciclos,
//para saber cuando se encuentra el valor objetivo (BKS, óptimo) y cuando no, el valor del costo final
//y la solución correspondiente.
//MsgType_1: Los utilizo para cuando se visualiza una falla en el caso MsgType_0; normalmente ocurre
//que el programa se queda colgado y entonces es necesario determinar en el ciclo interno cual es el
//punto exacto donde se queda colgado.

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
import x10.util.StringUtil;
import x10.util.Random;

public class Main {
 	
 	public static def main(args: Rail[String]) {
 		val problemParams = new Rail[Long](3, -1 );
 		var opts:ParamManager = new ParamManager(args);
 		var configCPLS:CPLSConfig = new CPLSConfig();
 
 		//*********************Model Problem Creation**************************//
 		val problemString = opts("-p", "QAP");
 		val problem = problemDetect(problemString);
 		val inSeed = opts("-S", System.nanoTime());
 		val problemModel = COPProblemModelFactory.make(opts, problem, problemParams, inSeed);
 		configCPLS.setProblemModel(problemModel);
 		//*********************************************************************//
 		
 		//***************************Mode Definition***************************//
 		var modeIndicator:Boolean = (opts("-ce", 1n)==0n) ? false:true;
 		val verify  = opts("-v", 0n) == 1n;
 		configCPLS.setVerify(verify);
 		configCPLS.setIsThereAMasterNode(modeIndicator);
 		//*********************************************************************//
 		
 		//***********************Structure Definition*************************//
 		var masterHeuristicAndOthers:Rail[String];
 		var heuristicString:String = opts("-sl", "AS");
 		var masterHeuristic:String = null;
 		if(heuristicString.indexOf('*') != -1n){
 			 masterHeuristicAndOthers = heuristicString.split("*");
			 heuristicString = masterHeuristicAndOthers(1);
			 masterHeuristic = masterHeuristicAndOthers(0);
			 masterConfig:NodeConfig = makeMasterConfig(opts, problemModel.size, masterHeuristicAndOthers(0));
			 configCPLS.setMasterConfig(masterConfig);
 		}else if(modeIndicator){
 			Console.OUT.println("Error_Ini. Debe indicar una heurística para el nodo master");
 		}
 		
 		val nodeConfigs = heuristicsAndRolesDefinition(opts, problemModel.size, heuristicString, masterHeuristic);
 		
 		if(modeIndicator && (Place.MAX_PLACES != (nodeConfigs.numElems_2*nodeConfigs.numElems_1 + 1))){
 			Console.OUT.println("Error_Ini. if - Inconsistencia en el numero total de nodos: " + nodeConfigs.numElems_2*nodeConfigs.numElems_1);
 				return;
 		}else if(!modeIndicator && (Place.MAX_PLACES != nodeConfigs.numElems_2*nodeConfigs.numElems_1)){
 			Console.OUT.println("Error_Ini. elseif - Inconsistencia en el numero total de nodos" + nodeConfigs.numElems_2*nodeConfigs.numElems_1);
 				return;
 		}
 		configCPLS.setConfigNodes(nodeConfigs);
 		//*********************************************************************//
 		
 		//***************************Pools Options*****************************//
 		val cplsPoolConfig = new PoolConfig(problemModel.size as Long, opts("-P_lm", 4n), opts("-P_lmM", 0n), opts("-P_lmD", 0.5));
 		val teamsPoolConfig = new PoolConfig(problemModel.size as Long, opts("-P_e", 4n), opts("-P_eM", 0n), opts("-P_eD", 0.5));
 		/*val totalNodes = nodeConfigs.numElems_2*nodeConfigs.numElems_1;
 		val nodesPerTeam:Int = opts("-N", 1n);
 		val temPoolSize = 2n*nodesPerTeam;
 		val numberOfTeams = Place.MAX_PLACES as Int/nodesPerTeam;
 		val cplsPoolSize = 2n*numberOfTeams;
 		val cplsPoolConfig = new PoolConfig(problemModel.size as Long, opts("-P_lm", cplsPoolSize as Int), opts("-P_lmM", 0n), opts("-P_lmD", 0.5));
 		val teamsPoolConfig = new PoolConfig(problemModel.size as Long, opts("-P_e", temPoolSize), opts("-P_eM", 0n), opts("-P_eD", 0.5));*/
 		configCPLS.setCPLSPoolConfig(cplsPoolConfig);
 		configCPLS.setTeamsPoolConfig(teamsPoolConfig);
 		//*********************************************************************//
 		
 		//*********************Generic Parameters******************************/
 		configCPLS.setSeed(inSeed);
 		configCPLS.setTimesPerInstance(opts("-b", 10n));
 		//*************************In/Out forms of params************************//
 		val outFormat	   = opts("-of", 1n);
 		val costFromF      = opts("-tf", 0);
 		val tCostFromCL    = opts("-tc", 0n);
 		val testNb         = opts("-b", 10n);
 		configCPLS.setOutFormat(outFormat);
 		//**********************************************************************//

 		var c : Long = 0;
 		var sl : Boolean = false;
 		if ( costFromF == 0 ) { // target cost loaded from command line parameter
 			if (tCostFromCL >= 0){ // get lower or equal to target 
 				c = tCostFromCL;
 				sl = false;
 				Console.OUT.println("Info: Target from CL: lower or equal than "+c);
 			} else { 
 				c = tCostFromCL * -1;
 				sl = true;
 				Console.OUT.println("Info: Target from CL: strictly lower than "+c);
 			}
 		} else { // target cost loaded from file
 			sl = costFromF < 0; // strictly lower true for negative numbers
 			if ( costFromF == 1  || costFromF == -1  ) // try to get optimal cost
 				c = problemParams(1); //opt 
 			else
 				c = problemParams(2); //bks
 			Console.OUT.println("Info: Target from file: "+(sl?"strictly lower than ":" lower or equal than ")+c);
 		}
 		val tCost = c >= 0 ? c : 0; // if negative cost put default value
 		val sLow = sl;
 
 		//Jason: Ver si esto modifica algo de forma considerable, estas lineas las comenté
 		//insNb++;
 		//if ( mode == 1 && outFormat == 1n )
 		//	Console.OUT.println("\n"+instance);
 		//printHeader(outFormat,problem);

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
 
 	public static def makeMasterConfig(opts:ParamManager, problemSize:Long, solverIn:String):NodeConfig{
 		val nodesPerTeam:Int = opts("-N", 1n);
 		masterConfig:NodeConfig = new NodeConfig(whichHeuristicInt(solverIn), CPLSOptionsEnum.NodeRoles.MASTER_NODE);
 		masterConfig.setHeuristic(whichHeuristicInt(solverIn));
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
 		masterConfig.setItersWhitoutImprovements(opts("-iwi", 1000n));
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
 
 	//Jason: Problemas a resolver en este procedimiento
 	//Debería poderse identificar los nodos por equipo a partir del estring de las heuristicas que se utilizaran en la solución,
 	//combinado con la cantidad de nodos a utilizar y la indicación del tipo de estrategia (ce)
 	public static def heuristicsAndRolesDefinition(opts:ParamManager, problemSize:Long, solverIn:String, masterHeuristic:String):Array_2[NodeConfig]{
 
 		val nodesPerTeam:Int = opts("-N", 1n);
 		//Console.OUT.println("Cantidad de places: " + Place.MAX_PLACES);
 		val numberOfTeams:Int = Place.MAX_PLACES as Int/nodesPerTeam;
 		val modeIndicator:boolean = (opts("-ce", 1n)==0n)?false:true;
 		val interTeamCommTime = opts("-I", 0);
 		val affectedPer:Double = opts("-A", 1.0);
 		val iniDelay:Long = opts("-W", 0);
 		val verify:Boolean = opts("-v", 0n) == 1n;
 		val changeProb:Int = opts("-C", 100n);
 		val divOption:Int = opts("O", 0n);
 		//Jason: Migration
 		val nItersWhitoutImprovements = opts("-iwi", 100n);
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
								if(modeIndicator){
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
 								nodeConfigs(i,j).setItersWhitoutImprovements(nItersWhitoutImprovements);
 								nodeConfigs(i,j).setMasterHeuristic(masterHeuristic);
 								counter++;
 							}
 						}
 					}
 				}
 			}
 		}
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
 		public static def make(opts:ParamManager, problem:Int, problemParams:Rail[Long], inSeed:Long){
 			val size = opts("-s", 10); //Jason: Pilas con esto tamaño por defecto !!
 			val baseValue = opts("-bv", 0n);
 			val inPathDataProblem = opts("-f",".");
 			val inPathVectorSol =  opts("-if",".");
 			//val inSeed = opts("-S", System.nanoTime()); 
 			val random = new Random();
 			random.setSeed(inSeed);
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
 					val n1 = params(0) < 0 ? 1 : params(0); //Importante para esto que el tamaño del problema esté en el archivo
 					//Console.OUT.println("Tamaño leido del problema: " + n1);
 					var problemModel:QAPModel = new QAPModel(n1, inPathDataProblem, inPathVectorSol, baseValue);
 					//problemModel.initialize(random.nextLong());
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
}
