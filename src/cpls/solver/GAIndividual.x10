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

import x10.util.Random;
import cpls.util.Valuation;
//import x10.compiler.*;

public class GAIndividual(size:Long){
	
	private var genes:Rail[Int];
	private var cost:Long;
	
	var randomGenerator:Random;
	
	public def this(individualSize:Long, seed:Long){
		property(individualSize);
		this.genes = new Rail[Int](individualSize, (i:Long) => i as Int);
		this.randomGenerator = new Random();
 		this.randomGenerator.setSeed(seed);
 		//initialize();
 		//printGenes();
	}

 	public def this(genes:Rail[Int], seed:Long){
 		property(genes.size);
 		this.genes = new Rail[Int](genes.size, (i:Long) => i as Int);
 		this.randomGenerator = new Random();
 		this.randomGenerator.setSeed(seed);
 		Rail.copy(genes as Valuation(size), this.genes as Valuation(size));
 		//initialize();
 		//printGenes();
 	}

 	public def this(indiv:GAIndividual, seed:Long){
 		property(indiv.size);
 		this.genes = new Rail[Int](indiv.getGenes().size, (i:Long) => i as Int);
 		this.randomGenerator = new Random();
 		this.randomGenerator.setSeed(seed);
 		Rail.copy(indiv.getGenes() as Valuation(size), this.genes as Valuation(size));
 		this.cost = indiv.getCost();
 	}

 	public def initialize(){
 		var x:Int;
 		for( var i:Long = size - 1 ; i > 0 ; i-- ){
 			val j = randomGenerator.nextLong( i + 1 );
 			//Console.OUT.println("Valor j: " + j);
 			x = this.genes(i);
 			this.genes(i) = this.genes(j); 
 			this.genes(j) = x;
 		}
 	}
 
 	public def applyLS(heuristicSolverAux:HeuristicSolver){
 		var indivCost:Long;// = heuristicSolverAux.costOfSolution();//size, this.population(k).getGenes() as Rail[Int]{self.size == size});
 		var newCost:Long;// = indivCost;
 		heuristicSolverAux.clearProblemModel();
 		//heuristicSolverAux.initVariables();
 		heuristicSolverAux.setVariables(size, this.genes as Valuation(size));
 		indivCost = heuristicSolverAux.costOfSolution();//size, this.population(k).getGenes() as Rail[Int]{self.size == size});
 		newCost = indivCost;
 		//Console.OUT.println("Costo inicial del individuo " + k + ": " + indivCost);
 		//indivCost = heuristicSolverAux.costOfSolution();
 		var bestConf:Rail[Int] = this.genes;
 		for(var i:Int = 0n; i < 1000; i++){
 			newCost = heuristicSolverAux.search(newCost, Long.MAX_VALUE, i);
 			//Console.OUT.println("Costo intermedio " + i + " individuo " + k + ": " + newCost);
 			if(newCost < indivCost){
 				Rail.copy(heuristicSolverAux.getVariables() as Valuation(size), bestConf as Valuation(size));
 				indivCost = newCost;
 			}
 		}	
 		this.cost = indivCost;
 		this.genes = bestConf;
 	}
 
 	/*@NonEscaping private def printGenes(){
 		Console.OUT.println("Individuo inicializado con: ");
 		for(var i:Int = 0n; i < this.genes.size; i++){
 			Console.OUT.print(this.genes(i) + "  ");
 		}
 		Console.OUT.print("\n");
 	}*/
 
 	public def getSize(){
 		return this.genes.size;
 	}
	
	public def getGenes():Rail[Int]{
		return this.genes;
	}
	
	public def setGenes(genes:Rail[Int]){
 		Rail.copy(genes as Valuation(size), this.genes as Valuation(size));
 		//this.genes = genes;
	}
	
	public def getCost():Long{
		return this.cost;
	}
	
	public def setCost(cost:Long){
		this.cost = cost;
	}

 	public def swap(i:Int, j:Int){
 		val aux = this.genes(i);
 		this.genes(i) = this.genes(j);
 		this.genes(j) = aux;
 	}
	
