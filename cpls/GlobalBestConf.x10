package cpls;

import cpls.entities.State;
import cpls.util.Utils;

public class GlobalBestConf(sz:Long, confSize:Long){
	
	protected var globalBestConf:Rail[State(sz)];
	protected var bestConfEver:State(sz) = new State(sz, Long.MAX_VALUE, null, -1 as Int,null);
	protected var bestConfEverChanged:Boolean = false;
	
	public def this(size:Long, confSize:Long){
		property(size, confSize);
		this.globalBestConf = new Rail[State(sz)](confSize, new State(sz, Long.MAX_VALUE, new Rail[Int](sz, 1n), -1 as Int,null));
 		//Console.OUT.println("Creacion del GlobalBestConf: ");
 		for(var i:Int = 0n; i < confSize; i++){
 			this.globalBestConf(i) = new State(sz, Long.MAX_VALUE, new Rail[Int](sz, 1n), -1 as Int,null);
 			//Console.OUT.println(this.globalBestConf(i));
 		}
	}
	
	public def put(info:State(sz), index:Int){
		this.globalBestConf(index) = new State(info.sz, info.cost, info.vector, info.place, info.solverState);
		if(info.cost < this.bestConfEver.cost){
			this.bestConfEver = new State(info.sz, info.cost, info.vector, info.place, info.solverState);
			this.bestConfEverChanged = true;
		}
 		//Console.OUT.println("    Informacion en el GlobalBestConf");
 		//for(var i:Int = 0n; i < this.globalBestConf.size; i++){
 		//	Console.OUT.println("    "+ this.globalBestConf(i).vector + "Costo: " +  this.globalBestConf(i).cost);
 		//}
	}
	
	public def get(index:Int):State(sz){
 		val info = new State(this.globalBestConf(index).sz, this.globalBestConf(index).cost, this.globalBestConf(index).vector, this.globalBestConf(index).place, this.globalBestConf(index).solverState);
 		//Console.OUT.println("Se realiza extraccion del globalBestConf");
 		//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
		return info;
	}
	
	public def getBestConfEver(){
		val copy = new State(this.bestConfEver.sz, this.bestConfEver.cost, this.bestConfEver.vector, this.bestConfEver.place, this.bestConfEver.solverState);
		this.bestConfEverChanged = false;
		return copy;
	}
	
	public def isANewBestConfEver(){
		return this.bestConfEverChanged;
	}

 	public def getSize(){
 		return this.globalBestConf.size;
 	}

}
public type GlobalBestConf(s:Long) = GlobalBestConf{self.sz==s};