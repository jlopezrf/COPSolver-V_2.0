/*************************************************/
/* START of AdaptiveSearch */
#include <cpls/solver/AdaptiveSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <cpls/util/MovePermutation.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <cpls/util/Utils.h>
#include <x10/lang/ULong.h>
#include <x10/util/Random.h>
#include <cpls/measurements/GlobalStats.h>
#include <x10/compiler/Synthetic.h>

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
/**	Statistics	*/

//#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
/** Total Statistics */

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
/** For Exhaustive search */

//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
/** Parameters of the AS solver */

//#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"

//#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::_constructor() {
    
    //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->cpls::solver::AdaptiveSearch::__fieldInitializers_cpls_solver_AdaptiveSearch();
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(mySolverType) = ((x10_long)(::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)()));
}
::cpls::solver::AdaptiveSearch* cpls::solver::AdaptiveSearch::_make() {
    ::cpls::solver::AdaptiveSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::AdaptiveSearch>()) ::cpls::solver::AdaptiveSearch();
    this_->_constructor();
    return this_;
}



//#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                   ::cpls::ParamManager* opts) {
    
    //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemModel,
                                                        opts);
    
    //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(mark) = ::x10::lang::Rail< x10_int >::_make(::x10aux::nullCheck(problemModel)->getSize(),
                                                           ((x10_int)0));
    
    //#line 77 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(listIJ) = ::x10::lang::Rail< ::cpls::util::MovePermutation* >::_make(::x10aux::nullCheck(problemModel)->getSize());
    
    //#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(listI) = ::x10::lang::Rail< x10_long >::_make(::x10aux::nullCheck(problemModel)->getSize(),
                                                             ((x10_long)0ll));
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nVarToReset) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__29059 = ::x10aux::makeStringLit("--AS_varToReset"); strLit__29059; })),
                                ((x10_long)-1ll));
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(resetPercent) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__29060 = ::x10aux::makeStringLit("--AS_resetPer"); strLit__29060; })),
                                 ((x10_int)10));
    
    //#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(freezeLocMin) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__29061 = ::x10aux::makeStringLit("--AS_freezeLocMin"); strLit__29061; })),
                                 ((x10_int)5));
    
    //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(freezeSwap) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__29062 = ::x10aux::makeStringLit("--AS_freezeSwap"); strLit__29062; })),
                               ((x10_int)5));
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(resetLimit) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__29063 = ::x10aux::makeStringLit("--AS_resetLimit"); strLit__29063; })),
                               ((x10_int)5));
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(probSelectLocMin) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__29064 = ::x10aux::makeStringLit("--AS_probSelecLocMin"); strLit__29064; })),
                                     ((x10_int)0));
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(firstBest) = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__29065 = ::x10aux::makeStringLit("--AS_firstBest"); strLit__29065; })),
                                                       ((x10_int)0)),
                                                     ((x10_int)1)));
    
    //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(exhaustive) = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__29066 = ::x10aux::makeStringLit("--AS_exhaustive"); strLit__29066; })),
                                                        ((x10_int)0)),
                                                      ((x10_int)1)));
}

//#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::initVar(x10_long tCost,
                                           x10_boolean sLow) {
    
    //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar(tCost, sLow);
    
    //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(nVarToReset),
                                 ((x10_long)-1ll)))) {
        
        //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nVarToReset) = ((((((::x10aux::nullCheck(this->FMGL(problemModel))->getSize()) * (((x10_long)(this->FMGL(resetPercent)))))) + (((x10_long)99ll)))) / ::x10aux::zeroCheck(((x10_long)100ll)));
        
        //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((this->FMGL(nVarToReset)) < (((x10_long)2ll))))
        {
            
            //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            this->FMGL(nVarToReset) = ((x10_long)2ll);
        }
        
    }
    
    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::clear();
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::clear();
    
    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nRestart) = ((x10_int)0);
    
    //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((x10_int)0);
    
    //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMin) = ((x10_int)0);
    
    //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nReset) = ((x10_int)0);
    
    //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nInPlateau) = ((x10_int)0);
    
    //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nResetTot) = ((x10_int)0);
    
    //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVarTot) = ((x10_int)0);
    
    //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMinTot) = ((x10_int)0);
}

