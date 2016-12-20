package cpls.problem;

public class ProblemGenericModel(sz:Long){
 	protected val size = sz;
}
public type ProblemGenericModel(s:Long) = ProblemGenericModel{self.sz==s};