	//The crossing operation return a Rail with the genes for the sons
	//This operation is include inside the Individual Class because, in the nature, this is one
	//operation under control of the individual
	//Insert Path Crossover. Paper: A greedy genetic algorithm for the quadratic assignment problem.
	//Autors: Ahuja, Rk - Orlin, Jb - Tiwari, A) - (Citation Key: Ahuja2000)
	public def insertPathCrossover(individual:GAIndividual):Rail[GAIndividual]{
		var copyMyGenes:Rail[Int] = new Rail[Int](this.genes); 
		var genesOther:Rail[Int] = new Rail[Int](individual.getGenes());
		//val randomGenerator:Random = new Random();
		var son1:Rail[Int] = new Rail[Int](size, -1n);
		var son2:Rail[Int] = new Rail[Int](size, -1n);
		var initializedPositions:Int = 0n;
		var insertedinSon1:Int = -1n;
		var insertedinSon2:Int = -1n;
		var indexIni:Long = randomGenerator.nextLong(size);
 		//Console.OUT.println("Indice aleatorio: " + indexIni);
		var index:Long = 0n;
		var indexBack:Long = 0n;
		var insertFlag:Boolean = false;
		while(initializedPositions < size){
			index = indexIni%size;
			if(copyMyGenes(index) != -1n && copyMyGenes(index) == genesOther(index)){
				son1(index) = copyMyGenes(index);
				son2(index) = genesOther(index);
				genesOther(index) = -1n;
				copyMyGenes(index) = -1n;
			}else{
				if(!insertFlag){
					insertedinSon1 = genesOther(index);
					insertedinSon2 = copyMyGenes(index);
					son1(index) = insertedinSon1;
					son2(index) = insertedinSon2;
 					//genesOther(index) = -1n;
 					//copyMyGenes(index) = -1n;
					insertFlag = true;
				}else{
					indexBack = indexIni%size;
					do{
						indexBack = (indexBack-1) >= 0 ? indexBack - 1:size-1;
					}while(copyMyGenes(indexBack) == -1n
							|| copyMyGenes(indexBack) == genesOther(indexBack)
							|| (insertFlag && copyMyGenes(indexBack) == insertedinSon1));
					son1(index) = copyMyGenes(indexBack);
					copyMyGenes(indexBack) = -1n;
					indexBack = indexIni%size;
					do{
						indexBack = (indexBack-1) >= 0 ? indexBack - 1:size-1;
					}while(genesOther(indexBack) == -1n
							|| copyMyGenes(indexBack) == genesOther(indexBack)
							|| (insertFlag && genesOther(indexBack) == insertedinSon2));
					son2(index) = genesOther(indexBack);
					genesOther(indexBack) = -1n;
				}
			}
			initializedPositions++;
			indexIni++;
		}
 		var sons:Rail[GAIndividual] = new Rail[GAIndividual](2);
 		sons(0) = new GAIndividual(son1, this.randomGenerator.nextLong());//setGenes(son1);
 		sons(1) = new GAIndividual(son2, this.randomGenerator.nextLong());//setGenes(son2);
 		return sons;
	}

 	//This is the crossover operator of Tosun in: A robust Island Parallel Genetic Algorithm for the Quadratic Assignment Problem
 	//For feminist reasons, the mother is the most important ascendant and father the less important ascendant.
 	public def partiallyMatchedCrossover(individual:GAIndividual):Rail[GAIndividual]{ 
 		//val randomGenerator:Random = new Random();
 		var son1:Rail[Int] = new Rail[Int](size, -1n); //Mother: this
 		var son2:Rail[Int] = new Rail[Int](size, -1n); //Mother: the Other individual
 		var indexIni:Long = randomGenerator.nextLong(size);
 		var indexEnd:Long;
 		do{
 			indexEnd = randomGenerator.nextLong(size);
 		}while(indexIni == indexEnd);
 		if(indexIni > indexEnd){
 			val aux = indexEnd;
 			indexEnd = indexIni;
 			indexIni = aux;
 		}
 		//Console.OUT.println("Indices de cruzamiento. Inicial: " + indexIni + ". Final: " + indexEnd);
 		var positionsForSon1:Rail[Long] = new Rail[Long]((indexEnd - indexIni) + 1, -1n);
 		var positionsForSon2:Rail[Long] = new Rail[Long]((indexEnd - indexIni) + 1, -1n);
 		var i:Long;
 		//In this part we simply copy the corresponde random segment
 		for(i = indexIni; i <= indexEnd; i++){
 			son1(i) = this.genes(i);
 			son2(i) = individual.genes(i);
 		}
 		//In this part, We review what facilities of the second father is not copied in the random segment selected
 		//Important: Remember the mother and father agreement explain above 
 		var j:Long;
 		var k:Long = 0n; //Index for positions for Son1
 		var l:Long = 0n; //Index for positions for Son2
 		for(j = indexIni; j <= indexEnd; j++){
 			for(i = indexIni; i <= indexEnd; i++){
 				if(individual.genes(j) == this.genes(i)){
 					break;
 				}else{
 					if(i == indexEnd){
 						positionsForSon1(k++) = j;
 					}
 				}
 			}
 			for(i = indexIni; i <= indexEnd; i++){
 				if(this.genes(j) == individual.genes(i)){
 					break;
 				}else{
 					if(i == indexEnd){
 						positionsForSon2(l++) = j;
 					}
 				}
 			}
 		}
 		//In this point, change the function of the index (i,j,k,l)
 		k = 0n; //For iterate over the positionsForSon1
 		l = 0n; //For Contain the value in the position indicate for k in positionForSon1
 		var positionAux:Long;
 		while(positionsForSon1(k) != -1 && k < positionsForSon1.size){
 			positionAux = positionsForSon1(k);
 			do{
 				l = this.genes(positionAux);
 				positionAux = findNumberPosition(l, individual.genes);
 			}while(son1(positionAux) != -1n);
 			son1(positionAux) = individual.genes(positionsForSon1(k));
 			k++;
 		}
 		k = 0n; //For iterate over the positionsForSon2
 		l = 0n; //For Contain the value in the position indicate for n in positionForSon2
 		while(positionsForSon2(k) != -1 && k < positionsForSon2.size){
 			positionAux = positionsForSon2(k);
 			do{
 				l = individual.genes(positionAux);
 				positionAux = findNumberPosition(l, this.genes);
 			}while(son2(positionAux) != -1n);
 			son2(positionAux) = this.genes(positionsForSon2(k));
 			k++;
 		}
 		//Finally, we put the other sites from the father
 		for(i=0n; i<this.genes.size; i++){
 			if(son1(i) == -1n){
 				son1(i) = individual.genes(i);
 			}
 			if(son2(i) == -1n){
 				son2(i) = this.genes(i);
 			}
 		}
 		var sons:Rail[GAIndividual] = new Rail[GAIndividual](2);
 		sons(0) = new GAIndividual(son1, this.randomGenerator.nextLong());//setGenes(son1);
 		sons(1) = new GAIndividual(son2, this.randomGenerator.nextLong());//setGenes(son2);
 		return sons;
 	}
 