//#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::search() {
    
    //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long newCost = ((x10_long)-1ll);
    
    //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    if (!(this->FMGL(exhaustive))) {
        
        //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->selectVarHighCost(this->FMGL(move));
        
        //#line 118 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        newCost = this->selectVarMinConflict(this->FMGL(move));
    } else {
        
        //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        newCost = this->selectVarsToSwap(this->FMGL(move));
    }
    
    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    if ((!::x10aux::struct_equals(this->FMGL(currentCost),
                                  newCost))) {
        
        //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nInPlateau) = ((x10_int)0);
    }
    
    //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nInPlateau) = ((this->FMGL(nInPlateau)) + (((x10_int)1)));
    
    //#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(move)->getFirst(),
                                 this->FMGL(move)->getSecond())))
    {
        
        //#line 127 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nLocalMin) = ((this->FMGL(nLocalMin)) + (((x10_int)1)));
        
        //#line 128 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(move)->getFirst(), ((this->FMGL(nSwap)) + (this->FMGL(freezeLocMin))));
        
        //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((((((x10_long)(this->FMGL(nVarMarked)))) + (((x10_long)1ll)))) >= (((x10_long)(this->FMGL(resetLimit))))))
        {
            
            //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            this->onLocMin();
            
            //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            this->doReset(this->FMGL(nVarToReset));
        }
        
    } else {
        
        //#line 134 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(move)->getFirst(), ((this->FMGL(nSwap)) + (this->FMGL(freezeSwap))));
        
        //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(move)->getSecond(), ((this->FMGL(nSwap)) + (this->FMGL(freezeSwap))));
        
        //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(problemModel))->swapVariables(
          this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
        
        //#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
        
        //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(problemModel))->executedSwap(
          this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
        
        //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(currentCost) = newCost;
    }
    
    //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__29067 = ::x10aux::makeStringLit("Costo (AdaptiveSearch): "); strLit__29067; })), this->FMGL(currentCost)));
    
    //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__29068 = ::x10aux::makeStringLit(". Con variables: "); strLit__29068; })),
                              ::x10aux::nullCheck(this->FMGL(problemModel))->getVariables());
    
    //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__29069 = ::x10aux::makeStringLit("\n"); strLit__29069; })));
    
    //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    return this->FMGL(currentCost);
    
}

//#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::restartVar() {
    
    //#line 151 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::restartVar();
    
    //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::clear();
}

//#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::doReset(x10_long n) {
    
    //#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long cost = ((x10_long)-1ll);
    
    //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    cost = ::x10aux::nullCheck(this->FMGL(problemModel))->reset(
             n, this->FMGL(currentCost));
    
    //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::clear();
    
    //#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nReset) = ((this->FMGL(nReset)) + (((x10_int)1)));
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(currentCost) = ((cost) < (((x10_long)0ll)))
      ? (::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
           true)) : (cost);
}

