/*************************************************/
/* START of AdaptiveSearch */
#include <cpls/solver/AdaptiveSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <cpls/util/MovePermutation.h>
#include <cpls/ParamManager.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/util/OptionsParser.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <cpls/util/Utils.h>
#include <x10/lang/ULong.h>
#include <x10/util/Random.h>
#include <cpls/measurements/GlobalStats.h>
#include <x10/compiler/Synthetic.h>

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
/**	Statistics	*/

//#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
/** Total Statistics */

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
/** For Exhaustive search */

//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
/** Parameters of the AS solver */

//#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"

//#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::_constructor() {
    
    //#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->cpls::solver::AdaptiveSearch::__fieldInitializers_cpls_solver_AdaptiveSearch();
}
::cpls::solver::AdaptiveSearch* cpls::solver::AdaptiveSearch::_make() {
    ::cpls::solver::AdaptiveSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::AdaptiveSearch>()) ::cpls::solver::AdaptiveSearch();
    this_->_constructor();
    return this_;
}



//#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::configHeuristic(x10_long problemSize, ::cpls::ParamManager* opts) {
    
    //#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemSize, opts);
    
    //#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(mark) = ::x10::lang::Rail< x10_int >::_make(problemSize, ((x10_int)0));
    
    //#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(listIJ) = ::x10::lang::Rail< ::cpls::util::MovePermutation* >::_make(problemSize);
    
    //#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(listI) = ::x10::lang::Rail< x10_long >::_make(problemSize,
                                                             ((x10_long)0ll));
    
    //#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nVarToReset) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__10939 = ::x10aux::makeStringLit("--AS_varToReset"); strLit__10939; })),
                                ((x10_long)-1ll));
    
    //#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(resetPercent) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__10940 = ::x10aux::makeStringLit("--AS_resetPer"); strLit__10940; })),
                                 ((x10_int)10));
    
    //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(freezeLocMin) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__10941 = ::x10aux::makeStringLit("--AS_freezeLocMin"); strLit__10941; })),
                                 ((x10_int)5));
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(freezeSwap) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__10942 = ::x10aux::makeStringLit("--AS_freezeSwap"); strLit__10942; })),
                               ((x10_int)5));
    
    //#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(resetLimit) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__10943 = ::x10aux::makeStringLit("--AS_resetLimit"); strLit__10943; })),
                               ((x10_int)5));
    
    //#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(probSelectLocMin) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__10944 = ::x10aux::makeStringLit("--AS_probSelecLocMin"); strLit__10944; })),
                                     ((x10_int)0));
    
    //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(firstBest) = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__10945 = ::x10aux::makeStringLit("--AS_firstBest"); strLit__10945; })),
                                                       ((x10_int)0)),
                                                     ((x10_int)1)));
    
    //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(exhaustive) = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__10946 = ::x10aux::makeStringLit("--AS_exhaustive"); strLit__10946; })),
                                                        ((x10_int)0)),
                                                      ((x10_int)1)));
    
    //#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(problemSize) = problemSize;
}

//#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::initVar(x10_long tCost,
                                           x10_boolean sLow) {
    
    //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar();
    
    //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(nVarToReset),
                                 ((x10_long)-1ll)))) {
        
        //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nVarToReset) = ((((((this->FMGL(problemSize)) * (((x10_long)(this->FMGL(resetPercent)))))) + (((x10_long)99ll)))) / ::x10aux::zeroCheck(((x10_long)100ll)));
        
        //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((this->FMGL(nVarToReset)) < (((x10_long)2ll))))
        {
            
            //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            this->FMGL(nVarToReset) = ((x10_long)2ll);
        }
        
    }
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::clear();
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::clear();
    
    //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((x10_int)0);
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMin) = ((x10_int)0);
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nReset) = ((x10_int)0);
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nInPlateau) = ((x10_int)0);
    
    //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nResetTot) = ((x10_int)0);
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVarTot) = ((x10_int)0);
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMinTot) = ((x10_int)0);
}

