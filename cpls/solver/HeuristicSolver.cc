/*************************************************/
/* START of HeuristicSolver */
#include <cpls/solver/HeuristicSolver.h>

#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/util/MovePermutation.h>
#include <x10/util/Random.h>
#include <x10/lang/Rail.h>
#include <cpls/ParamManager.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Exception.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/System.h>
#include <x10/lang/Double.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <cpls/util/Utils.h>
#include <x10/lang/Place.h>
#include <cpls/measurements/GlobalStats.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE
#define CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_solver_HeuristicSolver__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_solver_HeuristicSolver__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25713 = ::x10aux::makeStringLit(" Time Out"); strLit__25713; }));
        
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
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10:152";
    }

};

#endif // CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__1_CLOSURE
#ifndef CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__2_CLOSURE
#define CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_solver_HeuristicSolver__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_solver_HeuristicSolver__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25722 = ::x10aux::makeStringLit("Force Restart True"); strLit__25722; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_HeuristicSolver__closure__2* storage = ::x10aux::alloc_z<cpls_solver_HeuristicSolver__closure__2>();
        buf.record_reference(storage);
        cpls_solver_HeuristicSolver__closure__2* this_ = new (storage) cpls_solver_HeuristicSolver__closure__2();
        return this_;
    }
    
    cpls_solver_HeuristicSolver__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10:277";
    }

};

#endif // CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__2_CLOSURE

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
/** Total Statistics */

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
/** Number time to change vector due to communication */

//#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::_constructor() {
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver();
}


//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                    ::cpls::ParamManager* opts) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemModel) = problemModel;
}

//#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setProblemModel(::cpls::problem::ProblemGenericModel* problemModel) {
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(size) = ::x10aux::nullCheck(problemModel)->getSize();
}

//#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::cpls::problem::ProblemGenericModel* cpls::solver::HeuristicSolver::getProblemModel(
  ) {
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(problemModel);
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getBestCost() {
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(bestCost);
    
}

//#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setMaxIters(x10_long maxIters) {
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(maxIters) = maxIters;
}

//#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::solve() {
 
}

//#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::solve(x10_long tCost,
                                              x10_boolean sLow) {
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->initVar(tCost, sLow);
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(currentCost) = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                true);
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    try {
        
        //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        ::x10::lang::Rail< x10_int >* src__23828 = ::x10aux::nullCheck(this->FMGL(problemModel))->getVariables();
        ::x10::lang::Rail< x10_int >* dst__23829 = (__extension__ ({
            ::x10::lang::Rail< x10_int >* t__23830 = this->FMGL(bestConf);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__23830)->FMGL(size)),
                                           sz)))) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25707 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__25707; })))));
            }
            t__23830;
        }))
        ;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(src__23828)->FMGL(size)),
                                       (x10_long)(::x10aux::nullCheck(dst__23829)->FMGL(size))))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25708 = ::x10aux::makeStringLit("!(src$23541.size == dst$23542.size)"); strLit__25708; })))));
        }
        ::x10::lang::Rail< void >::copy< x10_int >(src__23828,
                                                   dst__23829);
    }
    catch (::x10::lang::CheckedThrowable* __exc296) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc296)) {
            ::x10::lang::Exception* e = static_cast< ::x10::lang::Exception*>(__exc296);
            {
                
                //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25709 = ::x10aux::makeStringLit("Ocurri\363 una excepci\363n en el Rail.Copy. "); strLit__25709; })), (__extension__ ({ static ::x10::lang::String* strLit__25710 = ::x10aux::makeStringLit("sz: "); strLit__25710; }))), sz), (__extension__ ({ static ::x10::lang::String* strLit__25711 = ::x10aux::makeStringLit("Tama\361o variables: "); strLit__25711; }))), (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(problemModel))->getVariables())->FMGL(size)))));
            }
        } else
        throw;
    }
    
    //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if ((::x10aux::struct_equals(this->FMGL(currentCost),
                                 ((x10_long)0ll)))) {
        
        //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestCost) = this->FMGL(currentCost);
    } else {
        
        //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestCost) = ((x10_long)(((x10_int)0x7fffffff)));
    }
    
    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    while ((!::x10aux::struct_equals(this->FMGL(currentCost),
                                     ((x10_long)0ll)))) {
        
        //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (((((x10_long)(this->FMGL(nIter)))) >= (this->FMGL(maxIters))))
        {
            
            //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            if (((this->FMGL(nRestart)) >= (this->FMGL(maxRestarts))))
            {
                
                //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                break;
            } else {
                
                //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->FMGL(nRestart) = ((this->FMGL(nRestart)) + (((x10_int)1)));
                
                //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::x10aux::nullCheck(this->FMGL(problemModel))->initialize();
                
                //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->FMGL(currentCost) = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                            true);
                
                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25712 = ::x10aux::makeStringLit("Current cost: "); strLit__25712; })), this->FMGL(currentCost))));
                
                //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->updateTotStats();
                
                //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->restartVar();
                
                //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                continue;
            }
            
        }
        
        //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(nIter) = ((this->FMGL(nIter)) + (((x10_int)1)));
        
        //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(currentCost) = this->search();
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->updateCosts();
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        ::x10::lang::Runtime::probe();
        
        //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (this->FMGL(kill)) {
            
            //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            break;
        }
        
        //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (((this->FMGL(maxTime)) > (((x10_long)0ll)))) {
            
            //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            x10_long eTime = ((::x10::lang::System::nanoTime()) - (this->FMGL(initialTime)));
            
            //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            if (((((((x10_double) (eTime))) / (1000000.0))) >= (((x10_double) (this->FMGL(maxTime))))))
            {
                
                //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_solver_HeuristicSolver__closure__1)))cpls_solver_HeuristicSolver__closure__1())));
                
                //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                break;
            }
            
        }
        
    }
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->updateTotStats();
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(bestCost);
    
}

