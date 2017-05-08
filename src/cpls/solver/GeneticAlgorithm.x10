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
 	//val random:Random;
 	var bestCostGA:Long = Long.MAX_VALUE;
 	var currentCostGA:Long = Long.MAX_VALUE;
	
	public def this(sz:Long){
		super(sz);
 		super.mySolverType = CPLSOptionsEnum.HeuristicsSupported.GA_SOL;
 		//this.random = new Random();
 		//this.random.setSeed(System.nanoTime());
	}

 	public def search(currentCost:Long, bestCost:Long, nIter:Int) : Long{
 		val index1 = super.random.nextLong(populationSize);
 		var index2:Long;
 		do{
 			index2 = super.random.nextLong(populationSize);
 		}
 		while(index2 == index1);
 		//Jason: Pruebas del GA
 		Console.OUT.print("Individuo para cruzamiento 1. Costo: " + population(index1).getCost() + ".Variables: ");
 		printVector(population(index1).getGenes());
 		Console.OUT.print("Individuo para cruzamiento 2. Costo: " + population(index2).getCost() + ".Variables: ");
 		printVector(population(index2).getGenes());
 		val indiv1 = population(index1);
 		val indiv2 = population(index2);
 		var sons:Rail[GAIndividual] = crossing(indiv1, indiv2);
 		Console.OUT.print("Individuo 1 despues de cruzamiento. Costo: " + population(index1).getCost() + ".Variables: ");
 		printVector(population(index1).getGenes());
 		Console.OUT.print("Individuo 2 despues de cruzamiento. Costo: " + population(index2).getCost() + ".Variables: ");
 		printVector(population(index2).getGenes());
 		Console.OUT.print("Hijo 1. Costo: " + sons(0).getCost() + ".Variables: ");
 		printVector(sons(0).getGenes());
 		Console.OUT.print("Hijo 2. Costo: " + sons(1).getCost() + ".Variables: ");
 		printVector(sons(1).getGenes());
 		var mutatedSons:Rail[GAIndividual] = mutate(sons);
 		Console.OUT.print("Hijo 1 despues de mutacion. Afuera. Costo: " + mutatedSons(0).getCost() + ".Variables: ");
 		printVector(mutatedSons(0).getGenes());
 		Console.OUT.print("Hijo 2 despues de mutacion. Afuera. Costo: " + mutatedSons(1).getCost() + ".Variables: ");
 		printVector(mutatedSons(1).getGenes());
 		refreshPopulation(mutatedSons, index1, index2);
 		sortPopulation();
 		printPopulation();
 		this.currentCostGA = population(0).getCost();
 		if(currentCostGA < bestCostGA){
 			bestCostGA = currentCostGA;
 			super.variables = population(0).getGenes() as Valuation(sz);
 		}
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
 		/*Console.OUT.println("Poblacion ordenada: ");
 		for(var k:Int = 0n; k < this.population.size; k++){
 			printVector(this.population(k).getGenes());
 		}*/
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		this.populationSize = opts("-GA_pz", 2n*problemModel.size as Int);
 		this.mutationRate = opts("-GA_mr", 0.4f);
 		//initialize(populationSize, problemModel.size);
 		//sortPopulation();
 	}
 
 	public def initVariables(){
 		initialize(this.populationSize, super.sz);
 	}
 
 	protected def refreshPopulation(mutatedSons:Rail[GAIndividual], parentIndex1:Long, parentIndex2:Long){
 		//Jason: Estrategia de reemplazo comparando con los dos peores
 		RailUtils.sort(mutatedSons, cmp);
 		this.population(populationSize -2) = mutatedSons(0);
 		this.population(populationSize -1) = mutatedSons(1);
 		/*if(mutatedSons(0).getCost() < this.population(populationSize -1).getCost()){
 			this.population(populationSize -1) = mutatedSons(0);
 			if(mutatedSons(1).getCost() < this.population(populationSize -2).getCost()){
 				this.population(populationSize -2) = mutatedSons(1);
 			}
 		}else{
 			if(mutatedSons(0).getCost() < this.population(populationSize -2).getCost()){
 				this.population(populationSize -2) = mutatedSons(0);
 			}
 		}*/
 		//Jason: Estrategia de reemplazo comparando solo con los padres directos
 		//if(mutatedSons(0).getCost() < population(parentIndex1).getCost()) population(parentIndex1) = mutatedSons(0);
 		//if(mutatedSons(1).getCost() < population(parentIndex2).getCost()) population(parentIndex2) = mutatedSons(1);
 	}
	
 	//Population ramdomly initialized without verification
	public def initialize(populationSize:Long, individualSize:Long){	
 		this.population = new Rail[GAIndividual](populationSize);//(populationSize, new GAIndividual(individualSize));
 		for(var k:Int = 0n; k < this.population.size; k++){
 			this.population(k) = new GAIndividual(individualSize);
 			this.population(k).initialize();
 			this.population(k).setCost(problemModel.costOfSolution(sz, this.population(k).getGenes() as Rail[Int]{self.size == sz}));
 		}
 		/*//var copyInitialValues:Rail[Int];//  = new Rail[Int](individualSize, 0n);
 		var k:Int;
 		var x:Int;
  		Console.OUT.println("MsgType_0. Permutaciones generadas: ");
 		for(k = 0n; k < populationSize; k++){
 			var initialValues:Rail[Int] = new Rail[Int](individualSize, (i:Long) => i as Int);
 			for( var i:Long = individualSize - 1 ; i > 0 ; i-- ){
 				val j = random.nextLong( i + 1 );
 				x = initialValues(i);
 				initialValues(i) = initialValues(j); 
 				initialValues(j) = x;
 			}
 			this.population(k).setGenes(initialValues);
 			this.population(k).setCost(problemModel.costOfSolution(sz, initialValues as Rail[Int]{self.size == sz}));
 			Console.OUT.print("MsgType_0." + "Nodo: " + here + ". Costo: " + problemModel.costOfSolution(sz, initialValues as Rail[Int]{self.size == sz}) +
 				". Variables: ");
 			printVector(initialValues);
 		}
 		Console.OUT.println("MsgType_0. Poblacion generada: ");*/
 		sortPopulation();
 		printPopulation();
  		
	}

 	public def printPopulation(){
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
 		//val sz = super.problemModel.size;
  		val sons = indiv1.uniformCrossover(indiv2);
 		return sons;
 	}
 
 	public def mutate(sons:Rail[GAIndividual]){
 		var index1:Long;
 		var index2:Long;
 		for(son in sons){
 			if(this.random.nextFloat() < this.mutationRate){
 				index1 = super.random.nextLong(son.getSize());
 				index2 = super.random.nextLong(son.getSize());
 				Console.OUT.println("Index1 para mutacion: " + index1);
 				Console.OUT.println("Index2 para mutacion: " + index2);
 				swap(son, index1, index2);
 			}//else{
 			 //	Console.OUT.println("No muta");
 			 //}
 		}
  		sons(0).setCost(this.problemModel.costOfSolution(sz, sons(0).getGenes() as Rail[Int]{self.size == sz}));
 		sons(1).setCost(this.problemModel.costOfSolution(sz, sons(1).getGenes() as Rail[Int]{self.size == sz}));
 		Console.OUT.print("Hijo 1 despues de mutacion. Adentro. Costo: " + sons(0).getCost() + ".Variables: ");
 		printVector(sons(0).getGenes());
 		Console.OUT.print("Hijo 2 despues de mutacion. Adentro. Costo: " + sons(1).getCost() + ".Variables: ");
 		printVector(sons(1).getGenes());
 		return sons;
 	}
 
 	public def swap(indiv:GAIndividual, i:Long, j:Long){
 		indiv.swap(i as Int,j as Int);
 	}
}
public type GeneticAlgorithm(s:Long)=GeneticAlgorithm{self.sz==s};