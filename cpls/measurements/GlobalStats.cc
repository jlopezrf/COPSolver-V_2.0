/*************************************************/
/* START of GlobalStats */
#include <cpls/measurements/GlobalStats.h>

#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <cpls/CPLSOptionsEnum__SupportedProblems.h>
#include <x10/lang/Float.h>
#include <x10/compiler/Synthetic.h>

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Desired Target */

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setDTarget(x10_long dTarget) {
    this->FMGL(dTarget) = dTarget;
}

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getDTarget() {
    return this->FMGL(dTarget);
    
}

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Final Cost of solution */

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setCost(x10_long cost) {
    this->FMGL(cost) = cost;
}

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getCost() {
    return this->FMGL(cost);
    
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Team id solution */

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTeam(x10_int team) {
    this->FMGL(team) = team;
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getTeam() {
    return this->FMGL(team);
    
}

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** explorer id solution */

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setExplorer(x10_int explorer) {
    this->FMGL(explorer) = explorer;
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getExplorer() {
    return this->FMGL(explorer);
    
}

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** time to reach the solution */

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTime(x10_double time) {
    this->FMGL(time) = time;
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_double cpls::measurements::GlobalStats::getTime() {
    return this->FMGL(time);
    
}

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Number of iterations */

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setIters(x10_long iters) {
    this->FMGL(iters) = iters;
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getIters() {
    return this->FMGL(iters);
    
}

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Number of local minimum */

//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setLocMin(x10_int locmin) {
    this->FMGL(locmin) = locmin;
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getLocMin() {
    return this->FMGL(locmin);
    
}

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Number of swaps */

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setSwaps(x10_long swaps) {
    this->FMGL(swaps) = swaps;
}

//#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getSwaps() {
    return this->FMGL(swaps);
    
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Number of resets */

//#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setReset(x10_int reset) {
    this->FMGL(reset) = reset;
}

//#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getReset() {
    return this->FMGL(reset);
    
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of same variables */

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setSame(x10_long same) {
    this->FMGL(same) = same;
}

//#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getSame() {
    return this->FMGL(same);
    
}

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of restarts */

//#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setRestart(x10_int restart) {
    this->FMGL(restart) = restart;
}

//#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getRestart() {
    return this->FMGL(restart);
    
}

//#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Number time to change vector due to communication */

//#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setChange(x10_int change) {
    this->FMGL(change) = change;
}

//#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getChange() {
    return this->FMGL(change);
    
}

//#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of restarts */

//#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setForceRestart(x10_int forceRestart) {
    this->FMGL(forceRestart) = forceRestart;
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getForceRestart() {
    return this->FMGL(forceRestart);
    
}

//#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** acc perfect Solutions best cost == 0*/

//#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setAccPS(x10_int accPS) {
    this->FMGL(accPS) = accPS;
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getAccPS() {
    return this->FMGL(accPS);
    
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of restart of the group */

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setGroupR(x10_int groupR) {
    this->FMGL(groupR) = groupR;
}

//#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getGroupR() {
    return this->FMGL(groupR);
    
}

//#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** taget succeded ?  best cost <= target cost*/

//#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTarget(x10_boolean target) {
    this->FMGL(target) = target;
}

//#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_boolean cpls::measurements::GlobalStats::getTarget() {
    return this->FMGL(target);
    
}

//#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** far from target - target cost - best cost*/

//#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setFFTarget(x10_int fftarget) {
    this->FMGL(fftarget) = fftarget;
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getFFTarget() {
    return this->FMGL(fftarget);
    
}

//#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of targets accomplished */

//#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setNTarget(x10_int ntarget) {
    this->FMGL(ntarget) = ntarget;
}

//#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getNTarget() {
    return this->FMGL(ntarget);
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Vector Size */

//#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setVectorSize(x10_long vectorSize) {
    this->FMGL(vectorSize) = vectorSize;
}

//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getVectorSize() {
    return this->FMGL(vectorSize);
    
}

//#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of BP */

//#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setBp(x10_int bp) {
    this->FMGL(bp) = bp;
}

//#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getBP() {
    return this->FMGL(bp);
    
}

//#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of singles */

