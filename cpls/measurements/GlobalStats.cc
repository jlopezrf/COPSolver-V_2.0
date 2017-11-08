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
void cpls::measurements::GlobalStats::setExplorerWinner(x10_int explorerWinner) {
    this->FMGL(explorerWinner) = explorerWinner;
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getExplorerWinner() {
    return this->FMGL(explorerWinner);
    
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
/** Number of changes for diversification */

//#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setChangeForDiv(x10_int changeForDiv) {
    this->FMGL(changeForDiv) = changeForDiv;
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getChangeForDiv() {
    return this->FMGL(changeForDiv);
    
}

//#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of restarts */

//#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setForceRestart(x10_int forceRestart) {
    this->FMGL(forceRestart) = forceRestart;
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getForceRestart() {
    return this->FMGL(forceRestart);
    
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** acc perfect Solutions best cost == 0*/

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setAccPS(x10_int accPS) {
    this->FMGL(accPS) = accPS;
}

//#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getAccPS() {
    return this->FMGL(accPS);
    
}

//#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of restart of the group */

//#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setGroupR(x10_int groupR) {
    this->FMGL(groupR) = groupR;
}

//#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getGroupR() {
    return this->FMGL(groupR);
    
}

//#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** taget succeded ?  best cost <= target cost*/

//#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTarget(x10_boolean target) {
    this->FMGL(target) = target;
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_boolean cpls::measurements::GlobalStats::getTarget() {
    return this->FMGL(target);
    
}

//#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** far from target - target cost - best cost*/

//#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setFFTarget(x10_int fftarget) {
    this->FMGL(fftarget) = fftarget;
}

//#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getFFTarget() {
    return this->FMGL(fftarget);
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of targets accomplished */

//#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setNTarget(x10_int ntarget) {
    this->FMGL(ntarget) = ntarget;
}

//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getNTarget() {
    return this->FMGL(ntarget);
    
}

//#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Vector Size */

//#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setVectorSize(x10_long vectorSize) {
    this->FMGL(vectorSize) = vectorSize;
}

//#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_long cpls::measurements::GlobalStats::getVectorSize() {
    return this->FMGL(vectorSize);
    
}

//#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of BP */

//#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setBp(x10_int bp) {
    this->FMGL(bp) = bp;
}

//#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getBP() {
    return this->FMGL(bp);
    
}

//#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** number of singles */

//#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setSingles(x10_int singles) {
    this->FMGL(singles) = singles;
}

//#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
x10_int cpls::measurements::GlobalStats::getSingles() {
    return this->FMGL(singles);
    
}

//#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
/** Solver State **/

//#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setSState(::x10::lang::Rail< x10_int >* sstate) {
    this->FMGL(sstate) = sstate;
}

//#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
::x10::lang::Rail< x10_int >* cpls::measurements::GlobalStats::getSState(
  ) {
    return this->FMGL(sstate);
    
}

//#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setStats(x10_long co, x10_int p, x10_int e,
                                               x10_double t, x10_int it,
                                               x10_int loc, x10_int sw,
                                               x10_int re, x10_int sa,
                                               x10_int rs, x10_int ch,
                                               x10_int chFDiv, x10_int fr,
                                               x10_int gr, x10_boolean target,
                                               x10_int fft, x10_long vs,
                                               ::x10::lang::Rail< x10_int >* ss) {
    
    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = co;
    
    //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = p;
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorerWinner) = e;
    
    //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = t;
    
    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((x10_long)(it));
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = loc;
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((x10_long)(sw));
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = re;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((x10_long)(sa));
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = rs;
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ch;
    
    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(changeForDiv) = chFDiv;
    
    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = fr;
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = gr;
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(target) = target;
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(fftarget) = fft;
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = vs;
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ss;
}

