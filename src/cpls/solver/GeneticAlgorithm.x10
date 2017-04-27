package cpls.solver;

import cpls.CPLSOptionsEnum;
import x10.util.Random;
import cpls.problem.ProblemGenericModel;
import cpls.ParamManager;
import cpls.util.Valuation;
import cpls.util.Utils;
import x10.util.RailUtils;


public class GeneticAlgorithm extends PopulBasedHeuristic{
	
	var population:Rail[GAIndividual];
 	var populationSize:Int;
 	var mutationRate:float;
 	val random:Random;
 	var bestCostGA:Long = Long.MAX_VALUE;
 	var currentCostGA:Long = Long.MAX_VALUE;
	
	public def this(sz:Long){
		super(sz);
 		super.mySolverType = CPLSOptionsEnum.HeuristicsSupported.GA_SOL;
 		this.random = new Random();
 		this.random.setSeed(System.nanoTime());
	}

 	public def search(currentCost:Long, bestCost:Long, nIter:Int) : Long{
 		val index1 = random.nextLong(populationSize);
 		val index2 = random.nextLong(populationSize);
 		Console.OUT.println("Index1: " + index1);
 		Console.OUT.println("Index2: " + index2);
 		val indiv1 = population(index1);
 		val indiv2 = population(index2);
 		var sons:Rail[GAIndividual] = crossing(indiv1, indiv2);
 		var mutatedSons:Rail[GAIndividual] = mutate(sons);
 		refreshPopulation(mutatedSons, index1, index2);
 		sortPopulation();
 		this.currentCostGA = population(0).getCost();
 		if(currentCostGA < bestCostGA){
 			bestCostGA = currentCostGA;
 			//Console.OUT.print("Costo (GASearch) in " + here + ". " + Runtime.worker() + ": " + currentCostGA);
 			//Utils.show(". Con variables: " , population(0n).getGenes());
 		}
 		super.variables = population(0).getGenes() as Valuation(sz);
 		return currentCostGA;
 	}
 
 	private val cmp : (GAIndividual,GAIndividual) => Int = (a:GAIndividual, b:GAIndividual) => {return(a.getCost() - b.getCost()) as Int;};
 
 	protected def sortPopulation(){
 		RailUtils.sort(this.population, cmp);
 		/*var aux:GAIndividual;
 		for(var i:Long = 1n; i < population.size + 1 as Int; i++){
 			for(var j:Int = 0n; j < population.size - i; j++){
 				if(population(j).getCost() > population(j+1).getCost()){
 					aux = population(j);
 					population(j) = population(j+1);
 					population(j+1) = aux;
 				}
 			}
 		}*/
 	}
 
 	public def initVariables(){
 		initialize(this.populationSize, super.sz);
 	}
 
 	protected def refreshPopulation(mutatedSons:Rail[GAIndividual], parentIndex1:Long, parentIndex2:Long){
 		//Jason: Estrategia de reemplazo comparando con los dos peores
 		RailUtils.sort(mutatedSons, cmp);
 		if(mutatedSons(0).getCost() < this.population(populationSize -1).getCost()){
 			this.population(populationSize -1) = mutatedSons(0);
 			if(mutatedSons(1).getCost() < this.population(populationSize -2).getCost()){
 				this.population(populationSize -2) = mutatedSons(1);
 			}
 		}else{
 			if(mutatedSons(0).getCost() < this.population(populationSize -2).getCost()){
 				this.population(populationSize -2) = mutatedSons(0);
 			}
 		}
 		//Jason: Estrategia de reemplazo comparando solo con los padres directos
 		//if(mutatedSons(0).getCost() < population(parentIndex1).getCost()) population(parentIndex1) = mutatedSons(0);
 		//if(mutatedSons(1).getCost() < population(parentIndex2).getCost()) population(parentIndex2) = mutatedSons(1);
 	}
	
	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		this.populationSize = opts("-GA_pz", 2n*problemModel.size as Int);
 		this.mutationRate = opts("-GA_mr", 0.4f);
 		initialize(populationSize, problemModel.size);
 		sortPopulation();
	}
	
 	//Population ramdomly initialized without verification
	public def initialize(populationSize:Long, individualSize:Long){	
 		this.population = new Rail[GAIndividual](populationSize, new GAIndividual(individualSize));
 		var initialValues:Rail[Int] = new Rail[Int](individualSize, 0n);
 		var copyInitialValues:Rail[Int];//  = new Rail[Int](individualSize, 0n);
 		var k:Int;
 		var x:Int;
		for(k = 0n; k < individualSize; k++){
 			initialValues(k) = k as Int;
		}
 		for(k = 0n; k < populationSize; k++){
 			copyInitialValues = new Rail[Int](individualSize, 0n);
 			Rail.copy(initialValues as Valuation(sz), copyInitialValues as Valuation(sz));
 			//copyInitialValues =  new Rail[Int](initialValues);
 			for( var i:Long = individualSize - 1 ; i > 0 ; i-- ){
 				//random.setSeed(System.nanoTime());
 				val j = random.nextLong( i + 1 );
 				Console.OUT.println("J randomciada: " + j);
 				x = copyInitialValues(i);
 				copyInitialValues(i) = copyInitialValues(j); 
 				copyInitialValues(j) = x;
 			}
 			population(k).setGenes(copyInitialValues);
 			population(k).setCost(problemModel.costOfSolution(sz, copyInitialValues as Rail[Int]{self.size == sz}));
 			Console.OUT.print("MsgType_0." + "Nodo: " + here + ". Costo: " + problemModel.costOfSolution(sz, copyInitialValues as Rail[Int]{self.size == sz}) +
 				". Variables: ");
 			printVector(copyInitialValues);
 		}
  		for(var i:Int = 0n; i < population.size; i++){
  			Console.OUT.print("MsgType_0." + "Nodo: " + here + ". Costo: " + population(i).getCost() + ". Variables: ");
  			printVector(population(i).getGenes()); 
  		}
	}

 	public static def printVector(vector:Rail[Int]){
 		for(var i:Int = 0n; i < vector.size; i++){
 			Console.OUT.print(vector(i) + "  ");
 		}
 		Console.OUT.print("\n");
 	}
 
 	public def crossing(i1:GAIndividual, i2:GAIndividual):Rail[GAIndividual]{
 		val indiv1 = new GAIndividual(i1);
 		val indiv2 = new GAIndividual(i2);
 		val sz = super.problemModel.size;
  		val sons = indiv1.insertPathCrossover(indiv2);
  		sons(0).setCost(this.problemModel.costOfSolution(sz, sons(0).getGenes() as Rail[Int]{self.size == sz}));
  		sons(1).setCost(this.problemModel.costOfSolution(sz, sons(1).getGenes() as Rail[Int]{self.size == sz}));
 		return sons;
 	}
 
 	public def mutate(sons:Rail[GAIndividual]){
 		var index1:Long;
 		var index2:Long;
 		for(son in sons){
 			if(this.random.nextFloat() < this.mutationRate){ //En esta parte sería necesario poner el parámetro de la tasa de mutación
 				index1 = random.nextLong(son.getSize());
 				index2 = random.nextLong(son.getSize());
 				swap(son, index1, index2);
 			}
 		}
 		return sons;
 	}
 
 	public def swap(indiv:GAIndividual, i:Long, j:Long){
 		indiv.swap(i as Int,j as Int);
 	}
}
public type GeneticAlgorithm(s:Long)=GeneticAlgorithm{self.sz==s};