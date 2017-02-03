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
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/util/Random.h>
#include <cpls/util/MovePermutation.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <cpls/util/Utils.h>
#include <x10/array/Array.h>
#include <x10/compiler/Synthetic.h>

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
/** Tabu List Matrix */

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::_constructor() {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->cpls::solver::RoTSearch::__fieldInitializers_cpls_solver_RoTSearch();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType) = ((x10_long)(::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)()));
}
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::_make() {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    this_->_constructor();
    return this_;
}



//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                              ::cpls::ParamManager* opts) {
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemModel,
                                                        opts);
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuList) = ::x10::array::Array_2<x10_long>::_make(::x10aux::nullCheck(problemModel)->getSize(),
                                                                  ::x10aux::nullCheck(problemModel)->getSize(),
                                                                  ((x10_long)0ll));
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDurationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                         (__extension__ ({ static ::x10::lang::String* strLit__27203 = ::x10aux::makeStringLit("--RoTS_tabu_duration"); strLit__27203; })),
                                         (-(1.0)));
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(aspirationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__27204 = ::x10aux::makeStringLit("--RoTS_aspiration"); strLit__27204; })),
                                       (-(1.0)));
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::initVar(x10_long tCost, x10_boolean sLow) {
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar(tCost, sLow);
    
    //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = (-(this->FMGL(tabuDurationFactorUS)));
    } else {
        
        //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = this->FMGL(tabuDurationFactorUS);
    }
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(size))))));
    
    //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(aspirationFactorUS),
                                 (-(1.0))))) {
        
        //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((this->FMGL(al)) + (((((this->FMGL(au)) - (this->FMGL(al)))) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
    } else {
        
        //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = this->FMGL(aspirationFactorUS);
    }
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(size)))))) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(size))))));
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (this->::cpls::solver::SingleSolHeuristic::FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (this->::cpls::solver::SingleSolHeuristic::FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__set(
                      i, j, (-(((((this->::cpls::solver::SingleSolHeuristic::FMGL(size)) * (i))) + (j)))));
                }
            }
            
        }
    }
    
}

