package cpls.solver;

import x10.util.Random;

public class GAIndividual(size:Long){
	
	private var genes:Rail[Int];
	private var fenotipo:Rail[Double];
	
	var randomGenerator:Random;
	
	public def this(size:Long){
		property(size);
		this.genes = new Rail[Int](size, 0n);
		this.randomGenerator = new Random();
	}
	
	public def getGenes():Rail[Int]{
		return this.genes;
	}
	
	public def setGenes(genes:Rail[Int]){
		this.genes = genes;
	}
	
	public def getFenotipo():Rail[Double]{
		return this.fenotipo;
	}
	
	public def setFenotipo(fenotipo:Rail[Double]){
		this.fenotipo = fenotipo;
	}
	
	//The crossing operation return a Rail with the genes for the sons
	//This operation is include inside the Individual Class because, in the nature, this is one
	//operation under control of the individual
	public def crossing(individual:GAIndividual):Rail[GAIndividual]{
		genesOther:Rail[Int] = individual.getGenes();
		copyMyGenes:Rail[Int] = this.genes;
		var son1Genes:Rail[Int] = new Rail[Int](size, -1n);
		var son2Genes:Rail[Int] = new Rail[Int](size, -1n);
		var initializedPositions:Int = 0n;
		var insertedinSon1:Int = -1n;
		var insertedinSon2:Int = -1n;
		var indexIni:Long = randomGenerator.nextLong(size);
		var index:Long = 0n;
		var indexBack:Long = 0n;
		while(initializedPositions < size){
			 index = indexIni%size;
			if(this.genes(index) == genesOther(index)){
				son1Genes(index) = this.genes(index);
				son2Genes(index) = genesOther(index);
				genesOther(index) = -1n;
				copyMyGenes(index) = -1n;
			}else{
				if(initializedPositions == 0n){
					insertedinSon1 = genesOther(index);
					insertedinSon2 = this.genes(index);
					son1Genes(index) = insertedinSon1;
					son2Genes(index) = insertedinSon2;
				}else{
					indexBack = index;
					do{
						indexBack = (indexBack-1) >= 0 ? indexBack--:size-1;
					}while(copyMyGenes(indexBack) == -1n );
				}
			}
		}
			
		return null;
	}
	
}