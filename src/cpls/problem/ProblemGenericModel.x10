package cpls.problem;

public class ProblemGenericModel(sz:Long){
 	protected val size = sz;
 	public def this(sz:Long){
 		property(sz);
 	}
}
public type ProblemGenericModel(s:Long) = ProblemGenericModel{self.sz==s};