//#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::selectVarHighCost(::cpls::util::MovePermutation* move) {
    
    //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long i = ((x10_long)-1ll);
    
    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long maxCost = ((x10_long)0ll);
    
    //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long maxVar = ((x10_long)-1ll);
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(listInb) = ((x10_int)0);
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nVarMarked) = ((x10_int)0);
    
    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    while (((((x10_ulong) (i = ::x10aux::nullCheck(this->FMGL(problemModel))->nextI(
                                 i)))) < (((x10_ulong) (::x10aux::nullCheck(this->FMGL(problemModel))->getSize())))))
    {
        
        //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((this->FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                      i)))) {
            
            //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            this->FMGL(nVarMarked) = ((this->FMGL(nVarMarked)) + (((x10_int)1)));
            
            //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            continue;
        }
        
        //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        x10_long x = ::x10aux::nullCheck(this->FMGL(problemModel))->costOnVariable(
                       i);
        
        //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((x) >= (maxCost))) {
            
            //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if (((x) > (maxCost))) {
                
                //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                maxCost = x;
                
                //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(listInb) = ((x10_int)0);
            }
            
            //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::__set(
              ((x10_long)(((this->FMGL(listInb) = ((this->FMGL(listInb)) + (((x10_int)1)))) - (((x10_int)1))))),
              i);
        }
        
    }
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(listInb), ((x10_int)0))))
    {
        
        //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        maxVar = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                   ::x10aux::nullCheck(this->FMGL(problemModel))->getSize());
    } else {
        
        //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        x10_int sel = ::x10aux::nullCheck(this->FMGL(random))->nextInt(
                        this->FMGL(listInb));
        
        //#line 198 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        maxVar = ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)(sel)));
    }
    
    //#line 200 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((this->FMGL(nSameVar)) + (this->FMGL(listInb)));
    
    //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setFirst(maxVar);
}

//#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::selectVarMinConflict(
  ::cpls::util::MovePermutation* move) {
    
    //#line 212 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long j;
    
    //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long cost;
    
    //#line 214 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_boolean flagOut = false;
    
    //#line 215 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long second = ((x10_long)-1ll);
    
    //#line 216 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long nCost;
    
    //#line 217 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long first = ::x10aux::nullCheck(move)->getFirst();
    
    //#line 219 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    do {
        
        //#line 220 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        flagOut = false;
        
        //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(listJnb) = ((x10_int)0);
        
        //#line 222 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        nCost = this->FMGL(currentCost);
        
        //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        j = ((x10_long)(((x10_int)-1)));
        
        //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        while (((((x10_ulong) (j = ::x10aux::nullCheck(this->FMGL(problemModel))->nextJ(
                                     first, j, false)))) < (((x10_ulong) (::x10aux::nullCheck(this->FMGL(problemModel))->getSize())))))
        {
            
            //#line 225 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if (((this->FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                          j)))) {
                
                //#line 226 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                continue;
            }
            
            //#line 228 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            cost = ::x10aux::nullCheck(this->FMGL(problemModel))->costIfSwap(
                     this->FMGL(currentCost), j, first);
            
            //#line 229 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if ((((this->FMGL(probSelectLocMin)) <= (((x10_int)100))) &&
                (::x10aux::struct_equals(j, first)))) {
                continue;
            }
            
            //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if (((cost) < (nCost))) {
                
                //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(listJnb) = ((x10_int)1);
                
                //#line 233 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                nCost = cost;
                
                //#line 234 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                second = j;
                
                //#line 235 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                if (this->FMGL(firstBest)) {
                    
                    //#line 236 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                    ::x10aux::nullCheck(move)->setSecond(
                      second);
                    
                    //#line 237 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                    return nCost;
                    
                }
                
            } else 
            //#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if ((::x10aux::struct_equals(cost, nCost))) {
                
                //#line 240 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                               this->FMGL(listJnb) =
                                                 ((this->FMGL(listJnb)) + (((x10_int)1)))),
                                             ((x10_int)0))))
                {
                    
                    //#line 241 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                    second = j;
                }
                
            }
            
        }
        
        //#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((this->FMGL(probSelectLocMin)) <= (((x10_int)100))))
        {
            
            //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if ((((nCost) >= (this->FMGL(currentCost))) &&
                ((((::x10aux::nullCheck(this->FMGL(random))->nextInt(
                      ((x10_int)100))) < (this->FMGL(probSelectLocMin))) ||
                 (((this->FMGL(listInb)) <= (((x10_int)1))) &&
                 ((this->FMGL(listJnb)) <= (((x10_int)1))))))))
            {
                
                //#line 247 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                second = first;
                
                //#line 248 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                ::x10aux::nullCheck(move)->setSecond(second);
                
                //#line 249 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                return nCost;
                
            }
            
            //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if ((::x10aux::struct_equals(this->FMGL(listJnb),
                                         ((x10_int)0)))) {
                
                //#line 252 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(nIter) = ((this->FMGL(nIter)) + (((x10_int)1)));
                
                //#line 253 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                x10_int sel = ::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                this->FMGL(listInb));
                
                //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                first = ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::__apply(
                          ((x10_long)(sel)));
                
                //#line 255 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                ::x10aux::nullCheck(move)->setFirst(first);
                
                //#line 256 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                flagOut = true;
            }
            
        }
        
    } while (flagOut);
    
    //#line 260 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setSecond(second);
    
    //#line 261 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    return nCost;
    
}

