package cpls.entities;

public class MasterNode extends CPLSNode{
 	public def this(size:Int){
 		super(size);
 	}
 	public def initialize(config:NodeConfig, idPlace:Int){
 		Console.OUT.println("Master Inicializado en nodo: " + idPlace);
 	}
}