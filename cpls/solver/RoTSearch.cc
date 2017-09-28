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
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/array/Array.h>
#include <x10/util/Random.h>
#include <x10/lang/Unsafe.h>
#include <cpls/util/MovePermutation.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
/** Tabu List Matrix */

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::_constructor(x10_long sz) {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor(sz);
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->cpls::solver::RoTSearch::__fieldInitializers_cpls_solver_RoTSearch();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType) = ((x10_int)4);
}
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::_make(x10_long sz) {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    this_->_constructor(sz);
    return this_;
}



//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                              ::cpls::ParamManager* opts) {
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemModel,
                                                        opts);
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuList) = (__extension__ ({
        ::x10::array::Array_2<x10_long>* alloc__1524 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__1524)->::x10::array::Array_2<x10_long>::_constructor(
          ::x10aux::nullCheck(problemModel)->FMGL(size), ::x10aux::nullCheck(problemModel)->FMGL(size),
          ((x10_long)0ll));
        alloc__1524;
    }))
    ;
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDurationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                         (__extension__ ({ static ::x10::lang::String* strLit__12780 = ::x10aux::makeStringLit("-RoTS_t"); strLit__12780; })),
                                         -1.0);
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(aspirationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__12781 = ::x10aux::makeStringLit("-RoTS_a"); strLit__12781; })),
                                       -1.0);
}

//#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::initVar() {
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar();
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::x10aux::nullCheck(this->FMGL(tabuList))->x10::array::Array_2<x10_long>::clear();
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = (-(this->FMGL(tabuDurationFactorUS)));
    } else {
        
        //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = this->FMGL(tabuDurationFactorUS);
    }
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size))))));
    
    //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(aspirationFactorUS),
                                 -1.0))) {
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((2.0) + (((3.0) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
    } else {
        
        //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = this->FMGL(aspirationFactorUS);
    }
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)))))) * (((x10_double) (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size))))));
    
    //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    ::x10::array::Array_2<x10_long>* this__12753 =
                      this->FMGL(tabuList);
                    
                    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__12754 = i;
                    x10_long j__12755 = j;
                    x10_long v__12756 = (-(((((::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)) * (i))) + (j))));
                    x10_long ret__12757;
                    
                    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__12753)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12751 = i__12754;
                        x10_long j__12752 = j__12755;
                        ((j__12752) + (((i__12751) * (::x10aux::nullCheck(this__12753)->FMGL(numElems_2)))));
                    }))
                    , v__12756);
                    
                    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__12757 = v__12756;
                    
                    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__12757;
                }
            }
            
        }
    }
    
}

