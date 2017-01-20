package cpls.entities;

import cpls.problem.ProblemGenericModel;
import x10.array.Array_2;
import cpls.entities.NodeConfig;
import cpls.solver.entities.ASParameters;
import cpls.solver.entities.EOParameters;
import cpls.solver.entities.RoTSParameters;

public class CPLSConfig {

 	private var isThereAMasterNode:boolean;
 	private var configNodes:Array_2[cpls.entities.NodeConfig];
 	private var problemModel:ProblemGenericModel;
 	private var cplsPoolConfig:PoolConfig;
 	private var teamsPoolConfig:PoolConfig;
 
 	//Generic Parameters	
 	private var maxTime:Long;
 	private var pmaxIters:Long;
 	private var maxRestarts:Int;
 	private var reportPart:Boolean;
 	private var modParams:Int;
 	private var changeOnDiver:Int;
 	private var verify:Boolean;
 	private var report:Long;
 	private var update:Long;
 
 	//Heurustic Parameters Objects
 	//private var pointersComunication:ArrayList[PlaceLocalHandle[CPLSNode]];
 	//private var asParam:ASParameters;
 	//private var eoParam:EOParameters;
 	//private var roTSParam:RoTSParameters;
 
 	//InterTeam Communication Params
 	private var outTeamTime:Long;
 	private var minDistance:Double;
 	private var iniDelay:Long;
 	private var affectedPer:Double;
 
 	public def setProblemModel(problemModel:ProblemGenericModel){this.problemModel = problemModel;}
 	public def getPoblemModel(){return this.problemModel;}
 	public def setConfigNodes(configNodes:Array_2[NodeConfig]){this.configNodes = configNodes;}
 	public def setCPLSPoolConfig(cplsPoolConfig:PoolConfig){this.cplsPoolConfig = cplsPoolConfig;}
 	public def setTeamsPoolConfig(teamsPoolConfig:PoolConfig){this.teamsPoolConfig = teamsPoolConfig;}
 	public def setIsThereAMasterNode(isThereAMasterNode:boolean){this.isThereAMasterNode = isThereAMasterNode;}
 	public def getIsThereAMasterNode(){return this.isThereAMasterNode;}
 	public def getConfigNodes():Array_2[cpls.entities.NodeConfig]{return this.configNodes;}
 	public def getCPLSPoolConfig(){return this.cplsPoolConfig;}
 	public def getTeamsPoolConfig(){return this.teamsPoolConfig;}
 	public def setOutTeamTime(outTeamTime:Long){this.outTeamTime = outTeamTime;}
 	public def getOutTeamTime(){return this.outTeamTime;}
 	public def setMinDistance(minDistance:Double){this.minDistance = minDistance;}
 	public def getMinDistance(){return this.minDistance;}
 	public def setIniDelay(iniDelay:Long){this.iniDelay = iniDelay;}
 	public def getIniDelay(){return this.iniDelay;}
 	public def setAffectedPer(affectedPer:Double){this.affectedPer = affectedPer;}
 	public def getAffectedPer(){return this.affectedPer;}
 	//public def setASParameters(asParam:ASParameters){this.asParam = asParam;}
 	//public def getASParameters(){return this.asParam;}
 	//public def setEOParameters(eoParam:EOParameters){this.eoParam = eoParam;}
 	//public def getEOParameters(){return this.eoParam;}
 	//public def setRoTSParameters(roTSParam:RoTSParameters){this.roTSParam = roTSParam;}
 	//public def getRoTSParameters(){return this.roTSParam;}
	public def getMaxTime(){return this.maxTime;}
	public def getPMaxIters(){return this.pmaxIters;}
	public def getMaxRestarts(){return this.maxRestarts;}
	public def getReportPart(){return this.reportPart;}
	public def getModParams(){return this.modParams;}
	public def getChangeOnDiver(){return this.changeOnDiver;}
	public def getVerify(){return this.verify;}
	public def getReport(){return this.report;}
	public def getUpdate(){return this.update;} 
	public def setMaxTime(maxTime:Long){this.maxTime = maxTime;}
	public def setPMaxIters(pmaxIters:Long){this.pmaxIters = pmaxIters;}
	public def setMaxRestarts(maxRestarts:Int){this.maxRestarts = maxRestarts;}
	public def setReportPart(reportPart:Boolean){this.reportPart = reportPart;}
	public def setModParams(modParams:Int){this.modParams = modParams;}
	public def setChangeOnDiver(changeOnDiver:Int){this.changeOnDiver = changeOnDiver;}
	public def setVerify(verify:Boolean){this.verify = verify;}
	public def setReport(report:Long){this.report = report;}
	public def setUpdate(update:Long){this.update = update;} 	
}