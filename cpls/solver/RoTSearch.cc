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
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/util/Random.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/util/MovePermutation.h>
#include <x10/lang/Rail.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <cpls/util/Utils.h>
#include <x10/compiler/Synthetic.h>

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
/** Tabu List Matrix */

//#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::_constructor() {
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->cpls::solver::RoTSearch::__fieldInitializers_cpls_solver_RoTSearch();
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType) = ((x10_int)4);
}
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::_make() {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    this_->_constructor();
    return this_;
}



//#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::configHeuristic(x10_long problemSize, ::cpls::ParamManager* opts) {
    
    //#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemSize, opts);
    
    //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuList) = (__extension__ ({
        ::x10::array::Array_2<x10_long>* alloc__1462 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__1462)->::x10::array::Array_2<x10_long>::_constructor(problemSize,
                                                                     problemSize,
                                                                     ((x10_long)0ll));
        alloc__1462;
    }))
    ;
    
    //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDurationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                         (__extension__ ({ static ::x10::lang::String* strLit__12427 = ::x10aux::makeStringLit("--RoTS_tabu_duration"); strLit__12427; })),
                                         -1.0);
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(aspirationFactorUS) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                       (__extension__ ({ static ::x10::lang::String* strLit__12428 = ::x10aux::makeStringLit("--RoTS_aspiration"); strLit__12428; })),
                                       -1.0);
}

//#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"

//#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::initVar(x10_long tCost, x10_boolean sLow) {
    
    //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar();
    
    //#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = (-(this->FMGL(tabuDurationFactorUS)));
    } else {
        
        //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = this->FMGL(tabuDurationFactorUS);
    }
    
    //#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
    
    //#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(aspirationFactorUS),
                                 -1.0))) {
        
        //#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((2.0) + (((3.0) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
    } else {
        
        //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = this->FMGL(aspirationFactorUS);
    }
    
    //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)))))) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
    
    //#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    ::x10::array::Array_2<x10_long>* this__12398 =
                      this->FMGL(tabuList);
                    
                    //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__12399 = i;
                    x10_long j__12400 = j;
                    x10_long v__12401 = (-(((((this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)) * (i))) + (j))));
                    x10_long ret__12402;
                    
                    //#line 174 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(this__12398)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12396 = i__12399;
                        x10_long j__12397 = j__12400;
                        ((j__12397) + (((i__12396) * (::x10aux::nullCheck(this__12398)->FMGL(numElems_2)))));
                    }))
                    , v__12401);
                    
                    //#line 175 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__12402 = v__12401;
                    
                    //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__12402;
                }
            }
            
        }
    }
    
}

