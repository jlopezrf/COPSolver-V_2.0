package cpls.entities;

public class ExplorerNode extends CPLSNode{
 	public def this(size:Int){
 		super(size);
 	}
 	public def initialize(config:NodeConfig, idPlace:Int){
 		Console.OUT.println("Explorer Inicializado en lo nodo: " + idPlace);
 	}
}