//#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVar(x10_long tCost,
                                            x10_boolean sLow) {
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(target) = tCost;
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(strictLow) = sLow;
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(targetSucc) = false;
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIter) = ((x10_int)0);
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nRestart) = ((x10_int)0);
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(bestConf) = ::x10::lang::Rail< x10_int >::_make(::x10aux::nullCheck(this->FMGL(problemModel))->getSize(),
                                                               ((x10_int)0));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIterTot) = ((x10_int)0);
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwapTot) = ((x10_int)0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(initialTime) = ::x10::lang::System::nanoTime();
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(bestSent) = false;
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nForceRestart) = ((x10_int)0);
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nChangeV) = ((x10_int)0);
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(costLR) = (x10_long)0x7fffffffffffffffLL;
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if (this->FMGL(adaptiveComm)) {
        
        //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(updateI) = ((((x10_int)2)) * (this->FMGL(reportI)));
    }
    
}

//#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::clear() {
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(kill) = false;
}

//#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::updateTotStats() {
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIterTot) = ((this->FMGL(nIterTot)) + (this->FMGL(nIter)));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwapTot) = ((this->FMGL(nSwapTot)) + (this->FMGL(nSwap)));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIter) = ((x10_int)0);
}

//#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::restartVar() {
    
    //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(bestSent) = false;
}

//#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::search() {
    
    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setFirst(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                 sz));
    
    //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setSecond(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                  sz));
    
    //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->swapVariables(
      this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
    
    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
    
    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->executedSwap(
      this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
    
    //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long costo = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                       true);
    
    //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25714 = ::x10aux::makeStringLit("Costo (RandomSearch): "); strLit__25714; })), costo), (__extension__ ({ static ::x10::lang::String* strLit__25715 = ::x10aux::makeStringLit(". Con variables: "); strLit__25715; }))));
    
    //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->displaySolution();
    
    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__25716 = ::x10aux::makeStringLit("\n"); strLit__25716; })));
    
    //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return costo;
    
}

//#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::updateCosts() {
    
    //#line 229 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if (((this->FMGL(currentCost)) < (this->FMGL(bestCost))))
    {
        
        //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__23772 =
                                                         ::x10aux::nullCheck(this->FMGL(problemModel))->getVariables();
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__23772)->FMGL(size)),
                                                                                      sz))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25717 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__25717; })))));
                                                       }
                                                       t__23772;
                                                   }))
                                                   , (__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__23774 =
                                                         this->FMGL(bestConf);
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__23774)->FMGL(size)),
                                                                                      sz))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25718 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__25718; })))));
                                                       }
                                                       t__23774;
                                                   }))
                                                   );
        
        //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestCost) = this->FMGL(currentCost);
        
        //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestSent) = false;
        
        //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (this->FMGL(reportPart)) {
            
            //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            x10_double eT = ((((x10_double) (((::x10::lang::System::nanoTime()) - (this->FMGL(initialTime)))))) / (1.0E9));
            
            //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            x10_double gap = ((((((x10_double) (((this->FMGL(bestCost)) - (this->FMGL(target)))))) / (((x10_double) (this->FMGL(bestCost)))))) * (100.0));
            
            //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__25719 = ::x10aux::makeStringLit("Solution"); strLit__25719; })),
                                      this->FMGL(bestConf));
            
            //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__25720 = ::x10aux::makeStringLit("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n"); strLit__25720; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Place::_make(::x10aux::here)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(eT),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(bestCost)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
        }
        
        //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (((this->FMGL(strictLow) && ((this->FMGL(bestCost)) < (this->FMGL(target)))) ||
            (!(this->FMGL(strictLow)) && ((this->FMGL(bestCost)) <= (this->FMGL(target))))))
        {
            
            //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            this->FMGL(targetSucc) = true;
            
            //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            this->FMGL(kill) = true;
        }
        
    }
    
}

