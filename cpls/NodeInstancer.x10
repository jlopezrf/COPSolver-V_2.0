package cpls;

import cpls.problem.ProblemGenericModel;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;
import cpls.entities.*;
import x10.array.Array_2;
import x10.lang.PlaceGroup.SimplePlaceGroup;
import x10.lang.Iterator;
import cpls.util.Logger;
import x10.util.Random;

public class NodeInstancer{
	
	var masterNode:CPLSNode;
	
 	public static def installSolvers(configCPLS:CPLSConfig, opts:ParamManager){
 		//printStructure(configCPLS);
 		val configNodes:Array_2[NodeConfig] = configCPLS.getConfigNodes();	
 		val sz = configCPLS.getProblemModel().size;
 		val refsToPlaces = PlaceLocalHandle.make[CPLSNode(sz)](PlaceGroup.WORLD, () => new CPLSNode(sz));
 		val nodesPerTeam = configNodes.numElems_2;
 		val random:Random = new Random();
 		random.setSeed(configCPLS.getSeed());
 		finish{
 			for(p in PlaceGroup.WORLD) at (p) async{
 				val seed = random.nextLong();
 				if(configCPLS.getModeIndicator() == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER){
					 if(p == Place.FIRST_PLACE){
 						refsToPlaces().initialize(configCPLS.getMasterConfig(),
					 							configCPLS.getCPLSPoolConfig(),
					 							configCPLS.getProblemModel().size,
					 							seed);
					 }else{
					 	refsToPlaces().initialize(configNodes((p.id() -1)/nodesPerTeam, (p.id() -1)%nodesPerTeam),
					 							configCPLS.getTeamsPoolConfig(),
					 							configCPLS.getProblemModel().size,
					 							seed);
					 }
 				}else{
 					refsToPlaces().initialize(configNodes(p.id()/nodesPerTeam, p.id()%nodesPerTeam),
 												configCPLS.getTeamsPoolConfig(),
 												configCPLS.getProblemModel().size,
 												seed);
 				}
 				refsToPlaces().setPointersCommunication(refsToPlaces);
 				refsToPlaces().configHeuristic(configCPLS.getProblemModel(), opts);
 				//random.setSeed(seed);
 			}
 		}
 		val timesPerInstance = opts("-b", 10n);
 		//Jason: Descomentar para la tabla de resultados
 		printHeader(configCPLS.getOutFormat(), 8n);
 		var totalWallT :Long = 0;
 		var fWall : Long = 0;
 		for(var i:Int = 1n; i <= timesPerInstance; i++){
 			//Console.OUT.println("****************************Resultados ejecucion: " + i + "*****************************************");
 			var wallTime:Long = -System.nanoTime();
 			//Console.OUT.println("Vez por instancia número: " + i);
 			finish{
 				for(p in PlaceGroup.WORLD) at (p) async{
 					refsToPlaces().start(configCPLS.getTargetCost(), configCPLS.getStrictLow());
 					//Runtime.probe();
 				}
 		 	}
 			//Console.OUT.println("Nodo ganador: " + refsToPlaces().getStatsObject().getExplorerWinner());
 			verifyWinner(sz, refsToPlaces, configCPLS.getVerify(), configCPLS.getTargetCost(), refsToPlaces().getStatsObject().getExplorerWinner());
 			//Jason: Descomentar para la tabla de resultados
 			wallTime += System.nanoTime();
 			val wtime = wallTime;
 			totalWallT += wallTime;
 			fWall += wallTime;
 			if(configCPLS.getOutFormat() == 0n){
 				//if (fileMode) Console.OUT.print(instance+",");
 				refsToPlaces().printStats(i,configCPLS.getOutFormat(), 8n);
 				Console.OUT.println(","+wallTime/1e9);
 			}else if (configCPLS.getOutFormat() == 1n){
 				Console.OUT.printf("\r");
 				refsToPlaces().printStats(i,configCPLS.getOutFormat(), 8n);
 				Console.OUT.printf(" %8.4f |\n",wallTime/1e9);
 				refsToPlaces().printAVG(i,configCPLS.getOutFormat(), 8n);
 				Console.OUT.flush();
 				//Jason: Impresión de ChangesForDivs
 				//refsToPlaces().printChangesForDivs();
 			}
 			//Console.OUT.println("\n ");
 			if(i<10){
 				finish for (p in Place.places()) at (p) {   
 					//refsToPlaces().clear();
 					refsToPlaces().reInitialize();
 				}
 			}
 		}
 		//Console.OUT.println("************************************************************************************************");
 		//Jason: Descomentar para la tabla de resultados
 		if(configCPLS.getOutFormat() == 0n){
 			//Console.OUT.print(cFile+",");
 			refsToPlaces().printAVG(timesPerInstance,configCPLS.getOutFormat(), 8n);
 			Console.OUT.println(","+(fWall/(timesPerInstance*1e9)));
 		}else if (configCPLS.getOutFormat() == 1n){
 			Console.OUT.printf("\r");
 			refsToPlaces().printAVG(timesPerInstance,configCPLS.getOutFormat(), 8n);
 			Console.OUT.printf(" %8.4f |\n",(fWall/(timesPerInstance*1e9)));
 			//accStats.printAVG(testNo);
 			Console.OUT.printf("\n");
 		}
 		// Clear sample accumulator for repetitions
 		refsToPlaces().clearSample();
 	}
 	