//#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ::x10aux::nullCheck(c)->FMGL(cost);
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = ::x10aux::nullCheck(c)->FMGL(team);
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorerWinner) = ::x10aux::nullCheck(c)->getExplorerWinner();
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = ::x10aux::nullCheck(c)->FMGL(time);
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ::x10aux::nullCheck(c)->FMGL(iters);
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ::x10aux::nullCheck(c)->FMGL(locmin);
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ::x10aux::nullCheck(c)->FMGL(swaps);
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ::x10aux::nullCheck(c)->FMGL(reset);
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ::x10aux::nullCheck(c)->FMGL(same);
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ::x10aux::nullCheck(c)->FMGL(restart);
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ::x10aux::nullCheck(c)->FMGL(change);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(changeForDiv) = ::x10aux::nullCheck(c)->getChangeForDiv();
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ::x10aux::nullCheck(c)->FMGL(forceRestart);
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ::x10aux::nullCheck(c)->FMGL(groupR);
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(target) = ::x10aux::nullCheck(c)->FMGL(target);
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(fftarget) = ::x10aux::nullCheck(c)->FMGL(fftarget);
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = ::x10aux::nullCheck(c)->FMGL(vectorSize);
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ::x10aux::nullCheck(c)->FMGL(sstate);
}

//#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::accStats(::cpls::measurements::GlobalStats* stats) {
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ((this->FMGL(cost)) + (::x10aux::nullCheck(stats)->FMGL(cost)));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = ((this->FMGL(time)) + (::x10aux::nullCheck(stats)->FMGL(time)));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((this->FMGL(iters)) + (::x10aux::nullCheck(stats)->FMGL(iters)));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ((this->FMGL(locmin)) + (::x10aux::nullCheck(stats)->FMGL(locmin)));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((this->FMGL(swaps)) + (::x10aux::nullCheck(stats)->FMGL(swaps)));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ((this->FMGL(reset)) + (::x10aux::nullCheck(stats)->FMGL(reset)));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((this->FMGL(same)) + (::x10aux::nullCheck(stats)->FMGL(same)));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ((this->FMGL(restart)) + (::x10aux::nullCheck(stats)->FMGL(restart)));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ((this->FMGL(change)) + (::x10aux::nullCheck(stats)->FMGL(change)));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(changeForDiv) = ((this->FMGL(changeForDiv)) + (::x10aux::nullCheck(stats)->FMGL(changeForDiv)));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ((this->FMGL(forceRestart)) + (::x10aux::nullCheck(stats)->FMGL(forceRestart)));
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long sing = ((::x10aux::nullCheck(stats)->FMGL(cost)) % ::x10aux::zeroCheck(::x10aux::nullCheck(stats)->FMGL(vectorSize)));
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long blockPair = ((((::x10aux::nullCheck(stats)->FMGL(cost)) - (sing))) / ::x10aux::zeroCheck(::x10aux::nullCheck(stats)->FMGL(vectorSize)));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(bp) = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(this->FMGL(bp)))) + (blockPair))));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(singles) = (::x10aux::class_cast_unchecked<x10_int>(((((x10_long)(this->FMGL(singles)))) + (sing))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ((this->FMGL(groupR)) + (::x10aux::nullCheck(stats)->FMGL(groupR)));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if (((::x10aux::struct_equals(blockPair, ((x10_long)0ll))) &&
        (::x10aux::struct_equals(sing, ((x10_long)0ll))))) {
        
        //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        this->FMGL(accPS) = ((this->FMGL(accPS)) + (((x10_int)1)));
    }
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if (::x10aux::nullCheck(stats)->FMGL(target)) {
        
        //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        this->FMGL(ntarget) = ((this->FMGL(ntarget)) + (((x10_int)1)));
    }
    
}

//#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::print(x10_int count, x10_int oF,
                                            x10_int problem) {
    
    //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double sameIter = ((((x10_double) (this->FMGL(same)))) / (((x10_double) (this->FMGL(iters)))));
    
    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double gap = ((((((x10_double) (((this->FMGL(cost)) - (this->FMGL(dTarget)))))) / (((x10_double) (this->FMGL(dTarget)))))) * (100.0));
    
    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long sgl = ((this->FMGL(cost)) % ::x10aux::zeroCheck(this->FMGL(vectorSize)));
    
    //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_long bpl = ((((this->FMGL(cost)) - (sgl))) / ::x10aux::zeroCheck(this->FMGL(vectorSize)));
    
    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if ((::x10aux::struct_equals(oF, ((x10_int)0)))) {
        
        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(count, (__extension__ ({ static ::x10::lang::String* strLit__42283 = ::x10aux::makeStringLit(","); strLit__42283; }))), this->FMGL(time)), (__extension__ ({ static ::x10::lang::String* strLit__42284 = ::x10aux::makeStringLit(","); strLit__42284; }))), this->FMGL(iters)), (__extension__ ({ static ::x10::lang::String* strLit__42285 = ::x10aux::makeStringLit(","); strLit__42285; }))), this->FMGL(team)), (__extension__ ({ static ::x10::lang::String* strLit__42286 = ::x10aux::makeStringLit(","); strLit__42286; }))), this->FMGL(locmin)), (__extension__ ({ static ::x10::lang::String* strLit__42287 = ::x10aux::makeStringLit(","); strLit__42287; }))), this->FMGL(swaps)), (__extension__ ({ static ::x10::lang::String* strLit__42288 = ::x10aux::makeStringLit(","); strLit__42288; }))), this->FMGL(reset)), (__extension__ ({ static ::x10::lang::String* strLit__42289 = ::x10aux::makeStringLit(","); strLit__42289; }))), sameIter), (__extension__ ({ static ::x10::lang::String* strLit__42290 = ::x10aux::makeStringLit(","); strLit__42290; }))), this->FMGL(restart)), (__extension__ ({ static ::x10::lang::String* strLit__42291 = ::x10aux::makeStringLit(","); strLit__42291; }))), bpl), (__extension__ ({ static ::x10::lang::String* strLit__42292 = ::x10aux::makeStringLit(","); strLit__42292; }))), sgl), (__extension__ ({ static ::x10::lang::String* strLit__42293 = ::x10aux::makeStringLit(","); strLit__42293; }))), this->FMGL(change)), (__extension__ ({ static ::x10::lang::String* strLit__42294 = ::x10aux::makeStringLit(","); strLit__42294; }))), this->FMGL(forceRestart)), (__extension__ ({ static ::x10::lang::String* strLit__42295 = ::x10aux::makeStringLit(","); strLit__42295; }))), this->FMGL(groupR)), (__extension__ ({ static ::x10::lang::String* strLit__42296 = ::x10aux::makeStringLit(","); strLit__42296; }))), (::x10aux::struct_equals(this->FMGL(cost),
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ((x10_long)0ll)))), (__extension__ ({ static ::x10::lang::String* strLit__42297 = ::x10aux::makeStringLit(","); strLit__42297; }))), this->FMGL(target)
                                                      ? ((__extension__ ({ static ::x10::lang::String* strLit__42298 = ::x10aux::makeStringLit("S"); strLit__42298; })))
                                                      : ((__extension__ ({ static ::x10::lang::String* strLit__42299 = ::x10aux::makeStringLit("-"); strLit__42299; })))), (__extension__ ({ static ::x10::lang::String* strLit__42300 = ::x10aux::makeStringLit(","); strLit__42300; }))), this->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__42301 = ::x10aux::makeStringLit(","); strLit__42301; }))), this->FMGL(fftarget)), (__extension__ ({ static ::x10::lang::String* strLit__42302 = ::x10aux::makeStringLit(","); strLit__42302; }))), gap), (__extension__ ({ static ::x10::lang::String* strLit__42303 = ::x10aux::makeStringLit(","); strLit__42303; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 ((x10_long)0ll))), (__extension__ ({ static ::x10::lang::String* strLit__42305 = ::x10aux::makeStringLit(","); strLit__42305; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__42307 = ::x10aux::makeStringLit(","); strLit__42307; }))), ::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ((x10_long)2ll))));
    } else {
        
        //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42309 = ::x10aux::makeStringLit("|  %3d  | %8.4f | %8d | %3d-%2d | %8d |"); strLit__42309; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(count),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(time)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(iters)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(team)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(explorerWinner)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(locmin)));
        
        //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42310 = ::x10aux::makeStringLit(" %8d | %8d | %5.1f | %3d |"); strLit__42310; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(swaps)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(reset)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sameIter),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(restart)));
        
        //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        if (((::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)())) ||
            (::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()))))
        {
            
            //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__42311 = ::x10aux::makeStringLit(" %3d | %3d |"); strLit__42311; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(bpl),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sgl));
        }
        
        //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42312 = ::x10aux::makeStringLit(" %4d | %3d-%3d | %3d |"); strLit__42312; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(change)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(forceRestart)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(groupR)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((::x10aux::struct_equals(this->FMGL(cost),
                                                                                                                                 ((x10_long)0ll)))
                                                       ? (((x10_long)1ll))
                                                       : (((x10_long)0ll))));
        
        //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42313 = ::x10aux::makeStringLit("  %s | %8d |%6.3f |"); strLit__42313; })),
                                                     reinterpret_cast< ::x10::lang::Any*>(this->FMGL(target)
                                                       ? ((__extension__ ({ static ::x10::lang::String* strLit__42314 = ::x10aux::makeStringLit("S"); strLit__42314; })))
                                                       : ((__extension__ ({ static ::x10::lang::String* strLit__42315 = ::x10aux::makeStringLit("-"); strLit__42315; })))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(cost)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
        
        //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42316 = ::x10aux::makeStringLit("  %1d %3d %3d |"); strLit__42316; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)0ll))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)1ll))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10aux::nullCheck(this->FMGL(sstate))->x10::lang::Rail< x10_int >::__apply(
                                                                                                          ((x10_long)2ll))));
    }
    
}

