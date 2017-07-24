package cpls;

import cpls.solver.HeuristicSolver;
import cpls.solver.AdaptiveSearch;
import cpls.solver.EOSearch;
import cpls.solver.RoTSearch;
import cpls.solver.GeneticAlgorithm;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;

public struct HeuristicFactory{
 	public static def make(kind:Int, sz:Long):HeuristicSolver(sz){
 		switch(kind){
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:   return new AdaptiveSearch(sz) as HeuristicSolver(sz);
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:   return new EOSearch(sz) as HeuristicSolver(sz);
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL: return new RoTSearch(sz) as HeuristicSolver(sz);
 			case CPLSOptionsEnum.HeuristicsSupported.RS_SOL: return new HeuristicSolver(sz) as HeuristicSolver(sz);
 			case CPLSOptionsEnum.HeuristicsSupported.GA_SOL: return new GeneticAlgorithm(sz) as HeuristicSolver(sz);
 			default: return new HeuristicSolver(sz) as HeuristicSolver(sz);
 		}
 	}
 	
 	public static def getHeuristicName(kind:Int):String{
 		switch(kind){
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:   return "AS_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:   return "EO_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL: return "RoTS_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.RS_SOL: return "RS_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.GA_SOL: return "GA_SOL";
 			default: return "Default";
 		}
 	}
 
 //Jason: Migration
 public static def getHeuristicType(heu:HeuristicSolver):Int{
 if(heu instanceof GeneticAlgorithm){
 return CPLSOptionsEnum.HeuristicsSupported.GA_SOL;
 }else if(heu instanceof AdaptiveSearch){
 return CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
 }else if(heu instanceof EOSearch){
 return CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
 }else if(heu instanceof RoTSearch){
 return CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
 }else{
 return CPLSOptionsEnum.HeuristicsSupported.RS_SOL;
 }
 }
}