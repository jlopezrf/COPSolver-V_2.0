package cpls.solver;

import x10.util.Random;

public class GAOperators {
	
	var mutRate:Double;
	var mask:String = "";
	var longIndiv:Int;
	var scalingFactor:Int;
	
	var randomGenerator:Random;
	
	public def this(longIndv:Int, mutRate:Float, scalingFactor:Int){
		this.longIndiv = longIndiv;
		this.mask = createMask();
		this.mutRate = mutRate;
		this.randomGenerator = new Random();
		this.scalingFactor = scalingFactor;
	}
	
	private def createMask():String{
		/*****************************************************************************************
		 * //Tal vez sea necesario definirlo asi para que cada gen sea estadisticamente independiente
		 * var randomValue:Double;
		 * for(var i:Int = 0n; i < 32; i++){
		 * randomValue = random.nextDouble();
		 * if(randomValue<0.5) mask = mask + "1";
		 * else mask = mask + "0";
		 * }
		 * genes = Int.parse(mask);
		 * ****************************************************************************************/
		
		//TODO: Definir si es mas optimo generar la cadena en la parte MSB o en la parte LSB
		for(var i:Int = 0n; i < 32; i++){
			if(i<longIndiv) mask = mask + "1";
			else mask = mask + "0";
		}
		return mask;
	}
	
	public def getMask():String{
		return mask;
	}
	
	/**Define la tasa de mutación**/
	public def setMutRate(mutRate:Double){
		this.mutRate += mutRate;
	}
	
	

	/*************Generating a mask for defining the cross crosspoint randomly************/
	public def getCrossingMask():String{
		var crossingMask:String = "";
		posCrossing:Int = Int.operator_as((randomGenerator.nextDouble())*longIndiv);
		
		for(var i:Int = 0n; i < 32; i++){
			if(i<posCrossing) crossingMask = crossingMask + "1";
			else crossingMask = crossingMask + "0";
		}
		return crossingMask;
	}

	/***Generate a random mask to define when an individual mutates through OR operation***/
	public def mutating(genes:Int):Int{
		var maskMut:String = "";
		for(var i:Int = 0n; i < 32; i++){
			if(i<longIndiv){
				if(randomGenerator.nextDouble() < mutRate) maskMut = maskMut + "1"; //1 = mutating bit
				else maskMut = maskMut + "0"; //1 = No mutating bit
			}else maskMut = maskMut + "0";	
		}
		return genes^(Int.parse(maskMut));
	} 

	/**Calculate the expected value of the dispersion of a randomly generated population**/
	def expectedValue(sizePopulation:Int):Double{
		var accumulator:Double = 0;
		if(sizePopulation%2n > 0n){ //odd case
			upLimit:Int = (sizePopulation -1n)/2n + 1n;
		for(var i:Int = 0n; i<upLimit; i++){
			accumulator += (2*i*(power(0.5,sizePopulation)*binomial(sizePopulation,i)));
		}
		}else{//pair case
			upLimit:Int = (sizePopulation)/2n;
		for(var i:Int = 0n; i<upLimit; i++){
			accumulator += (2*i*(power(0.5,sizePopulation)*binomial(sizePopulation,i)));
		}
		aux:Int = sizePopulation/2n;
		accumulator += ((aux)*binomial(sizePopulation,aux)*power(0.5,sizePopulation));
		}
		return accumulator *= longIndiv/sizePopulation;
	}

	/***************Dispersion Function ************************************/
	/****Calculate the dispersion of population according to the one method of the UBA thesis ****/
	def dispersion(populationObject:GAPopulation):Double{
		population:Rail[GAIndividual] = populationObject.getPopulation();
	var maskDispersion:UInt; 
	var averages:Rail[Double] = new Rail[Double](longIndiv);
	var dispersionValue:Double = 0;
	
	var it:Iterator[GAIndividual] = population.iterator();
	var auxIndiv:GAIndividual;
	var auxGenes:Int;
	while(it.hasNext()){
		maskDispersion = 2147483648un; //Valor que pone en 1 el MSB de un Entero sin signo de 32 bits
		auxIndiv = it.next();
		auxGenes = auxIndiv.getGAChromosome().getGenes();
		for(var i:Int = 0n; i < longIndiv; i++){
			if((UInt.operator_as(auxGenes)&maskDispersion) > 0un) averages(i) += 1;
			maskDispersion = maskDispersion>>1;
		}
	}
	
	for(var i:Int = 0n; i < longIndiv; i++){
		averages(i) = averages(i)/(population.size);
		if(averages(i) > (1 - averages(i))) dispersionValue = dispersionValue + averages(i);
		else dispersionValue = dispersionValue + (1 - averages(i));
	}
	return dispersionValue;
	}

	/***********************Scaling Factor Function************************/
	/********The scaling factor is used to define that such dispersion is to
	 * ********be maintained in the population with respect to the hope of****
	 * ********dispersing a randomly generated population********************/
	def calcScalingFactor():Int{
		//TODO: En el algoritmo de la tesis UBA lo sugieren como parámetro del algoritmo
		//de acuerdo con el conocimiento del problema
		return scalingFactor;
	}

	/***********************Fitness Function************************/
	/********Use to define the fitnes for a individual**************/
	def calcFitness(){
	}
	
	/***********************Selection Function************************/
	/***This function generates a vector of randomly ordered indices**/
	def selecPopulation(size:Double):Rail[Int]{
		var couples:Rail[Int] = new Rail[Int](Int.operator_as(size), Int.operator_as(size));
		var busyFlags:Rail[Boolean] = new Rail[Boolean](Int.operator_as(size), false);
		var randomIndex:Int = Int.operator_as(size);
		//TODO: Cuidado con el caso de población con número impar de individuos
		for(var i:Int = 0n; i < Int.operator_as(size); i++){
			do{
				randomIndex = Int.operator_as(randomGenerator.nextDouble())*Int.operator_as(size);
			}while(busyFlags(randomIndex));
			couples(i) = randomIndex;
			busyFlags(randomIndex) = true;	
		}
		return couples;
	}
	
	/***********************Binomail Function************************/
	private def binomial(n:Int, k:Int):Double{//n elements from k
		return factorial(n)/(factorial(n-k)*factorial(k));
	}
	
	/***********************Factorial Function************************/
	private def factorial(var number:Int):Int{
		var value:Int = 1n;
		while(number!=0n){
			value = value*number;
			number--;
		}
		return value;
	}
	
	/**************************Power Function************************/
	private def power(number:Double, n:Int):Double{
		var value:Double = number;
		for(var i:Int=1n; i<n; i++){
			value = value*number;
		}
		return value;
	}
	
	
}