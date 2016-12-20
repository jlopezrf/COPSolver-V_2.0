package cpls.entities;

import cpls.CPLSOptionsEnum.NodeRoles;
import cpls.CPLSOptionsEnum.HeuristicsSupported;

public class NodeConfig{
 	
 	private var rol:Int;
 	private var heuristic:Int;
 	
 	public def this(rol:Int, heuristic:Int){
 		this.rol = rol;
 		this.heuristic = heuristic;
 	}
 
 	public def this(){
 
 	}
 	
 	public def setRol(rol:Int){
 		this.rol = rol;
 	}
 	
 	public def setHeuristic(heuristic:Int){
 		this.heuristic = heuristic;
 	}
}