package cpls.solver;

public class PopulBasedHeuristic extends HeuristicSolver{
	public def this(sz:Long){
		super(sz);
	}
}
public type PopulBasedHeuristic(sz:Long)=PopulBasedHeuristic{self.sz==sz};