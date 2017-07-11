package cpls.solver;

import x10.util.RailUtils;
import cpls.problem.ProblemGenericModel;
import cpls.util.Monitor;

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
 		return monitor.atomicBlock(()=>this.population(index));
 	}

 	public def setIndividual(index:Long, individual:GAIndividual){
 		monitor.atomicBlock(()=>this.population(index) = individual);
 	}
 
 
 	public def refreshPopulation(mutatedSons:Rail[GAIndividual], index1:Long, index2:Long){
 		monitor.atomicBlock(()=> refreshPopulation2(mutatedSons));
 	}
 	
 	public def refreshPopulation2(mutatedSons:Rail[GAIndividual]){
 		RailUtils.sort(mutatedSons, cmp);
 		this.population(populationSize -2) = mutatedSons(0);
 		this.population(populationSize -1) = mutatedSons(1);
 		return true;
 	}
 
 	private val cmp : (GAIndividual,GAIndividual) => Int = (a:GAIndividual, b:GAIndividual) => {return(a.getCost() - b.getCost()) as Int;};
 
 	public def sort(){
 		monitor.atomicBlock(()=> sort2());
 	}
 	
 	public def sort2(){
 		RailUtils.sort(this.population, cmp);
 		return true;
 	}
 	
 	public def getPopulationSize(){
 		return populationSize;
 	}
 	
 	public def setCost(index:Long, cost:Long){
 		monitor.atomicBlock(()=> setCost2(index, cost));
 	}
 	
 	public def setCost2(index:Long, cost:Long){
 		population(index).setCost(cost);
 		return true;
 	}
}