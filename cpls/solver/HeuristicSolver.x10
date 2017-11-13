package cpls.solver;

import cpls.problem.ProblemGenericModel;
import cpls.util.MovePermutation;
import cpls.util.Utils;
import cpls.util.Valuation;
import cpls.util.Logger;
import cpls.measurements.GlobalStats;
import x10.util.Random;
import cpls.ParamManager;
import x10.util.StringUtil;
import cpls.CPLSOptionsEnum;


public class HeuristicSolver(sz:Long){
 	protected val move = new MovePermutation(-1n, -1n);
 	protected var random : Random;
 	protected var nSwap : Int;
 	protected var problemModel:ProblemGenericModel;
 	protected var mySolverType:Int;
 	protected var variables:Valuation(sz);//Rail[Int]{size == sz};

 	public def this(sz:Long){
 		property(sz);
 		//this.mySolverType = CPLSOptionsEnum.HeuristicsSupported.UNKNOWN_SOL;
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		this.variables = new Rail[Int](sz, (i:Long) => i as Int);
 		this.problemModel = problemModel;
 	}
 
 	/**
 	 *  Search process (in loop functionality)
 	 *  To be overwrited for each child class (solver) 
 	 */
 	public def search(currentCost:Long, bestCost:Long, nIter:Int):Long{
 		// Swap two random variables
 		val sz = this.problemModel.size;
 		move.setFirst(random.nextLong(problemModel.size));
 		move.setSecond(random.nextLong(problemModel.size));
 		swapVariables(move.getFirst(), move.getSecond());
 		nSwap++;
 		
 		this.problemModel.executedSwap(sz, move.getFirst(), move.getSecond(), variables as Valuation(sz));
 		val costo = problemModel.costOfSolution(sz, true, variables as Valuation(sz));
 		/*if(costo < currentCost){
 			Console.OUT.print("Costo (RandomSearch): " + costo + ". Con variables: ");
 			Console.OUT.print("\n");
 		}*/
 		return costo;
 	}
 
 	//public def setBaseVariables(variablesIn:Rail[Int]){
 	//	Rail.copy(variablesIn as Valuation(sz), this.variables as Valuation(sz));
 	//}
 	
 	public def initVar(){
 		this.nSwap = 0n;
 	}
 	
 	public def applyLS(){
 	}
 	
 	public def clearNSwap(){
 		this.nSwap = 0n;
 	}
 	
 	public def getNSwap(){
 		return nSwap;
 	}

 	public def setSeed(inSeed:Long){
 		this.random = new Random(inSeed + here.id);
 	}
 
 	public def setSolverType(mySolverType:Int){
 		this.mySolverType = mySolverType;
 	}
 
 	public def getVariables():Rail[Int]{
 		//Console.OUT.println("Nodo: " + here.id + " pidiendo variables para crear State");
 		return this.variables;
 	}
 
 	public def setVariables(variables:Rail[Int]{size == sz}){
 		this.variables = variables;
 	}
 
 	public def swapVariables( i:Long, j:Long):void{
 		val x = variables(i);
 		variables(i) = variables(j); 
 		variables(j) = x;
 	}
 
 	//Jason: Migration
 	public def tryInsertIndividual(varables:Rail[Int], sze:Long){varables.size == sze}:Boolean{
 		Console.OUT.println("BadInvocation of tryInsertIndividual, this its not a GA Heuristic");
 		return false;
 	}
 
 	public def getWorstCost():Long{
 		Console.OUT.println("BadInvocation of getWorstCost, this its not a GA Heuristic");
 		return Long.MAX_VALUE;
 	}
 
 	//Jason: Migration
 	public def getConfigForPop(replace:Boolean):Rail[Int]{
 		Console.OUT.println("BadInvocation of getConfigForPop, this is not a GA Heuristic");
 		return null;
 	}
 
 	public def launchEventForStagnation():Boolean{
 		return false;//Console.OUT.println("Error. launchEventForStagnation() invokation in HeuristicSolver");
 	}
 
 	public def setKill(value:Boolean){
 
 	}
 
 	public def displayInfo(string:String){
 		Console.OUT.println("Error. displayInfo() invokation in HeuristicSolver");
 	}
 
 	public def reset ( var n : Long, totalCost : Long ) : Long {
  	 	while( n-- != 0 ){
  	 		val i = random.nextLong(variables.size);
 			val j = random.nextLong(variables.size);
  			swapVariables(i,j);
  			//Console.OUT.println("Este es el While problematico");
  		}
  		return -1n;
  	}
 
 	public def restartVar(){
 
 	}
 
 	public def initVariables(){
 		this.variables = this.problemModel.initialize(this.random.nextLong()) as Valuation(sz);
 	}
 
 	public def clearProblemModel(){
 		this.problemModel.clearProblemModel();
 	}
 
 	public def createNewSol(){
 		val conf = this.problemModel.createNewSol();
 		//Console.OUT.println("at Heuristic Sover created Solution: " + conf);
 		return conf;
 	}
 
 	/**
  	* Método agregado para Migración, para crear una nueva solución cuando en el stackForDiv
  	* no hay nada
  	* su solución
  	* */
 	public def createNewConf(){
 		return this.problemModel.initialize(this.random.nextLong()) as Valuation(sz);
 	}
 
 	public def costOfSolution(){
 		return this.problemModel.costOfSolution(sz, true, variables);
 	}
 
 	public def getSizeProblem(){
 		return this.problemModel.size;
 	}
 
 	public def getDistance(a:Rail[Int], b:Rail[Int]){
 		//val sz = this.problemModel.size;
 		return this.problemModel.distance(sz, a as Rail[Int]{a.size == sz}, b as Rail[Int]{b.size == sz});

 	}
 
 	public def verify(conf:Rail[Int]){
 		//val sz = this.problemModel.size;
 		return this.problemModel.verify(sz, conf as Valuation(sz));

 	}
 
 	public def displaySolution(conf:Rail[Int]){
 		val sz = this.problemModel.size;
 		this.problemModel.displaySolution(sz, conf as Valuation(sz));
 	}
 
 	public def costOfSolution(sz:Long, conf:Valuation(sz)):Long{
 		return this.problemModel.costOfSolution(sz, conf);
 	}
}
public type HeuristicSolver(s:Long) = HeuristicSolver{self.sz==s};
