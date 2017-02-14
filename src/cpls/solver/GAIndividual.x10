package cpls.solver;

import x10.util.Random;

public class GAIndividual(size:Long){
	
	private var genes:Rail[Int];
	private var cost:Long;
	
	var randomGenerator:Random;
	
	public def this(individualSize:Long){
		property(individualSize);
		this.genes = new Rail[Int](individualSize, 0n);
		this.randomGenerator = new Random();
	}
	
	public def getGenes():Rail[Int]{
		return this.genes;
	}
	
	public def setGenes(genes:Rail[Int]){
		this.genes = genes;
	}
	
	public def getCost():Long{
		return this.cost;
	}
	
	public def setCost(cost:Long){
		this.cost = cost;
	}
	
	//The crossing operation return a Rail with the genes for the sons
	//This operation is include inside the Individual Class because, in the nature, this is one
	//operation under control of the individual
	//Insert Path Crossover. Paper: A greedy genetic algorithm for the quadratic assignment problem.
	//Autors: Ahuja, Rk - Orlin, Jb - Tiwari, A) - (Citation Key: Ahuja2000)
	public def insertPathCrossing(individual:GAIndividual):Rail[GAIndividual]{
		var copyMyGenes:Rail[Int] = new Rail[Int](this.genes); 
		var genesOther:Rail[Int] = new Rail[Int](individual.getGenes());
		val randomGenerator:Random = new Random();
		val size = copyMyGenes.size;
		var son1:Rail[Int] = new Rail[Int](size, -1n);
		var son2:Rail[Int] = new Rail[Int](size, -1n);
		var initializedPositions:Int = 0n;
		var insertedinSon1:Int = -1n;
		var insertedinSon2:Int = -1n;
		var indexIni:Long = randomGenerator.nextLong(size);
		var index:Long = 0n;
		var indexBack:Long = 0n;
		var insertFlag:Boolean = false;
		while(initializedPositions < size){
			index = indexIni%size;
			if(copyMyGenes(index) == genesOther(index)){
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
		val sons = new Rail[GAIndividual](2, new GAIndividual(size));
		sons(0).setGenes(son1);
		sons(1).setGenes(son2);
		return sons;
	}
	
}