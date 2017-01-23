package cpls.entities;

import cpls.HeuristicFactory;
import cpls.CPLSOptionsEnum.NodeRoles;
import cpls.CPLSOptionsEnum.HeuristicsSupported;
import cpls.solver.entities.HeuristicParameters;

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
 		this.heuristicParameters = heuristicParameters;
 	}
 
 	public def getHeuristicParameters(){
 		return this.heuristicParameters;
 	}

}