//#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::search(::cpls::problem::ProblemGenericModel* problemModel,
                                              x10_long currentCost,
                                              x10_long bestCost,
                                              x10_int nIter) {
    
    //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long newCost = ((x10_long)-1ll);
    
    //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if (!(this->FMGL(exhaustive))) {
        
        //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        this->selectVarHighCost(problemModel, this->FMGL(move));
        
        //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        newCost = this->selectVarMinConflict(problemModel,
                                             this->FMGL(move),
                                             currentCost);
    } else {
        
        //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        newCost = this->selectVarsToSwap(problemModel, this->FMGL(move),
                                         currentCost);
    }
    
    //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if ((!::x10aux::struct_equals(currentCost, newCost)))
    {
        
        //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nInPlateau) = ((x10_int)0);
    }
    
    //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nInPlateau) = ((this->FMGL(nInPlateau)) + (((x10_int)1)));
    
    //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long returnCost = currentCost;
    
    //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(move)->getFirst(),
                                 this->FMGL(move)->getSecond())))
    {
        
        //#line 109 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(nLocalMin) = ((this->FMGL(nLocalMin)) + (((x10_int)1)));
        
        //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(move)->getFirst(), ((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) + (this->FMGL(freezeLocMin))));
        
        //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((((((x10_long)(this->FMGL(nVarMarked)))) + (((x10_long)1ll)))) >= (((x10_long)(this->FMGL(resetLimit))))))
        {
            
            //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            ::cpls::solver::AdaptiveSearch* this__10936 =
              this;
            
            //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            x10_long cost = this->doReset(problemModel, this->FMGL(nVarToReset),
                                          currentCost);
            
            //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            returnCost = ((cost) < (((x10_long)0ll))) ? (::x10aux::nullCheck(problemModel)->costOfSolution(
                                                           true))
              : (cost);
        }
        
    } else {
        
        //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(move)->getFirst(), ((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) + (this->FMGL(freezeSwap))));
        
        //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__set(
          this->FMGL(move)->getSecond(), ((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) + (this->FMGL(freezeSwap))));
        
        //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(problemModel)->swapVariables(
          this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
        
        //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap) =
          ((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) + (((x10_int)1)));
        
        //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::x10aux::nullCheck(problemModel)->executedSwap(this->FMGL(move)->getFirst(),
                                                        this->FMGL(move)->getSecond());
        
        //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        returnCost = newCost;
    }
    
    //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if (((returnCost) < (currentCost))) {
        
        //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__10951 = ::x10aux::makeStringLit("Costo (AdaptiveSearch): "); strLit__10951; })), returnCost));
        
        //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__10952 = ::x10aux::makeStringLit(". Con variables: "); strLit__10952; })),
                                  ::x10aux::nullCheck(problemModel)->getVariables());
    }
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    return returnCost;
    
}

//#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::restartVar() {
    
    //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::clear();
}

//#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::doReset(::cpls::problem::ProblemGenericModel* problemModel,
                                               x10_long n,
                                               x10_long currentCost) {
    
    //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long cost = ((x10_long)-1ll);
    
    //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    cost = ::x10aux::nullCheck(problemModel)->reset(n, currentCost);
    
    //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::clear();
    
    //#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nReset) = ((this->FMGL(nReset)) + (((x10_int)1)));
    
    //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    return cost;
    
}

