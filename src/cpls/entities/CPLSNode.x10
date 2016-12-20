package cpls.entities;

import cpls.solver.HeuristicSolver;
import cpls.problem.ProblemGenericModel;

public class CPLSNode(nodeRole:Int){
 	
 	protected val nodeConfig = nodeRole;

 	protected var heuristicSolver:HeuristicSolver;
 	protected var problemModel:ProblemGenericModel;
 
 	public def this(nodeRole:Int){
 		property(nodeRole);
 	}
 
 	public def initialize(idNode:Int){
 		Console.OUT.println("Nodo inicializado en el proceso" + idNode);
 	}
 
 	public def setHeuristicSolver(hs:HeuristicSolver){
 		this.heuristicSolver = hs;
 	}
 
 	public def setProblemModel(pm:ProblemGenericModel){
 		this.problemModel = pm;
 	}
}
public type CPLSNode(nodeRole:Int) = CPLSNode{self.nodeRole==nodeRole};