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

package cpls.util;

import x10.util.Random; 

public class RandomTools{
 	
 	var seed: Long; 
 	val r = new Random();

 	public def this(seedIn: Long){
 		seed=seedIn;
 		r.setSeed(seedIn);
 	} 

 	public def setSeed(s:Long){
 		r.setSeed(s);
 		seed=s;
 	}

 	public def randomPermut( sz : Long , baseValue : Int ) : Rail[Int]{
 		val size =sz as Int;
 		val vec  = new Rail[Int] (size, (k:Long) => baseValue + k as Int);

 		for(var i:Int = size - 1n; i > 0n ; i--){
 			val j = r.nextInt( i + 1n );
 			val z = vec(i);
 			vec(i) = vec(j);
 			vec(j) = z;
 		}
 		return vec;		
 	}

/**
 * 	randomArrayPermut
 * 	Generate a random permutation of a given vector of size elements
 * 	@param vec Vector with initial values
 * 	@param size 
 * 	@return
 */
 	public def randomArrayPermut( vec : Rail[Int] ) : Rail[Int]{self==vec}{
 		for(var i:Long = vec.size - 1; i > 0 ; i--){
 			val j = randomInt(i + 1);
 			val z = vec(i);
 			vec(i) = vec(j);
 			vec(j) = z;
 		}
 		return vec;	
 	}

 	public def randomInterval(low:Int, up:Int):Int{
 		return (r.nextDouble()*(up - low + 1n )) as Int + low;
 	}


 	public def randomInt(limit : Long)=r.nextInt(limit as Int);		
 	public def randomLong()=r.nextLong();		
 	public def randomDouble()=r.nextDouble();
 
 	public static def getRandomSeed():Long{
 		return System.nanoTime();	  
 	}
 
}
