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
#include <x10/util/OptionsParser.h>
#include <x10/lang/Double.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/lang/System.h>
#include <x10/util/StringUtil.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Exception.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Runtime.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__33314 = ::x10aux::makeStringLit(" Time Out"); strLit__33314; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10:169";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__33323 = ::x10aux::makeStringLit("Force Restart True"); strLit__33323; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10:294";
    }

};

#endif // CPLS_SOLVER_HEURISTICSOLVER__CLOSURE__2_CLOSURE

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
/** Total Statistics */

//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 52 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
/** Number time to change vector due to communication */

//#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"

//#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::_constructor() {
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver();
}


//#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                    ::cpls::ParamManager* opts) {
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(maxTime) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__33299 = ::x10aux::makeStringLit("-mt"); strLit__33299; })),
                            ((x10_long)0ll));
    
    //#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(maxIters) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__33300 = ::x10aux::makeStringLit("-mi"); strLit__33300; })),
                             ((x10_long)100000000ll));
    
    //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(maxRestarts) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__33301 = ::x10aux::makeStringLit("-mr"); strLit__33301; })),
                                ((x10_int)0));
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(reportPart) = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__33302 = ::x10aux::makeStringLit("-rp"); strLit__33302; })),
                                                        ((x10_int)0)),
                                                      ((x10_int)1)));
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(modParams) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                              (__extension__ ({ static ::x10::lang::String* strLit__33303 = ::x10aux::makeStringLit("-M"); strLit__33303; })),
                              ((x10_int)1));
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(changeOnDiver) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                  (__extension__ ({ static ::x10::lang::String* strLit__33304 = ::x10aux::makeStringLit("-CD"); strLit__33304; })),
                                  ((x10_int)1));
    
    //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__33305 = ::x10aux::makeStringLit("-R"); strLit__33305; })),
                    ((x10_int)0));
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__33306 = ::x10aux::makeStringLit("-U"); strLit__33306; })),
                    ((x10_int)0));
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(adaptiveComm) = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 89 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(problemModel)->getSize();
    
    //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(reportI) = this->FMGL(adaptiveComm) ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (sz))) * (::x10::lang::MathNatives::log(((x10_double) (sz)))))))
      : (rep);
    
    //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(updateI) = this->FMGL(adaptiveComm) ? (((((x10_int)2)) * (this->FMGL(reportI))))
      : (upd);
    
    //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::String* mustr = ::x10::lang::System::getenv(
                                   (__extension__ ({ static ::x10::lang::String* strLit__33307 = ::x10aux::makeStringLit("MU"); strLit__33307; })));
    
    //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(maxUpdateI) = ::x10::util::StringUtil::parseInt(
                                   mustr);
    }
    
}

//#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setProblemModel(::cpls::problem::ProblemGenericModel* problemModel) {
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(size) = ::x10aux::nullCheck(problemModel)->getSize();
}

//#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::cpls::problem::ProblemGenericModel* cpls::solver::HeuristicSolver::getProblemModel(
  ) {
    
    //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(problemModel);
    
}

//#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getBestCost() {
    
    //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(bestCost);
    
}

//#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setMaxIters(x10_long maxIters) {
    
    //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(maxIters) = maxIters;
}

//#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::solve() {
 
}