//#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::selectVarHighCost(::cpls::problem::ProblemGenericModel* problemModel,
                                                     ::cpls::util::MovePermutation* move) {
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long i = ((x10_long)-1ll);
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long maxCost = ((x10_long)0ll);
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long maxVar = ((x10_long)-1ll);
    
    //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(listInb) = ((x10_int)0);
    
    //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nVarMarked) = ((x10_int)0);
    
    //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    while (((((x10_ulong) (i = ::x10aux::nullCheck(problemModel)->nextI(
                                 i)))) < (((x10_ulong) (this->FMGL(problemSize))))))
    {
        
        //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                                                          i))))
        {
            
            //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            this->FMGL(nVarMarked) = ((this->FMGL(nVarMarked)) + (((x10_int)1)));
            
            //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            continue;
        }
        
        //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        x10_long x = ::x10aux::nullCheck(problemModel)->costOnVariable(
                       i);
        
        //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((x) >= (maxCost))) {
            
            //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if (((x) > (maxCost))) {
                
                //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                maxCost = x;
                
                //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(listInb) = ((x10_int)0);
            }
            
            //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::__set(
              ((x10_long)(((this->FMGL(listInb) = ((this->FMGL(listInb)) + (((x10_int)1)))) - (((x10_int)1))))),
              i);
        }
        
    }
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(listInb), ((x10_int)0))))
    {
        
        //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        maxVar = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                   this->FMGL(problemSize));
    } else {
        
        //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        x10_int sel = ::x10aux::nullCheck(this->FMGL(random))->nextInt(
                        this->FMGL(listInb));
        
        //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        maxVar = ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::__apply(
                   ((x10_long)(sel)));
    }
    
    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((this->FMGL(nSameVar)) + (this->FMGL(listInb)));
    
    //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setFirst(maxVar);
}

//#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::selectVarMinConflict(
  ::cpls::problem::ProblemGenericModel* problemModel, ::cpls::util::MovePermutation* move,
  x10_long currentCost) {
    
    //#line 202 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long j;
    
    //#line 203 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long cost;
    
    //#line 204 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_boolean flagOut = false;
    
    //#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long second = ((x10_long)-1ll);
    
    //#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long nCost;
    
    //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long first = ::x10aux::nullCheck(move)->getFirst();
    
    //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    do {
        
        //#line 210 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        flagOut = false;
        
        //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        this->FMGL(listJnb) = ((x10_int)0);
        
        //#line 212 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        nCost = currentCost;
        
        //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        j = ((x10_long)(((x10_int)-1)));
        
        //#line 214 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        while (((((x10_ulong) (j = ::x10aux::nullCheck(problemModel)->nextJ(
                                     first, j, false)))) < (((x10_ulong) (this->FMGL(problemSize))))))
        {
            
            //#line 215 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if (((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                                                              j))))
            {
                
                //#line 216 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                continue;
            }
            
            //#line 218 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            cost = ::x10aux::nullCheck(problemModel)->costIfSwap(
                     currentCost, j, first);
            
            //#line 219 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if ((((this->FMGL(probSelectLocMin)) <= (((x10_int)100))) &&
                (::x10aux::struct_equals(j, first)))) {
                continue;
            }
            
            //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if (((cost) < (nCost))) {
                
                //#line 222 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(listJnb) = ((x10_int)1);
                
                //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                nCost = cost;
                
                //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                second = j;
                
                //#line 225 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                if (this->FMGL(firstBest)) {
                    
                    //#line 226 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                    ::x10aux::nullCheck(move)->setSecond(
                      second);
                    
                    //#line 227 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                    return nCost;
                    
                }
                
            } else 
            //#line 229 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if ((::x10aux::struct_equals(cost, nCost))) {
                
                //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                               this->FMGL(listJnb) =
                                                 ((this->FMGL(listJnb)) + (((x10_int)1)))),
                                             ((x10_int)0))))
                {
                    
                    //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                    second = j;
                }
                
            }
            
        }
        
        //#line 235 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((this->FMGL(probSelectLocMin)) <= (((x10_int)100))))
        {
            
            //#line 236 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if ((((nCost) >= (currentCost)) && ((((::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                                     ((x10_int)100))) < (this->FMGL(probSelectLocMin))) ||
                                                (((this->FMGL(listInb)) <= (((x10_int)1))) &&
                                                ((this->FMGL(listJnb)) <= (((x10_int)1))))))))
            {
                
                //#line 237 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                second = first;
                
                //#line 238 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                ::x10aux::nullCheck(move)->setSecond(second);
                
                //#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                return nCost;
                
            }
            
            //#line 241 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if ((::x10aux::struct_equals(this->FMGL(listJnb),
                                         ((x10_int)0)))) {
                
                //#line 243 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                x10_int sel = ::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                this->FMGL(listInb));
                
                //#line 244 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                first = ::x10aux::nullCheck(this->FMGL(listI))->x10::lang::Rail< x10_long >::__apply(
                          ((x10_long)(sel)));
                
                //#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                ::x10aux::nullCheck(move)->setFirst(first);
                
                //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                flagOut = true;
            }
            
        }
        
    } while (flagOut);
    
    //#line 250 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setSecond(second);
    
    //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    return nCost;
    
}

