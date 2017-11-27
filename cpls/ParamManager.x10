package cpls;

import x10.util.HashMap;
import x10.util.OptionsParser;
import x10.util.Option;
import x10.io.File;
import x10.io.IOException;

public class ParamManager extends OptionsParser{
 	val paramFileName:String;
 	val paramFile:File;
 	val SEPARETOR:Char = ' ';

 	public def this(args: Rail[String]) {
 		super(args, 
 				[Option("h", "help", "shows this help message and exit")],
 				[// Main parameters
 				Option("p", "problem", "(p)roblem to solve"),
 				Option("f", "problem_file", "(f)ile path for SMTI or QAP"),
 				Option("s", "size", "(S)ize of the problem"),
 				Option("S", "seed", "seed. Default 0"),
 				Option("sm", "solver_mode", "Solver (m)ode distribution 0 for seq 1 for paralle. Default 1."),
 				//jason options
 				//Jason: Migration
 				Option("iwi", "Iters Whitout Improvements" ,"In parallel mode, number of iters for take a new solution."),
 				Option("ce", "Control Strategy" ,"0-IW, 1-CW Whitout master, 2-CW with master"),

 				//end jason options
 				Option("sl", "solver", "Solver to use"), //Jason: Can I make that this parameter have many values?(p.e: AS,RoTS,RS/AS,RoTS,RS)
 				Option("of", "out_format", "output format: csv 0, info 1"),
 				Option("tf", "target_from", "Flag to receive target cost form file. default 0 from command line, 1 take optimal from file, 2 take BKS from file "),
 				Option("tc", "target_cost", "target (c)ost from Command Line Parameter. default 0"),
 				Option("b", "bench", "Number of (b)enchmark tests"),
 				Option("pf", "param_file", "path of the parameters file"),
 				Option("v", "verify", "verify and print solution., 0 or 1"),
 				Option("ca", "comp_AVG", "compute AVG cost for each run at each place"),
 				// CPLS 
 				Option("N", "nodes_per_team", "nodes_per_team parameter. Default 4."),
 				Option("U", "update", "Update Interval Intra-team Communication (iterations). Default 0 - no communication."),
 				Option("R", "report", "Report Interval Intra-team Communication (iterations). Default 0 - no communication."),
 				Option("C", "p_change_vector", "Probability to change vector in Intra-Team Communication "),
 				Option("I", "Inter_Team_Interval", "Inter-team Communication Interval (miliseconds) . Default 0 - no communication."),
 				Option("D", "Inter_Team_Distance", "minimum permisible distance."),
 				Option("W", "Inter_Team_Wait", "initial (W)ait  before start Inter-team Communication (miliseconds). Default 0"),
 				Option("A", "Inter_Team_Affected_Explorers", "Inter Team Communicaction Diversification - Percentage of Places (A)ffected . Default 0."),
 				Option("O", "Inter_Team_Option", "Diversification Option. 0 from Scratch 1 Path-Relinking."),
 				Option("M", "Inter_Team_Params", "Diversification. modify parameters when corrective action is taken. 0 disable 1 enable."),
 				Option("CD", "Inter_Team_CD", "Change vector on Corrective Action Diversification. 0 disable 1 enable."),
 				// Pool Options
 				Option("P_e", "poolsize_elite", "Max. number of configurations for the Elite Pool"),
 				Option("P_lm", "poolsize_locmin", "Max. number of configuration for the local min. Pool"),
 				Option("P_eM", "ep_mode", "elite pool mode, 0 normal, 1 smart "),
 				Option("P_lmM", "lmp_mode", "elite pool mode, 0 normal, 1 smart "),
 				Option("P_eD", "ep_dist", "elite pool min. distance allowed, 0 normal, 1 smart "),
 				Option("P_lmD", "lmp_dist", "elite pool mode, 0 normal, 1 smart "),
 				// Parameters for parent Meta-heuristic solver
 				Option("mt", "max_time", "Max. time  default 0"),
 				Option("mi", "max_iter", "Max. iterations limit"),
 				Option("mr", "max_restart", "maximum number of restarts"),
 				Option("rp", "rep_partial", "report partial results"),
 				Option("dbg", "debug_terminal", "report debug info on alternative terminal, default none"),				  
 				// Parameters for AS
 				Option("AS_vtr", "AS_varToReset", "number of variables to swap in the reset procedure."),
 				Option("AS_rp", "AS_resetPer", "Percentage of variables to swap in the reset procedure. Default 10%"),
 				Option("AS_flm", "AS_freezeLocMin", "number of swaps to freeze local min. variables. Default 5"),
 				Option("AS_fs", "AS_freezeSwap", "number of swaps to freeze swapped variables. Default 5"),
 				Option("AS_rl", "AS_resetLimit", "number of marked variables to reset. Default 5"),
 				Option("AS_plm", "AS_probSelecLocMin", "Probability to select a local min (instead of staying on a plateau). Default 0"),
 				Option("AS_e", "AS_exhaustive", "Exhaustive mode (explore all combinations), 0 or 1"),
 				Option("AS_fb", "AS_firstBest", "Select the first best variable in Min conflict heuristic, 0 or 1"),
 				// Parameters for EO
 				Option("EO_t", "EO_tau", "Parameter tau in Extremal Optimization. Default 1 + 1 / log(n)"),
 				Option("EO_p", "EO_pdf", "PDF used to select the variable to swap . Default 1-(Original) 2-(Exp)"),
 				Option("EO_ss", "EO_selSec", "Function used to select the second variable . Default 1-(minconflict) 0-(random)"),
 				// Parameters for RoTS
 				Option("RoTS_t", "RoTS_tabu_duration", "Set tabu duration factor (x N). Default 8"),
 				Option("RoTS_a", "RoTS_aspiration", "Set aspiration factor (x NxN). Default 5"),
 				// Parameters for GA. Jason
 				Option("GA_pz", "GA_population_size", "Set the population size. Default 2*n"),
 				Option("GA_r", "GA_rate", "Set the rate for mutation and migration. Default 40\\%"),
 				Option("-GA_co", "GA_Crossing_Operator", "Set the crossing operator. Default UniforCrossover"),
 				Option("-GA_do", "GA_diver_Operator", "Select the div operator. 0 mutate, 1 migrate, 2 Apply LS Default mutate"),
 				Option("-GA_rpv", "GA_renewPop_Value", "Indicate the value for determinate if the population may be renewed. Default 0.7. Value between 0 and 1"),
 				Option("-GA_ls", "GA_ls_int_heuristic", "Select the ls internal heuristic. 0 EO, 1 RoTS. Default RoTS"),
 				// Parameters for Problem Models
 				Option("if", "input_vector_file", "file path for input vector . Default ."),
 				Option("bv", "model_baseValue", "Domain base value for the model . 0 or 1"),
 				Option("LNP_k", "LNP_k", "Parameter K in Langford number problem . 2 or 3")					  
 			]);

 		paramFileName = this("-pf","CPLS.param");
 		try {
 			paramFile = new File(paramFileName);
 			//parseFile(paramFile);
 		} catch (IOException) {
 			//Console.OUT.println("No parameters file supplied");
 			paramFile = null;
 		}
 	}  

