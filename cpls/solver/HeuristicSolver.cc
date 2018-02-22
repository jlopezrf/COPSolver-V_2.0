/*************************************************/
/* START of HeuristicSolver */
#include <cpls/solver/HeuristicSolver.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <cpls/util/MovePermutation.h>
#include <x10/util/Random.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Rail.h>
#include <cpls/ParamManager.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
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
        return "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10:29";
    }

};

#endif // CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE

//#line 15 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 16 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 17 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 18 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 19 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 20 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 21 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 23 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::_constructor(x10_long sz) {
    
    //#line 24 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    FMGL(sz) = sz;
    
    //#line 15 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver();
}
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::_make(x10_long sz)
{
    ::cpls::solver::HeuristicSolver* this_ = new (::x10aux::alloc_z< ::cpls::solver::HeuristicSolver>()) ::cpls::solver::HeuristicSolver();
    this_->_constructor(sz);
    return this_;
}



//#line 28 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                    ::cpls::ParamManager* opts) {
    
    //#line 29 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = ::x10::lang::Rail< x10_int >::_make(this->FMGL(sz),
                                                                reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_solver_HeuristicSolver__closure__1)))cpls_solver_HeuristicSolver__closure__1())));
    
    //#line 30 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemModel) = problemModel;
}

//#line 37 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::search(x10_long currentCost,
                                               x10_long bestCost,
                                               x10_int nIter) {
    
    //#line 39 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
    //#line 40 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setFirst(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                 ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size)));
    
    //#line 41 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setSecond(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                  ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size)));
    
    //#line 42 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->swapVariables(this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
    
    //#line 43 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
    
    //#line 45 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->executedSwap(
      sz, this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond(),
      (__extension__ ({
          ::x10::lang::Rail< x10_int >* t__42175 = this->FMGL(variables);
          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42175)->FMGL(size)),
                                         sz)))) {
              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44182 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__44182; })))));
          }
          t__42175;
      }))
      );
    
    //#line 46 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long costo = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                       sz, true, (__extension__ ({
                           ::x10::lang::Rail< x10_int >* t__42177 =
                             this->FMGL(variables);
                           if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42177)->FMGL(size)),
                                                          sz))))
                           {
                               ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44183 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__44183; })))));
                           }
                           t__42177;
                       }))
                       );
    
    //#line 51 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return costo;
    
}

//#line 58 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVar() {
    
    //#line 59 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
}

//#line 62 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::applyLS() {
 
}

//#line 65 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::clearNSwap() {
    
    //#line 66 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
}

//#line 69 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_int cpls::solver::HeuristicSolver::getNSwap() {
    
    //#line 70 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(nSwap);
    
}

//#line 73 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSeed(x10_long inSeed) {
    
    //#line 74 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(random) = ::x10::util::Random::_make(((inSeed) + (::x10::lang::Place::_make(::x10aux::here)->FMGL(id))));
}

//#line 77 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSolverType(x10_int mySolverType) {
    
    //#line 78 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(mySolverType) = mySolverType;
}

//#line 81 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::getVariables(
  ) {
    
    //#line 83 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(variables);
    
}

//#line 86 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setVariables(::x10::lang::Rail< x10_int >* variables) {
    
    //#line 87 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = variables;
}

//#line 90 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setVariables(x10_long sze,
                                                 ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 91 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = (__extension__ ({
        ::x10::lang::Rail< x10_int >* t__42185 = variables;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42185)->FMGL(size)),
                                       ::x10aux::nullCheck(this)->FMGL(sz)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44184 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.HeuristicSolver).sz}"); strLit__44184; })))));
        }
        t__42185;
    }))
    ;
}

//#line 94 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::swapVariables(x10_long i,
                                                  x10_long j) {
    
    //#line 95 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_int x = ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
                  i);
    
    //#line 96 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__set(
      i, ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__apply(
           j));
    
    //#line 97 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(variables))->x10::lang::Rail< x10_int >::__set(
      j, x);
}

//#line 101 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_boolean cpls::solver::HeuristicSolver::tryInsertIndividual(
  ::x10::lang::Rail< x10_int >* varables, x10_long sze) {
    
    //#line 102 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44187 = ::x10aux::makeStringLit("BadInvocation of tryInsertIndividual, this its not a GA Heuristic"); strLit__44187; }))));
    
    //#line 103 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return false;
    
}

//#line 106 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getWorstCost() {
    
    //#line 107 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44188 = ::x10aux::makeStringLit("BadInvocation of getWorstCost, this its not a GA Heuristic"); strLit__44188; }))));
    
    //#line 108 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return (x10_long)0x7fffffffffffffffLL;
    
}

//#line 112 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::getConfigForPop(
  x10_boolean replace) {
    
    //#line 113 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44189 = ::x10aux::makeStringLit("BadInvocation of getConfigForPop, this is not a GA Heuristic"); strLit__44189; }))));
    
    //#line 114 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 117 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_boolean cpls::solver::HeuristicSolver::launchEventForStagnation(
  ) {
    
    //#line 118 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return false;
    
}

