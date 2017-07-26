package cpls.solver;

import x10.util.RailUtils;
import cpls.problem.ProblemGenericModel;
import cpls.util.Monitor;
import x10.util.Random;

public class GAPopulation{

 	private var population:Rail[GAIndividual];
 	private var populationSize:Long;
 	protected val monitor = new Monitor("CPLSNode");

 	public def initialize(populationSize:Long, size:Long, problemModel:ProblemGenericModel){
 		this.population = new Rail[GAIndividual](populationSize);
 		this.populationSize = populationSize;
 		for(var k:Int = 0n; k < this.population.size; k++){
 			this.population(k) = new GAIndividual(size);
 			this.population(k).initialize();
 			this.population(k).setCost(problemModel.costOfSolution(size, this.population(k).getGenes() as Rail[Int]{self.size == size}));
 		}
 	}

 	public def getIndividual(index:Long){
 		return this.population(index);
 	}

 	public def setIndividual(index:Long, individual:GAIndividual){
 		this.population(index) = individual;
 	}
 
 	public def refreshPopulation(mutatedSons:Rail[GAIndividual], index1:Long, index2:Long, random:Random){
 		RailUtils.sort(mutatedSons, cmp);
 		var prob:Double = random.nextDouble();
 		if(prob> 0.5){
 			this.population(populationSize -2) = mutatedSons(0);
 		}
 		prob = random.nextDouble();
 		if(prob> 0.5){
 			this.population(populationSize -1) = mutatedSons(1);
 		}
 	}
 
 	private val cmp : (GAIndividual,GAIndividual) => Int = (a:GAIndividual, b:GAIndividual) => {return(a.getCost() - b.getCost()) as Int;};
 
 	public def sort(){
 		RailUtils.sort(this.population, cmp);
 	}
 	
 	public def getPopulationSize(){
 		return populationSize;
 	}
 	
 	public def setCost(index:Long, cost:Long){
 		population(index).setCost(cost);
 	}

}