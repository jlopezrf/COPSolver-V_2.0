/*************************************************/
/* START of GlobalStats */
#include <cpls/measurements/GlobalStats.h>

#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/lang/Float.h>
#include <x10/compiler/Synthetic.h>

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Desired Target */

//#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Final Cost of solution */

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Team id solution */

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** explorer id solution */

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** time to reach the solution */

//#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Number of iterations */

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Number of local minimum */

//#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Number of swaps */

//#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Number of resets */

//#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of same variables */

//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of restarts */

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Number time to change vector due to communication */

//#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of restarts */

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** acc perfect Solutions best cost == 0*/

//#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of restart of the group */

//#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** taget succeded ?  best cost <= target cost*/

//#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** far from target - target cost - best cost*/

//#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of targets accomplished */

//#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Vector Size */

//#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of BP */

//#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** number of singles */

//#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
/** Solver State **/

//#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setStats(x10_long co, x10_int p, x10_int e,
                                               x10_double t, x10_int it,
                                               x10_int loc, x10_int sw,
                                               x10_int re, x10_int sa,
                                               x10_int rs, x10_int ch,
                                               x10_int fr, x10_int gr,
                                               x10_boolean target,
                                               x10_int fft, x10_long vs,
                                               ::x10::lang::Rail< x10_int >* ss) {
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = co;
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = p;
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorer) = e;
    
    //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = t;
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((x10_long)(it));
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = loc;
    
    //#line 89 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((x10_long)(sw));
    
    //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = re;
    
    //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((x10_long)(sa));
    
    //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = rs;
    
    //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ch;
    
    //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = fr;
    
    //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = gr;
    
    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(target) = target;
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(fftarget) = fft;
    
    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = vs;
    
    //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ss;
}

//#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ::x10aux::nullCheck(c)->FMGL(cost);
    
    //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = ::x10aux::nullCheck(c)->FMGL(team);
    
    //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorer) = ::x10aux::nullCheck(c)->FMGL(explorer);
    
    //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = ::x10aux::nullCheck(c)->FMGL(time);
    
    //#line 109 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ::x10aux::nullCheck(c)->FMGL(iters);
    
    //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ::x10aux::nullCheck(c)->FMGL(locmin);
    
    //#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ::x10aux::nullCheck(c)->FMGL(swaps);
    
    //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ::x10aux::nullCheck(c)->FMGL(reset);
    
    //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ::x10aux::nullCheck(c)->FMGL(same);
    
    //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ::x10aux::nullCheck(c)->FMGL(restart);
    
    //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ::x10aux::nullCheck(c)->FMGL(change);
    
    //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ::x10aux::nullCheck(c)->FMGL(forceRestart);
    
    //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ::x10aux::nullCheck(c)->FMGL(groupR);
    
    //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(target) = ::x10aux::nullCheck(c)->FMGL(target);
    
    //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(fftarget) = ::x10aux::nullCheck(c)->FMGL(fftarget);
    
    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = ::x10aux::nullCheck(c)->FMGL(vectorSize);
    
    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ::x10aux::nullCheck(c)->FMGL(sstate);
}

//#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::accStats(::cpls::measurements::GlobalStats* stats) {
    
    //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ((this->FMGL(cost)) + (::x10aux::nullCheck(stats)->FMGL(cost)));
    
    //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = ((this->FMGL(time)) + (::x10aux::nullCheck(stats)->FMGL(time)));
    
    //#line 133 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((this->FMGL(iters)) + (::x10aux::nullCheck(stats)->FMGL(iters)));
    
    //#line 134 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ((this->FMGL(locmin)) + (::x10aux::nullCheck(stats)->FMGL(locmin)));
    
    //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((this->FMGL(swaps)) + (::x10aux::nullCheck(stats)->FMGL(swaps)));
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ((this->FMGL(reset)) + (::x10aux::nullCheck(stats)->FMGL(reset)));
    
    //#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((this->FMGL(same)) + (::x10aux::nullCheck(stats)->FMGL(same)));
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ((this->FMGL(restart)) + (::x10aux::nullCheck(stats)->FMGL(restart)));
    
    //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ((this->FMGL(change)) + (::x10aux::nullCheck(stats)->FMGL(change)));
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ((this->FMGL(forceRestart)) + (::x10aux::nullCheck(stats)->FMGL(forceRestart)));
    
    //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_long sing = ((::x10aux::nullCheck(stats)->FMGL(cost)) % ::x10aux::zeroCheck(::x10aux::nullCheck(stats)->FMGL(vectorSize)));
    
    //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_long blockPair = ((((::x10aux::nullCheck(stats)->FMGL(cost)) - (sing))) / ::x10aux::zeroCheck(::x10aux::nullCheck(stats)->FMGL(vectorSize)));
    
    //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(bp) = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(this->FMGL(bp)))) + (blockPair))));
    
    //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(singles) = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(this->FMGL(singles)))) + (sing))));
    
    //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ((this->FMGL(groupR)) + (::x10aux::nullCheck(stats)->FMGL(groupR)));
    
    //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    if (((::x10aux::struct_equals(blockPair, ((x10_long)0ll))) &&
        (::x10aux::struct_equals(sing, ((x10_long)0ll))))) {
        
        //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        this->FMGL(accPS) = ((this->FMGL(accPS)) + (((x10_int)1)));
    }
    
    //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    if (::x10aux::nullCheck(stats)->FMGL(target)) {
        
        //#line 153 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        this->FMGL(ntarget) = ((this->FMGL(ntarget)) + (((x10_int)1)));
    }
    
}

