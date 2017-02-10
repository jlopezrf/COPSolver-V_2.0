package cpls.entities;

import cpls.HeuristicFactory;
import cpls.CPLSOptionsEnum;

public class NodeConfig{
 	
 	private var heuristic:Int;
 	private var numberOfTeams:Int;
 	private var nodesPerTeam:Int;
 	private var teamId:Int;
 	private var rol:Int;
 	private var interTeamCommTime:Long;
 	private var affectedPer:Double;
 	private var iniDelay:Long;
 	private var verify:Boolean;
 	private var changeProb:Int;
 
 	public def this(){}
 	public def this(heuristic:Int, rol:Int){this.heuristic = heuristic;	this.rol = rol;}
 	
 	public def setHeuristic(heuristic:Int){this.heuristic = heuristic;}	
 	public def setNumberOfTeams(numberOfTeams:Int){this.numberOfTeams = numberOfTeams;}
 	public def setNodesPerTeam(nodesPerTeam:Int){this.nodesPerTeam = nodesPerTeam;}
 	public def setTeamId(teamId:Int){this.teamId = teamId;}
 	public def setRol(rol:Int){this.rol = rol;}
 	public def setInterTeamCommTime(interTeamCommTime:Long){this.interTeamCommTime = interTeamCommTime;}
 	public def setAffectedPer(affectedPer:Double){this.affectedPer = affectedPer;}
 	public def setIniDelay(iniDelay:Long){this.iniDelay = iniDelay;}
 	public def setVerify(verify:Boolean){this.verify = verify;}
 	public def setChangeProb(changeProb:Int){this.changeProb = changeProb;}
 
 	public def getHeuristic(){return this.heuristic;}
 	public def getNumberOfTeams(){return this.numberOfTeams;}
 	public def getNodesPerTeam(){return this.nodesPerTeam;}
 	public def getTeamId(){return this.teamId;}
 	public def getRol(){return this.rol as Int;}
 	public def getInterTeamCommTime(){return this.interTeamCommTime;}
 	public def getAffectedPer(){return this.affectedPer;}
 	public def getIniDelay(){return this.iniDelay;}
 	public def getVerify(){return this.verify;}
 	public def getChangeProb(){return this.changeProb;}
}