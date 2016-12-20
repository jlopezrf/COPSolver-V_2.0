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
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:   return new AdaptiveSearch(1n); //TODO:Organize the parameters of this constructors
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:   return new EOSearch(1n);
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL: return new RoTSearch(1n);
 			case CPLSOptionsEnum.HeuristicsSupported.RS_SOL: return new RandomSearch(1n);
 			default: return new RandomSearch(1n);
 		}
 	}
}