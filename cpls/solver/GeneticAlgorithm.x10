package cpls.solver;

import cpls.CPLSOptionsEnum;
import x10.util.Random;
import cpls.problem.ProblemGenericModel;
import cpls.ParamManager;
import cpls.util.Valuation;
import cpls.util.Utils;
import x10.util.RailUtils;
import x10.util.ArrayList;
import cpls.solver.EOSearch;
import cpls.solver.HeuristicSolver;
//import cpls.util.Utils;


public class GeneticAlgorithm extends PopulBasedHeuristic{
	
	var population:GAPopulation = new GAPopulation();
 	var populationSize:Int;
 	var rate:float;
 	var crossingOperator:Int;
 	var divOperator:Int;
 	//val random:Random;
 	var bestCostGA:Long = Long.MAX_VALUE;
 	var currentCostGA:Long = Long.MAX_VALUE;
 	var eachIterMigration:Int = Int.MAX_VALUE;
 	protected var heuristicSolverAux:HeuristicSolver(sz);
 	//var auxCounterIter:Int = 0n;
	
	public def this(sz:Long){
		super(sz);
 		super.mySolverType = CPLSOptionsEnum.HeuristicsSupported.GA_SOL;
	}

 	public def configHeuristic(problemModel:ProblemGenericModel, opts:ParamManager){
 		super.configHeuristic(problemModel, opts); 				
 		//this.populationSize = opts("-GA_pz", 2n*problemModel.size as Int);
 		this.populationSize = opts("-GA_pz", 2n*Place.MAX_PLACES as Int);
 		//Jason: Nueva prueba
 		//val ls = opts("-GA_ls", 1);
 		//if(ls == 0){
 		//	this.heuristicSolverAux = new RoTSearch(sz);
 		//}else{
 			this.heuristicSolverAux = new EOSearch(sz);
 		//}
 		
 		//setValuesToParameters();
 		this.rate = opts("-GA_r", 0.4f);
 		this.crossingOperator = opts("-GA_co", 0n);
 		this.divOperator = opts("-GA_do", 0n);
 		if(divOperator == 1n){
 			this.eachIterMigration = (super.sz*rate) as Int;
 		}
 		this.heuristicSolverAux.configHeuristic(problemModel, opts);
 		this.heuristicSolverAux.initVar();
 		this.heuristicSolverAux.setSeed(super.random.nextLong());
 	}

 	public def initVariables(){
 		//initialize(this.populationSize, super.sz);
 		this.population.initialize(populationSize, super.sz, super.problemModel, super.random.nextLong());
 		this.population.applyLS(super.sz, this.heuristicSolverAux);
 		this.population.sort();
 		//setValuesToParameters();
 		//displayInfo("Mensaje: ");
 		//Console.OUT.println("Poblacion inicial: ");
 		//printPopulation();
 	}
 
 	public def setValuesToParameters(){
 		//this.populationSize = opts("-GA_pz", 2n*Place.MAX_PLACES as Int);
 		do{
 			this.rate = super.random.nextFloat();
 		}while(0.3 > this.rate || this.rate > 0.9);
 		
 		this.crossingOperator = super.random.nextInt(3n);
 		this.divOperator = super.random.nextInt(3n);
 		//if(divOperator == 1n){
 		//	this.eachIterMigration = (super.sz*rate) as Int;
 		//}
 		Console.OUT.println("Nodo " + here.id + " rate: " + this.rate);
 		Console.OUT.println("Nodo " + here.id + " crossingOperator: " + this.crossingOperator);
 		Console.OUT.println("Nodo " + here.id + " diversificationOperator: " + this.divOperator);
 
 	}

