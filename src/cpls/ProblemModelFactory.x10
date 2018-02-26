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