//#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::solve(x10_long tCost,
                                              x10_boolean sLow) {
    
    //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->initVar(tCost, sLow);
    
    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(currentCost) = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                true);
    
    //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    try {
        
        //#line 127 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        ::x10::lang::Rail< x10_int >* src__31736 = ::x10aux::nullCheck(this->FMGL(problemModel))->getVariables();
        ::x10::lang::Rail< x10_int >* dst__31737 = (__extension__ ({
            ::x10::lang::Rail< x10_int >* t__31738 = this->FMGL(bestConf);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__31738)->FMGL(size)),
                                           sz)))) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33308 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__33308; })))));
            }
            t__31738;
        }))
        ;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(src__31736)->FMGL(size)),
                                       (x10_long)(::x10aux::nullCheck(dst__31737)->FMGL(size))))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33309 = ::x10aux::makeStringLit("!(src$31449.size == dst$31450.size)"); strLit__33309; })))));
        }
        ::x10::lang::Rail< void >::copy< x10_int >(src__31736,
                                                   dst__31737);
    }
    catch (::x10::lang::CheckedThrowable* __exc491) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc491)) {
            ::x10::lang::Exception* e = static_cast< ::x10::lang::Exception*>(__exc491);
            {
                
                //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33310 = ::x10aux::makeStringLit("Ocurri\363 una excepci\363n en el Rail.Copy. "); strLit__33310; })), (__extension__ ({ static ::x10::lang::String* strLit__33311 = ::x10aux::makeStringLit("sz: "); strLit__33311; }))), sz), (__extension__ ({ static ::x10::lang::String* strLit__33312 = ::x10aux::makeStringLit("Tama\361o variables: "); strLit__33312; }))), (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(problemModel))->getVariables())->FMGL(size)))));
            }
        } else
        throw;
    }
    
    //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if ((::x10aux::struct_equals(this->FMGL(currentCost),
                                 ((x10_long)0ll)))) {
        
        //#line 133 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestCost) = this->FMGL(currentCost);
    } else {
        
        //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestCost) = ((x10_long)(((x10_int)0x7fffffff)));
    }
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    while ((!::x10aux::struct_equals(this->FMGL(currentCost),
                                     ((x10_long)0ll)))) {
        
        //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (((((x10_long)(this->FMGL(nIter)))) >= (this->FMGL(maxIters))))
        {
            
            //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            if (((this->FMGL(nRestart)) >= (this->FMGL(maxRestarts))))
            {
                
                //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                break;
            } else {
                
                //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->FMGL(nRestart) = ((this->FMGL(nRestart)) + (((x10_int)1)));
                
                //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::x10aux::nullCheck(this->FMGL(problemModel))->initialize();
                
                //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->FMGL(currentCost) = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                            true);
                
                //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33313 = ::x10aux::makeStringLit("Current cost: "); strLit__33313; })), this->FMGL(currentCost))));
                
                //#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->updateTotStats();
                
                //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                this->restartVar();
                
                //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                continue;
            }
            
        }
        
        //#line 154 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(nIter) = ((this->FMGL(nIter)) + (((x10_int)1)));
        
        //#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(currentCost) = this->search();
        
        //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->updateCosts();
        
        //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        ::x10::lang::Runtime::probe();
        
        //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (this->FMGL(kill)) {
            
            //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            break;
        }
        
        //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (((this->FMGL(maxTime)) > (((x10_long)0ll)))) {
            
            //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            x10_long eTime = ((::x10::lang::System::nanoTime()) - (this->FMGL(initialTime)));
            
            //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            if (((((((x10_double) (eTime))) / (1000000.0))) >= (((x10_double) (this->FMGL(maxTime))))))
            {
                
                //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_solver_HeuristicSolver__closure__1)))cpls_solver_HeuristicSolver__closure__1())));
                
                //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
                break;
            }
            
        }
        
    }
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->updateTotStats();
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(bestCost);
    
}

//#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVar(x10_long tCost,
                                            x10_boolean sLow) {
    
    //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(target) = tCost;
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(strictLow) = sLow;
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(targetSucc) = false;
    
    //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
    
    //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIter) = ((x10_int)0);
    
    //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nRestart) = ((x10_int)0);
    
    //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(bestConf) = ::x10::lang::Rail< x10_int >::_make(((x10_long)(((x10_int) (::x10aux::nullCheck(this->FMGL(problemModel))->getSize())))),
                                                               ((x10_int)0));
    
    //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIterTot) = ((x10_int)0);
    
    //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwapTot) = ((x10_int)0);
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(initialTime) = ::x10::lang::System::nanoTime();
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(bestSent) = false;
    
    //#line 196 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nForceRestart) = ((x10_int)0);
    
    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nChangeV) = ((x10_int)0);
    
    //#line 199 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(costLR) = (x10_long)0x7fffffffffffffffLL;
    
    //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if (this->FMGL(adaptiveComm)) {
        
        //#line 202 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(updateI) = ((((x10_int)2)) * (this->FMGL(reportI)));
    }
    
}

//#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::clear() {
    
    //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(kill) = false;
}

//#line 210 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::updateTotStats() {
    
    //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIterTot) = ((this->FMGL(nIterTot)) + (this->FMGL(nIter)));
    
    //#line 212 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwapTot) = ((this->FMGL(nSwapTot)) + (this->FMGL(nSwap)));
    
    //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
    
    //#line 214 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nIter) = ((x10_int)0);
}

//#line 220 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::restartVar() {
    
    //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(bestSent) = false;
}

//#line 228 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::search() {
    
    //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setFirst(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                 sz));
    
    //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setSecond(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                  sz));
    
    //#line 234 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->swapVariables(
      this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
    
    //#line 235 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
    
    //#line 237 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this->FMGL(problemModel))->executedSwap(
      this->FMGL(move)->getFirst(), this->FMGL(move)->getSecond());
    
    //#line 238 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long costo = ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                       true);
    
    //#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__33315 = ::x10aux::makeStringLit("Costo (RandomSearch): "); strLit__33315; })), costo), (__extension__ ({ static ::x10::lang::String* strLit__33316 = ::x10aux::makeStringLit(". Con variables: "); strLit__33316; }))));
    
    //#line 240 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->displaySolution();
    
    //#line 241 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__33317 = ::x10aux::makeStringLit("\n"); strLit__33317; })));
    
    //#line 242 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return costo;
    
}