 	public static def verifyWinner(sz:Long, val refPlaces:PlaceLocalHandle[CPLSNode(sz)], verify:Boolean, val targetCost:Long, explorerWinner:Int):void{
 		//Console.OUT.println("Y realiza el verifyWinner");
 		var minCost:Long = Long.MAX_VALUE;
 		var bestPlace:Place = here;
 		if(explorerWinner == -1n){
 			//Console.OUT.println("MsgType_0. No se llego al valor objetivo");
 			Logger.debug(()=>"No winner found");
 			for (k in Place.places()){
 				val cCost = at(k) refPlaces().getCost();
 				if(cCost < minCost){
 					minCost = cCost;
 					bestPlace = k;
 				}
 			}
 			val place = bestPlace; val mC = minCost;
 			var solWin2:Rail[Int];
 			Logger.debug(()=>"winner "+ place + " final cost "+ mC);
 			at (bestPlace){

 				val changeForDiv = refPlaces().getChangeforDiv();
 				Console.OUT.println("Numero de reinicios por diversificacion: " + changeForDiv + ". Soy place: " + here.id);
 				refPlaces().setStats_(targetCost, place.id as Int, changeForDiv);
 				if (verify){
 					refPlaces().verify_();
 				}
 			}
 			//val iterMaster = at(Place.place(0)) refPlaces().getnIter();
 			//Console.OUT.println("El master itero veces: " + iterMaster);
 			val solWin = at(bestPlace) refPlaces().getBestConf();
 			//Console.OUT.print("MsgType_0. El place ganador es: " + place + ", con un costo de: " + minCost + ", y variables: ");
 			//printVector(solWin);
 		}else{
 			//Console.OUT.println("MsgType_0. Hubo un ganador en la ejecucion.");
 			val solWin = at(Place(explorerWinner)) refPlaces().getBestConf();
 			val cCost = at(Place(explorerWinner)) refPlaces().getCost();
 			val restartsForDivs = at(Place(explorerWinner)) refPlaces().getChangeforDiv();
 			Console.OUT.println("Numero de reinicios por diversificacion: " + restartsForDivs + ". Soy place: " + explorerWinner);
 			//Console.OUT.print("MsgType_0. El place ganador es: " + explorerWinner + ", con un costo de: " + cCost + ", y variables: ");
 			//printVector(solWin);
 		}
 	}
 
