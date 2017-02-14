package cpls.solver;

import x10.util.Random;
import cpls.problem.ProblemGenericModel;
import cpls.ParamManager;


public class GeneticAlgorithm extends PopulBasedHeuristic{
	
	var population:Rail[GAIndividual];
 	var populationSize:Int;
 	val random:Random;
	
	public def this(){
 		this.random = new Random();
	}
	
	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts);
 		this.populationSize = opts("-GA_pz", 2n*problemModel.getSize() as Int);
 		initialize(populationSize, problemModel.getSize());
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
 			population(k).setCost(super.problemModel.costOfSolution(copyInitialValues));
 		}
	}

 	public def selectIndividual(){
 		val index = random.nextLong(populationSize);
 		return this.population(index);
 	}
 
 	public def crossing():Rail[GAIndividual]{
 		val indiv1 = selectIndividual();
 		val indiv2 = selectIndividual();
  		val sons = indiv1.insertPathCrossing(indiv2);
  		sons(0).setCost(super.problemModel.costOfSolution(sons(0).getGenes()));
  		sons(1).setCost(super.problemModel.costOfSolution(sons(1).getGenes()));
 		return sons;
 	}
 
 	public def mutate(){
 
 	}
 
}