package cpls;

public class ComManager(sz:Long){
 	protected val size = sz;
}
public type ComManager(s:Long) = ComManager{self.sz==s};