//#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::printChangesForDivs(
  ) {
    
    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42320 = ::x10aux::makeStringLit("Changes for Diversification: "); strLit__42320; })), this->FMGL(changeForDiv))));
}

//#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::printAVG(x10_int no,
                                               x10_int oF,
                                               x10_int problem) {
    
    //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double sameIter = ((((x10_double) (this->FMGL(same)))) / (((x10_double) (this->FMGL(iters)))));
    
    //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double changeF = ((((x10_double) (this->FMGL(change)))) / (((x10_double) (no))));
    
    //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double avgCost = ((((x10_double) (this->FMGL(cost)))) / (((x10_double) (no))));
    
    //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    x10_double gap = ((((((avgCost) - (((x10_double) (this->FMGL(dTarget)))))) / (((x10_double) (this->FMGL(dTarget)))))) * (100.0));
    
    //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    if ((::x10aux::struct_equals(oF, ((x10_int)0)))) {
        
        //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42321 = ::x10aux::makeStringLit("AVG,"); strLit__42321; })), ((this->FMGL(time)) / (((x10_double) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__42322 = ::x10aux::makeStringLit(","); strLit__42322; }))), ((this->FMGL(iters)) / ::x10aux::zeroCheck(((x10_long)(no))))), (__extension__ ({ static ::x10::lang::String* strLit__42323 = ::x10aux::makeStringLit(",,"); strLit__42323; }))), ((this->FMGL(locmin)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__42324 = ::x10aux::makeStringLit(","); strLit__42324; }))), ((this->FMGL(swaps)) / ::x10aux::zeroCheck(((x10_long)(no))))), (__extension__ ({ static ::x10::lang::String* strLit__42325 = ::x10aux::makeStringLit(","); strLit__42325; }))), ((this->FMGL(reset)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__42326 = ::x10aux::makeStringLit(","); strLit__42326; }))), sameIter), (__extension__ ({ static ::x10::lang::String* strLit__42327 = ::x10aux::makeStringLit(","); strLit__42327; }))), ((this->FMGL(restart)) / ::x10aux::zeroCheck(no))), (__extension__ ({ static ::x10::lang::String* strLit__42328 = ::x10aux::makeStringLit(","); strLit__42328; }))), ((((x10_float) (this->FMGL(bp)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__42329 = ::x10aux::makeStringLit(","); strLit__42329; }))), ((((x10_double) (this->FMGL(singles)))) / (((x10_double) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__42330 = ::x10aux::makeStringLit(","); strLit__42330; }))), changeF), (__extension__ ({ static ::x10::lang::String* strLit__42331 = ::x10aux::makeStringLit(","); strLit__42331; }))), ((((x10_float) (this->FMGL(forceRestart)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__42332 = ::x10aux::makeStringLit(","); strLit__42332; }))), ((((x10_float) (this->FMGL(groupR)))) / (((x10_float) (no))))), (__extension__ ({ static ::x10::lang::String* strLit__42333 = ::x10aux::makeStringLit(","); strLit__42333; }))), this->FMGL(accPS)), (__extension__ ({ static ::x10::lang::String* strLit__42334 = ::x10aux::makeStringLit(","); strLit__42334; }))), this->FMGL(ntarget)), (__extension__ ({ static ::x10::lang::String* strLit__42335 = ::x10aux::makeStringLit(","); strLit__42335; }))), avgCost), (__extension__ ({ static ::x10::lang::String* strLit__42336 = ::x10aux::makeStringLit(",,"); strLit__42336; }))), gap));
    } else {
        
        //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42337 = ::x10aux::makeStringLit("|avg-%3d| %8.4f | %8d |  N/A   | %8d |"); strLit__42337; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(no),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(time)) / (((x10_double) (no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(iters)) / ::x10aux::zeroCheck(((x10_long)(no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(locmin)) / ::x10aux::zeroCheck(no))));
        
        //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42338 = ::x10aux::makeStringLit(" %8d | %8d | %5.1f | %3d |"); strLit__42338; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(swaps)) / ::x10aux::zeroCheck(((x10_long)(no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(reset)) / ::x10aux::zeroCheck(no))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(sameIter),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((this->FMGL(restart)) / ::x10aux::zeroCheck(no))));
        
        //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        if (((::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)())) ||
            (::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()))))
        {
            
            //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__42339 = ::x10aux::makeStringLit(" %3.1f | %3.1f |"); strLit__42339; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(bp)))) / (((x10_float) (no))))),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_double) (this->FMGL(singles)))) / (((x10_double) (no))))));
        }
        
        //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42340 = ::x10aux::makeStringLit(" %4.1f | %2.1f-%2.1f |"); strLit__42340; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(changeF),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(forceRestart)))) / (((x10_float) (no))))),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(((((x10_float) (this->FMGL(groupR)))) / (((x10_float) (no))))));
        
        //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
        ::x10::io::Console::FMGL(OUT__get)()->printf((__extension__ ({ static ::x10::lang::String* strLit__42341 = ::x10aux::makeStringLit(" %3d | %2d |%10.1f|%6.3f |           |"); strLit__42341; })),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(accPS)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(ntarget)),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(avgCost),
                                                     ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
    }
    
}

