package cpls;
import cpls.HeuristicFactory;
import cpls.entities.NodeConfig;
import cpls.entities.PoolConfig;

public class ExplorerNode extends CPLSNode{
 	public def this(){
 		super();
 	}
 	public def initialize(config:NodeConfig, idPlace:Int, configPool:PoolConfig, problemSize:Long, inSeed:Long, maxIter:Long){
 		super.initialize(config, idPlace, configPool, problemSize, inSeed, maxIter);
 		//super.heuristicSolver = HeuristicFactory.make(config.getHeuristic());
 		//Console.OUT.println("Explorer Inicializado en lo nodo: " + idPlace + ", con la heuristica: " +
 		//		HeuristicFactory.getHeuristicName(config.getHeuristic()));
 	}
 	
 	public def start(){
 		Console.OUT.println("Se envía la señal de start en el Explorer");
 		super.heuristicSolver.solve();
 	}


}
