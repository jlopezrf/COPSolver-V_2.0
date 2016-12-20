package cpls;

import cpls.util.RandomTools;
import cpls.util.Logger;
import cpls.ParamManager;
import cpls.problem.ProblemGenericModel;
import cpls.solver.HeuristicSolver;

public class Main {
 	
 	public static def main(args: Rail[String]) {
 
 		var opts:ParamManager = new ParamManager(args);
 		val problemString = opts("-p", "MSP");
 		val problem = problemDetect(problemString);
 		val size = opts("-s", 10);
 		val problemModel = COPModelProblemFactory.make(problem, size as Int);
 		val heuristicString = opts("-sl", "AS");
 		val heuristic = heuristicDetect(heuristicString);
 		val configCPLS = buildConfig();
 		NodeInstancer.installSolvers(problemModel as ProblemGenericModel, configCPLS);
 
 		val expPerTeam = opts("-N", 1n);
 		val nTeams = Place.MAX_PLACES as Int/expPerTeam;
 
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
 			Logger.debug(()=>{"Stable Marriage Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM;
 		}else if(problem.equals("QAP")){
 			Logger.debug(()=>{"Stable Marriage Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.QA_PROBLEM;
 		}else{
 			problemParam = CPLSOptionsEnum.SupportedProblems.UNKNOWN_PROBLEM;
 			Console.OUT.println("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); 
 		}
 		return problemParam;
 	}
 
  	public static struct COPModelProblemFactory{
 		public static def make(kind:Int, size:Long):ProblemGenericModel(size){
 			switch(kind as Int){
 				case CPLSOptionsEnum.SupportedProblems.MAGIC_SQUARE_PROBLEM: //return new MSPModel(size, seed, opts);
 				case CPLSOptionsEnum.SupportedProblems.COSTAS_PROBLEM: //return new CAPModel(size, seed, opts);
 				case CPLSOptionsEnum.SupportedProblems.ALL_INTERVAL_PROBLEM: //return new AIPModel(size, seed, opts);
 				case CPLSOptionsEnum.SupportedProblems.LANGFORD_PROBLEM: //return new LNPModel(size, seed, opts);
 				case CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM: //return new SMTIModel(size, seed, opts, false, mPrefs, wPrefs, mapTable);
 				case CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM: //return new SMTIModel(size, seed, opts, true, mPrefs, wPrefs, mapTable);
 				case CPLSOptionsEnum.SupportedProblems.QA_PROBLEM: //return new QAPModel(size, seed, opts, mPrefs, wPrefs );
 				default: //return new PNPModel(size, seed, opts);
 			}
 			return null;
 		}
 	}
 
 	public static def heuristicDetect(solverIn:String):Int{
 		var solParam : Int;//
 		if (solverIn.equalsIgnoreCase("AS"))
 			solParam = CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
 		else if(solverIn.equals("EO"))
 			solParam = CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
 		else if(solverIn.equals("RoTS"))
 			solParam = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
 		else if(solverIn.equals("HY"))
 			solParam = CPLSOptionsEnum.HeuristicsSupported.Hybrid_SOL;
 		else
 			solParam = CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
 		return solParam;
 	}
 
 	public static def buildConfig():Rail[NodeConfig]{
 		return null;
 	}
}