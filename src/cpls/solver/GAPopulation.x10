package cpls.solver;

import x10.util.RailUtils;
import cpls.problem.ProblemGenericModel;
import cpls.util.Monitor;
import x10.util.Random;
import x10.array.Array_2;
import x10.lang.Math;

public class GAPopulation{

 	private var population:Rail[GAIndividual];
 	private var populationSize:Long;
 	protected val monitor = new Monitor("CPLSNode");
 	private var distanceMatrix:Array_2[Double];
 	private var problemModel:ProblemGenericModel;

 	public def initialize(populationSize:Long, size:Long, problemModel:ProblemGenericModel, seed:Long){
 		this.population = new Rail[GAIndividual](populationSize);
 		this.populationSize = populationSize;
 		this.problemModel = problemModel;
 		val random = new Random(seed);
 		this.distanceMatrix = new Array_2[Double](populationSize, populationSize, 0n);
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
	 		if(meanDist > 0.3){
	 			this.population(populationSize - (2 - count)) = mutSon;
	 		}
	 		count++;
	 		meanDist = 0.0;
 		}
 	}
 
    public def renewPopulation(){
    	for(var i:Int = (this.population.size/2n) as Int ; i < this.population.size; i++){
    		this.population(i).initialize();
    		this.population(i).setCost(problemModel.costOfSolution(this.population(i).size, this.population(i).getGenes() as Rail[Int]{self.size == size}));
    	}
    	sort();
    }
 
 	public def calculateMidDistance():Double{
 		var dist:Double = 0n;
 		var media:Double = 0.0;
 		for (var i:Int = 0n; i < this.population.size; i++){
 			for(var j:Int = i; j < this.population.size; j++){
 				if(i==j){
 					distanceMatrix(i,j) = 0.0;
 				}else{
 					dist = distance(population(i).getGenes(), population(j).getGenes());
 					//Console.OUT.println("Distancia parcial: " + dist);
 					distanceMatrix(i,j) = dist;
 					distanceMatrix(j,i) = dist;
 					media = media + 2*dist;
 				}				
 			}
 		}
 		media = media/((this.population.size -1 )*this.population.size);
 		return media;
 	}
 
 	public def calculateStandardDesviation(media:Double):Double{
 		var standardDesviation:Double = 0.0;
 		var counter:Double = 0.0;
 		for (var i:Int = 0n; i < this.population.size; i++){
 			for(var j:Int = i+1n; j < this.population.size; j++){
 				counter++;
 				standardDesviation = (distanceMatrix(i,j) - media)*(distanceMatrix(i,j) - media);
 			}
 		}
 		return Math.sqrt(standardDesviation/counter);
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