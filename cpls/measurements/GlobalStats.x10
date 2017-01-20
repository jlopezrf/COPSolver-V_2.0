package cpls.measurements; 
//import csp.util.Monitor;
import cpls.CPLSOptionsEnum;
/** CSPStats
 * 	This class implements a container for the CSP solver statistics. 
 * 
 * <p> Methods may be invoked concurrently, at the place recording
 * stats for the overall execution. A monitor is used internally to provide
 * atomic access to the mutable state on this calss.
 * 
 * 	@author Danny Munera
 *  @version 0.1 April 12, 2013 -> First Version
 */

public class GlobalStats{
	 
	 /** Desired Target */
	 var dTarget : Long = 0;	
	 
	 /** Final Cost of solution */
	 var cost : Long = 0;	
	 /** Team id solution */
	 var team : Int = -1n;
	 /** explorer id solution */
	 var explorer : Int = -1n;
	 /** time to reach the solution */
	 var time : Double = 0.0d;
	 /** Number of iterations */
	 var iters : Long = 0;
	 /** Number of local minimum */
	 var locmin : Int = 0n;
	 /** Number of swaps */
	 var swaps : Long = 0;
	 /** Number of resets */
	 var reset : Int = 0n;
	 /** number of same variables */
	 var same : Long = 0;
	 /** number of restarts */  
	 var restart : Int = 0n;
	 /** Number time to change vector due to communication */ 
	 var change : Int = 0n;
	 /** number of restarts */  
	 var forceRestart:Int = 0n;
	 /** acc perfect Solutions best cost == 0*/
	 var accPS:Int = 0n;
	 /** number of restart of the group */
	 var groupR:Int = 0n;
	 /** taget succeded ?  best cost <= target cost*/
	 var target:Boolean = false;
	 /** far from target - target cost - best cost*/
	 var fftarget:Int = 0n;
	 /** number of targets accomplished */
	 var ntarget:Int = 0n;
	 /** Vector Size */
	 var vectorSize:Long = 1;
	 
	 /** Variables for SMTI */
	 /** number of BP */
	 var bp:Int = 0n;
	 /** number of singles */
	 var singles:Int = 0n;
	 
	 /** Solver State **/
	 var sstate:Rail[Int]{self.size==3} = new Rail[Int](3, -1n);
	 
	 
	//transient val monitor:Monitor  = new Monitor("CSPStats");
	
	/**
	 * 	Set statistics to the object
	 * 	@param p place
	 * 	@param t time
	 * 	@param it iterations
	 * 	@param loc local minimum
	 * 	@param sw swaps
	 * 	@param re resets
	 * 	@param sa same variableplace
	 * 	@param rs restarts
	 */
	public def setStats(co : Long, p : Int, e : Int, t:Double, it:Int, loc:Int, sw:Int, 
			  re:Int, sa:Int, rs:Int, ch:Int, fr : Int, gr:Int, target:Boolean, fft:Int, 
			  vs:Long, ss:Rail[Int]{self.size==3}){
	        this.cost = co;
	        this.team = p;
	        this.explorer = e;
	        this.time = t;
	        this.iters = it;
	        this.locmin = loc;
	        this.swaps = sw;
	        this.reset = re;
	        this.same = sa;
	        this.restart = rs;
	        this.change = ch;
	        this.forceRestart = fr;
	        //this.bp = bp;
	        //this.singles = sg;
	        this.groupR = gr;
	        this.target = target;
	        this.fftarget = fft;
	        this.vectorSize = vs;
	        this.sstate = ss;
	}
	
	public def setStats( c : GlobalStats ){
		 this.cost = c.cost;
		 this.team = c.team;
		 this.explorer = c.explorer;
		 this.time = c.time;
		 this.iters = c.iters;
		 this.locmin = c.locmin;
		 this.swaps = c.swaps;
		 this.reset = c.reset;
		 this.same = c.same;
		 this.restart = c.restart;
		 this.change = c.change;
		 this.forceRestart = c.forceRestart;
		 //this.bp = c.bp;
		 //this.singles = c.singles;
		 this.groupR = c.groupR;
		 this.target = c.target;
		 this.fftarget = c.fftarget;
		 this.vectorSize = c.vectorSize;
		 this.sstate = c.sstate;
	}
	
	/**
	 *  Accumulate statistics in this object, Is used for average calculation
	 * 	@param stats Object with solver data to accumulate 
	 */
	public def accStats(stats : GlobalStats){
	    this.cost += stats.cost;
	    this.time += stats.time;
	    this.iters += stats.iters;
	    this.locmin += stats.locmin;
	    this.swaps += stats.swaps;
	    this.reset += stats.reset;
	    this.same += stats.same;
	    this.restart += stats.restart;
	    this.change += stats.change;
	    this.forceRestart += stats.forceRestart;
	    
	    val sing = stats.cost % stats.vectorSize; 
	    val blockPair = (stats.cost - sing)/stats.vectorSize;
	    this.bp += blockPair;
	    this.singles += sing;
	    
	    this.groupR += stats.groupR;
	    
	    if(blockPair == 0 && sing == 0)
	   	  accPS++;
	    
	    if (stats.target)
	    ntarget++;
	    
	}
	
