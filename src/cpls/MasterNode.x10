package cpls;

import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.HeuristicFactory;
import cpls.SmartPool;

public class MasterNode extends CPLSNode{
 	
	private var cplsPool:SmartPool;
	
	public def this(){
 		super();
 	}
 	public def initialize(config:NodeConfig, idPlace:Int, cplsPoolConfig:PoolConfig){
 		//this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		this.cplsPool = new SmartPool(cplsPoolConfig.getProblemSize(), cplsPoolConfig.getPoolSize(), cplsPoolConfig.getPoolMode(), cplsPoolConfig.getMinDist());
 		Console.OUT.println("Master Inicializado en lo nodo: " + idPlace + ", con la heuristica: " +
 				HeuristicFactory.getHeuristicName(config.getHeuristic()));
 	}
 	public def start(){}
}