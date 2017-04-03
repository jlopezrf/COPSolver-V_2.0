package cpls.entities;
 
public struct State(sz:Long, cost:Long, vector:Rail[Int]{self.size==sz}, place:Int,
		  solverState:Rail[Int]{self.size==3}){}
public type State(s:Long)=State{self.sz==s}; 