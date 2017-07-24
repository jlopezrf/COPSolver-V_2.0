package cpls.entities;

public class PoolConfig {
	private var problemSize:Long;
	private var poolSize:Int;
	private var poolMode:Int;
	private var minDist:Double;
	
	public def this(problemSize:Long, poolSize:Int, poolMode:Int, minDist:Double){
		this.problemSize = problemSize;
		this.poolSize = poolSize;
		this.poolMode = poolMode;
		this.minDist = minDist;
	}
	
	public def getProblemSize(){
		return this.problemSize;
	}
	
	public def getPoolSize(){
		return this.poolSize;
	}
	
	public def getPoolMode(){
		return this.poolMode;
	}
	
	public def getMinDist(){
		return this.minDist;
	}
	
	public def setProblemSize(problemSize:Long){
		this.problemSize = problemSize;
	}
	
	public def setPoolSize(poolSize:Int){
		this.poolSize = poolSize;
	}
	
	public def setPoolMode(poolMode:Int){
		this.poolMode = poolMode;
	}
	
	public def setMinDist(minDist:Double){
		this.minDist = minDist;
	}
}