package cpls.solver;

import x10.util.Random;
import cpls.problem.ProblemGenericModel;
import cpls.ParamManager;
import cpls.util.Utils;
import x10.util.RailUtils;


public class GeneticAlgorithm extends PopulBasedHeuristic{
	
	var population:Rail[GAIndividual];
 	var populationSize:Int;
 	val random:Random;
 	var bestCostGA:Long = Long.MAX_VALUE;
 	var currentCostGA:Long = Long.MAX_VALUE;
	
	public def this(sz:Long){
		super(sz);
 		this.random = new Random();
	}

 	public def search(problemModel:ProblemGenericModel, currentCost:Long, bestCost:Long, nIter:Int) : Long{
 		val index1 = random.nextLong(populationSize);
 		val index2 = random.nextLong(populationSize);
 		val indiv1 = population(index1);
 		val indiv2 = population(index2);
 		var sons:Rail[GAIndividual] = crossing(indiv1, indiv2, problemModel);
 		var mutatedSons:Rail[GAIndividual] = mutate(sons);
 		refreshPopulation(mutatedSons, index1, index2);
 		sortPopulation();
 		this.currentCostGA = population(0).getCost();
 		if(currentCostGA < bestCostGA){
 			bestCostGA = currentCostGA;
 			Console.OUT.print("Costo (GASearch) in " + here + ". " + Runtime.worker() + ": " + currentCostGA);
 			Utils.show(". Con variables: " , population(0n).getGenes());
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
 	}
 
 	protected def refreshPopulation(mutatedSons:Rail[GAIndividual], parentIndex1:Long, parentIndex2:Long){
 		if(mutatedSons(0).getCost() < population(parentIndex1).getCost()) population(parentIndex1) = mutatedSons(0);
 		if(mutatedSons(1).getCost() < population(parentIndex2).getCost()) population(parentIndex1) = mutatedSons(1);
 	}
	
	public def configHeuristic(problemSize:Long, opts:ParamManager){
 		super.configHeuristic(problemSize, opts);
 		this.populationSize = opts("-GA_pz", 2n*problemSize as Int);
 		initialize(populationSize, problemSize);
	}
	
 	//Population ramdomly initialized without verification
	public def initialize(populationSize:Long, individualSize:Long){	
 		this.population = new Rail[GAIndividual](populationSize, new GAIndividual(individualSize));
 		var initialValues:Rail[Int] = new Rail[Int](individualSize, 0n);
 		var copyInitialValues:Rail[Int];
 		var k:Int;
 		var x:Int;
		for(k = 0n; k < individualSize; k++){
 			initialValues(k) = k as Int;
		}
 		for(k = 0n; k < populationSize; k++){
 			copyInitialValues =  new Rail[Int](initialValues);
 			for( var i:Long = individualSize - 1 ; i > 0 ; i-- ){
 				val j = random.nextLong( i + 1 );
 				x = copyInitialValues(i);
 				copyInitialValues(i) = copyInitialValues(j); 
 				copyInitialValues(j) = x;
 			}
 			population(k).setGenes(copyInitialValues);
 			//population(k).setCost(problemModel.costOfSolution(copyInitialValues));
 		}
	}
 
 	public def crossing(i1:GAIndividual, i2:GAIndividual, problemModel:ProblemGenericModel):Rail[GAIndividual]{
 		val indiv1 = new GAIndividual(i1);
 		val indiv2 = new GAIndividual(i2);
  		val sons = indiv1.insertPathCrossing(indiv2);
  		sons(0).setCost(problemModel.costOfSolution(sons(0).getGenes()));
  		sons(1).setCost(problemModel.costOfSolution(sons(1).getGenes()));
 		return sons;
 	}
 
 	public def mutate(sons:Rail[GAIndividual]){
 		var index1:Long;
 		var index2:Long;
 		for(son in sons){
 			if(this.random.nextInt(10n) < 4){ //En esta parte sería necesario poner el parámetro de la tasa de mutación
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