package cpls.solver;

import x10.util.RailUtils;
import cpls.problem.ProblemGenericModel;
import cpls.util.Monitor;
import x10.util.Random;

public class GAPopulation{

 	private var population:Rail[GAIndividual];
 	private var populationSize:Long;
 	protected val monitor = new Monitor("CPLSNode");

 	public def initialize(populationSize:Long, size:Long, problemModel:ProblemGenericModel, seed:Long){
 		this.population = new Rail[GAIndividual](populationSize);
 		this.populationSize = populationSize;
 		val random = new Random(seed);
 		for(var k:Int = 0n; k < this.population.size; k++){
 			val seed1 = random.nextLong();
 			//Console.OUT.println("Semilla individuo " + k + ": " + seed1);
 			this.population(k) = new GAIndividual(size, seed1);
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
 		var dist:Double = 0.0;
 		var meanDist:Double = 0.0;
 		var count:Int = 0n;
 		for(mutSon in mutatedSons){
	 		for ( var i:Int = 0n; i < this.population.size; i++){
	 			dist = distance(mutSon.getGenes(), population(i).getGenes());
	 			if(dist == 0.0){
	 				meanDist = 0.0;
 					break;
	 			}
	 			meanDist += dist;
	 		}
	 		meanDist = meanDist/populationSize;
	 		if(meanDist > 0.5){
	 			this.population(populationSize - (2 - count)) = mutSon;
	 		}
	 		count++;
	 		meanDist = 0.0;
 		}
 	}
 
 	public def distance(indiv1:Rail[Int], indiv2:Rail[Int]):Double {
 		var count : Int = 0n;
 		val siz = indiv1.size;
 		for (i in 0n..(siz as Int - 1n)){
 			if(indiv1(i) != indiv2(i)) count++; 
 		}
 		val dist = count as Double / siz;
 		return dist;
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