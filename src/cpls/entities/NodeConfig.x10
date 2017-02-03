package cpls.entities;

import cpls.HeuristicFactory;
import cpls.CPLSOptionsEnum;
import cpls.solver.entities.*;

public abstract class NodeConfig{
 	
 	private var heuristic:Int;
 	private var heuristicParameters:HeuristicParameters;
 	private var outTeamTime:Long;
 	
 	public def this(heuristic:Int){
 		this.heuristic = heuristic;
 	}
 
 	public def this(){
 		this.heuristic = 0n;
 	}
 	
 	public def setHeuristic(heuristic:Int){
 		this.heuristic = heuristic;
 		switch(heuristic){
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:
 				this.heuristicParameters = new ASParameters();
 				break;
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:
 				this.heuristicParameters = new EOParameters();
 				break;
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL:
 				this.heuristicParameters = new RoTSParameters();
 				break;
 		}
 	}
 
 	public def getHeuristic(){
 		return this.heuristic;
 	}
 
 	public def setOutTeamTime(outTeamTime:Long){
 		this.outTeamTime = outTeamTime;
 	}
 
 	public def getOutTeamTime(){
 		return this.outTeamTime;
 	}
 
 	public def setHeuristicParameters(heuristicParameters:HeuristicParameters){
 		switch(heuristic){
 			case CPLSOptionsEnum.HeuristicsSupported.AS_SOL:
 				this.heuristicParameters.setParameters(heuristicParameters as ASParameters);
 				break;
 			case CPLSOptionsEnum.HeuristicsSupported.EO_SOL:
 				this.heuristicParameters.setParameters(heuristicParameters as EOParameters);
 				break;
 			case CPLSOptionsEnum.HeuristicsSupported.RoTS_SOL:
 				this.heuristicParameters.setParameters(heuristicParameters as RoTSParameters);
 				break;
 		}
 	}
 
 	public def getHeuristicParameters(){
 		return this.heuristicParameters;
 	}

}