//#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
x10_long cpls::solver::RoTSearch::search(::cpls::problem::ProblemGenericModel* problemModel,
                                         x10_long currentCost,
                                         x10_long bestCost,
                                         x10_int nIter) {
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long i;
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long j;
    
    //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long newCost;
    
    //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long delta;
    
    //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_long minDelta = (x10_long)0x7fffffffffffffffLL;
    
    //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setFirst((x10_long)0x7fffffffffffffffLL);
    
    //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(move)->setSecond((x10_long)0x7fffffffffffffffLL);
    
    //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    this->FMGL(alreadyAspired) = false;
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (((this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)) - (((x10_long)1ll)))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    newCost = ::x10aux::nullCheck(problemModel)->costIfSwap(
                                currentCost, i, j);
                    
                    //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    delta = ((newCost) - (currentCost));
                    
                    //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    this->FMGL(autorized) = ((((__extension__ ({
                        
                        //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__11889 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11887 = i;
                        x10_long j__11888 = ((x10_long)(::x10aux::nullCheck(problemModel)->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                          j)));
                        x10_long ret__11890;
                        
                        //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11890 = (::x10aux::nullCheck(this__11889)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12403 = i__11887;
                            x10_long j__12404 = j__11888;
                            ((j__12404) + (((i__12403) * (::x10aux::nullCheck(this__11889)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11890;
                    }))
                    ) < (((x10_long)(nIter)))) || (((__extension__ ({
                        
                        //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__11896 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11894 = j;
                        x10_long j__11895 = ((x10_long)(::x10aux::nullCheck(problemModel)->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                          i)));
                        x10_long ret__11897;
                        
                        //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11897 = (::x10aux::nullCheck(this__11896)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12405 = i__11894;
                            x10_long j__12406 = j__11895;
                            ((j__12406) + (((i__12405) * (::x10aux::nullCheck(this__11896)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11897;
                    }))
                    ) < (((x10_long)(nIter)))));
                    
                    //#line 109 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    this->FMGL(aspired) = (((((__extension__ ({
                        
                        //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__11903 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11901 = i;
                        x10_long j__11902 = ((x10_long)(::x10aux::nullCheck(problemModel)->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                          j)));
                        x10_long ret__11904;
                        
                        //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11904 = (::x10aux::nullCheck(this__11903)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12407 = i__11901;
                            x10_long j__12408 = j__11902;
                            ((j__12408) + (((i__12407) * (::x10aux::nullCheck(this__11903)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11904;
                    }))
                    ) < (((x10_long)(((nIter) - (this->FMGL(aspiration))))))) ||
                    (((__extension__ ({
                        
                        //#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        ::x10::array::Array_2<x10_long>* this__11910 =
                          this->FMGL(tabuList);
                        
                        //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__11908 = j;
                        x10_long j__11909 = ((x10_long)(::x10aux::nullCheck(problemModel)->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                          i)));
                        x10_long ret__11911;
                        
                        //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__11911 = (::x10aux::nullCheck(this__11910)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12409 = i__11908;
                            x10_long j__12410 = j__11909;
                            ((j__12410) + (((i__12409) * (::x10aux::nullCheck(this__11910)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__11911;
                    }))
                    ) < (((x10_long)(((nIter) - (this->FMGL(aspiration)))))))) ||
                    ((newCost) < (bestCost)));
                    
                    //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                    if ((((this->FMGL(aspired) && !(this->FMGL(alreadyAspired))) ||
                        ((this->FMGL(aspired) && this->FMGL(alreadyAspired)) &&
                        ((delta) <= (minDelta)))) || (((!(this->FMGL(aspired)) &&
                        !(this->FMGL(alreadyAspired))) &&
                        ((delta) <= (minDelta))) && this->FMGL(autorized))))
                    {
                        
                        //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setFirst(i);
                        
                        //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        this->FMGL(move)->setSecond(j);
                        
                        //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        minDelta = delta;
                        
                        //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                        if (this->FMGL(aspired)) {
                            
                            //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
                            this->FMGL(alreadyAspired) = true;
                        }
                        
                    }
                    
                }
            }
            
        }
    }
    
    //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(move)->getFirst(),
                                 (x10_long)0x7fffffffffffffffLL)))
    {
        
        //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__12437 = ::x10aux::makeStringLit("All moves are tabu!"); strLit__12437; }))));
        
        //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        return currentCost;
        
    } else {
        
        //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(problemModel)->swapVariables(
          this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
        
        //#line 151 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
        
        //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10aux::nullCheck(problemModel)->executedSwap(this->FMGL(move)->getFirst(),
                                                        this->FMGL(move)->getSecond());
        
        //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_int t1;
        x10_int t2;
        
        //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        do {
            t1 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t1))) <= (((x10_long)2ll))));
        
        //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        do {
            t2 = ::x10::lang::DoubleNatives::toInt(((this->cube()) * (((x10_double) (this->FMGL(tabuDuration))))));
        } while (((((x10_long)(t2))) <= (((x10_long)2ll))));
        
        //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10::array::Array_2<x10_long>* this__12417 = this->FMGL(tabuList);
        
        //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__12418 = this->FMGL(move)->getFirst();
        x10_long j__12419 = ((x10_long)(::x10aux::nullCheck(problemModel)->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                          this->FMGL(move)->getSecond())));
        x10_long v__12420 = ((x10_long)(((nIter) + (t1))));
        x10_long ret__12421;
        
        //#line 174 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        (::x10aux::nullCheck(this__12417)->FMGL(raw))->unchecked_set((__extension__ ({
            
            //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__12411 = i__12418;
            x10_long j__12412 = j__12419;
            ((j__12412) + (((i__12411) * (::x10aux::nullCheck(this__12417)->FMGL(numElems_2)))));
        }))
        , v__12420);
        
        //#line 175 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12421 = v__12420;
        
        //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12421;
        
        //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        ::x10::array::Array_2<x10_long>* this__12422 = this->FMGL(tabuList);
        
        //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__12423 = this->FMGL(move)->getSecond();
        x10_long j__12424 = ((x10_long)(::x10aux::nullCheck(problemModel)->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                          this->FMGL(move)->getFirst())));
        x10_long v__12425 = ((x10_long)(((nIter) + (t2))));
        x10_long ret__12426;
        
        //#line 174 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        (::x10aux::nullCheck(this__12422)->FMGL(raw))->unchecked_set((__extension__ ({
            
            //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__12413 = i__12423;
            x10_long j__12414 = j__12424;
            ((j__12414) + (((i__12413) * (::x10aux::nullCheck(this__12422)->FMGL(numElems_2)))));
        }))
        , v__12425);
        
        //#line 175 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12426 = v__12425;
        
        //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__12426;
        
        //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        if (((minDelta) >= (((x10_long)0ll)))) {
            
            //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            ::cpls::solver::RoTSearch* this__12416 = this;
            
            //#line 242 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            ::x10::lang::Rail< x10_int >* solverState__12415 =
              ::x10aux::nullCheck(this__12416)->createSolverState();
            
        }
        
        //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_long v = ((currentCost) + (minDelta));
        
        //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        if (((v) < (currentCost))) {
            
            //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__12444 = ::x10aux::makeStringLit("Costo (RoTSearch): "); strLit__12444; })), v));
            
            //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__12445 = ::x10aux::makeStringLit(". Con variables: "); strLit__12445; })),
                                      ::x10aux::nullCheck(problemModel)->getVariables());
        }
        
        //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        return ((currentCost) + (minDelta));
        
    }
    
}

