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

import cpls.problem.*;
import cpls.util.CPLSFileReader;

public struct ProblemModelFactory{
	
	/**This method make the initialize of the correspond problem model
	 * In the QAPModel: The instance size, the BKS and the flow and distance matrices will be read*/
 	public static def make(opts:ParamManager, problem:Int, problemParams:Rail[Long], inSeed:Long){
 		val size = opts("-s", 10); 				//Problem size read: Only in QAP problem the problem size will be read from the instance file
 		val baseValue = opts("-bv", 0n); 		//In some problems, the configurations/solutions vectors dont include the cero value.
 		val inPathDataProblem = opts("-f",".");	//Path of the instance file
 		val inPathVectorSol =  opts("-if","."); //If you want to indicate a initial solution
 		switch(problem as Int){
 			case CPLSOptionsEnum.SupportedProblems.MAGIC_SQUARE_PROBLEM: return new MSPModel(size);
 			case CPLSOptionsEnum.SupportedProblems.COSTAS_PROBLEM: return new CAPModel(size);
 			case CPLSOptionsEnum.SupportedProblems.ALL_INTERVAL_PROBLEM: return new AIPModel(size);
 			case CPLSOptionsEnum.SupportedProblems.LANGFORD_PROBLEM: return new LNPModel(size);
 			case CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM: return new SMTIModel(size);
 			case CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM: return new SMTIModel(size);
 			case CPLSOptionsEnum.SupportedProblems.QA_PROBLEM:
 				val params:Rail[Long] = CPLSFileReader.tryReadParameters(inPathDataProblem, problemParams);
 				val instanceSize = params(0) < 0 ? 1 : params(0); //params(0) correspond to the problem size
 				var problemModel:QAPModel = new QAPModel(instanceSize, inPathDataProblem, inPathVectorSol, baseValue);
 				problemModel.loadData(inPathDataProblem);
 				return problemModel;
 			default: return new PNPModel(size);
 		}
 	}
}
