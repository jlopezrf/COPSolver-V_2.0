package cpls.entities;

import cpls.solver.HeuristicSolver;
import cpls.problem.ProblemGenericModel;

public class CPLSNode{
 	
 	protected var nodeConfig:NodeConfig;
 	protected var heuristicSolver:HeuristicSolver;
 	protected var problemModel:ProblemGenericModel;
 
 	public def this(nodeRole:Int){
 	}
 
 	public def initialize(config:NodeConfig, idPlace:Int){
 		Console.OUT.println("Nodo inicializado en el proceso" + idPlace);
 	}
 
 	public def setHeuristicSolver(hs:HeuristicSolver){
 		this.heuristicSolver = hs;
 	}
 
 	public def setProblemModel(pm:ProblemGenericModel){
 		this.problemModel = pm;
 	}
}
public type CPLSNode(nodeRole:Int) = CPLSNode{};