//#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::print(x10_int count, x10_int oF,
                                            x10_int problem) {
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_double sameIter = ((((x10_double) (this->FMGL(same)))) / (((x10_double) (this->FMGL(iters)))));
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_double gap = ((((((x10_double) (((this->FMGL(cost)) - (this->FMGL(dTarget)))))) / (((x10_double) (this->FMGL(dTarget)))))) * (100.0));
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_long sgl = ((this->FMGL(cost)) % ::x10aux::zeroCheck(this->FMGL(vectorSize)));
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_long bpl = ((((this->FMGL(cost)) - (sgl))) / ::x10aux::zeroCheck(this->FMGL(vectorSize)));
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    if ((::x10aux::struct_equals(oF, ((x10_int)0)))) {
        
        //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(count, (__extension__ ({ static ::x10::lang::String* strLit__4644 = ::x10aux::makeStringLit(","); strLit__4644; }))), this->FMGL(time)), (__extension__ ({ static ::x10::lang::String* strLit__4645 = ::x10aux::makeStringLit(","); strLit__4645; }))), this->FMGL(iters)), (__extension__ ({ static ::x10::lang::String* strLit__4646 = ::x10aux::makeStringLit(","); strLit__4646; }))), this->FMGL(team)), (__extension__ ({ static ::x10::lang::String* strLit__4647 = ::x10aux::makeStringLit(","); strLit__4647; }))), this->FMGL(locmin)), (__extension__ ({ static ::x10::lang::String* strLit__4648 = ::x10aux::makeStringLit(","); strLit__4648; }))), this->FMGL(swaps)), (__extension__ ({ static ::x10::lang::String* strLit__4649 = ::x10aux::makeStringLit(","); strLit__4649; }))), this->FMGL(reset)), (__extension__ ({ static ::x10::lang::String* strLit__4650 = ::x10aux::makeStringLit(","); strLit__4650; }))), sameIter), (__extension__ ({ static ::x10::lang::String* strLit__4651 = ::x10aux::makeStringLit(","); strLit__4651; }))), this->FMGL(restart)), (__extension__ ({ static ::x10::lang::String* strLit__4652 = ::x10aux::makeStringLit(","); strLit__4652; }))), bpl), (__extension__ ({ static ::x10::lang::String* strLit__4653 = ::x10aux::makeStringLit(","); strLit__4653; }))), sgl), (__extension__ ({ static ::x10::lang::String* strLit__4654 = ::x10aux::makeStringLit(","); strLit__4654; }))), this->FMGL(change)), (__extension__ ({ static ::x10::lang::String* strLit__4655 = ::x10aux::makeStringLit(","); strLit__4655; }))), this->FMGL(forceRestart)), (__extension__ ({ static ::x10::lang::String* strLit__4656 = ::x10aux::makeStringLit(","); strLit__4656; }))), this->FMGL(groupR)), (__extension__ ({ static ::x10::lang::String* strLit__4657 = ::x10aux::makeStringLit(","); strLit__4657; }))), (::x10aux::struct_equals(this->FMGL(cost),
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((x10_long)0ll)))), (__extension__ ({ static ::x10::lang::String* strLit__4658 = ::x10aux::makeStringLit(","); strLit__4658; }))), this->FMGL(target)
                                                      ? ((__extension__ ({ static ::x10::lang::String* strLit__4659 = ::x10aux::makeStringLit("S"); strLit__4659; })))
                                                      : ((__extension__ ({ static ::x10::lang::String* strLit__4660 = ::x10aux::makeStringLit("-"); strLit__4660; })))), (__extension__ ({ static ::x10::lang::String* strLit__4661 = ::x10aux::makeStringLit(","); strLit__4661; }))), this->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__4662 = ::x10aux::makeStringLit(","); strLit__4662; }))), this->FMGL(fftarget)), (__extension__ ({ static ::x10::lang::String* strLit__4663 = ::x10aux::makeStringLit(","); strLit__4663; }))), gap), (__extension__ ({ static ::x10::lang::String* strLit__4664 = ::x10aux::makeStringLit(","); strLit__4664; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((x10_long)0ll))), (__extension__ ({ static ::x10::lang::String* strLit__4666 = ::x10aux::makeStringLit(","); strLit__4666; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__4668 = ::x10aux::makeStringLit(","); strLit__4668; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ((x10_long)2ll))));
    } else {
        
        //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4670 = ::x10aux::makeStringLit("|  %3d  | %8.4f | %8d | %3d-%2d | %8d |"); strLit__4670; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(count),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(time)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(iters)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(team)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(explorer)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(locmin)));
        
        //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4671 = ::x10aux::makeStringLit(" %8d | %8d | %5.1f | %3d |"); strLit__4671; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(swaps)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(reset)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sameIter),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(restart)));
        
        //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        if (((::x10aux::struct_equals(problem, ((x10_int)6))) ||
            (::x10aux::struct_equals(problem, ((x10_int)7)))))
        {
            
            //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__4672 = ::x10aux::makeStringLit(" %3d | %3d |"); strLit__4672; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(bpl),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sgl));
        }
        
        //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4673 = ::x10aux::makeStringLit(" %4d | %3d-%3d | %3d |"); strLit__4673; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(change)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(forceRestart)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(groupR)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((::x10aux::struct_equals(this->FMGL(cost),
                                                                                                                                 ((x10_long)0ll)))
                                                       ? (((x10_long)1ll))
                                                       : (((x10_long)0ll))));
        
        //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4674 = ::x10aux::makeStringLit("  %s | %8d |%6.3f |"); strLit__4674; })),
                                                     reinterpret_cast< ::x10::lang::Any*>(this->FMGL(target)
                                                       ? ((__extension__ ({ static ::x10::lang::String* strLit__4675 = ::x10aux::makeStringLit("S"); strLit__4675; })))
                                                       : ((__extension__ ({ static ::x10::lang::String* strLit__4676 = ::x10aux::makeStringLit("-"); strLit__4676; })))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(cost)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
        
        //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4677 = ::x10aux::makeStringLit("  %1d %3d %3d |"); strLit__4677; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)0ll))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)1ll))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)2ll))));
    }
    
}

