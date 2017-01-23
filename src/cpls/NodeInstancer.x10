package cpls;

import cpls.problem.ProblemGenericModel;
import cpls.solver.HeuristicSolver;
import cpls.CPLSOptionsEnum;
import cpls.entities.*;
import x10.array.Array_2;
import x10.lang.PlaceGroup.SimplePlaceGroup;
import x10.lang.Iterator;

public class NodeInstancer{
	
	var masterNode:CPLSNode;
	
 	public static def installSolvers(configCPLS:CPLSConfig){
 		
 		//Important: The number of elements in configNodes must be the same that the number of places
 		var masterNode:CPLSNode = new MasterNode();
 		val configNodes:Array_2[cpls.entities.NodeConfig] = configCPLS.getConfigNodes();
 		
 		//******************InterTeam Communication Parameters distribution to Nodes*****************//
 		for(conf in configNodes){
 			conf.setOutTeamTime(configCPLS.getOutTeamTime());
 			//conf.
 		}
 		//******************************************************************************************//		
 
 		//*************************************Inicialización por tipos de nodo*******************************************//
 		//****************************************************************************************************************//
 		var headersGroup:PlaceGroup = PlaceGroup.make(configNodes.numElems_1);
 		Console.OUT.println("Numero de Teams: " + headersGroup.size);
 		
 		var numExplorers:Long = configNodes.numElems_1*(configNodes.numElems_2 - 1);
 		if(configCPLS.getIsThereAMasterNode()){
 			numExplorers = numExplorers - 1;
 			masterNode = NodeFactory.make(CPLSOptionsEnum.NodeRoles.MASTER_NODE);
 			masterNode.initialize(configNodes(0,0), Place.FIRST_PLACE.id as Int, configCPLS.getCPLSPoolConfig());
 			//Console.OUT.println("Heuristica del master: " + HeuristicFactory.getHeuristicName(configNodes(0,0).getHeuristic()));
 		}
 		var explorersGroup:PlaceGroup = PlaceGroup.make(numExplorers);
 		//Console.OUT.println("Numero de explorers: " + explorersGroup.size);
 		
 		val headNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int)](headersGroup,
 				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.HEAD_NODE as Int));
 		val explorersNodes = PlaceLocalHandle.make[CPLSNode(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int)](explorersGroup,
 				() => NodeFactory.make(CPLSOptionsEnum.NodeRoles.EXPLORER_NODE as Int));
 		
 		finish{	
 			for (p in headersGroup) at (p) async{
 				if(configCPLS.getIsThereAMasterNode() && p.id()==0){
 					headNodes().initialize(configNodes(p.id(), 1), p.id() as Int, configCPLS.getTeamsPoolConfig());
 				}else{
 					headNodes().initialize(configNodes(p.id(),0), p.id() as Int, configCPLS.getTeamsPoolConfig());
 				}
 			}
 			for (p in explorersGroup) at (p) async{
 				if(configCPLS.getIsThereAMasterNode()){
 					val indice_i = (p.id() as Int + 1) / (configNodes.numElems_2 - 1);
 					val indice_j = ((p.id() as Int + 1) % (configNodes.numElems_2 - 1)) + 1;
 					explorersNodes().initialize(configNodes(indice_i,indice_j), p.id() as Int, null);
 				}else{
 					val indice_i = p.id() as Int / (configNodes.numElems_2 -1);
 					val indice_j = p.id() as Int % (configNodes.numElems_2 - 1);
 					explorersNodes().initialize(configNodes(indice_i,indice_j + 1), p.id() as Int, null);
 					//Console.OUT.println("Explorer Place: " + p);
 				}
 			}
 		}
 
 		//*********************Setting pointers for communications and heuristic configuration****************************//
 		//****************************************************************************************************************//		
 		finish{
 			if(configCPLS.getIsThereAMasterNode()){
 				//Console.OUT.println("Se ingresa a setear los apuntadores en el master");
 				masterNode.addPointerComm(headNodes);
	 			masterNode.addPointerComm(explorersNodes);
	 			masterNode.configHeuristic(configCPLS.getPoblemModel());
	 		}
	 		for (p in headersGroup) at (p) async{
	 			//Console.OUT.println("Se ingresa a setear los apuntadores en los headers");
	 				(headNodes() as HeadNode).setMasterNodeIndicator(configCPLS.getIsThereAMasterNode());
	 				headNodes().addPointerComm(headNodes);
	 				headNodes().addPointerComm(explorersNodes);
	 				headNodes().configHeuristic(configCPLS.getPoblemModel());
	 		}
	 		for (p in explorersGroup) at (p) async{
	 			//Console.OUT.println("Se ingresa a setear los apuntadores en los explorers");
	 			explorersNodes().addPointerComm(headNodes);
	 			explorersNodes().configHeuristic(configCPLS.getPoblemModel());
	 		}
 		}
 		//****************************************************************************************************************//
 		
 		//******************************************SendStart Signal******************************************************//
 		//****************************************************************************************************************//
 		finish{
 			if(configCPLS.getIsThereAMasterNode()){
 				masterNode.start(configCPLS.getSeed(), configCPLS.getTargetCost(), configCPLS.getStrictLow());
 			}
 			for (p in headersGroup) at (p) async{
 				headNodes().start(configCPLS.getSeed(), configCPLS.getTargetCost(), configCPLS.getStrictLow());
 			}
 			for (p in explorersGroup) at (p) async{
 				explorersNodes().start(configCPLS.getSeed(), configCPLS.getTargetCost(), configCPLS.getStrictLow());
 			}
 		}
 		//****************************************************************************************************************//
 	}
 
  	public static struct NodeFactory{
 		public static def make(nodeRole:Int):CPLSNode{
 			switch(nodeRole){
 				case CPLSOptionsEnum.NodeRoles.EXPLORER_NODE: return new ExplorerNode();
 				case CPLSOptionsEnum.NodeRoles.HEAD_NODE: return new HeadNode();
 				case CPLSOptionsEnum.NodeRoles.MASTER_NODE: return new MasterNode();
 				default: return new ExplorerNode();
 			}
 		}
 	}
}