//#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_boolean cpls::solver::HeuristicSolver::verify() {
    
    //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__23831 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__23832 = this->getBestConfiguration();
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__23832)->FMGL(size)),
                                   ::x10aux::nullCheck(t__23831)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25721 = ::x10aux::makeStringLit("!(conf$23819.size == t$23818.size)"); strLit__25721; })))));
    }
    return ::x10aux::nullCheck(t__23831)->verify(conf__23832);
    
}

//#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getSizeProblem() {
    
    //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
}

//#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::reportStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setIters(((x10_long)(this->FMGL(nIterTot))));
    
    //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setSwaps(((x10_long)(this->FMGL(nSwapTot))));
    
    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setVectorSize(::x10aux::nullCheck(this->FMGL(problemModel))->getSize());
    
    //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setTarget(this->FMGL(targetSucc));
    
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setCost(this->FMGL(bestCost));
    
    //#line 269 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setRestart(this->FMGL(nRestart));
    
    //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setChange(this->FMGL(nChangeV));
    
    //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setForceRestart(this->FMGL(nForceRestart));
    
    //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* state = this->createSolverState();
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setSState(state);
}

//#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::forceRestart() {
    
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_solver_HeuristicSolver__closure__2)))cpls_solver_HeuristicSolver__closure__2())));
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(forceRestart) = true;
}

//#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::displaySolution() {
    
    //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__23833 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__23834 = this->getBestConfiguration();
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__23834)->FMGL(size)),
                                   ::x10aux::nullCheck(t__23833)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25723 = ::x10aux::makeStringLit("!(conf$23823.size == t$23822.size)"); strLit__25723; })))));
    }
    ::x10aux::nullCheck(t__23833)->displaySolution(conf__23834);
}

//#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::getBestConfiguration(
  ) {
    
    //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* t__23835 = this->FMGL(bestConf);
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__23835)->FMGL(size)),
                                   sz)))) {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__25724 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__25724; })))));
    }
    return t__23835;
    
}

//#line 292 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::createSolverState(
  ) {
    
    //#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* rsState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                ((x10_int)-1));
    
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return rsState;
    
}

//#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::kill() {
    
    //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(kill) = true;
}

//#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSeed(x10_long inSeed) {
    
    //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(seed) = inSeed;
    
    //#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(random) = ::x10::util::Random::_make(inSeed);
}

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::cpls__solver__HeuristicSolver____this__cpls__solver__HeuristicSolver(
  ) {
    return this;
    
}
void cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver(
  ) {
    this->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(size) = ((x10_long)0ll);
    this->FMGL(move) = ::cpls::util::MovePermutation::_make(((x10_long)(((x10_int)-1))),
                                                            ((x10_long)(((x10_int)-1))));
    this->FMGL(random) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(seed) = ((x10_long)0ll);
    this->FMGL(target) = ((x10_long)0ll);
    this->FMGL(strictLow) = false;
    this->FMGL(targetSucc) = false;
    this->FMGL(nRestart) = ((x10_int)0);
    this->FMGL(nIter) = ((x10_int)0);
    this->FMGL(nSwap) = ((x10_int)0);
    this->FMGL(nForceRestart) = ((x10_int)0);
    this->FMGL(nIterTot) = ((x10_int)0);
    this->FMGL(nSwapTot) = ((x10_int)0);
    this->FMGL(bestConf) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(bestCost) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(currentCost) = ((x10_long)0ll);
    this->FMGL(kill) = false;
    this->FMGL(maxTime) = ((x10_long)0ll);
    this->FMGL(initialTime) = ((x10_long)0ll);
    this->FMGL(restart) = false;
    this->FMGL(maxIters) = ((x10_long)0ll);
    this->FMGL(maxRestarts) = ((x10_int)0);
    this->FMGL(forceRestart) = false;
    this->FMGL(forceReset) = false;
    this->FMGL(reportPart) = false;
    this->FMGL(nChangeV) = ((x10_int)0);
    this->FMGL(bestSent) = false;
    this->FMGL(updateI) = ((x10_int)0);
    this->FMGL(reportI) = ((x10_int)0);
    this->FMGL(adaptiveComm) = false;
    this->FMGL(modParams) = ((x10_int)0);
    this->FMGL(costLR) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(maxUpdateI) = ((x10_int)100000);
    this->FMGL(changeOnDiver) = ((x10_int)0);
    this->FMGL(mySolverType) = ((x10_long)0ll);
}
void cpls::solver::HeuristicSolver::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(problemModel));
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(move));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(seed));
    buf.write(this->FMGL(target));
    buf.write(this->FMGL(strictLow));
    buf.write(this->FMGL(targetSucc));
    buf.write(this->FMGL(nRestart));
    buf.write(this->FMGL(nIter));
    buf.write(this->FMGL(nSwap));
    buf.write(this->FMGL(nForceRestart));
    buf.write(this->FMGL(nIterTot));
    buf.write(this->FMGL(nSwapTot));
    buf.write(this->FMGL(bestConf));
    buf.write(this->FMGL(bestCost));
    buf.write(this->FMGL(currentCost));
    buf.write(this->FMGL(kill));
    buf.write(this->FMGL(maxTime));
    buf.write(this->FMGL(initialTime));
    buf.write(this->FMGL(restart));
    buf.write(this->FMGL(maxIters));
    buf.write(this->FMGL(maxRestarts));
    buf.write(this->FMGL(forceRestart));
    buf.write(this->FMGL(forceReset));
    buf.write(this->FMGL(reportPart));
    buf.write(this->FMGL(nChangeV));
    buf.write(this->FMGL(bestSent));
    buf.write(this->FMGL(updateI));
    buf.write(this->FMGL(reportI));
    buf.write(this->FMGL(adaptiveComm));
    buf.write(this->FMGL(modParams));
    buf.write(this->FMGL(costLR));
    buf.write(this->FMGL(maxUpdateI));
    buf.write(this->FMGL(changeOnDiver));
    buf.write(this->FMGL(mySolverType));
    
}