//#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::printAVG(x10_int no,
                                               x10_int oF,
                                               x10_int problem) {
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_double sameIter = ((((x10_double) (this->FMGL(same)))) / (((x10_double) (this->FMGL(iters)))));
    
    //#line 196 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_double changeF = ((((x10_double) (this->FMGL(change)))) / (((x10_double) (no))));
    
    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_double avgCost = ((((x10_double) (this->FMGL(cost)))) / (((x10_double) (no))));
    
    //#line 198 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    x10_double gap = ((((((avgCost) - (((x10_double) (this->FMGL(dTarget)))))) / (((x10_double) (this->FMGL(dTarget)))))) * (100.0));
    
    //#line 200 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    if ((::x10aux::struct_equals(oF, ((x10_int)0)))) {
        
        //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__4681 = ::x10aux::makeStringLit("AVG,"); strLit__4681; })), ((this->FMGL(time)) / (((x10_double) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__4682 = ::x10aux::makeStringLit(","); strLit__4682; }))), ((this->FMGL(iters)) / ::x10aux::zeroCheck(((x10_long)(no))))), (__extension__ ({ static ::x10::lang::String* strLit__4683 = ::x10aux::makeStringLit(",,"); strLit__4683; }))), ((this->FMGL(locmin)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__4684 = ::x10aux::makeStringLit(","); strLit__4684; }))), ((this->FMGL(swaps)) / ::x10aux::zeroCheck(((x10_long)(no))))), (__extension__ ({ static ::x10::lang::String* strLit__4685 = ::x10aux::makeStringLit(","); strLit__4685; }))), ((this->FMGL(reset)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__4686 = ::x10aux::makeStringLit(","); strLit__4686; }))), sameIter), (__extension__ ({ static ::x10::lang::String* strLit__4687 = ::x10aux::makeStringLit(","); strLit__4687; }))), ((this->FMGL(restart)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__4688 = ::x10aux::makeStringLit(","); strLit__4688; }))), ((((x10_float) (this->FMGL(bp)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__4689 = ::x10aux::makeStringLit(","); strLit__4689; }))), ((((x10_double) (this->FMGL(singles)))) / (((x10_double) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__4690 = ::x10aux::makeStringLit(","); strLit__4690; }))), changeF), (__extension__ ({ static ::x10::lang::String* strLit__4691 = ::x10aux::makeStringLit(","); strLit__4691; }))), ((((x10_float) (this->FMGL(forceRestart)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__4692 = ::x10aux::makeStringLit(","); strLit__4692; }))), ((((x10_float) (this->FMGL(groupR)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__4693 = ::x10aux::makeStringLit(","); strLit__4693; }))), this->FMGL(accPS)), (__extension__ ({ static ::x10::lang::String* strLit__4694 = ::x10aux::makeStringLit(","); strLit__4694; }))), this->FMGL(ntarget)), (__extension__ ({ static ::x10::lang::String* strLit__4695 = ::x10aux::makeStringLit(","); strLit__4695; }))), avgCost), (__extension__ ({ static ::x10::lang::String* strLit__4696 = ::x10aux::makeStringLit(",,"); strLit__4696; }))), gap));
    } else {
        
        //#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4697 = ::x10aux::makeStringLit("|avg-%3d| %8.4f | %8d |  N/A   | %8d |"); strLit__4697; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(no),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(time)) / (((x10_double) (no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(iters)) / ::x10aux::zeroCheck(((x10_long)(no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(locmin)) / ::x10aux::zeroCheck(no))));
        
        //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4698 = ::x10aux::makeStringLit(" %8d | %8d | %5.1f | %3d |"); strLit__4698; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(swaps)) / ::x10aux::zeroCheck(((x10_long)(no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(reset)) / ::x10aux::zeroCheck(no))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sameIter),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(restart)) / ::x10aux::zeroCheck(no))));
        
        //#line 208 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        if (((::x10aux::struct_equals(problem, ((x10_int)6))) ||
            (::x10aux::struct_equals(problem, ((x10_int)7)))))
        {
            
            //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__4699 = ::x10aux::makeStringLit(" %3.1f | %3.1f |"); strLit__4699; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(bp)))) / (((x10_float) (no))))),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (this->FMGL(singles)))) / (((x10_double) (no))))));
        }
        
        //#line 210 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4700 = ::x10aux::makeStringLit(" %4.1f | %2.1f-%2.1f |"); strLit__4700; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(changeF),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(forceRestart)))) / (((x10_float) (no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(groupR)))) / (((x10_float) (no))))));
        
        //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__4701 = ::x10aux::makeStringLit(" %3d | %2d |%10.1f|%6.3f |           |"); strLit__4701; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(accPS)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(ntarget)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(avgCost),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
    }
    
}

