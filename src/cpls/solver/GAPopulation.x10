/* 
 * PHYSH - Parallel HYbridization for Simple Heuristics
 * 
 * MIT License
 *
 * Copyright (c) 2022 Jheisson Argiro López Restrepo
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

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
 	protected var size:Long = 0n;

 	public def initialize(populationSize:Long, size:Long, problemModel:ProblemGenericModel, seed:Long){
 		this.population = new Rail[GAIndividual](populationSize);
 		//Console.OUT.println("Size: " + size + ". PopulationSize: " + populationSize);
 		this.size = size;
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
 			this.population(k).setCost(problemModel.costOfSolution(size,this.population(k).getGenes() as Valuation(size)));
 		}
 		//Console.OUT.println("Entropia inicial de la poblacion: " + entropyOfPopulation());
 	}
 
 	public def applyLS(size:Long, heuristicSolverAux:HeuristicSolver, indexIni:Int){
 		var indivCost:Long;// = heuristicSolverAux.costOfSolution();//size, this.population(k).getGenes() as Rail[Int]{self.size == size});
 		var newCost:Long;// = indivCost;
 		for(var k:Int = indexIni; k < this.population.size; k++){
 			//Console.OUT.println("Se esta aplicando LS sobre la poblacion. Nodo: " + here + ". individuo: " + k);
 			heuristicSolverAux.clearProblemModel();
 			//heuristicSolverAux.initVariables();
 			heuristicSolverAux.setVariables(size, this.population(k).getGenes() as Valuation(size));
 			indivCost = heuristicSolverAux.costOfSolution();//size, this.population(k).getGenes() as Rail[Int]{self.size == size});
 			newCost = indivCost;
 			//Console.OUT.println("Costo inicial del individuo " + k + ": " + indivCost);
 			//indivCost = heuristicSolverAux.costOfSolution();
 			var bestConf:Rail[Int] = this.population(k).getGenes();
 			for(var i:Int = 0n; i < 1000; i++){
 				newCost = heuristicSolverAux.search(newCost, Long.MAX_VALUE, i);
 				//Console.OUT.println("Costo intermedio " + i + " individuo " + k + ": " + newCost);
 				if(newCost < indivCost){
 					Rail.copy(heuristicSolverAux.getVariables() as Valuation(size), bestConf as Valuation(size));
 					indivCost = newCost;
 				}
 				Runtime.probe();
 				if(kill){
 					//Console.OUT.println("Kill detectado en el for interno de applyLS. Nodo: " + here);
 					break;
 				}
 			}	
 			this.population(k).setCost(indivCost);
 			this.population(k).setGenes(bestConf);
 			Runtime.probe();
 			if(kill){
 				//Console.OUT.println("Kill detectado en el for externo de applyLS. Nodo: " + here);
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
 
 	public def printPopulation(){
 		for(var i:Int = 0n; i<populationSize; i++){
 			printVector(this.population(i).getGenes());
 		}
 	}

 	public def getIndividual(index:Long){
 		return this.population(index);
 	}

 	public def setIndividual(index:Long, individual:GAIndividual){
 		this.population(index) = individual;
 	}
 
 	public def setKill(value:Boolean){
 		/*if(value){
 			Console.OUT.println("Hubo un ganador y se setea el valor de kill. Nodo: " + here);	
 		}*/
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
    val sz = size;
    	for(var i:Int = indexIni as Int ; i < this.population.size; i++){
    		this.population(i).initialize();
    		this.population(i).setCost(problemModel.costOfSolution(sz, this.population(i).getGenes() as Valuation(sz)));
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
 
 	public def entropyOfPopulation():Double{
 		//Console.OUT.println("Mostrando la población antes del calculo de la entropia");
 		//printPopulation();
 		var countsOfTimesForSite:Array_2[Double] = new Array_2[Double](size, size, 0n);//new Rail[Rail[Double]](size, new Rail[Double](size,0.0));
 		var entropyRow:Double = 0.0;
 		var entropyTotal:Double = 0.0;

 		for(var i:Int = 0n; i<size; i++){
 			for(var j:Int = 0n; j < populationSize; j++){
 				countsOfTimesForSite(i,population(j).getGenes()(i))++;//countsOfTimesForSite(i)((population(j).getGenes())(i))++;
 			}
 			for(var k:Int = 0n; k<size; k++){
 				if(countsOfTimesForSite(i,k) != 0.0){
 					entropyRow += (-1*countsOfTimesForSite(i,k)/populationSize)*Math.log10(countsOfTimesForSite(i,k)/populationSize);
 				}
 				
 			}
 			entropyTotal += entropyRow;
 			entropyRow = 0.0;
 		}
 		entropyTotal = entropyTotal/(size*Math.log10(size));
 		return entropyTotal;
 	}
 
 	public def printMatrix(size:Int, matrix:Array_2[Double]){
 		Console.OUT.println("*******");
 		for(var i:Int = 0n; i < size; i++){
 			for(var j:Int = 0n; j < size; j++){
 				Console.OUT.print(matrix(i,j) + " ");
 			}
 			Console.OUT.println("");
 		}
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