//#line 121 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setKill(x10_boolean value) {
 
}

//#line 125 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::displayInfo(::x10::lang::String* string) {
    
    //#line 126 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44190 = ::x10aux::makeStringLit("Error. displayInfo() invokation in HeuristicSolver"); strLit__44190; }))));
}

//#line 129 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::reset(x10_long n,
                                              x10_long totalCost) {
    
    //#line 130 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    while ((!::x10aux::struct_equals((__extension__ ({
                                         x10_long pre__42187 =
                                           n;
                                         n = ((n) - (((x10_long)1ll)));
                                         pre__42187;
                                     }))
                                     , ((x10_long)0ll))))
    {
        
        //#line 131 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        x10_long i = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                       (x10_long)(::x10aux::nullCheck(this->FMGL(variables))->FMGL(size)));
        
        //#line 132 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        x10_long j = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                       (x10_long)(::x10aux::nullCheck(this->FMGL(variables))->FMGL(size)));
        
        //#line 133 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->swapVariables(i, j);
    }
    
    //#line 136 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ((x10_long)(((x10_int)-1)));
    
}

//#line 139 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::restartVar() {
 
}

//#line 143 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVariables() {
    
    //#line 144 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(variables) = (__extension__ ({
        ::x10::lang::Rail< x10_int >* t__42194 = ::x10aux::nullCheck(this->FMGL(problemModel))->initialize(
                                                   ::x10aux::nullCheck(this->FMGL(random))->nextLong());
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42194)->FMGL(size)),
                                       ::x10aux::nullCheck(this)->FMGL(sz)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44191 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.HeuristicSolver).sz}"); strLit__44191; })))));
        }
        t__42194;
    }))
    ;
}

//#line 147 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::clearProblemModel() {
    
    //#line 148 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->clearProblemModel();
}

//#line 151 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::createNewSol(
  ) {
    
    //#line 152 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* conf = ::x10aux::nullCheck(this->FMGL(problemModel))->createNewSol();
    
    //#line 154 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return conf;
    
}

//#line 162 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::createNewConf(
  ) {
    
    //#line 163 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* t__42206 = ::x10aux::nullCheck(this->FMGL(problemModel))->initialize(
                                               ::x10aux::nullCheck(this->FMGL(random))->nextLong());
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42206)->FMGL(size)),
                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44192 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.HeuristicSolver).sz}"); strLit__44192; })))));
    }
    return t__42206;
    
}

//#line 166 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::costOfSolution() {
    
    //#line 167 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
             this->FMGL(sz), true, this->FMGL(variables));
    
}

//#line 170 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getSizeProblem() {
    
    //#line 171 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
}

//#line 174 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_double cpls::solver::HeuristicSolver::getDistance(::x10::lang::Rail< x10_int >* a,
                                                      ::x10::lang::Rail< x10_int >* b) {
    
    //#line 176 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->distance(
             this->FMGL(sz), (__extension__ ({
                 ::x10::lang::Rail< x10_int >* t__42198 =
                   a;
                 if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
                                                ::x10aux::nullCheck(this)->FMGL(sz)))))
                 {
                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44193 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{a.size==this(:cpls.solver.HeuristicSolver).sz}"); strLit__44193; })))));
                 }
                 t__42198;
             }))
             , (__extension__ ({
                 ::x10::lang::Rail< x10_int >* t__42200 =
                   b;
                 if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(b)->FMGL(size)),
                                                ::x10aux::nullCheck(this)->FMGL(sz)))))
                 {
                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44194 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{b.size==this(:cpls.solver.HeuristicSolver).sz}"); strLit__44194; })))));
                 }
                 t__42200;
             }))
             );
    
}

//#line 180 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_boolean cpls::solver::HeuristicSolver::verify(::x10::lang::Rail< x10_int >* conf) {
    
    //#line 182 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->verify(
             this->FMGL(sz), (__extension__ ({
                 ::x10::lang::Rail< x10_int >* t__42202 =
                   conf;
                 if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42202)->FMGL(size)),
                                                ::x10aux::nullCheck(this)->FMGL(sz)))))
                 {
                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44195 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.HeuristicSolver).sz}"); strLit__44195; })))));
                 }
                 t__42202;
             }))
             );
    
}

//#line 186 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::displaySolution(::x10::lang::Rail< x10_int >* conf) {
    
    //#line 187 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->FMGL(size);
    
    //#line 188 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->displaySolution(
      sz, (__extension__ ({
          ::x10::lang::Rail< x10_int >* t__42204 = conf;
          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42204)->FMGL(size)),
                                         sz)))) {
              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44196 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__44196; })))));
          }
          t__42204;
      }))
      );
}

//#line 191 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::costOfSolution(x10_long sz,
                                                       ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 192 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
             sz, conf);
    
}

//#line 15 "/home/jason/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
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
    buf.write(this->FMGL(sz));
    
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
    FMGL(sz) = buf.read<x10_long>();
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
