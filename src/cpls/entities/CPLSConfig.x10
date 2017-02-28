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
 	private var seed:Long;
 	private var targetCost:Long;
 	private var strictLow:Boolean;
 	private var timesPerInstance:Long;
 	private var minDistance:Double;
 	private var verify:Boolean;
 	private var masterConfig:NodeConfig;
 	private var outFormat:Int;
 
 	
 	public def getProblemModel(){return this.problemModel;}
 	public def getIsThereAMasterNode(){return this.isThereAMasterNode;}
 	public def getConfigNodes():Array_2[NodeConfig]{return this.configNodes;}
 	public def getCPLSPoolConfig(){return this.cplsPoolConfig;}
 	public def getTeamsPoolConfig(){return this.teamsPoolConfig;}
 	public def getMinDistance(){return this.minDistance;}
	public def getSeed(){return this.seed;}
	public def getTargetCost(){return this.targetCost;}
	public def getStrictLow(){return this.strictLow;}
 	public def getTimesPerInstance(){return this.timesPerInstance;}
 	public def getVerify(){return this.verify;}
 	public def getMasterConfig(){return this.masterConfig;}
 	public def getOutFormat(){return this.outFormat;}
 	
 	public def setProblemModel(problemModel:ProblemGenericModel){this.problemModel = problemModel;}
 	public def setConfigNodes(configNodes:Array_2[NodeConfig]){this.configNodes = configNodes;}
 	public def setCPLSPoolConfig(cplsPoolConfig:PoolConfig){this.cplsPoolConfig = cplsPoolConfig;}
 	public def setTeamsPoolConfig(teamsPoolConfig:PoolConfig){this.teamsPoolConfig = teamsPoolConfig;}
 	public def setIsThereAMasterNode(isThereAMasterNode:boolean){this.isThereAMasterNode = isThereAMasterNode;}
 	public def setMinDistance(minDistance:Double){this.minDistance = minDistance;}
 	public def setStrictLow(strictLow:Boolean){this.strictLow = strictLow;}
 	public def setTargetCost(targetCost:Long){this.targetCost = targetCost;}
 	public def setTimesPerInstance(timesPerInstance:Long){this.timesPerInstance = timesPerInstance;}
 	public def setSeed(seed:Long){this.seed = seed;}
 	public def setVerify(verify:Boolean){this.verify = verify;}
 	public def setMasterConfig(masterConfig:NodeConfig){this.masterConfig = masterConfig;}
 	public def setOutFormat(outFormat:Int){this.outFormat = outFormat;}
 
}