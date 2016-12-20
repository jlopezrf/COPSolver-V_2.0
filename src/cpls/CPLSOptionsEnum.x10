package cpls;

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
	 	public static val Hybrid_SOL = 5n;
	}

 	public static struct NodeRoles{
 		public static val EXPLORER_NODE = 0n;
 		public static val HEAD_NODE = 1n;
 		public static val MASTER_NODE = 2n;
 	}
}