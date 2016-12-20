package cpls.entities;

public class MasterNode extends CPLSNode{
 	public def this(size:Int){
 		super(size);
 	}
 	public def initialize(idNode:Int){
 		Console.OUT.println("Explorer Inicializado" + idNode);
 	}
}