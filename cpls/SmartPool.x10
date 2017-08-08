package cpls;
import cpls.CPLSOptionsEnum;
import cpls.util.Logger;
import cpls.util.Monitor;
import cpls.util.Unit;
import cpls.util.Utils;
import cpls.util.Valuation;
import cpls.util.Maybe;
import cpls.entities.State;
import cpls.ParamManager;
import x10.util.Random;
import x10.util.StringUtil;
import x10.util.StringBuilder;
import cpls.entities.PoolConfig;

/**
 * Class SmartPool
 */
public class SmartPool(sz:Long, poolSize:Int) {
	 // Number of entries on the short, medium and long memory arrays
	 
	 // Three level Pool 
	 protected val nbEntries = new Rail[Int](3, 0n);
	 protected val pool = new Rail[Rail[State(sz)]](3);
	 protected val poolMode:Long;
	 
	 protected var random:Random = new Random();
	 protected val monitor = new Monitor("SmartPool");
	 protected var distance:double;
	
	 
	 public def this(size:Long, poolConfig:PoolConfig){
		 property(size, poolConfig.getPoolSize());
		 poolMode = poolConfig.getPoolMode();
		 distance = poolConfig.getMinDist();		  
		 for (i in 0..2)
			 pool(i) = new Rail[State(sz)](poolSize, new State(sz,0n,null,0n,null));
	 }
	 
	 public def this(sz:Long, pSize:Int, pMode:Long, minDist:Double){
		  property(sz, pSize);
		  poolMode = pMode;
		  distance = minDist;		  
		  for (i in 0..2)
				pool(i) = new Rail[State(sz)](poolSize, new State(sz,0n,null,0n,null));
	 }
	 
	 public def setSeed(seed:Long){
		  this.random = new Random(seed);		
	 }
	 
	 /**
	  * Insert a copy of variables in the best partial solutions. Intended to be 
	  * invoked by solvers running at remote places.
	  * Note: Check that all calls are from remote places. If so the copy of
	  * variables will already have happened.
	  */
	 //public def tryInsertConf(cost:Long, variables:Rail[Int]{self.size==sz}, place:Int) {
	 //var counterForReportsInvocationSamrtPool:Int = 0n;
	 public def tryInsertConf( info : State(sz)) {
	 	//counterForReportsInvocationSamrtPool++;
		 monitor.atomicBlock(()=>tryInsertConf0(info));
		 //if(counterForReportsInvocationSamrtPool%100 == 0){
		 //	printSolutions();
		 //}
		 
	 }
	 
	 /*public def printSolutions(){
	 	Console.OUT.println("*******Reporte de soluciones presentes en el smartPool del nodo " + here + "********");
	 	for(p in pool){
	 		for(q in p){
	 			Console.OUT.print("Costo: " + q.cost);
	 			printVector(q.vector);
	 		}
	 	}
	 }
	 
	 public static def printVector(vector:Rail[Int]){
	 	for(var i:Int = 0n; i < vector.size; i++){
	 		Console.OUT.print(vector(i) + "  ");
	 	}
	 	Console.OUT.print("\n");
	 }*/
	 
	 //protected def tryInsertConf0( cost : Long , variables : Rail[Int]{self.size==sz}, place : Int ):Unit {
	 protected def tryInsertConf0( info : State(sz) ):Unit {
		  // TODO Closure	  
		  if (poolMode == CPLSOptionsEnum.PoolModes.SMART)
				return smartInsert( info );
		  else
				return normalInsert( info );
	 }
	 