//#line 271 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::selectVarsToSwap(::cpls::util::MovePermutation* move) {
    
    //#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long first;
    
    //#line 273 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long second;
    
    //#line 275 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nListIJ) = ((x10_int)0);
    
    //#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_long nCost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 277 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nVarMarked) = ((x10_int)0);
    
    //#line 278 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    first = ((x10_long)(((x10_int)-1)));
    
    //#line 280 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    while (((((x10_ulong) (first = ::x10aux::nullCheck(this->FMGL(problemModel))->nextI(
                                     first)))) < (((x10_ulong) (::x10aux::nullCheck(this->FMGL(problemModel))->getSize())))))
    {
        
        //#line 281 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((this->FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                      first)))) {
            
            //#line 282 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            this->FMGL(nVarMarked) = ((this->FMGL(nVarMarked)) + (((x10_int)1)));
            
            //#line 283 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            continue;
        }
        
        //#line 285 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        second = ((x10_long)(((x10_int)-1)));
        
        //#line 286 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        while (((((x10_ulong) (second = ::x10aux::nullCheck(this->FMGL(problemModel))->nextJ(
                                          first, second, true)))) < (((x10_ulong) (::x10aux::nullCheck(this->FMGL(problemModel))->getSize())))))
        {
            
            //#line 287 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if (((this->FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                          second)))) {
                
                //#line 288 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                continue;
            }
            
            //#line 290 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            x10_long x = ::x10aux::nullCheck(this->FMGL(problemModel))->costIfSwap(
                           this->FMGL(currentCost), first,
                           second);
            
            //#line 291 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            if (((x) <= (nCost))) {
                
                //#line 292 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                if (((x) < (nCost))) {
                    
                    //#line 293 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                    nCost = x;
                    
                    //#line 294 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                    this->FMGL(nListIJ) = ((x10_int)0);
                    
                    //#line 295 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                    if (((::x10aux::struct_equals(this->FMGL(firstBest),
                                                  true)) &&
                        ((x) < (this->FMGL(currentCost)))))
                    {
                        
                        //#line 296 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                        ::x10aux::nullCheck(move)->setFirst(
                          first);
                        
                        //#line 297 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                        ::x10aux::nullCheck(move)->setSecond(
                          second);
                        
                        //#line 298 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                        return nCost;
                        
                    }
                    
                }
                
                //#line 301 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                ::x10aux::nullCheck(this->FMGL(listIJ))->x10::lang::Rail< ::cpls::util::MovePermutation* >::__set(
                  ((x10_long)(this->FMGL(nListIJ))), ::cpls::util::MovePermutation::_make(first,
                                                                                          second));
                
                //#line 302 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(nListIJ) = ((x10_int) (((((((x10_long)(this->FMGL(nListIJ)))) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(::x10aux::nullCheck(this->FMGL(problemModel))->getSize()))));
            }
            
        }
        
    }
    
    //#line 307 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((this->FMGL(nSameVar)) + (this->FMGL(nListIJ)));
    
    //#line 308 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    if (((nCost) >= (this->FMGL(currentCost)))) {
        
        //#line 309 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if (((::x10aux::struct_equals(this->FMGL(nListIJ),
                                      ((x10_int)0))) || (((this->FMGL(probSelectLocMin)) <= (((x10_int)100))) &&
            ((::x10aux::nullCheck(this->FMGL(random))->nextInt(
                ((x10_int)100))) < (this->FMGL(probSelectLocMin))))))
        {
            
            //#line 310 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            x10_int i;
            
            //#line 311 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            {
                for (i = ((x10_int)0); ((this->FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                                                 ((x10_long)(i)))));
                     i = ((i) + (((x10_int)1)))) {
                 
                }
            }
            
            //#line 312 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setFirst(((x10_long)(i)));
            
            //#line 313 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setSecond(((x10_long)(i)));
            
            //#line 314 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            return nCost;
            
        }
        
        //#line 317 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        x10_long lm;
        
        //#line 318 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
        if ((!(((this->FMGL(probSelectLocMin)) <= (((x10_int)100)))) &&
            ((lm = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                     ((((x10_long)(this->FMGL(nListIJ)))) + (::x10aux::nullCheck(this->FMGL(problemModel))->getSize())))) < (::x10aux::nullCheck(this->FMGL(problemModel))->getSize()))))
        {
            
            //#line 319 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setFirst(lm);
            
            //#line 320 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setSecond(lm);
            
            //#line 321 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
            return nCost;
            
        }
        
    }
    
    //#line 325 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    x10_int sel = ::x10aux::nullCheck(this->FMGL(random))->nextInt(
                    this->FMGL(nListIJ));
    
    //#line 326 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setFirst(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(listIJ))->x10::lang::Rail< ::cpls::util::MovePermutation* >::__apply(
                                                              ((x10_long)(sel))))->getFirst());
    
    //#line 327 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setSecond(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(listIJ))->x10::lang::Rail< ::cpls::util::MovePermutation* >::__apply(
                                                               ((x10_long)(sel))))->getSecond());
    
    //#line 328 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    return nCost;
    
}

