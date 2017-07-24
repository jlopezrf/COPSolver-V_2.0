package cpls;

import cpls.entities.State;

public class GlobalBestConf(sz:Long, confSize:Long){
	
	protected var globalBestConf:Rail[State(sz)];
	protected var bestConfEver:State(sz) = new State(sz, -1, null, -1 as Int,null);
	
	public def this(size:Long, confSize:Long){
		property(size, confSize);
		this.globalBestConf = new Rail[State(sz)]();
	}
	
	public def put(info:State(sz), index:Int){
		this.globalBestConf(index) = info;
 		//Console.OUT.println("Se realiza insercion en el globalBestConf");
 		//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
 		if(this.bestConfEver.cost == -1){
 			this.bestConfEver = info;
 		}else if(this.bestConfEver.cost != -1 && this.bestConfEver.cost > info.cost){
 			this.bestConfEver = info;
 		}
	}
	
	public def get(index:Int):State(sz){
 		val info = this.globalBestConf(index);
 		//Console.OUT.println("Se realiza extraccion del globalBestConf");
 		//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
		return info;
	}
	
	public def getBestConfEver(){
		val copy = this.bestConfEver;
		this.bestConfEver = new State(sz, -1, null, -1 as Int,null);
		return copy;
	}

}
public type GlobalBestConf(s:Long) = GlobalBestConf{self.sz==s};