//#line 261 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
x10_long cpls::solver::AdaptiveSearch::selectVarsToSwap(::cpls::problem::ProblemGenericModel* problemModel,
                                                        ::cpls::util::MovePermutation* move,
                                                        x10_long currentCost) {
    
    //#line 262 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long first;
    
    //#line 263 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long second;
    
    //#line 265 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nListIJ) = ((x10_int)0);
    
    //#line 266 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_long nCost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 267 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nVarMarked) = ((x10_int)0);
    
    //#line 268 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    first = ((x10_long)(((x10_int)-1)));
    
    //#line 270 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    while (((((x10_ulong) (first = ::x10aux::nullCheck(problemModel)->nextI(
                                     first)))) < (((x10_ulong) (this->FMGL(problemSize))))))
    {
        
        //#line 271 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                                                          first))))
        {
            
            //#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            this->FMGL(nVarMarked) = ((this->FMGL(nVarMarked)) + (((x10_int)1)));
            
            //#line 273 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            continue;
        }
        
        //#line 275 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        second = ((x10_long)(((x10_int)-1)));
        
        //#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        while (((((x10_ulong) (second = ::x10aux::nullCheck(problemModel)->nextJ(
                                          first, second, true)))) < (((x10_ulong) (::x10aux::nullCheck(problemModel)->getSize())))))
        {
            
            //#line 277 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if (((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                                                              second))))
            {
                
                //#line 278 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                continue;
            }
            
            //#line 280 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            x10_long x = ::x10aux::nullCheck(problemModel)->costIfSwap(
                           currentCost, first, second);
            
            //#line 281 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            if (((x) <= (nCost))) {
                
                //#line 282 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                if (((x) < (nCost))) {
                    
                    //#line 283 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                    nCost = x;
                    
                    //#line 284 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                    this->FMGL(nListIJ) = ((x10_int)0);
                    
                    //#line 285 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                    if (((::x10aux::struct_equals(this->FMGL(firstBest),
                                                  true)) &&
                        ((x) < (currentCost)))) {
                        
                        //#line 286 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                        ::x10aux::nullCheck(move)->setFirst(
                          first);
                        
                        //#line 287 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                        ::x10aux::nullCheck(move)->setSecond(
                          second);
                        
                        //#line 288 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                        return nCost;
                        
                    }
                    
                }
                
                //#line 291 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                ::x10aux::nullCheck(this->FMGL(listIJ))->x10::lang::Rail< ::cpls::util::MovePermutation* >::__set(
                  ((x10_long)(this->FMGL(nListIJ))), (__extension__ ({
                      ::cpls::util::MovePermutation* alloc__1164 =
                         (new (::x10aux::alloc_z< ::cpls::util::MovePermutation>()) ::cpls::util::MovePermutation());
                      
                      //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
                      x10_long f__10937 = first;
                      x10_long s__10938 = second;
                      
                      //#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
                      alloc__1164->FMGL(first) = ((x10_long)-1ll);
                      alloc__1164->FMGL(second) = ((x10_long)-1ll);
                      
                      //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
                      alloc__1164->FMGL(first) = f__10937;
                      
                      //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
                      alloc__1164->FMGL(second) = s__10938;
                      alloc__1164;
                  }))
                  );
                
                //#line 292 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
                this->FMGL(nListIJ) = ((x10_int) (((((((x10_long)(this->FMGL(nListIJ)))) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(::x10aux::nullCheck(problemModel)->getSize()))));
            }
            
        }
        
    }
    
    //#line 297 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((this->FMGL(nSameVar)) + (this->FMGL(nListIJ)));
    
    //#line 298 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    if (((nCost) >= (currentCost))) {
        
        //#line 299 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if (((::x10aux::struct_equals(this->FMGL(nListIJ),
                                      ((x10_int)0))) || (((this->FMGL(probSelectLocMin)) <= (((x10_int)100))) &&
            ((::x10aux::nullCheck(this->FMGL(random))->nextInt(
                ((x10_int)100))) < (this->FMGL(probSelectLocMin))))))
        {
            
            //#line 300 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            x10_int i;
            
            //#line 301 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            {
                for (i = ((x10_int)0); ((this->::cpls::solver::SingleSolHeuristic::FMGL(nSwap)) < (::x10aux::nullCheck(this->FMGL(mark))->x10::lang::Rail< x10_int >::__apply(
                                                                                                     ((x10_long)(i)))));
                     i = ((i) + (((x10_int)1)))) {
                 
                }
            }
            
            //#line 302 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setFirst(((x10_long)(i)));
            
            //#line 303 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setSecond(((x10_long)(i)));
            
            //#line 304 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            return nCost;
            
        }
        
        //#line 307 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        x10_long lm;
        
        //#line 308 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
        if ((!(((this->FMGL(probSelectLocMin)) <= (((x10_int)100)))) &&
            ((lm = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                     ((((x10_long)(this->FMGL(nListIJ)))) + (::x10aux::nullCheck(problemModel)->getSize())))) < (::x10aux::nullCheck(problemModel)->getSize()))))
        {
            
            //#line 309 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setFirst(lm);
            
            //#line 310 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            ::x10aux::nullCheck(move)->setSecond(lm);
            
            //#line 311 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
            return nCost;
            
        }
        
    }
    
    //#line 315 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    x10_int sel = ::x10aux::nullCheck(this->FMGL(random))->nextInt(
                    this->FMGL(nListIJ));
    
    //#line 316 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setFirst(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(listIJ))->x10::lang::Rail< ::cpls::util::MovePermutation* >::__apply(
                                                              ((x10_long)(sel))))->getFirst());
    
    //#line 317 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(move)->setSecond(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(listIJ))->x10::lang::Rail< ::cpls::util::MovePermutation* >::__apply(
                                                               ((x10_long)(sel))))->getSecond());
    
    //#line 318 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    return nCost;
    
}

