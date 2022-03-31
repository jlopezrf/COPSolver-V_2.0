/* 
 * PHYSH - Parallel HYbridization for Simple Heuristics
 * 
 * MIT License
 *
 * Copyright (c) 2022 Jheisson Argiro López Restrepo
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

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