//#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::updateCosts() {
    
    //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 247 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    if (((this->FMGL(currentCost)) < (this->FMGL(bestCost))))
    {
        
        //#line 248 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__31680 =
                                                         ::x10aux::nullCheck(this->FMGL(problemModel))->getVariables();
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__31680)->FMGL(size)),
                                                                                      sz))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33318 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__33318; })))));
                                                       }
                                                       t__31680;
                                                   }))
                                                   , (__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__31682 =
                                                         this->FMGL(bestConf);
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__31682)->FMGL(size)),
                                                                                      sz))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33319 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__33319; })))));
                                                       }
                                                       t__31682;
                                                   }))
                                                   );
        
        //#line 249 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestCost) = this->FMGL(currentCost);
        
        //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        this->FMGL(bestSent) = false;
        
        //#line 253 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (this->FMGL(reportPart)) {
            
            //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            x10_double eT = ((((x10_double) (((::x10::lang::System::nanoTime()) - (this->FMGL(initialTime)))))) / (1.0E9));
            
            //#line 255 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            x10_double gap = ((((((x10_double) (((this->FMGL(bestCost)) - (this->FMGL(target)))))) / (((x10_double) (this->FMGL(bestCost)))))) * (100.0));
            
            //#line 257 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__33320 = ::x10aux::makeStringLit("Solution"); strLit__33320; })),
                                      this->FMGL(bestConf));
            
            //#line 258 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            ::x10::io::Console::FMGL(OUT__get)()->printf(
              (__extension__ ({ static ::x10::lang::String* strLit__33321 = ::x10aux::makeStringLit("%s\ttime: %5.1f s\tbest cost: %10d\tgap: %5.2f%% \n"); strLit__33321; })),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(::x10::lang::Place::_make(::x10aux::here)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(eT),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(this->FMGL(bestCost)),
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(gap));
        }
        
        //#line 263 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
        if (((this->FMGL(strictLow) && ((this->FMGL(bestCost)) < (this->FMGL(target)))) ||
            (!(this->FMGL(strictLow)) && ((this->FMGL(bestCost)) <= (this->FMGL(target))))))
        {
            
            //#line 265 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            this->FMGL(targetSucc) = true;
            
            //#line 266 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
            this->FMGL(kill) = true;
        }
        
    }
    
}

//#line 271 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_boolean cpls::solver::HeuristicSolver::verify() {
    
    //#line 273 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31739 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__31740 = this->getBestConfiguration();
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__31740)->FMGL(size)),
                                   ::x10aux::nullCheck(t__31739)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33322 = ::x10aux::makeStringLit("!(conf$31727.size == t$31726.size)"); strLit__33322; })))));
    }
    return ::x10aux::nullCheck(t__31739)->verify(conf__31740);
    
}

//#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::getSizeProblem() {
    
    //#line 277 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
}

//#line 280 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::reportStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 281 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setIters(((x10_long)(this->FMGL(nIterTot))));
    
    //#line 282 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setSwaps(((x10_long)(this->FMGL(nSwapTot))));
    
    //#line 283 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setVectorSize(::x10aux::nullCheck(this->FMGL(problemModel))->getSize());
    
    //#line 284 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setTarget(this->FMGL(targetSucc));
    
    //#line 285 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setCost(this->FMGL(bestCost));
    
    //#line 286 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setRestart(this->FMGL(nRestart));
    
    //#line 287 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setChange(this->FMGL(nChangeV));
    
    //#line 288 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setForceRestart(this->FMGL(nForceRestart));
    
    //#line 289 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* state = this->createSolverState();
    
    //#line 290 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(c)->setSState(state);
}

//#line 293 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::forceRestart() {
    
    //#line 294 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_solver_HeuristicSolver__closure__2)))cpls_solver_HeuristicSolver__closure__2())));
    
    //#line 295 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(forceRestart) = true;
}

//#line 298 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::displaySolution() {
    
    //#line 299 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::cpls::problem::ProblemGenericModel* t__31741 = this->FMGL(problemModel);
    ::x10::lang::Rail< x10_int >* conf__31742 = this->getBestConfiguration();
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf__31742)->FMGL(size)),
                                   ::x10aux::nullCheck(t__31741)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33324 = ::x10aux::makeStringLit("!(conf$31731.size == t$31730.size)"); strLit__33324; })))));
    }
    ::x10aux::nullCheck(t__31741)->displaySolution(conf__31742);
}

//#line 302 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::getBestConfiguration(
  ) {
    
    //#line 303 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(this->FMGL(problemModel))->getSize();
    
    //#line 304 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* t__31743 = this->FMGL(bestConf);
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__31743)->FMGL(size)),
                                   sz)))) {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33325 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__33325; })))));
    }
    return t__31743;
    
}

//#line 309 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
::x10::lang::Rail< x10_int >* cpls::solver::HeuristicSolver::createSolverState(
  ) {
    
    //#line 310 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    ::x10::lang::Rail< x10_int >* rsState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                ((x10_int)-1));
    
    //#line 311 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    rsState->x10::lang::Rail< x10_int >::__set(((x10_long)0ll),
                                               ((x10_int)1));
    
    //#line 312 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    return rsState;
    
}

//#line 315 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::kill() {
    
    //#line 316 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(kill) = true;
}

//#line 319 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSeed(x10_long inSeed) {
    
    //#line 320 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(seed) = inSeed;
    
    //#line 321 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
    this->FMGL(random) = ::x10::util::Random::_make(inSeed);
}

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/solver/HeuristicSolver.x10"
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