 	public def parseFile(){
 		if(paramFile == null){
 			Console.OUT.println("No parameters file supplied");
 			return;
 		}

 		for(line in paramFile.lines()){
 			//Console.OUT.println(line);
 			if(line.length() == 0n) continue; //empty line
 			if(line(0n)=='#') continue; //Commented lines

 			val sepIndex = line.indexOf(SEPARETOR);
 			val key = line.substring(0n, sepIndex);
 			val value = line.substring(sepIndex+1n);
 			val res = myGet(key);
 			//Console.OUT.println("key "+ key+" value "+value);
 			//Console.OUT.println("value "+ value);
 			// TODO: process flags  and empty "values" in the param file
 			if(res == null){
 				//Console.OUT.println("Not Registered Option");
 				continue;
 			}else{
 				//Console.OUT.println("registered option");
 				val values = this.howManyValues(key);
 				//val values = this.howManyValues("-R") as Int;
 				if (values as Int == 0n){
 					//Console.OUT.println("The key "+key+" is registered but no value was given in the CL");
 					// Put a value on the hash map
 					this.properties.put(key,new Rail[String](1, value));
 					val option = keyMap.getOrElse(key, Option.BAD);
 					if (option == Option.BAD) break;
 					val otherForm = option.otherForm(key);
 					if(otherForm.length()>0n) properties.put(otherForm, new Rail[String](1, value));
 				}else{
 					//Console.OUT.println("The key is registered and a value was given in the CL");
 					// Do nothing, the CL parameters has priority over the File parameters
 					continue;
 				}
 				//Console.OUT.println("");
 			}
 		}
 	}

