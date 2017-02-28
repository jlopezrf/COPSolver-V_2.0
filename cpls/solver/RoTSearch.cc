/*************************************************/
/* START of RoTSearch */
#include <cpls/solver/RoTSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/array/Array_2.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/util/Random.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/util/MovePermutation.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
/** Tabu List Matrix */

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::_constructor() {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->cpls::solver::RoTSearch::__fieldInitializers_cpls_solver_RoTSearch();
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType) = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)();
}
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::_make() {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    this_->_constructor();
    return this_;
}



//#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::configHeuristic(x10_long problemSize, ::cpls::ParamManager* opts) {
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemSize, opts);
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuList) = ::x10::array::Array_2<x10_long>::_make(problemSize,
                                                                  problemSize,
                                                                  ((x10_long)0ll));
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDurationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                         (__extension__ ({ static ::x10::lang::String* strLit__33760 = ::x10aux::makeStringLit("--RoTS_tabu_duration"); strLit__33760; })),
                                         (-(1.0)));
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(aspirationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__33761 = ::x10aux::makeStringLit("--RoTS_aspiration"); strLit__33761; })),
                                       (-(1.0)));
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::initVar() {
    
    //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar();
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = (-(this->FMGL(tabuDurationFactorUS)));
    } else {
        
        //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = this->FMGL(tabuDurationFactorUS);
    }
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(aspirationFactorUS),
                                 (-(1.0))))) {
        
        //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((this->FMGL(al)) + (((((this->FMGL(au)) - (this->FMGL(al)))) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
    } else {
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = this->FMGL(aspirationFactorUS);
    }
    
    //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)))))) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__set(
                      i, j, (-(((((this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)) * (i))) + (j)))));
                }
            }
            
        }
    }
    
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
x10_long cpls::solver::RoTSearch::search(::cpls::problem::ProblemGenericModel* problemModel,
                                         x10_long currentCost,
                                         x10_long bestCost,
                                         x10_int nIter) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long i;
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long j;
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long newCost;
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long delta;
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long minDelta = (x10_long)0x7fffffffffffffffLL;
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setFirst((x10_long)0x7fffffffffffffffLL);
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setSecond((x10_long)0x7fffffffffffffffLL);
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(alreadyAspired) = false;
    
    //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (((this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)) - (((x10_long)1ll)))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    newCost = ::x10aux::nullCheck(problemModel)->costIfSwap(
                                currentCost, i, j);
                    
                    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    delta = ((newCost) - (currentCost));
                    
                    //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    this->FMGL(autorized) = (((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                                                 i, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                                  j))))) < (((x10_long)(nIter)))) ||
                    ((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                        j, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                         i))))) < (((x10_long)(nIter)))));
                    
                    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    this->FMGL(aspired) = ((((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                                                i, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                                 j))))) < (((x10_long)(((nIter) - (this->FMGL(aspiration))))))) ||
                    ((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                        j, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                         i))))) < (((x10_long)(((nIter) - (this->FMGL(aspiration)))))))) ||
                    ((newCost) < (bestCost)));
                    
                    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    if ((((this->FMGL(aspired) && !(this->FMGL(alreadyAspired))) ||
                        ((this->FMGL(aspired) && this->FMGL(alreadyAspired)) &&
                        ((delta) <= (minDelta)))) || (((!(this->FMGL(aspired)) &&
                        !(this->FMGL(alreadyAspired))) &&
                        ((delta) <= (minDelta))) && this->FMGL(autorized))))
                    {
                        
                        //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setFirst(i);
                        
                        //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setSecond(j);
                        
                        //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        minDelta = delta;
                        
                        //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        if (this->FMGL(aspired)) {
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                            this->FMGL(alreadyAspired) = true;
                        }
                        
                    }
                    
                }
            }
            
        }
    }
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(move)->getFirst(),
                                 (x10_long)0x7fffffffffffffffLL)))
    {
        
        //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33778 = ::x10aux::makeStringLit("All moves are tabu!"); strLit__33778; }))));
        
        //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        return currentCost;
        
    } else {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->swapVariables(this->FMGL(move)->getFirst(),
                            this->FMGL(move)->getSecond());
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(problemModel)->executedSwap(this->FMGL(move)->getFirst(),
                                                        this->FMGL(move)->getSecond(),
                                                        this->::cpls::solver::SingleSolHeuristic::FMGL(variables));
        
        //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_int t1;
        x10_int t2;
        
        //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        do {
            t1 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t1))) <= (((x10_long)2ll))));
        
        //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        do {
            t2 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t2))) <= (((x10_long)2ll))));
        
        //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__set(
          this->FMGL(move)->getFirst(), ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                      this->FMGL(move)->getSecond()))),
          ((x10_long)(((nIter) + (t1)))));
        
        //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__set(
          this->FMGL(move)->getSecond(), ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                       this->FMGL(move)->getFirst()))),
          ((x10_long)(((nIter) + (t2)))));
        
        //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        if (((minDelta) >= (((x10_long)0ll)))) {
            
            //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            this->onLocMin();
        }
        
        //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_long v = ((currentCost) + (minDelta));
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        return ((currentCost) + (minDelta));
        
    }
    
}