//#line 215 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::clear() {
    
    //#line 216 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ((x10_long)(((x10_int)0)));
    
    //#line 217 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = ((x10_int)-1);
    
    //#line 218 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorer) = ((x10_int)-1);
    
    //#line 219 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = 0.0;
    
    //#line 220 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((x10_long)(((x10_int)0)));
    
    //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ((x10_int)0);
    
    //#line 222 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((x10_long)(((x10_int)0)));
    
    //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ((x10_int)0);
    
    //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((x10_long)(((x10_int)0)));
    
    //#line 225 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ((x10_int)0);
    
    //#line 226 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ((x10_int)0);
    
    //#line 227 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ((x10_int)0);
    
    //#line 228 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ((x10_int)0);
    
    //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(bp) = ((x10_int)0);
    
    //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(singles) = ((x10_int)0);
    
    //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(accPS) = ((x10_int)0);
    
    //#line 233 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(ntarget) = ((x10_int)0);
    
    //#line 234 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = ((x10_long)1ll);
    
    //#line 235 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                             ((x10_int)-1));
}

//#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTarget(x10_long target) {
    
    //#line 241 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
    this->FMGL(dTarget) = target;
}

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
::cpls::measurements::GlobalStats* cpls::measurements::GlobalStats::cpls__measurements__GlobalStats____this__cpls__measurements__GlobalStats(
  ) {
    return this;
    
}
void cpls::measurements::GlobalStats::_constructor() {
    this->cpls::measurements::GlobalStats::__fieldInitializers_cpls_measurements_GlobalStats();
}
::cpls::measurements::GlobalStats* cpls::measurements::GlobalStats::_make(
  ) {
    ::cpls::measurements::GlobalStats* this_ = new (::x10aux::alloc_z< ::cpls::measurements::GlobalStats>()) ::cpls::measurements::GlobalStats();
    this_->_constructor();
    return this_;
}


