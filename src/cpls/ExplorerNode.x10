package cpls;
import cpls.HeuristicFactory;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;

public class ExplorerNode extends CPLSNode{
 	public def this(){
 		super();
 	}
 	public def initialize(config:NodeConfig, idPlace:Int, configPool:PoolConfig){
 		//this.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		
 		Console.OUT.println("Explorer Inicializado en lo nodo: " + idPlace + ", con la heuristica: " +
 				HeuristicFactory.getHeuristicName(config.getHeuristic()));
 	}
 	
 	public def start(){}
}