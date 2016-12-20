package cpls;

import cpls.entities.CPLSNode;
import cpls.problem.ProblemGenericModel;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;
import cpls.entities.*;
import x10.array.Array_2; 

public class NodeInstancer{
 
 	public static def installSolvers(configCPLS:CPLSConfig){
 		
 		var explorersGroup:PlaceGroup = PlaceGroup.WORLD; //TODO:Separar los nodos
 		var headersGroup:PlaceGroup = PlaceGroup.WORLD; //TODO:Separar los nodos
 		
 		//Important: The number of elements in configNodes must be the same that the number of places
 		var configNodes:Array_2[NodeConfig] = configCPLS.getConfigNodes();
 		
 		for (var i:long=0; i<configNodes.numElems_1; i++) {
 			for (var j:long=0; j<configNodes.numElems_2; j++) {
 				PlaceGroupBuilder.execludePlace(Long placeId)
 			}
 		}
 		
 		var nodesPerTeam:Rail[PlaceGroup];
 
 		val masterNode = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int)](headersGroup,
 						() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.MASTER_NODE as Int));
 		
 		val explorersNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int)](explorersGroup,
 						() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int));
 		
 		val headNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int)](headersGroup,
 						() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int));
 		
 		
 		finish{
 			for (p in explorersGroup) at (p) async{
 				explorersNodes().initialize(p.id() as Int);
 			}
 			for (p in headersGroup) at (p) async{
 				headNodes().initialize(p.id() as Int);
 			}
 		}
 	}
 
  	public static struct NodeFactory{
 		public static def make(nodeRole:Int):CPLSNode(nodeRole){
 			switch(nodeRole){
 				case CPLSOptionsEnum.NodeRoles.EXPLORER_NODE: return new ExplorerNode(nodeRole);
 				case CPLSOptionsEnum.NodeRoles.HEAD_NODE: return new HeadNode(nodeRole);
 				case CPLSOptionsEnum.NodeRoles.MASTER_NODE: return new MasterNode(nodeRole);
 				default: return new ExplorerNode(nodeRole);
 			}
 		}
 	}
}
