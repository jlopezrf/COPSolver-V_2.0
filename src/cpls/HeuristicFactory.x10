/* 
 * PHYSH - Parallel HYbridization for Simple Heuristics
 * 
 * MIT License
 *
 * Copyright (c) 2022 Jheisson Argiro López Restrepo
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

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