	 /**
	  * Generic funtion to insert a configuration on the smart pool
	  * @param poolType insert the incoming configuration on the poolType
	  *                 pool (HIGH, MEDIUM, LOW)
	  * @param dist Minimum distance allowed to insert the configuration
	  * @param cost Cost of the incomming configuration
	  * @param variables The incomming configuration
	  * @param place Origin place number of the incomming configuration
	  * @return The victim configuration, if it exists (dummy value othercase place = -1)
	  */
	 protected def insert( poolType:Int, dist:Double, inInfo : State(sz) ) : State(sz) {
		  var worstConf:Long = -1; // index of the worst conf in the pool (highest cost)
		  var worstCost:Long = Long.MIN_VALUE;
		  // var simConf:Int = -1n;
		  // var minDiff:Long = Long.MAX_VALUE;
		  
		  // Searching the worst conf (highest cost)
		  if (this.nbEntries(poolType) == 0n){  // I'm the first in the pool!
				pool(poolType)(nbEntries(poolType)++) = inInfo;
					 //new CSPSharedUnit(variables.size, cost, Utils.copy(variables), place);
				// Return dummy value, there isn't victim
				return new State( sz, 0n, null, -1n, null);
		  }else{
			   for ( var i:Int = 0n; i < this.nbEntries(poolType); i++){
			   	 // Select worst conf
					 val thisCost = pool(poolType)(i).cost;
					 if (thisCost == inInfo.cost && distance(inInfo.vector, pool(poolType)(i).vector) < dist)
						  return new State( sz, 0n, null, -1n, null);
					 if (thisCost > worstCost){
						  worstCost = thisCost;
						  worstConf = i;
					 } 
					 //select similar cost configuration
					 // val cdiff = Math.abs(thisCost - cost);
					 // if (cdiff < minDiff){
						//   minDiff = cdiff;
						//   simConf = i; 
					 // }	 
				}
				// Replace the worst conf in the pool with a new one
				if (this.nbEntries(poolType) < this.poolSize && inInfo.cost < worstCost ){
					 pool(poolType)(this.nbEntries(poolType)++) = inInfo;
						 // new CSPSharedUnit(variables.size, cost, Utils.copy(variables), place);
					 return new State( sz, 0n, null, -1n, null);
				}else	if (worstConf >= 0n && inInfo.cost < worstCost){
					 val victim = pool(poolType)(worstConf);
					 //pool(poolType)(worstConf) = inInfo;
					 pool(poolType)(worstConf as Int) = inInfo; // I don't know why worstConf must be Int????
						   //new CSPSharedUnit(inInfo.sz, inInfo.cost, inInfo.vector, inInfo.place, inInfo.tau, inInfo.pdf);
					 return victim;
				}
		  }
		  return new State( sz, 0n, null, -1n, null);
	 }
	 
	 /**
	  * Try to insert configuration using the "Smart Pool"
	  * @param cost Cost of the incomming configuration
	  * @param variables The incomming configuration
	  * @param place Origin place number of the incomming configuration
	  * @return Unit structure (necessary to the proper operation of the monitor)
	  */
	 //protected def smartInsert( cost : Long , variables : Rail[Int]{self.size==sz}, place : Int ):Unit {
	 //{inInfo.solverState.size ==3, inInfo.vector.size == inInfo.sz}
	 protected def smartInsert( inInfo : State(sz)):Unit {
		    Logger.debug(()=>{"Smart Pool: Smart Insert"});
		  // try to insert conf in high quality pool - min distance allowed 0.3
		  val victimShort = insert(CPLSOptionsEnum.PoolLevels.HIGH, 0.3, inInfo);
		  //if place == -1 then it is a dummy value (there's no victim)
		  if ( victimShort.place >= 0 ){ 
				// try to insert conf in medium quality pool - min distance allowed 0.6
				val victimMedium = insert(CPLSOptionsEnum.PoolLevels.MEDIUM, 0.6, victimShort);
				if ( victimMedium.place >= 0){
					 // try to insert conf in low quality pool - min distance allowed 0.9
					 insert(CPLSOptionsEnum.PoolLevels.LOW, 0.9, victimMedium);
				}
		  }
		  return Unit();
	 }

	 /**
	  * Try to insert configuration using the "Elite Pool"
	  * Using only the HIGH quality memory
	  * @param cost Cost of the incomming configuration
	  * @param variables The incomming configuration
	  * @param place Origin place number of the incomming configuration
	  * @return Unit structure (necessary to the proper operation of the monitor)
	  */
	 //protected def normalInsert( cost : Long , variables : Rail[Int]{self.size==sz}, place : Int ):Unit {
	 //{inInfo.solverState.size ==3, inInfo.vector.size == inInfo.sz}
	 protected def normalInsert( inInfo : State(sz)) : Unit {
		  Logger.debug(()=>{"Smart Pool: normal Insert"});
		  insert(CPLSOptionsEnum.PoolLevels.HIGH, distance, inInfo );
		  return Unit();
	 }
	 
