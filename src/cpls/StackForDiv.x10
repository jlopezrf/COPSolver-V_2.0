package cpls;

import x10.util.Stack;
import cpls.entities.State;
import cpls.util.Monitor;

public class StackForDiv(sz:Long){

 	var stack:Stack[State(sz)];
 	var numElements:Int = 0n;
 	protected val monitor = new Monitor("StackForDiv");

 	public def this(size:Long){
 		property(size);		  
 		stack = new Stack[State(sz)]();
 	}
 
 	public def push(info:State(sz)){
 		//if(numElements < stackSize){
 			Console.OUT.println("Se realiza insercion en el StackForDiv " + here.id);
 			//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
 			return monitor.atomicBlock(()=> stack.push(info));
 			
 		//}
 		//return false;
 	}
 
 	public def pop():State(sz){
 		if(stack.size() > 0n){
 			val info = monitor.atomicBlock(()=> stack.pop());
 			//Console.OUT.println("Se realiza extraccion del StackForDiv");
 			//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
 			return info;
 		}else{
 			//Console.OUT.println("StackForDiv no tenia nada se retorna state con null");
 			return new State(sz, -1, null, 1n, null);
 		}
 	}
}
public type StackForDiv(s:Long) = StackForDiv{self.sz==s};