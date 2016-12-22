package cpls.entities;

public class HeadNode extends CPLSNode{
	public def this(size:Int){
		super(size);
	}
	public def initialize(config:NodeConfig, idPlace:Int){
		Console.OUT.println("Head Inicializado en el nodo: " + idPlace);
	}
}