package cpls.entities;

public class HeadNode extends CPLSNode{
	public def this(size:Int){
		super(size);
	}
	public def initialize(idNode:Int){
		Console.OUT.println("Head Inicializado en el nodo: " + idNode);
	}
}