//#line 324 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::reportStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 326 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(c)->FMGL(locmin) = this->FMGL(nLocalMinTot);
    
    //#line 327 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(c)->FMGL(reset) = this->FMGL(nResetTot);
    
    //#line 328 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    ::x10aux::nullCheck(c)->FMGL(same) = ((x10_long)(this->FMGL(nSameVarTot)));
}

//#line 331 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::updateTotStats() {
    
    //#line 333 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nResetTot) = ((this->FMGL(nResetTot)) + (this->FMGL(nReset)));
    
    //#line 334 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVarTot) = ((this->FMGL(nSameVarTot)) + (this->FMGL(nSameVar)));
    
    //#line 335 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMinTot) = ((this->FMGL(nLocalMinTot)) + (this->FMGL(nLocalMin)));
    
    //#line 336 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nSameVar) = ((x10_int)0);
    
    //#line 337 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nLocalMin) = ((x10_int)0);
    
    //#line 338 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
    this->FMGL(nReset) = ((x10_int)0);
}

//#line 344 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
void cpls::solver::AdaptiveSearch::onLocMin() {
 
}

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/AdaptiveSearch.x10"
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
    this->FMGL(problemSize) = ((x10_long)0ll);
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
    buf.write(this->FMGL(problemSize));
    
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
    FMGL(problemSize) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::solver::AdaptiveSearch::rtt;
void cpls::solver::AdaptiveSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.AdaptiveSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of AdaptiveSearch */
/*************************************************/
