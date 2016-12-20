package cpls;

import cpls.entities.CPLSNode;
import cpls.problem.ProblemGenericModel;
import cpls.HeuristicFactory;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;

public class NodeInstancer{
 
 	public static def installSolvers(pgm:ProblemGenericModel, configCPLS:Rail[NodeConfig]){
 
 		var explorersGroup:PlaceGroup = PlaceGroup.WORLD; //TODO:Separar los nodos
 		var headersGroup:PlaceGroup = PlaceGroup.WORLD; //TODO:Separar los nodos
 		
 		var nodesPerTeam:Rail[PlaceGroup];
 
 		val explorersNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int)](explorersGroup,
 						() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int));
 		val headNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int)](headersGroup,
 						() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int));
 
 		finish{
 			for (p in explorersGroup) at (p) async{
 				explorersNodes().initialize();
 			}
 			for (p in headersGroup) at (p) async{
 				headNodes().initialize();
 			}
 		}
 	}
 
  	public static struct NodeFactory{
 		public static def make(nodeRole:Int):CPLSNode(nodeRole){
 			switch(nodeRole){
 				case CPLSOptionsEnum.NodeRoles.EXPLORER_NODE:   //return new ExplorerNode( size, ss , opts);
 				case CPLSOptionsEnum.NodeRoles.HEAD_NODE:   //return new HeadNode( size, ss, opts);
 				case CPLSOptionsEnum.NodeRoles.MASTER_NODE: //return new MasterNode( size, ss, opts);
 				default:	   //return new RandomSearch( size, ss, opts);
 			}
 			return null;
 		}
 	}
}
