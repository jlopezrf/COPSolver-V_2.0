package cpls;

import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;
import cpls.HeuristicFactory;
import cpls.SmartPool;

public class HeadNode extends CPLSNode{
	
	private var teamPool:SmartPool;
 	private var isThereAMasterNode:Boolean;
	
	public def this(){
		super();
	}
	public def initialize(config:NodeConfig, idPlace:Int, teamPoolConfig:PoolConfig){
		super.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
		this.teamPool = new SmartPool(teamPoolConfig.getProblemSize(), teamPoolConfig.getPoolSize(), teamPoolConfig.getPoolMode(), teamPoolConfig.getMinDist());
		Console.OUT.println("Head Inicializado en lo nodo: " + idPlace + ", con la heuristica: " +
				HeuristicFactory.getHeuristicName(config.getHeuristic()));
	}

	public def setMasterNodeIndicator(isThereAMasterNode:Boolean){
 		this.isThereAMasterNode = isThereAMasterNode;
	}
	
	public def start(){
		Console.OUT.println("Se envía la señal de start en el Head");
		super.heuristicSolver.solve();
	}
}