//#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::clear() {
    
    //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(cost) = ((x10_long)(((x10_int)0)));
    
    //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(team) = ((x10_int)-1);
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(explorerWinner) = ((x10_int)-1);
    
    //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(time) = 0.0;
    
    //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(iters) = ((x10_long)(((x10_int)0)));
    
    //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(locmin) = ((x10_int)0);
    
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(swaps) = ((x10_long)(((x10_int)0)));
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(reset) = ((x10_int)0);
    
    //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(same) = ((x10_long)(((x10_int)0)));
    
    //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(restart) = ((x10_int)0);
    
    //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(change) = ((x10_int)0);
    
    //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(changeForDiv) = ((x10_int)0);
    
    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(forceRestart) = ((x10_int)0);
    
    //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(groupR) = ((x10_int)0);
    
    //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(bp) = ((x10_int)0);
    
    //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(singles) = ((x10_int)0);
    
    //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(accPS) = ((x10_int)0);
    
    //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(ntarget) = ((x10_int)0);
    
    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(vectorSize) = ((x10_long)1ll);
    
    //#line 291 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
    this->FMGL(sstate) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                             ((x10_int)-1));
}

//#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
void cpls::measurements::GlobalStats::setTarget(x10_long target) {
    
    //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/measurements/GlobalStats.x10"
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
    this->FMGL(explorerWinner) = ((x10_int)-1);
    this->FMGL(time) = 0.0;
    this->FMGL(iters) = ((x10_long)0ll);
    this->FMGL(locmin) = ((x10_int)0);
    this->FMGL(swaps) = ((x10_long)0ll);
    this->FMGL(reset) = ((x10_int)0);
    this->FMGL(same) = ((x10_long)0ll);
    this->FMGL(restart) = ((x10_int)0);
    this->FMGL(change) = ((x10_int)0);
    this->FMGL(changeForDiv) = ((x10_int)0);
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
    buf.write(this->FMGL(explorerWinner));
    buf.write(this->FMGL(time));
    buf.write(this->FMGL(iters));
    buf.write(this->FMGL(locmin));
    buf.write(this->FMGL(swaps));
    buf.write(this->FMGL(reset));
    buf.write(this->FMGL(same));
    buf.write(this->FMGL(restart));
    buf.write(this->FMGL(change));
    buf.write(this->FMGL(changeForDiv));
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
    FMGL(explorerWinner) = buf.read<x10_int>();
    FMGL(time) = buf.read<x10_double>();
    FMGL(iters) = buf.read<x10_long>();
    FMGL(locmin) = buf.read<x10_int>();
    FMGL(swaps) = buf.read<x10_long>();
    FMGL(reset) = buf.read<x10_int>();
    FMGL(same) = buf.read<x10_long>();
    FMGL(restart) = buf.read<x10_int>();
    FMGL(change) = buf.read<x10_int>();
    FMGL(changeForDiv) = buf.read<x10_int>();
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
