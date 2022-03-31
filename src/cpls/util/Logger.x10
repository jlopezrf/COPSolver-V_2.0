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

public class Logger {
    public static val DEBUG=0;
    public static val LOG=1;
    public static val INFO=2;
    public static val LEVEL=3;
    
    static def out(s:String) { 
        Console.OUT.println("[" + here + ":" + Runtime.workerId()+ " " + System.nanoTime() 
                + "] " + s);
        //Console.OUT.println("[" + here + ":" + Runtime.workerId()+ "] " + s); // diff
    }
    public static def info(s:()=>String) { if (INFO >=LEVEL) out(s());}
    public static def info(s:String) { if (INFO>=LEVEL) out(s);}
    public static def info[T](s:(T)=>String, t:T) {if (INFO>=LEVEL) out(s(t));}
    public static def log(s:()=>String) { if (LOG >=LEVEL) out(s());}
    public static def log(s:String) { if (LOG>=LEVEL) out(s);}
    public static def log[T](s:(T)=>String, t:T) {if (LOG>=LEVEL) out(s(t));}
    public static def debug(s:()=>String) {if (DEBUG>=LEVEL) out(s());}
    public static def debug[T](s:(T)=>String, t:T) {if (DEBUG>=LEVEL) out(s(t));}
    public static def debug(s:String) { if (DEBUG >=LEVEL) out(s);}
}
