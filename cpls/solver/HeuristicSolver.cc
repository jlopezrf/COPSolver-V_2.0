/*************************************************/
/* START of HeuristicSolver */
#include <cpls/solver/HeuristicSolver.h>

#include <x10/lang/Int.h>
#include <cpls/util/MovePermutation.h>
#include <x10/util/Random.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Rail.h>
#include <cpls/ParamManager.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE
#define CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_solver_HeuristicSolver__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_HeuristicSolver__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        return ((x10_int) (i));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_HeuristicSolver__closure__1* storage = ::x10aux::alloc_z<cpls_solver_HeuristicSolver__closure__1>();
        buf.record_reference(storage);
        cpls_solver_HeuristicSolver__closure__1* this_ = new (storage) cpls_solver_HeuristicSolver__closure__1();
        return this_;
    }
    
    cpls_solver_HeuristicSolver__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10:25";
    }

};

#endif // CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::_constructor() {
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver();
}
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::_make() {
    ::cpls::solver::HeuristicSolver* this_ = new (::x10aux::alloc_z< ::cpls::solver::HeuristicSolver>()) ::cpls::solver::HeuristicSolver();
    this_->_constructor();
    return this_;
}



//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                    ::cpls::ParamManager* opts) {
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = ::x10::lang::Rail< x10_int >::_make(::x10aux::nullCheck(problemModel)->FMGL(size),
                                                                reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_solver_HeuristicSolver__closure__1)))cpls_solver_HeuristicSolver__closure__1())));
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemModel) = problemModel;
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::search(x10_long currentCost,
                                               x10_long bestCost,
                                               x10_int nIter) {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setFirst(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                 ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size)));
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setSecond(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                  ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size)));
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->swapVariables(this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31614 = this->FMGL(problemModel);
    x10_long i__31615 = this->FMGL(move)->getFirst();
    x10_long i__31616 = this->FMGL(move)->getSecond();
    ::x10::lang::Rail< x10_int >* variables__31617 = (__extension__ ({
        ::x10::lang::Rail< x10_int >* t__31618 = this->FMGL(variables);
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__31618)->FMGL(size)),
                                       sz)))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33829 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__33829; })))));
        }
        t__31618;
    }))
    ;
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(variables__31617)->FMGL(size)),
                                   ::x10aux::nullCheck(t__31614)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33830 = ::x10aux::makeStringLit("!(variables$31570.size == t$31567.size)"); strLit__33830; })))));
    }
    ::x10aux::nullCheck(t__31614)->executedSwap(i__31615,
                                                i__31616,
                                                variables__31617);
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long costo = (__extension__ ({
        ::cpls::problem::ProblemGenericModel* t__31577 = this->FMGL(problemModel);
        x10_boolean shouldBeRecorded__31578 = true;
        ::x10::lang::Rail< x10_int >* solution__31579 = (__extension__ ({
            ::x10::lang::Rail< x10_int >* t__31575 = this->FMGL(variables);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__31575)->FMGL(size)),
                                           sz)))) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33831 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__33831; })))));
            }
            t__31575;
        }))
        ;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(solution__31579)->FMGL(size)),
                                       ::x10aux::nullCheck(t__31577)->FMGL(size)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33832 = ::x10aux::makeStringLit("!(solution$31579.size == t$31577.size)"); strLit__33832; })))));
        }
        ::x10aux::nullCheck(t__31577)->costOfSolution(shouldBeRecorded__31578,
                                                      solution__31579);
    }))
    ;
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return costo;
    
}

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVar() {
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
}

//#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::clearNSwap() {
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
}

//#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_int cpls::solver::HeuristicSolver::getNSwap() {
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(nSwap);
    
}

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSeed(x10_long inSeed) {
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(random) = ::x10::util::Random::_make(inSeed);
}

//#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSolverType(x10_int mySolverType) {
    
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(mySolverType) = mySolverType;
}

//#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::getVariables(
  ) {
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(variables);
    
}

//#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setVariables(::x10::lang::Rail< x10_int >* variables) {
    
    //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = variables;
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::swapVariables(x10_long i,
                                                  x10_long j) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_int x = ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                  i);
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__set(
      i, ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
           j));
    
    //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__set(
      j, x);
}

//#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::reset(x10_long n,
                                              x10_long totalCost) {
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    while ((!::x10aux::struct_equals((__extension__ ({
                                         x10_long pre__31583 =
                                           n;
                                         n = ((n) - (((x10_long)1ll)));
                                         pre__31583;
                                     }))
                                     , ((x10_long)0ll))))
    {
        
        //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        x10_long i = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                       (x10_long)(::x10aux::nullCheck(this->FMGL(variables))->FMGL(size)));
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        x10_long j = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                       (x10_long)(::x10aux::nullCheck(this->FMGL(variables))->FMGL(size)));
        
        //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->swapVariables(i, j);
    }
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ((x10_long)(((x10_int)-1)));
    
}

