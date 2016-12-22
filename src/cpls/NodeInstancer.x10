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
 		var masterNode:CPLSNode;
 		val configNodes:Array_2[cpls.entities.NodeConfig] = configCPLS.getConfigNodes();
 		
 		//*************************************Inicialización por tipos de nodo*******************************************//
 		//****************************************************************************************************************//
 		var headersGroup:PlaceGroup = PlaceGroup.make(configNodes.numElems_2);
 		Console.OUT.println("Numero de Teams: " + headersGroup.size);
 		var numExplorers:Long = configNodes.numElems_2*(configNodes.numElems_1 - 1);
 		if(configCPLS.getIsThereAMasterNode()){
 			numExplorers = numExplorers - 1;
 			masterNode = NodeFactory.make(CPLSOptionsEnum.NodeRoles.MASTER_NODE);
 			masterNode.initialize(configNodes(0,0), Place.FIRST_PLACE.id as Int);
 		}
 		var explorersGroup:PlaceGroup = PlaceGroup.make(numExplorers);
 		Console.OUT.println("Numero de explorers: " + explorersGroup.size);
 		
 		val headNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int)](headersGroup,
 				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int));
 		val explorersNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int)](explorersGroup,
 				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int));
 		
 		finish{	
 			for (p in headersGroup) at (p) async{
 				if(configCPLS.getIsThereAMasterNode() && p.id()==0){
 					headNodes().initialize(configNodes(p.id(), 1), p.id() as Int);
 				}else{
 					headNodes().initialize(configNodes(p.id(),0), p.id() as Int);
 				}
 			}
 			for (p in explorersGroup) at (p) async{
 				if(configCPLS.getIsThereAMasterNode() && p.id()==0){
 					if(configNodes.numElems_1 > 2){
 						explorersNodes().initialize(configNodes(0, 2), p.id() as Int);
 					}
 				}else{
 					val indice_i = p.id() as Int / configNodes.numElems_1;
 					val indice_j = p.id() as Int % configNodes.numElems_1;
 					explorersNodes().initialize(configNodes(indice_i,indice_j), p.id() as Int);
 				}
 			}
 		}
 		//****************************************************************************************************************//
 		
 		//******************************************Inicialización por Teams**********************************************//
 		//****************************************************************************************************************//
 		//val groupNodesPerTeam:Rail[PlaceGroup] = new Rail[PlaceGroup](configNodes.numElems_2);
 		//val pointersToNodesPerTeam:Rail[PlaceLocalHandle[CPLSNode]] = new Rail[PlaceLocalHandle[CPLSNode]]();
 		//
 		//for(var i:Int=0n; i<groupNodesPerTeam.size; i++){
 		//	if(configCPLS.getIsThereAMasterNode() && i==0n){
 		//		groupNodesPerTeam(i) = PlaceGroup.make(configNodes.numElems_1 -1);
 		//		PlaceLocalHandle.make[CPLSNode](groupNodesPerTeam(i),
 		//										() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.MASTER_NODE as Int));
 		//	}else{
 		//		groupNodesPerTeam(i) = PlaceGroup.make(configNodes.numElems_1);
 		//		PlaceLocalHandle.make[CPLSNode](groupNodesPerTeam(i),
 		//				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.MASTER_NODE as Int));
 		//	}
 		//}
 		//finish{
 		//	masterNode = NodeFactory.make(CPLSOptionsEnum.NodeRoles.MASTER_NODE);
 		//	masterNode.initialize(Place.FIRST_PLACE.id as Int);
 		//	for(var i:Int=0n; i<groupNodesPerTeam.size; i++){
 		//		val j = i;
 		//		for (p in groupNodesPerTeam(j)) at (p) async{
 		//			//pointersToNodesPerTeam(j)().initialize(p.id() as Int);
 		//		}
 		//	}
 		//}
 		//****************************************************************************************************************//
 		
 	}
 
  	public static struct NodeFactory{
 		public static def make(nodeRole:Int):CPLSNode{
 			switch(nodeRole){
 				case CPLSOptionsEnum.NodeRoles.EXPLORER_NODE: return new ExplorerNode(nodeRole);
 				case CPLSOptionsEnum.NodeRoles.HEAD_NODE: return new HeadNode(nodeRole);
 				case CPLSOptionsEnum.NodeRoles.MASTER_NODE: return new MasterNode(nodeRole);
 				default: return new ExplorerNode(nodeRole);
 			}
 		}
 	}
}