 	public def search(currentCost:Long, bestCost:Long, nIter:Int) : Long{
 		//setValuesToParameters();
 		val index1 = super.random.nextLong(populationSize);
 		var index2:Long;
 		do{
 			index2 = super.random.nextLong(populationSize);
 		}
 		while(index2 == index1);
 		//if(auxCounterIter%100000 == 0){
 		//	printPopulation();
 		//}
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
 		var mutatedSons:Rail[GAIndividual];
 		if(divOperator == 1n){
 			if(nIter%eachIterMigration == 0n){
 				mutatedSons = migrate(sons);
 			}else{
 				for(var i:Int = 0n; i< sons.size; i++){
 					sons(i).setCost(this.problemModel.costOfSolution(sz, sons(i).getGenes() as Rail[Int]{self.size == sz}));
 					//Utils.show("son " + i + ": ",sons(i).getGenes());
 				}
 				mutatedSons = sons;
 			}
 		}else if(divOperator == 0n){
 			mutatedSons = mutate(sons);
 		}else{
 			mutatedSons = applyLSToSons(sons);
 		}
 		/*Console.OUT.print("Hijo 1 despues de mutacion. Afuera. Costo: " + mutatedSons(0).getCost() + ".Variables: ");
 		printVector(mutatedSons(0).getGenes());
 		Console.OUT.print("Hijo 2 despues de mutacion. Afuera. Costo: " + mutatedSons(1).getCost() + ".Variables: ");
 		printVector(mutatedSons(1).getGenes());*/
 		this.population.refreshPopulation(mutatedSons, index1, index2, super.random);
 		this.population.sort();
 		//printPopulation();
 		this.currentCostGA = population.getIndividual(0).getCost();
 		if(currentCostGA < bestCostGA){
 			bestCostGA = currentCostGA;
 			Rail.copy(population.getIndividual(0).getGenes() as Valuation(sz), super.variables);
 		}
 		return currentCostGA;
 	}
 
 	private val cmp : (GAIndividual,GAIndividual) => Int = (a:GAIndividual, b:GAIndividual) => {return(a.getCost() - b.getCost()) as Int;};
 
 	protected def sortPopulation(){
 		this.population.sort();
 	}

 	public def displayInfo(stringMsg:String){
 		//PrintPopulation
 		//for(var i:Int = 0n; i < population.getPopulationSize(); i++){
 		//	Console.OUT.print("MsgType_0." + "Nodo: " + here + ". Costo: " + population.getIndividual(i).getCost() + ". Variables: ");
 		//	printVector(population.getIndividual(i).getGenes());
 		//}
 		val media = population.calculateMidDistance();
 		//val stdrdDesv = population.calculateStandardDesviation(media);
 		Console.OUT.println(stringMsg + media);
 		//Console.OUT.println("Desviacion estandar: " + stdrdDesv);
 	}

 	public static def printVector(vector:Rail[Int]){
 		for(var i:Int = 0n; i < vector.size; i++){
 			Console.OUT.print(vector(i) + "  ");
 		}
 		Console.OUT.print("\n");
 	}
 