//#line 334 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::reportStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 335 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::reportStats(c);
    
    //#line 336 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(c)->FMGL(locmin) = this->FMGL(nLocalMinTot);
    
    //#line 337 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(c)->FMGL(reset) = this->FMGL(nResetTot);
    
    //#line 338 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(c)->FMGL(same) = ((x10_long)(this->FMGL(nSameVarTot)));
}

//#line 341 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::updateTotStats() {
    
    //#line 342 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::updateTotStats();
    
    //#line 343 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nResetTot) = ((this->FMGL(nResetTot)) + (this->FMGL(nReset)));
    
    //#line 344 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVarTot) = ((this->FMGL(nSameVarTot)) + (this->FMGL(nSameVar)));
    
    //#line 345 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMinTot) = ((this->FMGL(nLocalMinTot)) + (this->FMGL(nLocalMin)));
    
    //#line 346 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((x10_int)0);
    
    //#line 347 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMin) = ((x10_int)0);
    
    //#line 348 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nReset) = ((x10_int)0);
}

//#line 354 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::onLocMin() {
    
    //#line 357 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
    ::x10::lang::Rail< x10_int >* solverState = this->createSolverState();
    
}

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/AdaptiveSearch.x10"
::cpls::solver::AdaptiveSearch* cpls::solver::AdaptiveSearch::cpls__solver__AdaptiveSearch____this__cpls__solver__AdaptiveSearch(
  ) {
    return this;
    
}
void cpls::solver::AdaptiveSearch::__fieldInitializers_cpls_solver_AdaptiveSearch(
  ) {
    this->FMGL(mark) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(listInb) = ((x10_int)0);
    this->FMGL(listJnb) = ((x10_int)0);
    this->FMGL(listIJ) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::cpls::util::MovePermutation* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(listI) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(nVarMarked) = ((x10_int)0);
    this->FMGL(nReset) = ((x10_int)0);
    this->FMGL(nSameVar) = ((x10_int)0);
    this->FMGL(nLocalMin) = ((x10_int)0);
    this->FMGL(nResetTot) = ((x10_int)0);
    this->FMGL(nSameVarTot) = ((x10_int)0);
    this->FMGL(nLocalMinTot) = ((x10_int)0);
    this->FMGL(nInPlateau) = ((x10_int)0);
    this->FMGL(nListIJ) = ((x10_int)0);
    this->FMGL(nVarToReset) = ((x10_long)0ll);
    this->FMGL(resetPercent) = ((x10_int)0);
    this->FMGL(exhaustive) = false;
    this->FMGL(freezeLocMin) = ((x10_int)0);
    this->FMGL(freezeSwap) = ((x10_int)0);
    this->FMGL(resetLimit) = ((x10_int)0);
    this->FMGL(probSelectLocMin) = ((x10_int)0);
    this->FMGL(firstBest) = false;
}
const ::x10aux::serialization_id_t cpls::solver::AdaptiveSearch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::AdaptiveSearch::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::AdaptiveSearch::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_serialize_body(buf);
    buf.write(this->FMGL(mark));
    buf.write(this->FMGL(listInb));
    buf.write(this->FMGL(listJnb));
    buf.write(this->FMGL(listIJ));
    buf.write(this->FMGL(listI));
    buf.write(this->FMGL(nVarMarked));
    buf.write(this->FMGL(nReset));
    buf.write(this->FMGL(nSameVar));
    buf.write(this->FMGL(nLocalMin));
    buf.write(this->FMGL(nResetTot));
    buf.write(this->FMGL(nSameVarTot));
    buf.write(this->FMGL(nLocalMinTot));
    buf.write(this->FMGL(nInPlateau));
    buf.write(this->FMGL(nListIJ));
    buf.write(this->FMGL(nVarToReset));
    buf.write(this->FMGL(resetPercent));
    buf.write(this->FMGL(exhaustive));
    buf.write(this->FMGL(freezeLocMin));
    buf.write(this->FMGL(freezeSwap));
    buf.write(this->FMGL(resetLimit));
    buf.write(this->FMGL(probSelectLocMin));
    buf.write(this->FMGL(firstBest));
    
}

