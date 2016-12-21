package cpls;

import cpls.entities.CPLSNode;
import cpls.problem.ProblemGenericModel;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;
import cpls.entities.*;
import x10.array.Array_2;
import x10.lang.PlaceGroup.SimplePlaceGroup;
import x10.lang.Iterator;

public class NodeInstancer{
 
 	public static def installSolvers(configCPLS:CPLSConfig){
 		
 		//Important: The number of elements in configNodes must be the same that the number of places
 		var configNodes:Array_2[NodeConfig] = configCPLS.getConfigNodes();
 		var headersGroup:PlaceGroup = PlaceGroup.make(configNodes.numElems_1);
 		var numExplorers:Long = configNodes.numElems_1*(configNodes.numElems_2 - 1);
 		if(configCPLS.getIsThereAMasterNode()){
 			numExplorers = numExplorers - 1;
 		}
 		var explorersGroup:PlaceGroup = PlaceGroup.make(numExplorers);
 		
 		val explorersNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int)](explorersGroup,
 				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int));
 		
 		val headNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int)](headersGroup,
 				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int));

 		var nodesPerTeam:Rail[PlaceGroup];
 		
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
