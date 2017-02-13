package cpls.solver;

public class GAPopulation {
	
	var population:Rail[GAIndividual];
	
	public def this(size:Int){
		population = new Rail[GAIndividual](size);
	}
	
	public def this(size:Int, mask:String){
		population = new Rail[GAIndividual](size);
		for(var i:Int=0n; i < (size); i++){
			population(i) = new GAIndividual(mask);
		}
	}
	
	public def getGAIndividual(index:Int):GAIndividual{
		return population(index);
	}
	
	public def setGAIndividual(GAIndividual:GAIndividual, index:Int){
		this.population(index)=GAIndividual;
	}
	
	public def getPopulation():Rail[GAIndividual]{
		return this.population;
	}
	
	public def getSize():Double{
		return this.population.size;
	}
	
}