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

 	public def initialize(config:NodeConfig, idPlace:Int, cplsPoolConfig:PoolConfig, problemSize:Long, inSeed:Long, maxIters:Long){
 		//super.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		super.initialize(config, idPlace, cplsPoolConfig, problemSize, inSeed, maxIters);
 		this.cplsPool = new SmartPool(cplsPoolConfig.getProblemSize(), cplsPoolConfig.getPoolSize(), cplsPoolConfig.getPoolMode(), cplsPoolConfig.getMinDist());
 		//Console.OUT.println("Master Inicializado en lo nodo: " + idPlace + ", con la heuristica: " +
 		//		HeuristicFactory.getHeuristicName(config.getHeuristic()));
 	}
 	
 	public def start(){
 		Console.OUT.println("Se envía la señal de start en el Master");
 		super.heuristicSolver.solve();
 	}

}