 	public def uniformCrossover(individual:GAIndividual):Rail[GAIndividual]{
 		var son1:Rail[Int] = new Rail[Int](size, -1n); //Mother: this
 		var son2:Rail[Int] = new Rail[Int](size, -1n); //Mother: the Other individual
 		var auxVectorSon1:Rail[Int] = new Rail[Int](size, -1n);
 		var auxVectorSon2:Rail[Int] = new Rail[Int](size, -1n);
 		for(var i:Int=0n; i<this.genes.size; i++){
 			if(randomGenerator.nextFloat() > 0.5){
 				if(auxVectorSon1(individual.genes(i)) == -1n){
 					son1(i) = individual.genes(i);
 					auxVectorSon1(individual.genes(i)) = 0n; //Use the facility like index
 				}
 				if(auxVectorSon2(this.genes(i)) == -1n){
 					son2(i) = this.genes(i);	
 					auxVectorSon2(this.genes(i)) = 0n;		 //0 its asigned, -1 not asigned
 				}
 			}else{
 				if(auxVectorSon1(this.genes(i)) == -1n){
 					son1(i) = this.genes(i);
 					auxVectorSon1(this.genes(i)) = 0n;		 //0 its asigned, -1 not asigned
 				}
 				if(auxVectorSon2(individual.genes(i)) == -1n){
 					son2(i) = individual.genes(i);
 					auxVectorSon2(individual.genes(i)) = 0n; //Use the facility like index
 				}				
 			}
 		}
 		var circularIndex:Long;
 		var posIni:Long;
 		for(var i:Int=0n; i<this.genes.size; i++){
 			if(son1(i) == -1n){
 				circularIndex = randomGenerator.nextLong(size);
 				posIni = circularIndex;
 				do{
 					circularIndex = ++circularIndex % size;
 				}while(auxVectorSon1(circularIndex) != -1n && circularIndex != posIni);
 				son1(i) = circularIndex as Int;
 				auxVectorSon1(circularIndex) = 0n;
 			}
 			if(son2(i) == -1n){
 				circularIndex = randomGenerator.nextLong(size);
 				posIni = circularIndex;
 				do{
 					circularIndex = ++circularIndex % size;
 				}while(auxVectorSon2(circularIndex) != -1n && circularIndex != posIni);
 				son2(i) = circularIndex as Int;
 				auxVectorSon2(circularIndex) = 0n;
 			}
 		}
 		var sons:Rail[GAIndividual] = new Rail[GAIndividual](2);
 		sons(0) = new GAIndividual(son1, this.randomGenerator.nextLong());//setGenes(son1);
 		sons(1) = new GAIndividual(son2, this.randomGenerator.nextLong());//setGenes(son2);
 		return sons;
 	}
 
 	public def findNumberPosition(number:Long, vector:Rail[Int]):Long{
 		var position:Long = 0n;
 		for(var i:Int=0n; i<vector.size; i++){
 			if(vector(i) == number as Int){
 				position = i;
 				break;
 			}
 		}
 		return position;
 	}
	
}