 	public final def myGet(val key: String): Rail[String] {
  		var winner: String = key;
  		var isValid: Boolean = true;
  		if (key(0n) == '-') {
  			if (keyMap.getOrElse(key, Option.BAD) == Option.BAD) isValid = false;  
  		}else { // add dashes as needed in front of key to get a string we recognize
  			winner =  "-"+key;  
  			if (keyMap.getOrElse(winner, Option.BAD) == Option.BAD) { 
  				winner = "--"+key;
  				if (keyMap.getOrElse(winner, Option.BAD) == Option.BAD) isValid = false;   
  			}
  		}
  		if (isValid) return properties.getOrElse(winner, new Rail[String](0));
  		else {
  			//onUnknownKey(key, keyMap);
  			return null;
  		}
 	}

 	public def printParameters(){
 		val problem        = this("-p", "MSP");
 		val filePath       = this("-f", ".");
 		val size           = this("-s", 10n);
 		val solverMode	    = this("-sm", 1n);
 		val restartLimit   = this("-mi", 1000000000n);
 		val maxTime        = this("-mt", 0);
 		val tCostFromCL    = this("-tc", 0n);
 		val costFromF      = this("-tf", 0);
 		val testNb         = this("-b", 10n);
 		val solverIn       = this("-sl", "AS");
 		val nodesPTeam     = this("-N", 1n);		
 		val updateI        = this("-U", 0n);
 		val reportI        = this("-R", 0n);
 		val changeProb     = this("-C", 100n);
 		val poolSize       = this("-P_e", 4n);
 		val interTI        = this("-I", 0);
 		val minDistance    = this("-D", 0.3);
 		val delayI         = this("-W", 0);
 		val affectedP      = this("-A", 0.0);
 		val changeParam    = this("-M", 1n);
 		val changeVector   = this("-CD",1n);
 		val inputPath      = this("-if", ".");
 		val outFormat	    = this("-of", 1n);

 		Console.OUT.println("");
 		Console.OUT.println("Problem Parameters:");
 		Console.OUT.println("Problem "+problem+" size "+size+" File Path (SMTI):"+filePath); 
 		Console.OUT.println("");
 		Console.OUT.println("Solver Parameters:");
 		Console.OUT.println("Solver: "+solverIn+", Mode: "+(solverMode==0n ?"sequential":"parallel")+", Limit: "+restartLimit+ " iterations or "+maxTime+" ms.");
 		Console.OUT.println("Target cost from "+(costFromF != 0 ? "file. " :
 			((tCostFromCL >= 0n ? "command line, lower or equal than ":
 			"command line, strictly lower than ") + Math.abs( tCostFromCL ))));
 		Console.OUT.println("");
 		Console.OUT.println("Parallel framework Parameters:");
 		Console.OUT.println((nodesPTeam > 1n ? "Using ":"Without ")+"Cooperative Search: "+Place.MAX_PLACES+" places. "+nodesPTeam+" nodes per team "+(Place.MAX_PLACES as Int / nodesPTeam)+" Teams");
 		Console.OUT.println("Intensification Parameters: Update Interval "+updateI+" iter. Report Interval "+reportI+" iter. Pool size "+poolSize+" conf. Probability to Change vector "+changeProb+"%");
 		Console.OUT.println("Diversification Parameters: Interval "+interTI+" ms. Minimum distance: "+minDistance+" Initial delay "+delayI+" ms. Per. Affected Places "+(affectedP*100)+"%");
 		Console.OUT.println("                            Corrective Action:"+(changeVector == 1n ? " Change Vector ":" - ")+(changeParam == 1n?"and Adapt Solver Parameters ":" - "));
 		Console.OUT.println("");
 		Console.OUT.println("Other Parameters:");
 		Console.OUT.println("Max threads "+Runtime.MAX_THREADS+" NTHREADS "+ Runtime.NTHREADS );
 		Console.OUT.println("Solving "+testNb+" times each instance");
 		Console.OUT.println(" Input vector "+(inputPath.equals(".")?"not used":inputPath));
 		Console.OUT.println("");
 	}
}