void cpls::solver::HeuristicSolver::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(problemModel) = buf.read< ::cpls::problem::ProblemGenericModel*>();
    FMGL(size) = buf.read<x10_long>();
    FMGL(move) = buf.read< ::cpls::util::MovePermutation*>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(seed) = buf.read<x10_long>();
    FMGL(target) = buf.read<x10_long>();
    FMGL(strictLow) = buf.read<x10_boolean>();
    FMGL(targetSucc) = buf.read<x10_boolean>();
    FMGL(nRestart) = buf.read<x10_int>();
    FMGL(nIter) = buf.read<x10_int>();
    FMGL(nSwap) = buf.read<x10_int>();
    FMGL(nForceRestart) = buf.read<x10_int>();
    FMGL(nIterTot) = buf.read<x10_int>();
    FMGL(nSwapTot) = buf.read<x10_int>();
    FMGL(bestConf) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(bestCost) = buf.read<x10_long>();
    FMGL(currentCost) = buf.read<x10_long>();
    FMGL(kill) = buf.read<x10_boolean>();
    FMGL(maxTime) = buf.read<x10_long>();
    FMGL(initialTime) = buf.read<x10_long>();
    FMGL(restart) = buf.read<x10_boolean>();
    FMGL(maxIters) = buf.read<x10_long>();
    FMGL(maxRestarts) = buf.read<x10_int>();
    FMGL(forceRestart) = buf.read<x10_boolean>();
    FMGL(forceReset) = buf.read<x10_boolean>();
    FMGL(reportPart) = buf.read<x10_boolean>();
    FMGL(nChangeV) = buf.read<x10_int>();
    FMGL(bestSent) = buf.read<x10_boolean>();
    FMGL(updateI) = buf.read<x10_int>();
    FMGL(reportI) = buf.read<x10_int>();
    FMGL(adaptiveComm) = buf.read<x10_boolean>();
    FMGL(modParams) = buf.read<x10_int>();
    FMGL(costLR) = buf.read<x10_long>();
    FMGL(maxUpdateI) = buf.read<x10_int>();
    FMGL(changeOnDiver) = buf.read<x10_int>();
    FMGL(mySolverType) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::solver::HeuristicSolver::rtt;
void cpls::solver::HeuristicSolver::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.HeuristicSolver",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_solver_HeuristicSolver__closure__1>cpls_solver_HeuristicSolver__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_HeuristicSolver__closure__1::__apply, &cpls_solver_HeuristicSolver__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_HeuristicSolver__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_solver_HeuristicSolver__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_HeuristicSolver__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_HeuristicSolver__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_solver_HeuristicSolver__closure__2>cpls_solver_HeuristicSolver__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_HeuristicSolver__closure__2::__apply, &cpls_solver_HeuristicSolver__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_HeuristicSolver__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_solver_HeuristicSolver__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_HeuristicSolver__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_HeuristicSolver__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of HeuristicSolver */
/*************************************************/
