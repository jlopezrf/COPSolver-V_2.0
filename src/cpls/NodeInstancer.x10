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
 		val configNodes:Array_2[NodeConfig] = configCPLS.getConfigNodes();	
 		val refsToPlaces = PlaceLocalHandle.make[CPLSNode](PlaceGroup.WORLD, () => new CPLSNode(configCPLS.getProblemModel().size));
 		val nodesPerTeam = configNodes.numElems_2;
 		val random:Random = new Random();
 		random.setSeed(configCPLS.getSeed());
 		finish{
 			for(p in PlaceGroup.WORLD) at (p) async{
 				val seed = random.nextLong();
 				/*val problemString = opts("-p", "QAP");
 				val problem = Main.problemDetect(problemString);
 				val problemParams = new Rail[Long](3, -1 );
 				val problemModel = Main.COPProblemModelFactory.make(opts, problem, problemParams, seed);*/
 				if(configCPLS.getIsThereAMasterNode()){
					 if(p == Place.FIRST_PLACE){
 						refsToPlaces().initialize(configCPLS.getMasterConfig(),
					 							configCPLS.getTeamsPoolConfig(),
					 							configCPLS.getProblemModel(),
					 							seed);
					 }else{
					 	refsToPlaces().initialize(configNodes((p.id() -1)/nodesPerTeam, (p.id() -1)%nodesPerTeam),
					 							configCPLS.getTeamsPoolConfig(),
					 							configCPLS.getProblemModel(),
					 							seed);
					 }
 				}else{
 					refsToPlaces().initialize(configNodes(p.id()/nodesPerTeam, p.id()%nodesPerTeam),
 												configCPLS.getTeamsPoolConfig(),
 												configCPLS.getProblemModel(),
 												seed);
 				}
 				refsToPlaces().setPointersCommunication(refsToPlaces);
 				refsToPlaces().configHeuristic(opts);
 				random.setSeed(seed);
 			}
 		}
 		val timesPerInstance = opts("-b", 10n);
 		printHeader(configCPLS.getOutFormat(), 8n);
 		var totalWallT :Long = 0;
 		var fWall : Long = 0;
 		for(var i:Int = 1n; i <= timesPerInstance; i++){
 			var wallTime:Long = -System.nanoTime();
 			//Console.OUT.println("Vez por instancia número: " + i);
 			finish{
 				for(p in PlaceGroup.WORLD) at (p) async{
 					refsToPlaces().start(configCPLS.getTargetCost(), configCPLS.getStrictLow());
 				}
 		 	}
 			verifyWinner(refsToPlaces, configCPLS.getVerify(), configCPLS.getTargetCost(), refsToPlaces().getStatsObject().getExplorerWinner());
 			wallTime += System.nanoTime();
 			val wtime = wallTime;
 			totalWallT += wallTime;
 			fWall += wallTime;
 			if(configCPLS.getOutFormat() == 0n){
 				//if (fileMode) Console.OUT.print(instance+",");
 				refsToPlaces().printStats(i,configCPLS.getOutFormat(), 8n);
 				Console.OUT.println(","+wallTime/1e9);
 			}
 			else if (configCPLS.getOutFormat() == 1n){
 				Console.OUT.printf("\r");
 				refsToPlaces().printStats(i,configCPLS.getOutFormat(), 8n);
 				Console.OUT.printf(" %8.4f |\n",wallTime/1e9);
 				refsToPlaces().printAVG(i,configCPLS.getOutFormat(), 8n);
 				Console.OUT.flush();
 			}
 			finish for (p in Place.places()) at (p) {   
 				refsToPlaces().clear();
 			}
 		}
 		if(configCPLS.getOutFormat() == 0n){
 			//Console.OUT.print(cFile+",");
 			refsToPlaces().printAVG(timesPerInstance,configCPLS.getOutFormat(), 8n);
 			Console.OUT.println(","+(fWall/(timesPerInstance*1e9)));
 		}
 		else if (configCPLS.getOutFormat() == 1n){
 			Console.OUT.printf("\r");
 			
 			refsToPlaces().printAVG(timesPerInstance,configCPLS.getOutFormat(), 8n);
 			Console.OUT.printf(" %8.4f |\n",(fWall/(timesPerInstance*1e9)));
 			//accStats.printAVG(testNo);
 			Console.OUT.printf("\n");
 		}
 		// Clear sample accumulator for repetitions
 		refsToPlaces().clearSample();
 		
 	}
 	
 	public static def verifyWinner(val refPlaces:PlaceLocalHandle[CPLSNode], verify:Boolean, val targetCost:Long, explorerWinner:Int):void{
 		var minCost:Long = Long.MAX_VALUE;
 		var bestPlace:Place = here; 
 		if(explorerWinner == -1n){
 			Logger.debug(()=>"No winner found");
 			for (k in Place.places()){
 				val cCost = at(k) refPlaces().getCost();
 				if(cCost < minCost){
 					minCost = cCost;
 					bestPlace = k;
 				}
 			}
 			val place = bestPlace; val mC = minCost;
 			Logger.debug(()=>"winner "+ place + " final cost "+ mC);
 			at (bestPlace){
 				refPlaces().setStats_(targetCost);
 				/*if (verify){
 					refPlaces().verify_();
 				}*/
 			}
 		}
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