 	public static def printVector(vector:Rail[Int]){
 		for(var i:Int = 0n; i < vector.size; i++){
 			Console.OUT.print(vector(i) + "  ");
 		}
 		Console.OUT.print("\n");
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
 
 	public static def printStructure(configCPLS:CPLSConfig){
 			 Console.OUT.println("************************************************************************************************");
 			 Console.OUT.println("*****************************************Informacion general***********************************");
			 Console.OUT.println("Distancia minima permitida: " + configCPLS.getMinDistance());
			 Console.OUT.println("Valor objetivo: " + configCPLS.getTargetCost());
			 Console.OUT.println("Estrictamente menor?: " + configCPLS.getStrictLow());
			 Console.OUT.println("Formato de Salida: " + configCPLS.getOutFormat());
			 Console.OUT.println("Semilla de entrada: " + configCPLS.getSeed());
			 Console.OUT.println("Cantidad de veces por instancia: " + configCPLS.getTimesPerInstance());
			 Console.OUT.println("Verify: " + configCPLS.getVerify());
			 Console.OUT.println("****************Informacion del modelo del problema*************************");
			 val problemModel = configCPLS.getProblemModel();
			 Console.OUT.println("Tamano de instancia: " + problemModel.size);
			 Console.OUT.println("Path archivo vector solucion: " + problemModel.getInPathVectorSol());
			 Console.OUT.println("Path archivo datos del problema: " + problemModel.getInPathDataProblem());
			 Console.OUT.println("Valor base: " + problemModel.getBaseValue());
			 Console.OUT.println("****************Informacion de los teamPool*************************");
			 val teamPool = configCPLS.getTeamsPoolConfig();
			 Console.OUT.println("Tamano de problema: " + teamPool.getProblemSize());
			 Console.OUT.println("Tamano del pool: " + teamPool.getPoolSize());
			 Console.OUT.println("PoolMode: " + teamPool.getPoolMode());
			 Console.OUT.println("Minima distancia: " + teamPool.getMinDist());
 			if(configCPLS.getModeIndicator() == CPLSOptionsEnum.ModeIndicator.COOPERATIVE_WITH_MASTER){
 				val masterConfig = configCPLS.getMasterConfig();
 				Console.OUT.println("************************************************************************************************");
 				Console.OUT.println("************************Informacion del nodo master**************************");
 				Console.OUT.println("Report time: " + masterConfig.getReportI());
 				Console.OUT.println("Update time: " + masterConfig.getUpdateI());
 				Console.OUT.println("MaxUpdate time: " + masterConfig.getMaxUpdateI());
 				Console.OUT.println("Heuristic: " + masterConfig.getHeuristic());
 				Console.OUT.println("Numero de teams: " + masterConfig.getNumberOfTeams());
 				Console.OUT.println("Nodo por team: " + masterConfig.getNodesPerTeam());
 				Console.OUT.println("Id del team al que pertenece: " + masterConfig.getTeamId());
 				Console.OUT.println("Tiempo de comunicacion para diversificar (InterTeamCommTime): " + masterConfig.getInterTeamCommTime());
 				Console.OUT.println("AffectedPer?: " + masterConfig.getAffectedPer());
 				Console.OUT.println("Espera inicial (InterTeamCommTime): " + masterConfig.getIniDelay());
 				Console.OUT.println("Verify?: " + masterConfig.getVerify());
 				Console.OUT.println("ChangeProb?: " + masterConfig.getChangeProb());
 				Console.OUT.println("DiversificactionOption?" + masterConfig.getDiversificationOption());
 				Console.OUT.println("Tiempo maximo de ejecucion: " + masterConfig.getMaxTime());
 				Console.OUT.println("Numero maximo de iteraciones: " + masterConfig.getMaxIters());
 				Console.OUT.println("Numero maximo de restarts: " + masterConfig.getMaxRestarts());
 				Console.OUT.println("ReportPart?: " + masterConfig.getReportPart());
 				Console.OUT.println("Modo de recepcion de parametros: " + masterConfig.getModParams());
 				Console.OUT.println("ChangeOnDiver?: " + masterConfig.getChangeOnDiver());
 				Console.OUT.println("**************Informacion del cplsPool***********************");
 				val cplsPool = configCPLS.getCPLSPoolConfig();
 				Console.OUT.println("Tamano de problema: " + cplsPool.getProblemSize());
 				Console.OUT.println("Tamano del pool: " + cplsPool.getPoolSize());
 				Console.OUT.println("PoolMode: " + cplsPool.getPoolMode());
 				Console.OUT.println("Minima distancia: " + cplsPool.getMinDist());
 			}else{
 				Console.OUT.println("************************Ejecucion sin nodo master**************************");
 			}
 		 /*******************************************/
 		 val nodeConfigs = configCPLS.getConfigNodes();
 		 for(conf in nodeConfigs){
 		 	Console.OUT.println("************************************************************************************************");
 		 	Console.OUT.println("************************************************************************************************");
 		 	Console.OUT.println("Id del equipo: " + conf.getTeamId());
 		 	Console.OUT.println("Heuristica: " + conf.getHeuristic());
 		 	Console.OUT.println("****************Informacion comun a todos los nodos*************************");
 		 	Console.OUT.println("Numero de equipos: " + conf.getNumberOfTeams());
 		 	Console.OUT.println("Nodos por equipo: " + conf.getNodesPerTeam());
 		 	Console.OUT.println("InterTeamCommTime: " + conf.getInterTeamCommTime());
 		 	Console.OUT.println("AffectedPer: " + conf.getAffectedPer());
 		 	Console.OUT.println("IniDelay (InterTeamCommTime): " + conf.getIniDelay());
 		 	Console.OUT.println("Verify: " + conf.getVerify());
 		 	Console.OUT.println("ChangeProb?: " + conf.getChangeProb());
 		 	Console.OUT.println("DiversificationOption?: " + conf.getDiversificationOption());
 		 	Console.OUT.println("Tiempo maximo de ejecucion: " + conf.getMaxTime());
 		 	Console.OUT.println("Maximo numero de iteraciones: " + conf.getMaxIters());
 		 	Console.OUT.println("Maximo numero de restarts: " + conf.getMaxRestarts());
 		 	Console.OUT.println("ReportPart?: " + conf.getReportPart());
 		 	Console.OUT.println("Modo de ingreso de parametros: " + conf.getModParams());
 		 	Console.OUT.println("ChangeOnDiver: " + conf.getChangeOnDiver());
 		 	Console.OUT.println("ReportTime: " + conf.getReportI());
 		 	Console.OUT.println("UpdateTime: " + conf.getUpdateI());
 		 	Console.OUT.println("MaxUpdateI?: " + conf.getMaxUpdateI());
 		 	Console.OUT.println("NodeRole: " + conf.getRol());
 		 	Console.OUT.println("MasterHeuristic: " + conf.getModeIndicator());
 		 	/**********************************************/
 		 }
		 
 	}
}
