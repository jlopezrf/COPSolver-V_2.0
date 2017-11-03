package cpls.solver;

import x10.util.RailUtils;
import cpls.problem.ProblemGenericModel;
import cpls.util.Monitor;
import x10.util.Random;
import x10.array.Array_2;
import x10.lang.Math;
import cpls.util.Valuation;

public class GAPopulation{

 	private var population:Rail[GAIndividual];
 	private var populationSize:Long;
 	protected val monitor = new Monitor("CPLSNode");
 	private var distanceMatrix:Array_2[Double];
 	private var problemModel:ProblemGenericModel;
 	protected var kill:Boolean = false;

 	public def initialize(populationSize:Long, size:Long, problemModel:ProblemGenericModel, seed:Long){
 		this.population = new Rail[GAIndividual](populationSize);
 		this.populationSize = populationSize;
 		this.problemModel = problemModel;
 		val random = new Random(seed);
 		this.distanceMatrix = new Array_2[Double](populationSize, populationSize, 0n);
 		for(var k:Int = 0n; k < this.population.size; k++){
 			var newCost:Long;// = Long.MAX_VALUE;
 			var indivCost:Long;// = Long.MAX_VALUE;
 			val seed1 = random.nextLong();
 			//Console.OUT.println("Semilla individuo " + k + ": " + seed1);
 			this.population(k) = new GAIndividual(size, seed1);
 			this.population(k).initialize();
 		}
 	}
 
 	public def applyLS(size:Long, heuristicSolverAux:HeuristicSolver, indexIni:Int){
 		var indivCost:Long;// = heuristicSolverAux.costOfSolution();//size, this.population(k).getGenes() as Rail[Int]{self.size == size});
 		var newCost:Long;// = indivCost;
 		for(var k:Int = indexIni; k < this.population.size; k++){
 			//Console.OUT.println("Se esta aplicando LS sobre la poblacion. Nodo: " + here + ". individuo: " + k);
 			heuristicSolverAux.clearProblemModel();
 			//heuristicSolverAux.initVariables();
 			heuristicSolverAux.setVariables(this.population(k).getGenes() as Valuation(size));
 			indivCost = heuristicSolverAux.costOfSolution();//size, this.population(k).getGenes() as Rail[Int]{self.size == size});
 			newCost = indivCost;
 			//Console.OUT.println("Costo inicial del individuo " + k + ": " + indivCost);
 			//indivCost = heuristicSolverAux.costOfSolution();
 			var bestConf:Rail[Int] = this.population(k).getGenes();
 			for(var i:Int = 0n; i < 5000; i++){
 				newCost = heuristicSolverAux.search(newCost, Long.MAX_VALUE, i);
 				//Console.OUT.println("Costo intermedio " + i + " individuo " + k + ": " + newCost);
 				if(newCost < indivCost){
 					Rail.copy(heuristicSolverAux.getVariables() as Valuation(size), bestConf as Valuation(size));
 					indivCost = newCost;
 				}
 				Runtime.probe();
 				if(kill){
 					Console.OUT.println("Kill detectado en el for interno de applyLS. Nodo: " + here);
 					break;
 				}
 			}	
 			this.population(k).setCost(indivCost);
 			this.population(k).setGenes(bestConf);
 			Runtime.probe();
 			if(kill){
 				Console.OUT.println("Kill detectado en el for externo de applyLS. Nodo: " + here);
 				break;
 			}
 		}
 	}
 
 	public def printVector(vector:Rail[Int]){
 		for(var i:Int = 0n; i < vector.size; i++){
 			Console.OUT.print(vector(i) + "  ");
 		}
 		Console.OUT.print("\n");
 	}

 	public def getIndividual(index:Long){
 		return this.population(index);
 	}

 	public def setIndividual(index:Long, individual:GAIndividual){
 		this.population(index) = individual;
 	}
 
 	public def setKill(value:Boolean){
 		if(value){
 			Console.OUT.println("Hubo un ganador y se setea el valor de kill. Nodo: " + here);	
 		}
 		this.kill = value;
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
	 		if(meanDist > 0.0){
	 			this.population(populationSize - (2 - count)) = mutSon; //Este dos es porque siempre son dos hijos
	 		}
	 		count++;
	 		meanDist = 0.0;
 		}
 	}
 
    public def renewPopulation(indexIni:Int){
    	for(var i:Int = indexIni as Int ; i < this.population.size; i++){
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