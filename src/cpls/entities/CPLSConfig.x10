package cpls.entities;

import cpls.problem.ProblemGenericModel;
import x10.array.Array_2;
import cpls.entities.NodeConfig;

public class CPLSConfig {

 	private var isThereAMasterNode:boolean;
 	private var configNodes:Array_2[NodeConfig];
 	private var problemModel:ProblemGenericModel;
 	private var cplsPoolConfig:PoolConfig;
 	private var teamsPoolConfig:PoolConfig;	
 	private var maxTime:Long;
 	private var pmaxIters:Long;
 	private var maxRestarts:Int;
 	private var reportPart:Boolean;
 	private var modParams:Int;
 	private var changeOnDiver:Int;
 	private var report:Long;
 	private var update:Long;
 	private var seed:Long;
 	private var targetCost:Long;
 	private var strictLow:Boolean;
 	private var iterations:Long;
 	private var minDistance:Double;
 	private var verify:Boolean;
 
 	
 	public def getProblemModel(){return this.problemModel;}
 	public def getIsThereAMasterNode(){return this.isThereAMasterNode;}
 	public def getConfigNodes():Array_2[NodeConfig]{return this.configNodes;}
 	public def getCPLSPoolConfig(){return this.cplsPoolConfig;}
 	public def getTeamsPoolConfig(){return this.teamsPoolConfig;}
 	public def getMinDistance(){return this.minDistance;}
	public def getMaxTime(){return this.maxTime;}
	public def getMaxIters(){return this.pmaxIters;}
	public def getMaxRestarts(){return this.maxRestarts;}
	public def getReportPart(){return this.reportPart;}
	public def getModParams(){return this.modParams;}
	public def getChangeOnDiver(){return this.changeOnDiver;}
	public def getReport(){return this.report;}
	public def getUpdate(){return this.update;} 
	public def getSeed(){return this.seed;}
	public def getTargetCost(){return this.targetCost;}
	public def getStrictLow(){return this.strictLow;}
 	public def getIterations(){return this.iterations;}
 	public def getVerify(){return this.verify;}
 	
 	public def setProblemModel(problemModel:ProblemGenericModel){this.problemModel = problemModel;}
 	public def setConfigNodes(configNodes:Array_2[NodeConfig]){this.configNodes = configNodes;}
 	public def setCPLSPoolConfig(cplsPoolConfig:PoolConfig){this.cplsPoolConfig = cplsPoolConfig;}
 	public def setTeamsPoolConfig(teamsPoolConfig:PoolConfig){this.teamsPoolConfig = teamsPoolConfig;}
 	public def setIsThereAMasterNode(isThereAMasterNode:boolean){this.isThereAMasterNode = isThereAMasterNode;}
 	public def setMinDistance(minDistance:Double){this.minDistance = minDistance;}
 	public def setStrictLow(strictLow:Boolean){this.strictLow = strictLow;}
 	public def setTargetCost(targetCost:Long){this.targetCost = targetCost;}
 	public def setIterations(iterations:Long){this.iterations = iterations;}
 	public def setMaxTime(maxTime:Long){this.maxTime = maxTime;}
 	public def setMaxIters(pmaxIters:Long){this.pmaxIters = pmaxIters;}
 	public def setMaxRestarts(maxRestarts:Int){this.maxRestarts = maxRestarts;}
 	public def setReportPart(reportPart:Boolean){this.reportPart = reportPart;}
 	public def setModParams(modParams:Int){this.modParams = modParams;}
 	public def setChangeOnDiver(changeOnDiver:Int){this.changeOnDiver = changeOnDiver;}
 	public def setReport(report:Long){this.report = report;}
 	public def setUpdate(update:Long){this.update = update;}
 	public def setSeed(seed:Long){this.seed = seed;}
 	public def setVerify(verify:Boolean){this.verify = verify;}
}