package cpls;

import cpls.util.Logger;

public struct CPLSOptionsEnum {
 	
 	public static struct SupportedProblems{
	 	public static val UNKNOWN_PROBLEM=0n;
	 	public static val MAGIC_SQUARE_PROBLEM = 1n;
	 	public static val COSTAS_PROBLEM = 2n;
	 	public static val ALL_INTERVAL_PROBLEM = 3n;
	 	public static val LANGFORD_PROBLEM = 4n;
	 	public static val PARTIT_PROBLEM = 5n;
	 	public static val STABLE_MARRIAGE_PROBLEM = 6n;
	 	public static val HOSPITAL_RESIDENT_PROBLEM = 7n;
	 	public static val QA_PROBLEM = 8n;
	}

	public static struct HeuristicsSupported{
	 	public static val UNKNOWN_SOL = 0n;
	 	public static val RS_SOL = 1n;
	 	public static val AS_SOL = 2n;
	 	public static val EO_SOL = 3n;
	 	public static val RoTS_SOL = 4n;
	 	public static val GA_SOL = 5n;
	 	public static val Hybrid_SOL = 6n;
	}

 	public static struct NodeRoles{
 		public static val EXPLORER_NODE = 0n;
 		public static val HEAD_NODE = 1n;
 		public static val MASTER_NODE = 2n;
 	}
 	
 	public static struct PoolLevels{
 		public static val HIGH=0n;
 		public static val MEDIUM=1n;
 		public static val LOW=2n;
 	}
 	
 	public static struct PoolModes{
 		public static val SMART = 1;
 	}
 
 	public static struct ModeIndicator{
 		public static val COOPERATIVE_WITH_MASTER = 2n;
 		public static val COOPERATIVE_WITHOUT_MASTER = 1n;
 		public static val IW = 0n;
 	}
 
 	/** This method simply convert the string description problem into a
  	* correspond Int*/
 	public static def stringToIntPassOfProblemId(problem:String):Int{
 		var problemParam:Int;	//ter
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
 			Logger.debug(()=>{"HRP Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM;
 		}else if(problem.equals("QAP")){
 			Logger.debug(()=>{"QAP Problem"});
 			problemParam = CPLSOptionsEnum.SupportedProblems.QA_PROBLEM;
 		}else{
 			problemParam = CPLSOptionsEnum.SupportedProblems.UNKNOWN_PROBLEM;
 			Console.OUT.println("Error: The problem to solve is not a valid option for CPLS");
 		}
 		return problemParam;
 	}
 
 	/** This method simply convert the string desciption of each metaheuristic
  	* into a correspond Int*/
 	public static def stringToIntPassForHeuristicId(solverIn:String):Int{
 		var heuParam:Int;
 		if (solverIn.equalsIgnoreCase("AS"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.AS_SOL;
 		else if(solverIn.equals("EO"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.EO_SOL;
 		else if(solverIn.equals("RoTS"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL;
 		else if(solverIn.equals("GA"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.GA_SOL;
 		else if(solverIn.equals("HY"))
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.Hybrid_SOL;
 		else
 			heuParam = CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
 		return heuParam;
 	}
}