//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVariables() {
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = ::x10aux::nullCheck(this->FMGL(problemModel))->initialize(
                              ::x10aux::nullCheck(this->FMGL(random))->nextLong());
}

//#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::costOfSolution() {
    
    //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31619 = this->FMGL(problemModel);
    x10_boolean shouldBeRecorded__31620 = true;
    ::x10::lang::Rail< x10_int >* solution__31621 = this->FMGL(variables);
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(solution__31621)->FMGL(size)),
                                   ::x10aux::nullCheck(t__31619)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33835 = ::x10aux::makeStringLit("!(solution$31592.size == t$31590.size)"); strLit__33835; })))));
    }
    return ::x10aux::nullCheck(t__31619)->costOfSolution(
             shouldBeRecorded__31620, solution__31621);
    
}

//#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getSizeProblem() {
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
}

//#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_double cpls::solver::HeuristicSolver::getDistance(::x10::lang::Rail< x10_int >* a,
                                                      ::x10::lang::Rail< x10_int >* b) {
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31622 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__31623 = (__extension__ ({
        ::x10::lang::Rail< x10_int >* t__31624 = a;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
                                       sz)))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33836 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{a.size==sz}"); strLit__33836; })))));
        }
        t__31624;
    }))
    ;
    ::x10::lang::Rail< x10_int >* conf__31625 = (__extension__ ({
        ::x10::lang::Rail< x10_int >* t__31626 = b;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(b)->FMGL(size)),
                                       sz)))) {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33837 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{b.size==sz}"); strLit__33837; })))));
        }
        t__31626;
    }))
    ;
    if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__31623)->FMGL(size)),
                                    ::x10aux::nullCheck(t__31622)->FMGL(size))) &&
        (::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__31625)->FMGL(size)),
                                 ::x10aux::nullCheck(t__31622)->FMGL(size))))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33838 = ::x10aux::makeStringLit("!(conf1$31601.size == t$31600.size && conf2$31602.size == t$31600.size)"); strLit__33838; })))));
    }
    return ::x10aux::nullCheck(t__31622)->distance(conf__31623,
                                                   conf__31625);
    
}

//#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_boolean cpls::solver::HeuristicSolver::verify(::x10::lang::Rail< x10_int >* conf) {
    
    //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31627 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__31628 = conf;
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__31628)->FMGL(size)),
                                   ::x10aux::nullCheck(t__31627)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33839 = ::x10aux::makeStringLit("!(conf$31607.size == t$31606.size)"); strLit__33839; })))));
    }
    return ::x10aux::nullCheck(t__31627)->verify(conf__31628);
    
}

//#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::displaySolution(::x10::lang::Rail< x10_int >* conf) {
    
    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
    //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31629 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__31630 = conf;
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__31630)->FMGL(size)),
                                   ::x10aux::nullCheck(t__31629)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33840 = ::x10aux::makeStringLit("!(conf$31611.size == t$31610.size)"); strLit__33840; })))));
    }
    ::x10aux::nullCheck(t__31629)->displaySolution(conf__31630);
}

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::cpls__solver__HeuristicSolver____this__cpls__solver__HeuristicSolver(
  ) {
    return this;
    
}
void cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver(
  ) {
    this->FMGL(move) = ::cpls::util::MovePermutation::_make(((x10_long)(((x10_int)-1))),
                                                            ((x10_long)(((x10_int)-1))));
    this->FMGL(random) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(nSwap) = ((x10_int)0);
    this->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(mySolverType) = ((x10_int)0);
    this->FMGL(variables) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::solver::HeuristicSolver::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::HeuristicSolver::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::HeuristicSolver::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(move));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(nSwap));
    buf.write(this->FMGL(problemModel));
    buf.write(this->FMGL(mySolverType));
    buf.write(this->FMGL(variables));
    
}

::x10::lang::Reference* ::cpls::solver::HeuristicSolver::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::HeuristicSolver* this_ = new (::x10aux::alloc_z< ::cpls::solver::HeuristicSolver>()) ::cpls::solver::HeuristicSolver();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::HeuristicSolver::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(move) = buf.read< ::cpls::util::MovePermutation*>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(nSwap) = buf.read<x10_int>();
    FMGL(problemModel) = buf.read< ::cpls::problem::ProblemGenericModel*>();
    FMGL(mySolverType) = buf.read<x10_int>();
    FMGL(variables) = buf.read< ::x10::lang::Rail< x10_int >*>();
}

::x10aux::RuntimeType cpls::solver::HeuristicSolver::rtt;
void cpls::solver::HeuristicSolver::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.HeuristicSolver",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_HeuristicSolver__closure__1>cpls_solver_HeuristicSolver__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_HeuristicSolver__closure__1::__apply, &cpls_solver_HeuristicSolver__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_HeuristicSolver__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_solver_HeuristicSolver__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_HeuristicSolver__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_HeuristicSolver__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of HeuristicSolver */
/*************************************************/
