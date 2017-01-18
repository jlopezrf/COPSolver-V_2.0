package cpls;

import cpls.solver.HeuristicSolver;
import cpls.solver.AdaptiveSearch;
import cpls.solver.EOSearch;
import cpls.solver.RoTSearch;
import cpls.solver.RandomSearch;
import cpls.CPLSOptionsEnum;

public struct HeuristicFactory{
 	public static def make(kind:Int):HeuristicSolver{
 		switch(kind){
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:   return new AdaptiveSearch(); //TODO:Organize the parameters of this constructors
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:   return new EOSearch();
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL: return new RoTSearch();
 			case CPLSOptionsEnum.HeuristicsSupported.RS_SOL: return new RandomSearch();
 			default: return new RandomSearch();
 		}
 	}
 	
 	public static def getHeuristicName(kind:Int):String{
 		switch(kind){
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:   return "AS_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:   return "EO_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL: return "RoTS_SOL";
 			case CPLSOptionsEnum.HeuristicsSupported.RS_SOL: return "RS_SOL";
 			default: return "Default";
 		}
 	}
}