::x10::lang::Reference* ::cpls::solver::AdaptiveSearch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::AdaptiveSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::AdaptiveSearch>()) ::cpls::solver::AdaptiveSearch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::AdaptiveSearch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_deserialize_body(buf);
    FMGL(mark) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(listInb) = buf.read<x10_int>();
    FMGL(listJnb) = buf.read<x10_int>();
    FMGL(listIJ) = buf.read< ::x10::lang::Rail< ::cpls::util::MovePermutation* >*>();
    FMGL(listI) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(nVarMarked) = buf.read<x10_int>();
    FMGL(nReset) = buf.read<x10_int>();
    FMGL(nSameVar) = buf.read<x10_int>();
    FMGL(nLocalMin) = buf.read<x10_int>();
    FMGL(nResetTot) = buf.read<x10_int>();
    FMGL(nSameVarTot) = buf.read<x10_int>();
    FMGL(nLocalMinTot) = buf.read<x10_int>();
    FMGL(nInPlateau) = buf.read<x10_int>();
    FMGL(nListIJ) = buf.read<x10_int>();
    FMGL(nVarToReset) = buf.read<x10_long>();
    FMGL(resetPercent) = buf.read<x10_int>();
    FMGL(exhaustive) = buf.read<x10_boolean>();
    FMGL(freezeLocMin) = buf.read<x10_int>();
    FMGL(freezeSwap) = buf.read<x10_int>();
    FMGL(resetLimit) = buf.read<x10_int>();
    FMGL(probSelectLocMin) = buf.read<x10_int>();
    FMGL(firstBest) = buf.read<x10_boolean>();
}

::x10aux::RuntimeType cpls::solver::AdaptiveSearch::rtt;
void cpls::solver::AdaptiveSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.AdaptiveSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of AdaptiveSearch */
/*************************************************/