 	public def crossing(i1:GAIndividual, i2:GAIndividual):Rail[GAIndividual]{
 		val indiv1 = new GAIndividual(i1, super.random.nextLong());
 		val indiv2 = new GAIndividual(i2, super.random.nextLong());
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
 
 	public def launchEventForStagnation(){
 		//displayInfo("Media poblacion antes: ");
 		this.population.renewPopulation(1-rate);
 		this.population.applyLS(super.sz, this.heuristicSolverAux);
 		//displayInfo("Media poblacion despues: ");
 		val genes = this.population.getIndividual(0).getGenes();
 		Rail.copy(genes as Valuation(sz), super.variables as Valuation(sz));
 	}
 
 	/*En el mecanismo de mutación, la tasa de mutación se interpreta como la cantidad de swaps que se haran sobre el individuo a mutar*/
 	public def mutate(sons:Rail[GAIndividual]){
 		var posChanged:Int = ((super.sz/2)*this.rate) as Int;
 		var index1:Long;
 		var index2:Long;
 		var indexBank:ArrayList[Int];
 		for(son in sons){
 			indexBank = new ArrayList[Int](posChanged*2n);
 			for(var i:Int = 0n; i<posChanged; i++){
	 			if(this.random.nextFloat() < this.rate){
	 				index1 = super.random.nextLong(son.getSize());
	 				do{
	 					index2 = super.random.nextLong(son.getSize());
	 				}while(index2 == index1 && (!indexBank.contains(index1 as Int) && !indexBank.contains(index2 as Int)));	
	 				indexBank.add(index1 as Int);
	 				indexBank.add(index2 as Int);
	 				//Console.OUT.println("Index1 para mutacion: " + index1);
	 				//Console.OUT.println("Index2 para mutacion: " + index2);
	 				son.swap(index1 as Int, index2 as Int);
	 				//swap(son, index1, index2);
	 			}//else{
	 			 //	Console.OUT.println("No muta");
	 			 //}
 			}
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
 
 
    /**Este método es mas bien un mecanismo de migración**/
 	/**En el mecanismo de migración, la tasa indica cada tantas iteraciones se realiza una migración a partir de los indiv cruzados*/
 	public def migrate(sons:Rail[GAIndividual]){
 		var variab:Rail[Int];
 		//if(this.random.nextFloat() < this.rate){
 			for(var l:Int = 0n; l < sons.size; l++){
 				variab = sons(l).getGenes();
 				//for(k in variab.range()){
 				//	variab(k) = 0n + k as Int;
 				//}
 				for( var i:Long = sz - 1 ; i > 0 ; i-- ){
 					val j = super.random.nextLong( i + 1 );
 					val x = variab(i);
 					variab(i) = variab(j); 
 					variab(j) = x;
 				}
 				sons(l).setGenes(variab);
 				//sons(l).setCost(this.problemModel.costOfSolution(sz, variab as Rail[Int]{self.size == sz}));
 			}
 		//}
 		for(var i:Int = 0n; i< sons.size; i++){
 			sons(i).setCost(this.problemModel.costOfSolution(sz, sons(i).getGenes() as Rail[Int]{self.size == sz}));
 			//Utils.show("son " + i + ": ",sons(i).getGenes());
 		}
 		return sons;
 	}
 
 	public def setKill(value:Boolean){
 		this.population.setKill(value);
 	}
 
 	public def applyLSToSons(sons:Rail[GAIndividual]){
 		for(son in sons){
 			son.applyLS(this.heuristicSolverAux);
 		}
 		return sons;
 	}
 
 	public def transformIndiv(indiv:GAIndividual){
 		//var index1:Long;
 		//var index2:Long;
 		val newIndiv = new GAIndividual(createNewSol(), super.random.nextLong());
 		var sons:Rail[GAIndividual];
 		sons = indiv.insertPathCrossover(newIndiv);
 		for(var i:Int = 0n; i < sons.size; i++){
 			sons(i).setCost(this.problemModel.costOfSolution(sz, sons(i).getGenes() as Rail[Int]{self.size == sz}));
 		}
 		//index1 = super.random.nextLong(indiv.getSize());
 		//do{
 		//	index2 = super.random.nextLong(indiv.getSize());
 		//}while(index2 == index1);	
 		//Console.OUT.println("Index1 para mutacion: " + index1);
 		//Console.OUT.println("Index2 para mutacion: " + index2);
 		//indiv.swap(index1 as Int, index2 as Int);
 		//swap(son, index1, index2);
 		return sons;
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
 			population.setIndividual(index, new GAIndividual(varables, super.random.nextLong()));
 			population.setCost(index, this.problemModel.costOfSolution(sz, varables as Rail[Int]{self.size == sz}));
 			//population(index).setCost(this.problemModel.costOfSolution(sz, varables as Rail[Int]{self.size == sz}));
 			//Console.OUT.println("Soy nodo master: " + here.id + ", y voy saliendo de tryInsertIndividual");
 		}
 		return true;
 	}
 
 	//Jason: Migration
 	public def getConfigForPop(replace:Boolean):Rail[Int]{
 		val index = super.random.nextInt(populationSize);
 		//Console.OUT.println("         Inside getConfigForPop (GA). Verify the random index: " + index);
 		val indiv = population.getIndividual(0);
 		val sons = transformIndiv(population.getIndividual(0));
 		population.setIndividual(0, sons(0));
 		//population.setIndividual(index, sons(1));
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