	 /**
	  *  Distance function
	  * Compute the distance between two configurations (0..1)  
	  * If distance = 0, the two confs are pairwise equal
	  * If distance = 1, the two confs are pairwise totally different
	  * @param conf1 first configuration to test
	  * @param conf2 second configuration to test
	  * @return pairwise distance between conf1 and conf2
	  */
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
	 
	 protected static def compareVectors (vec1 : Rail[Int], vec2 : Rail[Int]):Boolean{
		  for (i in 0..( vec1.size-1))
				if(vec1(i) != vec2(i)) return false;
		  return true;
	 }
	 
	 public def printVectors(){
		  for (i in 0n..2n)
				for (j in 0..(nbEntries(i)-1)) {
					 Console.OUT.print((i==2n?"long ":i==1n?"med ":"short ")+j+". Cost = "+
								pool(i)(j).cost+" place "+ pool(i)(j).place); //+" count "+countLM(i));
					 Utils.show(" Vector",pool(i)(j).vector);
		  }
	 }
	 
	 /**
	  * Get a smart configuration from HIGH, MEDIUM or LOW quality pool.
	  */
	 public def getPConf() : Maybe[State(sz)]=
		  monitor.atomicBlock(()=> {
				//Console.OUT.println("s "+nbEntries(0)+"m "+nbEntries(1)+"l "+nbEntries(2));
				val totalEn = this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH) + this.nbEntries(CPLSOptionsEnum.PoolLevels.MEDIUM) + 
				              this.nbEntries(CPLSOptionsEnum.PoolLevels.LOW);
				if (totalEn < 1n) return null; // Pool is empty
				
				var index:Int; // = random.nextInt(totalEn)+1n;
				// Console.OUT.println("initial value "+index);
				var mem:Int = CPLSOptionsEnum.PoolLevels.HIGH; 
				
				if (this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH) > 0 && this.nbEntries(CPLSOptionsEnum.PoolLevels.MEDIUM) > 0
						  && this.nbEntries(CPLSOptionsEnum.PoolLevels.LOW) > 0){
					 // More probability to take the HIGH quality pool than the MEDIULM and LOW pool					 
					 val pooln = random.nextInt(10n);
					 
					 //More probability to return a high quality conf
					 if (pooln < 5n) // probability = 5/10 
						  mem = CPLSOptionsEnum.PoolLevels.HIGH;
					 else if(pooln < 8) // probability = 3/10
						  mem = CPLSOptionsEnum.PoolLevels.MEDIUM;
					 else  // probability = 2/10
						  mem = CPLSOptionsEnum.PoolLevels.LOW;		 
					 index = random.nextInt(nbEntries(mem)) + 1n;
				} else {	 
					 // select a random conf from all pools
					 index = random.nextInt(totalEn)+1n;
					 for(mem = 0n; index > this.nbEntries(mem); mem++){
						  index -= this.nbEntries(mem);
					 }
				}
				val aux:Maybe[State(sz)] = new Maybe[State(sz)](pool(mem)(index-1));
				return aux;
		  });
	 
	 /**
	  * Get THE BEST configuration from the pool.
	  * The best configuration is always on the HIGH quality pool  
	  */
	 public def getBestConf():Maybe[State(sz)]=
		  monitor.atomicBlock(()=> {
		  		//Console.OUT.println("Llega adentro de getBestConf de smartPool.");
				if (this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH) < 1n) return null; // empty pool
				var bcost:Long = Long.MAX_VALUE;
				var best:Long = -1;
				for (i in 0n..(this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH)-1n)){
					 if (this.pool(CPLSOptionsEnum.PoolLevels.HIGH)(i).cost < bcost){
						  bcost = this.pool(CPLSOptionsEnum.PoolLevels.HIGH)(i).cost;
						  best = i;
					 }
				}
				return new Maybe[State(sz)](pool(CPLSOptionsEnum.PoolLevels.HIGH)(best));
		  });
	 
	 public def getCostList():String{
		  val str = new StringBuilder();
		  
		  for (j in 0..2)
				for (i in 0n..(this.nbEntries(j)-1n)){
					 str.add(this.pool(j)(i).cost);
					 str.add(" ");
				}
		  
		  return str.toString();
	 }
	 
	 /*********************** Inicio Métodos Jason *********************************/
	 /******************************************************************************/ 
	 /**
	  * Se invoca desde el explorer (hacia el head) para insertar la solución
	  * estancada en el teamPool (el mismo de Danny)
	  * */
	 public def insertFromIWI(info:State(sz)):Boolean =
	 	monitor.atomicBlock(()=> {
		 //Implementar acá la inserción laxa
		 //La inserción devuelve true si esa inserción significo una mejor solución
		 var minDist:Double = 1.0;
		 // Searching the worst conf (highest cost)
		 if (this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH) == 0n){  // I'm the first in the pool!
			 pool(CPLSOptionsEnum.PoolLevels.HIGH)(nbEntries(CPLSOptionsEnum.PoolLevels.HIGH)++) = info;
			 //Console.OUT.println("Insecion exitosa en el smartpool del head por IWI. Arriba");
			 //Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
			 //Console.OUT.println("INSERCION en el pool del head (El de Danny) porque es el primero. Nodo: " + here.id + "Costo: " + info.cost);
			 return true;
		 }else{
		 	 var worstCost:Long = 0n;
		 	 var worstIndex:Int = 0n;
			 for ( var i:Int = 0n; i < this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH); i++){
				 // Select worst conf
				 val thisConf = pool(CPLSOptionsEnum.PoolLevels.HIGH)(i).vector;
				 val thisCost = pool(CPLSOptionsEnum.PoolLevels.HIGH)(i).cost;
				 val dist = distance(thisConf as Valuation(sz), info.vector as Valuation(sz));
				 if(dist < minDist){
				 	minDist = dist;
				 }
				 if(worstCost < thisCost){
				 	worstCost = thisCost;
				 	worstIndex = i;
				 }
				 //if (thisCost == info.cost && distance(info.vector, pool(CPLSOptionsEnum.PoolLevels.HIGH)(i).vector) < 0.2)
				//	 return false;
				 //if (thisCost < info.cost){
				//	 bestCost = thisCost;
				 //}else{
				//	 bestCost = info.cost;
				 //}  
			 }
			 
			 if (this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH) < this.poolSize){
			 	if(minDist != 0.0 ){
			 		pool(CPLSOptionsEnum.PoolLevels.HIGH)(this.nbEntries(CPLSOptionsEnum.PoolLevels.HIGH)++) = info;
			 		//Console.OUT.println("INSERCION en el pool del head (El de Danny)" + "Costo: " + here.id + info.cost);
			 		//Console.OUT.println("Costo: " + info.cost + "Vector: " + info.vector);
			 		return true;
			 	}else{
			 		//Console.OUT.println("FALLO EN INSERCION en el pool del head (El de Danny). Igual a alguna anterior. Nodo: " + here.id);
			 		return false;
			 	}
			 }else{
			 	if(minDist != 0.0 && info.cost < worstCost){
			 		pool(CPLSOptionsEnum.PoolLevels.HIGH)(worstIndex) = info;
			 		//Console.OUT.println("INSERCION en el pool del head (El de Danny). Se sacrifica una del pool");
			 		return true;
			 	}else{
			 		//Console.OUT.println("FALLO EN INSERCION en el pool del head (El de Danny). Pool lleno, diferente a todas pero peor costo");
			 		return false;
			 	}
			 } 
		 }
	 });
	 
	 /*********************** Fin Métodos Jason *********************************/
	 /***************************************************************************/
	 
	 /**
	  *  Clear all the entries in the pool
	  */
	 public def clear(){
		  monitor.atomicBlock(()=> {
				for (i in nbEntries.range())
					 nbEntries(i) = 0n;
				Unit()
		  });
		  //this.counterForReportsInvocationSamrtPool = 0n;
		  //this.counterForUpdatesSmartPool = 0n;
	 }
}
public type SmartPool(s:Long) = SmartPool{self.sz==s};