//#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
x10_int cpls::solver::RoTSearch::randomInterval(x10_int low,
                                                x10_int up) {
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    return ((::x10::lang::DoubleNatives::toInt(((::x10aux::nullCheck(this->FMGL(random))->nextDouble()) * (((x10_double) (((((up) - (low))) + (((x10_int)1))))))))) + (low));
    
}

//#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
x10_double cpls::solver::RoTSearch::cube() {
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_double ran1 = ::x10aux::nullCheck(this->FMGL(random))->nextDouble();
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        return ran1;
        
    }
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    return ((((ran1) * (ran1))) * (ran1));
    
}

//#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
::x10::lang::Rail< x10_int >* cpls::solver::RoTSearch::createSolverState(
  ) {
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* rotsState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                  ((x10_int)-1));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)0ll),
                                                 this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)1ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (10.0))));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)2ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(aspirationFactor)) * (10.0))));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    return rotsState;
    
}

//#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::processSolverState(::x10::lang::Rail< x10_int >* state) {
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_int inSolverType = ::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                             ((x10_long)0ll));
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(inSolverType, this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType))))
    {
        
        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_double intdf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                              ((x10_long)1ll))))) / (10.0));
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_double inaf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)2ll))))) / (10.0));
        
        //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = ((((this->FMGL(tabuDurationFactor)) + (intdf))) / (2.0));
        
        //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((((this->FMGL(aspirationFactor)) + (inaf))) / (2.0));
        
        //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        if ((!::x10aux::struct_equals(this->FMGL(tabuDuration),
                                      ((x10_int)-1)))) {
            
            //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
        }
        
        //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)))))) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
    }
    
}

//#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::onLocMin() {
    
    //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* solverState = this->createSolverState();
    
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::cpls__solver__RoTSearch____this__cpls__solver__RoTSearch(
  ) {
    return this;
    
}
void cpls::solver::RoTSearch::__fieldInitializers_cpls_solver_RoTSearch(
  ) {
    this->FMGL(tabuDurationFactorUS) = 0.0;
    this->FMGL(aspirationFactorUS) = 0.0;
    this->FMGL(tabuDurationFactor) = 0.0;
    this->FMGL(aspirationFactor) = 0.0;
    this->FMGL(tabuDuration) = ((x10_int)0);
    this->FMGL(aspiration) = ((x10_int)0);
    this->FMGL(autorized) = false;
    this->FMGL(aspired) = false;
    this->FMGL(alreadyAspired) = false;
    this->FMGL(tabuList) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(tdl) = 0.8;
    this->FMGL(tdu) = 1.2;
    this->FMGL(al) = 2.0;
    this->FMGL(au) = 5.0;
    this->FMGL(tabuDurationLower) = ((x10_int)0);
    this->FMGL(tabuDurationUpper) = ((x10_int)0);
}
const ::x10aux::serialization_id_t cpls::solver::RoTSearch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::RoTSearch::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::RoTSearch::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_serialize_body(buf);
    buf.write(this->FMGL(tabuDurationFactorUS));
    buf.write(this->FMGL(aspirationFactorUS));
    buf.write(this->FMGL(tabuDurationFactor));
    buf.write(this->FMGL(aspirationFactor));
    buf.write(this->FMGL(tabuDuration));
    buf.write(this->FMGL(aspiration));
    buf.write(this->FMGL(autorized));
    buf.write(this->FMGL(aspired));
    buf.write(this->FMGL(alreadyAspired));
    buf.write(this->FMGL(tabuList));
    buf.write(this->FMGL(tdl));
    buf.write(this->FMGL(tdu));
    buf.write(this->FMGL(al));
    buf.write(this->FMGL(au));
    buf.write(this->FMGL(tabuDurationLower));
    buf.write(this->FMGL(tabuDurationUpper));
    
}

::x10::lang::Reference* ::cpls::solver::RoTSearch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::RoTSearch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_deserialize_body(buf);
    FMGL(tabuDurationFactorUS) = buf.read<x10_double>();
    FMGL(aspirationFactorUS) = buf.read<x10_double>();
    FMGL(tabuDurationFactor) = buf.read<x10_double>();
    FMGL(aspirationFactor) = buf.read<x10_double>();
    FMGL(tabuDuration) = buf.read<x10_int>();
    FMGL(aspiration) = buf.read<x10_int>();
    FMGL(autorized) = buf.read<x10_boolean>();
    FMGL(aspired) = buf.read<x10_boolean>();
    FMGL(alreadyAspired) = buf.read<x10_boolean>();
    FMGL(tabuList) = buf.read< ::x10::array::Array_2<x10_long>*>();
    FMGL(tdl) = buf.read<x10_double>();
    FMGL(tdu) = buf.read<x10_double>();
    FMGL(al) = buf.read<x10_double>();
    FMGL(au) = buf.read<x10_double>();
    FMGL(tabuDurationLower) = buf.read<x10_int>();
    FMGL(tabuDurationUpper) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::solver::RoTSearch::rtt;
void cpls::solver::RoTSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.RoTSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of RoTSearch */
/*************************************************/
