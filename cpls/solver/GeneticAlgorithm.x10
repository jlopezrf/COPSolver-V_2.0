package cpls.solver;

import cpls.CPLSOptionsEnum;
import x10.util.Random;
import cpls.problem.ProblemGenericModel;
import cpls.ParamManager;
import cpls.util.Valuation;
import cpls.util.Utils;
import x10.util.RailUtils;


public class GeneticAlgorithm extends PopulBasedHeuristic{
	
	var population:GAPopulation = new GAPopulation();
 	var populationSize:Int;
 	var mutationRate:float;
 	var crossingOperator:Int;
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
 		/*Console.OUT.print("Individuo para cruzamiento 1. Costo: " + population(index1).getCost() + ".Variables: ");
 		printVector(population(index1).getGenes());
 		Console.OUT.print("Individuo para cruzamiento 2. Costo: " + population(index2).getCost() + ".Variables: ");
 		printVector(population(index2).getGenes());*/
 		val indiv1 = population.getIndividual(index1);
 		val indiv2 = population.getIndividual(index2);
 		var sons:Rail[GAIndividual] = crossing(indiv1, indiv2);
 		/*Console.OUT.print("Individuo 1 despues de cruzamiento. Costo: " + population(index1).getCost() + ".Variables: ");
 		printVector(population(index1).getGenes());
 		Console.OUT.print("Individuo 2 despues de cruzamiento. Costo: " + population(index2).getCost() + ".Variables: ");
 		printVector(population(index2).getGenes());
 		Console.OUT.print("Hijo 1. Costo: " + sons(0).getCost() + ".Variables: ");
 		printVector(sons(0).getGenes());
 		Console.OUT.print("Hijo 2. Costo: " + sons(1).getCost() + ".Variables: ");
 		printVector(sons(1).getGenes());*/
 		var mutatedSons:Rail[GAIndividual] = mutate(sons);
 		/*Console.OUT.print("Hijo 1 despues de mutacion. Afuera. Costo: " + mutatedSons(0).getCost() + ".Variables: ");
 		printVector(mutatedSons(0).getGenes());
 		Console.OUT.print("Hijo 2 despues de mutacion. Afuera. Costo: " + mutatedSons(1).getCost() + ".Variables: ");
 		printVector(mutatedSons(1).getGenes());*/
 		this.population.refreshPopulation(mutatedSons, index1, index2);
 		this.population.sort();
 		//printPopulation();
 		this.currentCostGA = population.getIndividual(0).getCost();
 		if(currentCostGA < bestCostGA){
 			bestCostGA = currentCostGA;
 			super.variables = population.getIndividual(0).getGenes() as Valuation(sz);
 		}
 		return currentCostGA;
 	}
 
 	private val cmp : (GAIndividual,GAIndividual) => Int = (a:GAIndividual, b:GAIndividual) => {return(a.getCost() - b.getCost()) as Int;};
 
 	protected def sortPopulation(){
 		this.population.sort();
 	}
 
 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		//this.populationSize = opts("-GA_pz", 2n*problemModel.size as Int);
 		this.populationSize = opts("-GA_pz", 2n*Place.MAX_PLACES as Int);
 		this.mutationRate = opts("-GA_mr", 0.4f);
 		this.crossingOperator = opts("-GA_co", 0n);
 		//initialize(populationSize, problemModel.size);
 		//sortPopulation();
 	}
 
 	public def initVariables(){
 		//initialize(this.populationSize, super.sz);
 		this.population.initialize(populationSize, super.sz, super.problemModel);
 		this.population.sort();
 	}
 
 	//protected def refreshPopulation(mutatedSons:Rail[GAIndividual], parentIndex1:Long, parentIndex2:Long){
 		//Jason: Estrategia de reemplazo comparando con los dos peores
 		//RailUtils.sort(mutatedSons, cmp);
 		//this.population.setIndividual(populationSize -2, mutatedSons(0);
 		//this.population.setIndividual(populationSize -1, mutatedSons(1);
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
 	//}
	
 	//Population ramdomly initialized without verification
	//public def initialize(populationSize:Long, individualSize:Long){	
 		//this.population.initialize(populationSize);// = new Rail[GAIndividual](populationSize);//(populationSize, new GAIndividual(individualSize));
 		//for(var k:Int = 0n; k < this.population.size; k++){
 		//	this.population(k) = new GAIndividual(individualSize);
 		//	this.population(k).initialize();
 		//	this.population(k).setCost(problemModel.costOfSolution(sz, this.population(k).getGenes() as Rail[Int]{self.size == sz}));
 		//}
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
 		//this.population.sort();
 		//printPopulation();
  		
	//}

 	public def printPopulation(){
 		for(var i:Int = 0n; i < population.getPopulationSize(); i++){
 			Console.OUT.print("MsgType_0." + "Nodo: " + here + ". Costo: " + population.getIndividual(i).getCost() + ". Variables: ");
 			printVector(population.getIndividual(i).getGenes()); 
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
 		var sons:Rail[GAIndividual];
 		if(this.crossingOperator == 0n){
 			sons = indiv1.uniformCrossover(indiv2);
 		}else if(this.crossingOperator == 1n){
 			sons = indiv1.partiallyMatchedCrossover(indiv2);
 		}else{
 			sons = indiv1.insertPathCrossover(indiv2);
 		}
 		return sons;
 	}
 
 	public def mutate(sons:Rail[GAIndividual]){
 		var index1:Long;
 		var index2:Long;
 		for(son in sons){
 			if(this.random.nextFloat() < this.mutationRate){
 				index1 = super.random.nextLong(son.getSize());
 				do{
 					index2 = super.random.nextLong(son.getSize());
 				}while(index2 == index1);	
 				//Console.OUT.println("Index1 para mutacion: " + index1);
 				//Console.OUT.println("Index2 para mutacion: " + index2);
 				son.swap(index1 as Int, index2 as Int);
 				//swap(son, index1, index2);
 			}//else{
 			 //	Console.OUT.println("No muta");
 			 //}
 		}
 		for(var i:Int = 0n; i< sons.size; i++){
 			sons(i).setCost(this.problemModel.costOfSolution(sz, sons(i).getGenes() as Rail[Int]{self.size == sz}));
 		}
  		//sons(0).setCost(this.problemModel.costOfSolution(sz, sons(0).getGenes() as Rail[Int]{self.size == sz}));
 		//sons(1).setCost(this.problemModel.costOfSolution(sz, sons(1).getGenes() as Rail[Int]{self.size == sz}));
 		/*Console.OUT.print("Hijo 1 despues de mutacion. Adentro. Costo: " + sons(0).getCost() + ".Variables: ");
 		printVector(sons(0).getGenes());
 		Console.OUT.print("Hijo 2 despues de mutacion. Adentro. Costo: " + sons(1).getCost() + ".Variables: ");
 		printVector(sons(1).getGenes());*/
 		return sons;
 	}
 
 	public def mutateIndiv(indiv:GAIndividual){
 		var index1:Long;
 		var index2:Long;
 		index1 = super.random.nextLong(indiv.getSize());
 		do{
 			index2 = super.random.nextLong(indiv.getSize());
 		}while(index2 == index1);	
 		//Console.OUT.println("Index1 para mutacion: " + index1);
 		//Console.OUT.println("Index2 para mutacion: " + index2);
 		indiv.swap(index1 as Int, index2 as Int);
 		//swap(son, index1, index2);
 		return indiv;
 	}
 
 	//Jason: Migration
 	public def tryInsertIndividual(varables:Rail[Int], sze:Long){varables.size == sze}:Boolean{
 		//Console.OUT.println("Soy nodo master: " + here.id + ", y acabo de ingresar a tryInsertIndividual");
 		var minDistance: Double = Double.MAX_VALUE;
 		var distance: Double = 0n;
 		for(var i:Int = 0n; i < population.getPopulationSize(); i++){
 			distance = distance(varables as Valuation(sz), population.getIndividual(i).getGenes() as Valuation(sz));			
 			if(distance < minDistance){
 				minDistance = distance;
 			}
 		}
 		//Inserta Aleatoriamente el individuo dentro de la población
 		if(minDistance != 0.0){
 			val index = super.random.nextInt(populationSize);
 			population.setIndividual(index, new GAIndividual(varables));
 			population.setCost(index, this.problemModel.costOfSolution(sz, varables as Rail[Int]{self.size == sz}));
 			//population(index).setCost(this.problemModel.costOfSolution(sz, varables as Rail[Int]{self.size == sz}));
 			//Console.OUT.println("Soy nodo master: " + here.id + ", y voy saliendo de tryInsertIndividual");
 		}
 		return true;
 	}
 
 	//Jason: Migration
 	public def getConfigForPop(replace:Boolean):Rail[Int]{
 		val indiv = population.getIndividual(0);
 		population.setIndividual(0, mutateIndiv(population.getIndividual(0)));
 		//Console.OUT.println("A punto de terminar la migración, nodo master respondiendo: " + here.id);
 		return indiv.getGenes();
 	}
 
 	protected def distance(conf1 : Valuation(sz), conf2 : Valuation(sz)) : Double {
 		var count : Int = 0n;
 		for (i in 0n..(sz as Int - 1n)){
 			//Logger.debug("comparing: "+conf1(i)+" - "+conf2(i));
 			if(conf1(i) != conf2(i)) count++; 
 		}
 		val dist = count as Double / sz;
 		//Console.OUT.println("distance in Pool = "+dis);
 		return dist;
 	}
 
 	//public def swap(indiv:GAIndividual, i:Long, j:Long){
 	//	indiv.swap(i as Int,j as Int);
 	//}
}
public type GeneticAlgorithm(s:Long)=GeneticAlgorithm{self.sz==s};