//#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setSingles(x10_int singles) {
    this->FMGL(singles) = singles;
}

//#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getSingles() {
    return this->FMGL(singles);
    
}

//#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Solver State **/

//#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setSState(::x10::lang::Rail< x10_int >* sstate) {
    this->FMGL(sstate) = (__extension__ ({
        ::x10::lang::Rail< x10_int >* t__20465 = sstate;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__20465)->FMGL(size)),
                                       ((x10_long)3ll))))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__26885 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==3L}"); strLit__26885; })))));
        }
        t__20465;
    }))
    ;
}

//#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
::x10::lang::Rail< x10_int >* cpls::measurements::GlobalStats::getSState(
  ) {
    return this->FMGL(sstate);
    
}

//#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setStats(x10_long co, x10_int p,
                                               x10_int e, x10_double t,
                                               x10_int it, x10_int loc,
                                               x10_int sw, x10_int re,
                                               x10_int sa, x10_int rs,
                                               x10_int ch, x10_int fr,
                                               x10_int gr, x10_boolean target,
                                               x10_int fft, x10_long vs,
                                               ::x10::lang::Rail< x10_int >* ss) {
    
    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = co;
    
    //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = p;
    
    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorer) = e;
    
    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = t;
    
    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((x10_long)(it));
    
    //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = loc;
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((x10_long)(sw));
    
    //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = re;
    
    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((x10_long)(sa));
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = rs;
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ch;
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = fr;
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = gr;
    
    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(target) = target;
    
    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(fftarget) = fft;
    
    //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = vs;
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ss;
}

//#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ::x10aux::nullCheck(c)->FMGL(cost);
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = ::x10aux::nullCheck(c)->FMGL(team);
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorer) = ::x10aux::nullCheck(c)->FMGL(explorer);
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = ::x10aux::nullCheck(c)->FMGL(time);
    
    //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ::x10aux::nullCheck(c)->FMGL(iters);
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ::x10aux::nullCheck(c)->FMGL(locmin);
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ::x10aux::nullCheck(c)->FMGL(swaps);
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ::x10aux::nullCheck(c)->FMGL(reset);
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ::x10aux::nullCheck(c)->FMGL(same);
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ::x10aux::nullCheck(c)->FMGL(restart);
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ::x10aux::nullCheck(c)->FMGL(change);
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ::x10aux::nullCheck(c)->FMGL(forceRestart);
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ::x10aux::nullCheck(c)->FMGL(groupR);
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(target) = ::x10aux::nullCheck(c)->FMGL(target);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(fftarget) = ::x10aux::nullCheck(c)->FMGL(fftarget);
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = ::x10aux::nullCheck(c)->FMGL(vectorSize);
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ::x10aux::nullCheck(c)->FMGL(sstate);
}

//#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::accStats(::cpls::measurements::GlobalStats* stats) {
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ((this->FMGL(cost)) + (::x10aux::nullCheck(stats)->FMGL(cost)));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = ((this->FMGL(time)) + (::x10aux::nullCheck(stats)->FMGL(time)));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((this->FMGL(iters)) + (::x10aux::nullCheck(stats)->FMGL(iters)));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ((this->FMGL(locmin)) + (::x10aux::nullCheck(stats)->FMGL(locmin)));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((this->FMGL(swaps)) + (::x10aux::nullCheck(stats)->FMGL(swaps)));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ((this->FMGL(reset)) + (::x10aux::nullCheck(stats)->FMGL(reset)));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((this->FMGL(same)) + (::x10aux::nullCheck(stats)->FMGL(same)));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ((this->FMGL(restart)) + (::x10aux::nullCheck(stats)->FMGL(restart)));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ((this->FMGL(change)) + (::x10aux::nullCheck(stats)->FMGL(change)));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ((this->FMGL(forceRestart)) + (::x10aux::nullCheck(stats)->FMGL(forceRestart)));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long sing = ((::x10aux::nullCheck(stats)->FMGL(cost)) % ::x10aux::zeroCheck(::x10aux::nullCheck(stats)->FMGL(vectorSize)));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long blockPair = ((((::x10aux::nullCheck(stats)->FMGL(cost)) - (sing))) / ::x10aux::zeroCheck(::x10aux::nullCheck(stats)->FMGL(vectorSize)));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(bp) = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(this->FMGL(bp)))) + (blockPair))));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(singles) = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(this->FMGL(singles)))) + (sing))));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ((this->FMGL(groupR)) + (::x10aux::nullCheck(stats)->FMGL(groupR)));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if (((::x10aux::struct_equals(blockPair, ((x10_long)0ll))) &&
        (::x10aux::struct_equals(sing, ((x10_long)0ll))))) {
        
        //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        this->FMGL(accPS) = ((this->FMGL(accPS)) + (((x10_int)1)));
    }
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if (::x10aux::nullCheck(stats)->FMGL(target)) {
        
        //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        this->FMGL(ntarget) = ((this->FMGL(ntarget)) + (((x10_int)1)));
    }
    
}

