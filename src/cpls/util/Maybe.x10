package cpls.util;

public class Maybe[T] {
    val data:T;
    public def this(t:T){data=t;}
    public operator this():T=data;
}