void cpls::measurements::GlobalStats::__fieldInitializers_cpls_measurements_GlobalStats(
  ) {
    this->FMGL(dTarget) = ((x10_long)0ll);
    this->FMGL(cost) = ((x10_long)0ll);
    this->FMGL(team) = ((x10_int)-1);
    this->FMGL(explorer) = ((x10_int)-1);
    this->FMGL(time) = 0.0;
    this->FMGL(iters) = ((x10_long)0ll);
    this->FMGL(locmin) = ((x10_int)0);
    this->FMGL(swaps) = ((x10_long)0ll);
    this->FMGL(reset) = ((x10_int)0);
    this->FMGL(same) = ((x10_long)0ll);
    this->FMGL(restart) = ((x10_int)0);
    this->FMGL(change) = ((x10_int)0);
    this->FMGL(forceRestart) = ((x10_int)0);
    this->FMGL(accPS) = ((x10_int)0);
    this->FMGL(groupR) = ((x10_int)0);
    this->FMGL(target) = false;
    this->FMGL(fftarget) = ((x10_int)0);
    this->FMGL(ntarget) = ((x10_int)0);
    this->FMGL(vectorSize) = ((x10_long)1ll);
    this->FMGL(bp) = ((x10_int)0);
    this->FMGL(singles) = ((x10_int)0);
    this->FMGL(sstate) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                             ((x10_int)-1));
}
const ::x10aux::serialization_id_t cpls::measurements::GlobalStats::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::measurements::GlobalStats::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::measurements::GlobalStats::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(dTarget));
    buf.write(this->FMGL(cost));
    buf.write(this->FMGL(team));
    buf.write(this->FMGL(explorer));
    buf.write(this->FMGL(time));
    buf.write(this->FMGL(iters));
    buf.write(this->FMGL(locmin));
    buf.write(this->FMGL(swaps));
    buf.write(this->FMGL(reset));
    buf.write(this->FMGL(same));
    buf.write(this->FMGL(restart));
    buf.write(this->FMGL(change));
    buf.write(this->FMGL(forceRestart));
    buf.write(this->FMGL(accPS));
    buf.write(this->FMGL(groupR));
    buf.write(this->FMGL(target));
    buf.write(this->FMGL(fftarget));
    buf.write(this->FMGL(ntarget));
    buf.write(this->FMGL(vectorSize));
    buf.write(this->FMGL(bp));
    buf.write(this->FMGL(singles));
    buf.write(this->FMGL(sstate));
    
}

::x10::lang::Reference* ::cpls::measurements::GlobalStats::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::measurements::GlobalStats* this_ = new (::x10aux::alloc_z< ::cpls::measurements::GlobalStats>()) ::cpls::measurements::GlobalStats();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::measurements::GlobalStats::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(dTarget) = buf.read<x10_long>();
    FMGL(cost) = buf.read<x10_long>();
    FMGL(team) = buf.read<x10_int>();
    FMGL(explorer) = buf.read<x10_int>();
    FMGL(time) = buf.read<x10_double>();
    FMGL(iters) = buf.read<x10_long>();
    FMGL(locmin) = buf.read<x10_int>();
    FMGL(swaps) = buf.read<x10_long>();
    FMGL(reset) = buf.read<x10_int>();
    FMGL(same) = buf.read<x10_long>();
    FMGL(restart) = buf.read<x10_int>();
    FMGL(change) = buf.read<x10_int>();
    FMGL(forceRestart) = buf.read<x10_int>();
    FMGL(accPS) = buf.read<x10_int>();
    FMGL(groupR) = buf.read<x10_int>();
    FMGL(target) = buf.read<x10_boolean>();
    FMGL(fftarget) = buf.read<x10_int>();
    FMGL(ntarget) = buf.read<x10_int>();
    FMGL(vectorSize) = buf.read<x10_long>();
    FMGL(bp) = buf.read<x10_int>();
    FMGL(singles) = buf.read<x10_int>();
    FMGL(sstate) = buf.read< ::x10::lang::Rail< x10_int >*>();
}

::x10aux::RuntimeType cpls::measurements::GlobalStats::rtt;
void cpls::measurements::GlobalStats::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.measurements.GlobalStats",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of GlobalStats */
/*************************************************/