//#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
x10_long cpls::solver::RoTSearch::search() {
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long i;
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long j;
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long newCost;
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long delta;
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_long minDelta = (x10_long)0x7fffffffffffffffLL;
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setFirst((x10_long)0x7fffffffffffffffLL);
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setSecond((x10_long)0x7fffffffffffffffLL);
    
    //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    this->FMGL(alreadyAspired) = false;
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (((this->::cpls::solver::SingleSolHeuristic::FMGL(size)) - (((x10_long)1ll)))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->::cpls::solver::SingleSolHeuristic::FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    newCost = ::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->costIfSwap(
                                this->::cpls::solver::SingleSolHeuristic::FMGL(currentCost),
                                i, j);
                    
                    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    delta = ((newCost) - (this->::cpls::solver::SingleSolHeuristic::FMGL(currentCost)));
                    
                    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    this->FMGL(autorized) = (((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                                                 i, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                  j))))) < (((x10_long)(this->::cpls::solver::SingleSolHeuristic::FMGL(nIter))))) ||
                    ((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                        j, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                         i))))) < (((x10_long)(this->::cpls::solver::SingleSolHeuristic::FMGL(nIter))))));
                    
                    //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    this->FMGL(aspired) = ((((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                                                i, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                 j))))) < (((x10_long)(((this->FMGL(nIter)) - (this->FMGL(aspiration))))))) ||
                    ((::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__apply(
                        j, ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                         i))))) < (((x10_long)(((this->FMGL(nIter)) - (this->FMGL(aspiration)))))))) ||
                    ((newCost) < (this->::cpls::solver::SingleSolHeuristic::FMGL(bestCost))));
                    
                    //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                    if ((((this->FMGL(aspired) && !(this->FMGL(alreadyAspired))) ||
                        ((this->FMGL(aspired) && this->FMGL(alreadyAspired)) &&
                        ((delta) <= (minDelta)))) || (((!(this->FMGL(aspired)) &&
                        !(this->FMGL(alreadyAspired))) &&
                        ((delta) <= (minDelta))) && this->FMGL(autorized))))
                    {
                        
                        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setFirst(i);
                        
                        //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setSecond(j);
                        
                        //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        minDelta = delta;
                        
                        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                        if (this->FMGL(aspired)) {
                            
                            //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
                            this->FMGL(alreadyAspired) = true;
                        }
                        
                    }
                    
                }
            }
            
        }
    }
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(move)->getFirst(),
                                 (x10_long)0x7fffffffffffffffLL)))
    {
        
        //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__27217 = ::x10aux::makeStringLit("All moves are tabu!"); strLit__27217; }))));
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        return this->FMGL(currentCost);
        
    } else {
        
        //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->swapVariables(
          this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
        
        //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
        
        //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->executedSwap(
          this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
        
        //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_int t1;
        x10_int t2;
        
        //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        do {
            t1 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t1))) <= (((x10_long)2ll))));
        
        //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        do {
            t2 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t2))) <= (((x10_long)2ll))));
        
        //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__set(
          this->FMGL(move)->getFirst(), ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                      this->FMGL(move)->getSecond()))),
          ((x10_long)(((this->FMGL(nIter)) + (t1)))));
        
        //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::__set(
          this->FMGL(move)->getSecond(), ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                       this->FMGL(move)->getFirst()))),
          ((x10_long)(((this->FMGL(nIter)) + (t2)))));
        
        //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        if (((minDelta) >= (((x10_long)0ll)))) {
            
            //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            this->onLocMin();
        }
        
        //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_long v = ((this->FMGL(currentCost)) + (minDelta));
        
        //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27220 = ::x10aux::makeStringLit("Costo (RoTSearch): "); strLit__27220; })), v));
        
        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__27221 = ::x10aux::makeStringLit(". Con variables: "); strLit__27221; })),
                                  ::x10aux::nullCheck(this->FMGL(problemModel))->getVariables());
        
        //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__27222 = ::x10aux::makeStringLit("\n"); strLit__27222; })));
        
        //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        return ((this->FMGL(currentCost)) + (minDelta));
        
    }
    
}

//#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
x10_int cpls::solver::RoTSearch::randomInterval(x10_int low,
                                                x10_int up) {
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    return ((::x10::lang::DoubleNatives::toInt(((::x10aux::nullCheck(this->FMGL(random))->nextDouble()) * (((x10_double) (((((up) - (low))) + (((x10_int)1))))))))) + (low));
    
}

//#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
x10_double cpls::solver::RoTSearch::cube() {
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_double ran1 = ::x10aux::nullCheck(this->FMGL(random))->nextDouble();
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        return ran1;
        
    }
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    return ((((ran1) * (ran1))) * (ran1));
    
}

//#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
::x10::lang::Rail< x10_int >* cpls::solver::RoTSearch::createSolverState(
  ) {
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* rotsState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                  ((x10_int)-1));
    
    //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)0ll),
                                                 ((x10_int) (this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType))));
    
    //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)1ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (10.0))));
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)2ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(aspirationFactor)) * (10.0))));
    
    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    return rotsState;
    
}

//#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::processSolverState(::x10::lang::Rail< x10_int >* state) {
    
    //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    x10_int inSolverType = ::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                             ((x10_long)0ll));
    
    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(inSolverType, ((x10_int) (this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType))))))
    {
        
        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_double intdf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                              ((x10_long)1ll))))) / (10.0));
        
        //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        x10_double inaf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)2ll))))) / (10.0));
        
        //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = ((((this->FMGL(tabuDurationFactor)) + (intdf))) / (2.0));
        
        //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((((this->FMGL(aspirationFactor)) + (inaf))) / (2.0));
        
        //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        if ((!::x10aux::struct_equals(this->FMGL(tabuDuration),
                                      ((x10_int)-1)))) {
            
            //#line 229 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
            this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(size))))));
        }
        
        //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
        this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(size)))))) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(size))))));
    }
    
}

//#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::restartVar() {
    
    //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::restartVar();
    
    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::clear();
}

//#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::onLocMin() {
    
    //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* solverState = this->createSolverState();
    
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RoTSearch.x10"
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
