package cpls.solver;

public class SingleSolHeuristic extends HeuristicSolver{
 	public def this(sz:Long){
 		super(sz);
 	}
}
public type SingleSolHeuristic(sz:Long)=SingleSolHeuristic{self.sz==sz};