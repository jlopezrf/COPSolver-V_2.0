package cpls.solver;

public class HeuristicSolver(sz:Long){

 	protected val size = sz;
 
 	public def this(sz:Long){
 		property(sz);
 	} 
}
public type HeuristicSolver(s:Long) = HeuristicSolver{self.sz==s};