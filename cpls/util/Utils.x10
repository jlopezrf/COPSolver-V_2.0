package cpls.util;

public class Utils {
	public static def copy[T](a:Rail[T]):Rail[T]{self.size==a.size} =new Rail[T](a.size, (i:Long)=>a(i));
	
	public static def show(s:String, d: Rail[Int]) {
	    Console.OUT.print(s + " in "+here.id+" : ");
	    for(k in d.range()) 
	        Console.OUT.print(" " + d(k));		
	    Console.OUT.println("");
	}
}