//#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::print(x10_int count, x10_int oF,
                                            x10_int problem) {
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double sameIter = ((((x10_double) (this->FMGL(same)))) / (((x10_double) (this->FMGL(iters)))));
    
    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double gap = ((((((x10_double) (((this->FMGL(cost)) - (this->FMGL(dTarget)))))) / (((x10_double) (this->FMGL(dTarget)))))) * (100.0));
    
    //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long sgl = ((this->FMGL(cost)) % ::x10aux::zeroCheck(this->FMGL(vectorSize)));
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long bpl = ((((this->FMGL(cost)) - (sgl))) / ::x10aux::zeroCheck(this->FMGL(vectorSize)));
    
    //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if ((::x10aux::struct_equals(oF, ((x10_int)0)))) {
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(count, (__extension__ ({ static ::x10::lang::String* strLit__26886 = ::x10aux::makeStringLit(","); strLit__26886; }))), this->FMGL(time)), (__extension__ ({ static ::x10::lang::String* strLit__26887 = ::x10aux::makeStringLit(","); strLit__26887; }))), this->FMGL(iters)), (__extension__ ({ static ::x10::lang::String* strLit__26888 = ::x10aux::makeStringLit(","); strLit__26888; }))), this->FMGL(team)), (__extension__ ({ static ::x10::lang::String* strLit__26889 = ::x10aux::makeStringLit(","); strLit__26889; }))), this->FMGL(locmin)), (__extension__ ({ static ::x10::lang::String* strLit__26890 = ::x10aux::makeStringLit(","); strLit__26890; }))), this->FMGL(swaps)), (__extension__ ({ static ::x10::lang::String* strLit__26891 = ::x10aux::makeStringLit(","); strLit__26891; }))), this->FMGL(reset)), (__extension__ ({ static ::x10::lang::String* strLit__26892 = ::x10aux::makeStringLit(","); strLit__26892; }))), sameIter), (__extension__ ({ static ::x10::lang::String* strLit__26893 = ::x10aux::makeStringLit(","); strLit__26893; }))), this->FMGL(restart)), (__extension__ ({ static ::x10::lang::String* strLit__26894 = ::x10aux::makeStringLit(","); strLit__26894; }))), bpl), (__extension__ ({ static ::x10::lang::String* strLit__26895 = ::x10aux::makeStringLit(","); strLit__26895; }))), sgl), (__extension__ ({ static ::x10::lang::String* strLit__26896 = ::x10aux::makeStringLit(","); strLit__26896; }))), this->FMGL(change)), (__extension__ ({ static ::x10::lang::String* strLit__26897 = ::x10aux::makeStringLit(","); strLit__26897; }))), this->FMGL(forceRestart)), (__extension__ ({ static ::x10::lang::String* strLit__26898 = ::x10aux::makeStringLit(","); strLit__26898; }))), this->FMGL(groupR)), (__extension__ ({ static ::x10::lang::String* strLit__26899 = ::x10aux::makeStringLit(","); strLit__26899; }))), (::x10aux::struct_equals(this->FMGL(cost),
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ((x10_long)0ll)))), (__extension__ ({ static ::x10::lang::String* strLit__26900 = ::x10aux::makeStringLit(","); strLit__26900; }))), this->FMGL(target)
                                                      ? ((__extension__ ({ static ::x10::lang::String* strLit__26901 = ::x10aux::makeStringLit("S"); strLit__26901; })))
                                                      : ((__extension__ ({ static ::x10::lang::String* strLit__26902 = ::x10aux::makeStringLit("-"); strLit__26902; })))), (__extension__ ({ static ::x10::lang::String* strLit__26903 = ::x10aux::makeStringLit(","); strLit__26903; }))), this->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__26904 = ::x10aux::makeStringLit(","); strLit__26904; }))), this->FMGL(fftarget)), (__extension__ ({ static ::x10::lang::String* strLit__26905 = ::x10aux::makeStringLit(","); strLit__26905; }))), gap), (__extension__ ({ static ::x10::lang::String* strLit__26906 = ::x10aux::makeStringLit(","); strLit__26906; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ((x10_long)0ll))), (__extension__ ({ static ::x10::lang::String* strLit__26908 = ::x10aux::makeStringLit(","); strLit__26908; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__26910 = ::x10aux::makeStringLit(","); strLit__26910; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ((x10_long)2ll))));
    } else {
        
        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26912 = ::x10aux::makeStringLit("|  %3d  | %8.4f | %8d | %3d-%2d | %8d |"); strLit__26912; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(count),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(time)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(iters)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(team)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(explorer)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(locmin)));
        
        //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26913 = ::x10aux::makeStringLit(" %8d | %8d | %5.1f | %3d |"); strLit__26913; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(swaps)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(reset)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sameIter),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(restart)));
        
        //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        if (((::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)())) ||
            (::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()))))
        {
            
            //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__26914 = ::x10aux::makeStringLit(" %3d | %3d |"); strLit__26914; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(bpl),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sgl));
        }
        
        //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26915 = ::x10aux::makeStringLit(" %4d | %3d-%3d | %3d |"); strLit__26915; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(change)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(forceRestart)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(groupR)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((::x10aux::struct_equals(this->FMGL(cost),
                                                                                                                                 ((x10_long)0ll)))
                                                       ? (((x10_long)1ll))
                                                       : (((x10_long)0ll))));
        
        //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26916 = ::x10aux::makeStringLit("  %s | %8d |%6.3f |"); strLit__26916; })),
                                                     reinterpret_cast< ::x10::lang::Any*>(this->FMGL(target)
                                                       ? ((__extension__ ({ static ::x10::lang::String* strLit__26917 = ::x10aux::makeStringLit("S"); strLit__26917; })))
                                                       : ((__extension__ ({ static ::x10::lang::String* strLit__26918 = ::x10aux::makeStringLit("-"); strLit__26918; })))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(cost)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
        
        //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26919 = ::x10aux::makeStringLit("  %1d %3d %3d |"); strLit__26919; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)0ll))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)1ll))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)2ll))));
    }
    
}