//#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
x10_int cpls::solver::RoTSearch::randomInterval(x10_int low,
                                                x10_int up) {
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    return ((::x10::lang::DoubleNatives::toInt(((::x10aux::nullCheck(this->FMGL(random))->nextDouble()) * (((x10_double) (((((up) - (low))) + (((x10_int)1))))))))) + (low));
    
}

//#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
x10_double cpls::solver::RoTSearch::cube() {
    
    //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_double ran1 = ::x10aux::nullCheck(this->FMGL(random))->nextDouble();
    
    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if (((this->FMGL(tabuDurationFactorUS)) < (((x10_double) (((x10_long)0ll))))))
    {
        
        //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        return ran1;
        
    }
    
    //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    return ((((ran1) * (ran1))) * (ran1));
    
}

//#line 202 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
::x10::lang::Rail< x10_int >* cpls::solver::RoTSearch::createSolverState(
  ) {
    
    //#line 203 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* rotsState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                  ((x10_int)-1));
    
    //#line 204 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)0ll),
                                                 this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType));
    
    //#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)1ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (10.0))));
    
    //#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    rotsState->x10::lang::Rail< x10_int >::__set(((x10_long)2ll),
                                                 ::x10::lang::DoubleNatives::toInt(((this->FMGL(aspirationFactor)) * (10.0))));
    
    //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    return rotsState;
    
}

//#line 214 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::processSolverState(::x10::lang::Rail< x10_int >* state) {
    
    //#line 217 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    x10_int inSolverType = ::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                             ((x10_long)0ll));
    
    //#line 219 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    if ((::x10aux::struct_equals(inSolverType, this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType))))
    {
        
        //#line 220 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_double intdf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                              ((x10_long)1ll))))) / (10.0));
        
        //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        x10_double inaf = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)2ll))))) / (10.0));
        
        //#line 226 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(tabuDurationFactor) = ((((this->FMGL(tabuDurationFactor)) + (intdf))) / (2.0));
        
        //#line 227 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspirationFactor) = ((((this->FMGL(aspirationFactor)) + (inaf))) / (2.0));
        
        //#line 229 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        if ((!::x10aux::struct_equals(this->FMGL(tabuDuration),
                                      ((x10_int)-1)))) {
            
            //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
            this->FMGL(tabuDuration) = ::x10::lang::DoubleNatives::toInt(((this->FMGL(tabuDurationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
        }
        
        //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
        this->FMGL(aspiration) = ::x10::lang::DoubleNatives::toInt(((((this->FMGL(aspirationFactor)) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)))))) * (((x10_double) (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize))))));
    }
    
}

//#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::onLocMin() {
    
    //#line 242 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::x10::lang::Rail< x10_int >* solverState = this->createSolverState();
    
}

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
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
