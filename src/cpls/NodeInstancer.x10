package cpls;

import cpls.problem.ProblemGenericModel;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;
import cpls.entities.*;
import x10.array.Array_2;
import x10.lang.PlaceGroup.SimplePlaceGroup;
import x10.lang.Iterator;
import cpls.util.Logger;

public class NodeInstancer{
	
	var masterNode:CPLSNode;
	
 	public static def installSolvers(configCPLS:CPLSConfig, opts:ParamManager){
 		val configNodes:Array_2[NodeConfig] = configCPLS.getConfigNodes();	
 		val refsToPlaces = PlaceLocalHandle.make[CPLSNode](PlaceGroup.WORLD, () => new CPLSNode());
 		val nodesPerTeam = configNodes.numElems_2;
 		finish{
 			for(p in PlaceGroup.WORLD) at (p) async{
 				refsToPlaces().initialize(configNodes(p.id()/nodesPerTeam, p.id()%nodesPerTeam),
 												p.id() as Int,
 												configCPLS.getTeamsPoolConfig(),
 												configCPLS.getProblemModel().getSize(),
 												configCPLS.getSeed(),
 												configCPLS.getMaxIters());
 				refsToPlaces().setPointersCommunication(refsToPlaces);
 				refsToPlaces().configHeuristic(configCPLS.getProblemModel(), opts);
 			}
 		}
 		for(var i:Int = 0n; i < configCPLS.getIterations(); i++){
 			finish{
 				for(p in PlaceGroup.WORLD) at (p) async{
 					refsToPlaces().start(configCPLS.getSeed(), configCPLS.getTargetCost(), configCPLS.getStrictLow());
 				}
 		 	}
 			verifyWinner(refsToPlaces, configCPLS.getVerify(), configCPLS.getTargetCost(), refsToPlaces().getStatsObject().getExplorerWinner());
 			finish for (p in Place.places()) at (p) {   
 				refsToPlaces().clear();
 			}		
 		}
 	}
 	
 	public static def verifyWinner(refPlaces:PlaceLocalHandle[CPLSNode], verify:Boolean, targetCost:Long, explorerWinner:Int):void{
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
 				if (verify){
 					refPlaces().verify_();
 				}
 			}
 		}
 	}
}