	/**
	 * 	Print the stat values
	 * 	@param count Number of this iteration
	 */
	public def print(count:Int, oF:Int, problem:Int){
		val sameIter : Double = same /(iters as Double);
		val gap = (cost-dTarget)/(dTarget as Double)*100.0;
		val sgl = this.cost % this.vectorSize; 
		val bpl = (this.cost - sgl)/this.vectorSize;
		
		//val changeF : Double = (change as Double)/count;
		if (oF == 0n){
			 Console.OUT.print(count+","+this.time+","+this.iters+","+this.team+
						/*","+explorer+*/","+this.locmin+","+this.swaps+","+this.reset+
						","+sameIter+","+this.restart+","+bpl+","+sgl+","+this.change+","+
						this.forceRestart+","+this.groupR+","+(this.cost == 0)+","+
						(this.target ? "S":"-" )+","+this.cost+","+this.fftarget+","+gap+","
						+sstate(0)+","+sstate(1)+","+sstate(2));
		}else{
			Console.OUT.printf("|  %3d  | %8.4f | %8d | %3d-%2d | %8d |",count, this.time,
					  this.iters, this.team, this.explorer, this.locmin);
			Console.OUT.printf(" %8d | %8d | %5.1f | %3d |",this.swaps,this.reset,sameIter,
					  this.restart);
			if (problem == CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM || problem == CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM)
				 Console.OUT.printf(" %3d | %3d |",bpl, sgl);
			Console.OUT.printf(" %4d | %3d-%3d | %3d |", this.change, this.forceRestart,
					  this.groupR,(this.cost == 0 ? 1 : 0 ));
			Console.OUT.printf("  %s | %8d |%6.3f |", (this.target ? "S":"-" ),this.cost,gap);
			Console.OUT.printf("  %1d %3d %3d |", this.sstate(0),this.sstate(1),this.sstate(2));
		} 
	}

	/**
	 * 	Print the stat averages
	 * 	@param no total number of iterations
	 */
	public def printAVG(no:Int, oF:Int, problem:Int){ 
	   // val no = no1 as Double;
		val sameIter : Double = this.same/(this.iters as Double);
		val changeF : Double = (this.change as Double)/no;
		val avgCost:Double = this.cost/(no as Double);
		val gap = (avgCost-this.dTarget)/( this.dTarget as Double)*100.0;
		
		if (oF == 0n){
			Console.OUT.print("AVG,"+time/no+","+iters/no+",,"+locmin/no+","+swaps/no+","+reset/no
					+","+sameIter+","+restart/no+","+bp/(no as float)+","+singles/(no as Double)+","
					+changeF+","+forceRestart/(no as float)+","+groupR/(no as float)
					+","+accPS+","+ntarget+","+avgCost+",,"+gap);
		}else{
			Console.OUT.printf("|avg-%3d| %8.4f | %8d |  N/A   | %8d |", no, time/no, iters/no, locmin/no);
			Console.OUT.printf(" %8d | %8d | %5.1f | %3d |",swaps/no,reset/no,sameIter,restart/no);
			if (problem == CPLSOptionsEnum.SupportedProblems.STABLE_MARRIAGE_PROBLEM || problem == CPLSOptionsEnum.SupportedProblems.HOSPITAL_RESIDENT_PROBLEM)
				 Console.OUT.printf(" %3.1f | %3.1f |",bp/(no as float), singles/(no as Double));
			Console.OUT.printf(" %4.1f | %2.1f-%2.1f |", changeF, forceRestart/(no as float),groupR/(no as float));
			Console.OUT.printf(" %3d | %2d |%10.1f|%6.3f |           |",accPS, ntarget, avgCost,gap);
		}
	}
	
	public def clear():void{ 
		 this.cost = 0n;	
		 this.team = -1n;
		 this.explorer = -1n;
		 this.time = 0.0d;
		 this.iters = 0n;
		 this.locmin = 0n;
		 this.swaps = 0n;
		 this.reset = 0n;
		 this.same = 0n;
		 this.restart = 0n;
		 this.change = 0n;
		 this.forceRestart = 0n;
		 this.groupR = 0n;
		 
		 this.bp = 0n;
		 this.singles = 0n;
		 this.accPS = 0n;
		 this.ntarget = 0n;
		 this.vectorSize = 1;
		 this.sstate = new Rail[Int](3, -1n);
		 
	}
	
	public def setTarget(target:Long) : void
	{ 
		 this.dTarget = target;
	}
}