//#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
x10_long cpls::solver::RoTSearch::search(x10_long currentCost,
                                         x10_long bestCost,
                                         x10_int nIter) {
    
    //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long i;
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long j;
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long newCost;
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long delta;
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long minDelta = (x10_long)0x7fffffffffffffffLL;
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setFirst((x10_long)0x7fffffffffffffffLL);
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setSecond((x10_long)0x7fffffffffffffffLL);
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(alreadyAspired) = false;
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (((::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)) - (((x10_long)1ll)))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    newCost = ::x10aux::nullCheck(this->FMGL(problemModel))->costIfSwap(
                                currentCost, i, j);
                    
                    //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    delta = ((newCost) - (currentCost));
                    
                    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    this->FMGL(autorized) = ((((__extension__ ({
                        
                        //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__12454 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12452 = i;
                        x10_long j__12453 = ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                          j)));
                        x10_long ret__12455;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12455 = (::x10aux::nullCheck(this__12454)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12758 = i__12452;
                            x10_long j__12759 = j__12453;
                            ((j__12759) + (((i__12758) * (::x10aux::nullCheck(this__12454)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12455;
                    }))
                    ) < (((x10_long)(nIter)))) || (((__extension__ ({
                        
                        //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__12461 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12459 = j;
                        x10_long j__12460 = ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                          i)));
                        x10_long ret__12462;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12462 = (::x10aux::nullCheck(this__12461)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12760 = i__12459;
                            x10_long j__12761 = j__12460;
                            ((j__12761) + (((i__12760) * (::x10aux::nullCheck(this__12461)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12462;
                    }))
                    ) < (((x10_long)(nIter)))));
                    
                    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    this->FMGL(aspired) = (((((__extension__ ({
                        
                        //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__12468 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12466 = i;
                        x10_long j__12467 = ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                          j)));
                        x10_long ret__12469;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12469 = (::x10aux::nullCheck(this__12468)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12762 = i__12466;
                            x10_long j__12763 = j__12467;
                            ((j__12763) + (((i__12762) * (::x10aux::nullCheck(this__12468)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12469;
                    }))
                    ) < (((x10_long)(((nIter) - (this->FMGL(aspiration))))))) ||
                    (((__extension__ ({
                        
                        //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__12475 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12473 = j;
                        x10_long j__12474 = ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                                          i)));
                        x10_long ret__12476;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12476 = (::x10aux::nullCheck(this__12475)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12764 = i__12473;
                            x10_long j__12765 = j__12474;
                            ((j__12765) + (((i__12764) * (::x10aux::nullCheck(this__12475)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12476;
                    }))
                    ) < (((x10_long)(((nIter) - (this->FMGL(aspiration)))))))) ||
                    ((newCost) < (bestCost)));
                    
                    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    if ((((this->FMGL(aspired) && !(this->FMGL(alreadyAspired))) ||
                        ((this->FMGL(aspired) && this->FMGL(alreadyAspired)) &&
                        ((delta) <= (minDelta)))) || (((!(this->FMGL(aspired)) &&
                        !(this->FMGL(alreadyAspired))) &&
                        ((delta) <= (minDelta))) && this->FMGL(autorized))))
                    {
                        
                        //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setFirst(i);
                        
                        //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setSecond(j);
                        
                        //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        minDelta = delta;
                        
                        //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        if (this->FMGL(aspired)) {
                            
                            //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                            this->FMGL(alreadyAspired) = true;
                        }
                        
                    }
                    
                }
            }
            
        }
    }
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(move)->getFirst(),
                                 (x10_long)0x7fffffffffffffffLL)))
    {
        
        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__12789 = ::x10aux::makeStringLit("All moves are tabu!"); strLit__12789; }))));
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        return currentCost;
        
    } else {
        
        //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->swapVariables(this->FMGL(move)->getFirst(),
                            this->FMGL(move)->getSecond());
        
        //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
        
        //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->executedSwap(
          this->FMGL(sz), this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond(),
          this->::cpls::solver::SingleSolHeuristic::FMGL(variables));
        
        //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_int t1;
        x10_int t2;
        
        //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        do {
            t1 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t1))) <= (((x10_long)2ll))));
        
        //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        do {
            t2 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t2))) <= (((x10_long)2ll))));
        
        //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10::array::Array_2<x10_long>* this__12770 = this->FMGL(tabuList);
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__12771 = this->FMGL(move)->getFirst();
        x10_long j__12772 = ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                          this->FMGL(move)->getSecond())));
        x10_long v__12773 = ((x10_long)(((nIter) + (t1))));
        x10_long ret__12774;
        
        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        (::x10aux::nullCheck(this__12770)->FMGL(raw))->unchecked_set((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__12766 = i__12771;
            x10_long j__12767 = j__12772;
            ((j__12767) + (((i__12766) * (::x10aux::nullCheck(this__12770)->FMGL(numElems_2)))));
        }))
        , v__12773);
        
        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12774 = v__12773;
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12774;
        
        //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10::array::Array_2<x10_long>* this__12775 = this->FMGL(tabuList);
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__12776 = this->FMGL(move)->getSecond();
        x10_long j__12777 = ((x10_long)(::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                                          this->FMGL(move)->getFirst())));
        x10_long v__12778 = ((x10_long)(((nIter) + (t2))));
        x10_long ret__12779;
        
        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        (::x10aux::nullCheck(this__12775)->FMGL(raw))->unchecked_set((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__12768 = i__12776;
            x10_long j__12769 = j__12777;
            ((j__12769) + (((i__12768) * (::x10aux::nullCheck(this__12775)->FMGL(numElems_2)))));
        }))
        , v__12778);
        
        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12779 = v__12778;
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12779;
        
        //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        return ((currentCost) + (minDelta));
        
    }
    
}

//#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
x10_int cpls::solver::RoTSearch::randomInterval(x10_int low,
                                                x10_int up) {
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    return ((::x10::lang::DoubleNatives::toInt(((::x10aux::nullCheck(this->FMGL(random))->nextDouble()) * (((x10_double) (((((up) - (low))) + (((x10_int)1))))))))) + (low));
    
}

//#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
x10_double cpls::solver::RoTSearch::cube() {
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_double ran1 = ::x10aux::nullCheck(this->FMGL(random))->nextDouble();
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        return ran1;
        
    }
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    return ((((ran1) * (ran1))) * (ran1));
    
}

//#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
::x10::lang::Rail< x10_int >* cpls::solver::RoTSearch::createSolverState(
  ) {
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* rotsState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                  ((x10_int)-1));
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)0ll),
                                                 this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)1ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (10.0))));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)2ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(aspirationFactor)) * (10.0))));
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    return rotsState;
    
}

//#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::processSolverState(::x10::lang::Rail< x10_int >* state) {
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_int inSolverType = ::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                             ((x10_long)0ll));
    
    //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(inSolverType, this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType))))
    {
        
        //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_double intdf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                              ((x10_long)1ll))))) / (10.0));
        
        //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_double inaf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)2ll))))) / (10.0));
        
        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = ((((this->FMGL(tabuDurationFactor)) + (intdf))) / (2.0));
        
        //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((((this->FMGL(aspirationFactor)) + (inaf))) / (2.0));
        
        //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        if ((!::x10aux::struct_equals(this->FMGL(tabuDuration),
                                      ((x10_int)-1)))) {
            
            //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size))))));
        }
        
        //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size)))))) * (((x10_double) (::x10aux::nullCheck(this->::cpls::solver::SingleSolHeuristic::FMGL(problemModel))->FMGL(size))))));
    }
    
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
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