//#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::printAVG(x10_int no,
                                               x10_int oF,
                                               x10_int problem) {
    
    //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double sameIter = ((((x10_double) (this->FMGL(same)))) / (((x10_double) (this->FMGL(iters)))));
    
    //#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double changeF = ((((x10_double) (this->FMGL(change)))) / (((x10_double) (no))));
    
    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double avgCost = ((((x10_double) (this->FMGL(cost)))) / (((x10_double) (no))));
    
    //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double gap = ((((((avgCost) - (((x10_double) (this->FMGL(dTarget)))))) / (((x10_double) (this->FMGL(dTarget)))))) * (100.0));
    
    //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if ((::x10aux::struct_equals(oF, ((x10_int)0)))) {
        
        //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26923 = ::x10aux::makeStringLit("AVG,"); strLit__26923; })), ((this->FMGL(time)) / (((x10_double) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__26924 = ::x10aux::makeStringLit(","); strLit__26924; }))), ((this->FMGL(iters)) / ::x10aux::zeroCheck(((x10_long)(no))))), (__extension__ ({ static ::x10::lang::String* strLit__26925 = ::x10aux::makeStringLit(",,"); strLit__26925; }))), ((this->FMGL(locmin)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__26926 = ::x10aux::makeStringLit(","); strLit__26926; }))), ((this->FMGL(swaps)) / ::x10aux::zeroCheck(((x10_long)(no))))), (__extension__ ({ static ::x10::lang::String* strLit__26927 = ::x10aux::makeStringLit(","); strLit__26927; }))), ((this->FMGL(reset)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__26928 = ::x10aux::makeStringLit(","); strLit__26928; }))), sameIter), (__extension__ ({ static ::x10::lang::String* strLit__26929 = ::x10aux::makeStringLit(","); strLit__26929; }))), ((this->FMGL(restart)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__26930 = ::x10aux::makeStringLit(","); strLit__26930; }))), ((((x10_float) (this->FMGL(bp)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__26931 = ::x10aux::makeStringLit(","); strLit__26931; }))), ((((x10_double) (this->FMGL(singles)))) / (((x10_double) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__26932 = ::x10aux::makeStringLit(","); strLit__26932; }))), changeF), (__extension__ ({ static ::x10::lang::String* strLit__26933 = ::x10aux::makeStringLit(","); strLit__26933; }))), ((((x10_float) (this->FMGL(forceRestart)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__26934 = ::x10aux::makeStringLit(","); strLit__26934; }))), ((((x10_float) (this->FMGL(groupR)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__26935 = ::x10aux::makeStringLit(","); strLit__26935; }))), this->FMGL(accPS)), (__extension__ ({ static ::x10::lang::String* strLit__26936 = ::x10aux::makeStringLit(","); strLit__26936; }))), this->FMGL(ntarget)), (__extension__ ({ static ::x10::lang::String* strLit__26937 = ::x10aux::makeStringLit(","); strLit__26937; }))), avgCost), (__extension__ ({ static ::x10::lang::String* strLit__26938 = ::x10aux::makeStringLit(",,"); strLit__26938; }))), gap));
    } else {
        
        //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26939 = ::x10aux::makeStringLit("|avg-%3d| %8.4f | %8d |  N/A   | %8d |"); strLit__26939; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(no),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(time)) / (((x10_double) (no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(iters)) / ::x10aux::zeroCheck(((x10_long)(no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(locmin)) / ::x10aux::zeroCheck(no))));
        
        //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26940 = ::x10aux::makeStringLit(" %8d | %8d | %5.1f | %3d |"); strLit__26940; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(swaps)) / ::x10aux::zeroCheck(((x10_long)(no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(reset)) / ::x10aux::zeroCheck(no))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sameIter),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(restart)) / ::x10aux::zeroCheck(no))));
        
        //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        if (((::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)())) ||
            (::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()))))
        {
            
            //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__26941 = ::x10aux::makeStringLit(" %3.1f | %3.1f |"); strLit__26941; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(bp)))) / (((x10_float) (no))))),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (this->FMGL(singles)))) / (((x10_double) (no))))));
        }
        
        //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26942 = ::x10aux::makeStringLit(" %4.1f | %2.1f-%2.1f |"); strLit__26942; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(changeF),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(forceRestart)))) / (((x10_float) (no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(groupR)))) / (((x10_float) (no))))));
        
        //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__26943 = ::x10aux::makeStringLit(" %3d | %2d |%10.1f|%6.3f |           |"); strLit__26943; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(accPS)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(ntarget)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(avgCost),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
    }
    
}

//#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::clear() {
    
    //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ((x10_long)(((x10_int)0)));
    
    //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = ((x10_int)-1);
    
    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorer) = ((x10_int)-1);
    
    //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = 0.0;
    
    //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((x10_long)(((x10_int)0)));
    
    //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ((x10_int)0);
    
    //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((x10_long)(((x10_int)0)));
    
    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ((x10_int)0);
    
    //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((x10_long)(((x10_int)0)));
    
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ((x10_int)0);
    
    //#line 269 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ((x10_int)0);
    
    //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ((x10_int)0);
    
    //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ((x10_int)0);
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(bp) = ((x10_int)0);
    
    //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(singles) = ((x10_int)0);
    
    //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(accPS) = ((x10_int)0);
    
    //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(ntarget) = ((x10_int)0);
    
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = ((x10_long)1ll);
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                             ((x10_int)-1));
}

//#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTarget(x10_long target) {
    
    //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(dTarget) = target;
}

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
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
