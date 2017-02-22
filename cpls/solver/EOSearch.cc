/*************************************************/
/* START of EOSearch */
#include <cpls/solver/EOSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Math.h>
#include <cpls/ParamManager.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Random.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/util/MovePermutation.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime__Worker.h>
#include <x10/lang/Thread.h>
#include <cpls/util/Utils.h>
#include <x10/lang/Any.h>
#include <x10/lang/ULong.h>
#include <x10/util/RailUtils.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_SOLVER_EOSEARCH__CLOSURE__1_CLOSURE
#define CPLS_SOLVER_EOSEARCH__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_solver_EOSearch__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int>::itable<cpls_solver_EOSearch__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long a, x10_long b) {
        
        //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        return ((x10_int) (((((b) >> (0x3f & (x10_int)(((x10_long)10ll))))) - (((a) >> (0x3f & (x10_int)(((x10_long)10ll))))))));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_EOSearch__closure__1* storage = ::x10aux::alloc_z<cpls_solver_EOSearch__closure__1>();
        buf.record_reference(storage);
        cpls_solver_EOSearch__closure__1* this_ = new (storage) cpls_solver_EOSearch__closure__1();
        return this_;
    }
    
    cpls_solver_EOSearch__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10:16";
    }

};

#endif // CPLS_SOLVER_EOSEARCH__CLOSURE__1_CLOSURE
#ifndef CPLS_SOLVER_EOSEARCH__CLOSURE__2_CLOSURE
#define CPLS_SOLVER_EOSEARCH__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_solver_EOSearch__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::itable<cpls_solver_EOSearch__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_double tau, x10_long x) {
        
        //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        return ::x10::lang::MathNatives::pow(((x10_double) (x)),(-(tau)));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_EOSearch__closure__2* storage = ::x10aux::alloc_z<cpls_solver_EOSearch__closure__2>();
        buf.record_reference(storage);
        cpls_solver_EOSearch__closure__2* this_ = new (storage) cpls_solver_EOSearch__closure__2();
        return this_;
    }
    
    cpls_solver_EOSearch__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10:17";
    }

};

#endif // CPLS_SOLVER_EOSEARCH__CLOSURE__2_CLOSURE
#ifndef CPLS_SOLVER_EOSEARCH__CLOSURE__3_CLOSURE
#define CPLS_SOLVER_EOSEARCH__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_solver_EOSearch__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::itable<cpls_solver_EOSearch__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_double tau, x10_long x) {
        
        //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        return ::x10::lang::MathNatives::exp((((-(tau))) * (((x10_double) (x)))));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_EOSearch__closure__3* storage = ::x10aux::alloc_z<cpls_solver_EOSearch__closure__3>();
        buf.record_reference(storage);
        cpls_solver_EOSearch__closure__3* this_ = new (storage) cpls_solver_EOSearch__closure__3();
        return this_;
    }
    
    cpls_solver_EOSearch__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10:18";
    }

};

#endif // CPLS_SOLVER_EOSEARCH__CLOSURE__3_CLOSURE
#ifndef CPLS_SOLVER_EOSEARCH__CLOSURE__4_CLOSURE
#define CPLS_SOLVER_EOSEARCH__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_solver_EOSearch__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::itable<cpls_solver_EOSearch__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_double tau, x10_long x) {
        
        //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        x10_double k = tau;
        
        //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        x10_double theta = ::x10::lang::MathNatives::exp(tau);
        
        //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        x10_double constk = ((::x10::lang::MathNatives::pow(theta,k)) * (::cpls::solver::EOSearch::gamma(
                                                                           k)));
        
        //#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        x10_double f = ((((::x10::lang::MathNatives::pow(((x10_double) (x)),((k) - (((x10_double) (((x10_long)1ll))))))) * (::x10::lang::MathNatives::exp(((((x10_double) ((-(x))))) / (theta)))))) / (constk));
        
        //#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        return f;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_EOSearch__closure__4* storage = ::x10aux::alloc_z<cpls_solver_EOSearch__closure__4>();
        buf.record_reference(storage);
        cpls_solver_EOSearch__closure__4* this_ = new (storage) cpls_solver_EOSearch__closure__4();
        return this_;
    }
    
    cpls_solver_EOSearch__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10:19-24";
    }

};

#endif // CPLS_SOLVER_EOSEARCH__CLOSURE__4_CLOSURE

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
x10_double cpls::solver::EOSearch::gamma(x10_double n) {
    
    //#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_double invn = ((1.0) / (n));
    
    //#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_double g = ((((((((((((2.506628274631) * (::x10::lang::MathNatives::sqrt(invn)))) + (((0.208885689552583) * (::x10::lang::MathNatives::pow(invn,1.5)))))) + (((0.00870357039802431) * (::x10::lang::MathNatives::pow(invn,2.5)))))) - (((((174.210665086855) * (::x10::lang::MathNatives::pow(invn,3.5)))) / (25920.0))))) - (((((715.642372407151) * (::x10::lang::MathNatives::pow(invn,4.5)))) / (1244160.0))))) * (::x10::lang::MathNatives::exp((((((-(::x10::lang::MathNatives::log(invn)))) - (((x10_double) (((x10_long)1ll)))))) * (n)))));
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    return g;
    
}

//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"

//#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::_constructor() {
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    
    //#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->cpls::solver::EOSearch::__fieldInitializers_cpls_solver_EOSearch();
}
::cpls::solver::EOSearch* cpls::solver::EOSearch::_make() {
    ::cpls::solver::EOSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch();
    this_->_constructor();
    return this_;
}



//#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::configHeuristic(x10_long problemSize, ::cpls::ParamManager* opts) {
    
    //#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::cpls::solver::SingleSolHeuristic::configHeuristic(problemSize, opts);
    
    //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(pdf) = ::x10::lang::Rail< x10_double >::_make(((problemSize) + (((x10_long)1ll))),
                                                             0.0);
    
    //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(fit) = ::x10::lang::Rail< x10_long >::_make(problemSize,
                                                           ((x10_long)0ll));
    
    //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(expDown) = ((6.385378048) * (::x10::lang::MathNatives::pow(((x10_double) (problemSize)),-1.033400799)));
    
    //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(expUp) = ((8.867754442) * (::x10::lang::MathNatives::pow(((x10_double) (problemSize)),-0.895936426)));
    
    //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(powDown) = ((1.575467001) * (::x10::lang::MathNatives::pow(((x10_double) (problemSize)),-0.1448643794)));
    
    //#line 77 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(powUp) = ((2.426369897) * (::x10::lang::MathNatives::pow(((x10_double) (problemSize)),-0.1435045369)));
    
    //#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(tauUserSel) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__15878 = ::x10aux::makeStringLit("--EO_tau"); strLit__15878; })),
                               ((1.0) + (((1.0) / (::x10::lang::MathNatives::log(((x10_double) (problemSize))))))));
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(pdfUserSel) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__15879 = ::x10aux::makeStringLit("--EO_pdf"); strLit__15879; })),
                               ((x10_int)-1));
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(selSecond) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                              (__extension__ ({ static ::x10::lang::String* strLit__15880 = ::x10aux::makeStringLit("--EO_selSec"); strLit__15880; })),
                              ((x10_int)1));
}

//#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::initVar(x10_long tCost, x10_boolean sLow) {
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::cpls::solver::SingleSolHeuristic::initVar();
    
    //#line 89 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(pdfUserSel), ((x10_int)-1))))
    {
        
        //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->FMGL(pdfS) = ((::x10aux::nullCheck(this->FMGL(random))->nextInt(
                               ((x10_int)2))) + (((x10_int)1)));
    } else {
        
        //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->FMGL(pdfS) = this->FMGL(pdfUserSel);
    }
    
    //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(tauUserSel), -1.0)))
    {
        
        //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)1))))
        {
            
            //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->FMGL(tau) = ((this->FMGL(powDown)) + (((((this->FMGL(powUp)) - (this->FMGL(powDown)))) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
        } else 
        //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)2))))
        {
            
            //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->FMGL(tau) = ((this->FMGL(expDown)) + (((((this->FMGL(expUp)) - (this->FMGL(expDown)))) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
        }
        
    } else {
        
        //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->FMGL(tau) = this->FMGL(tauUserSel);
    }
    
    //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)3))))
    {
        
        //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->initPDF(this->FMGL(gammaFnc));
    } else 
    //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)2))))
    {
        
        //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->initPDF(this->FMGL(expFnc));
    } else {
        
        //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->initPDF(this->FMGL(powFnc));
    }
    
}

//#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::initPDF(::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>* fnc) {
    
    //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_double sum = 0.0;
    
    //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_double y = 0.0;
    
    //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    {
        x10_int x;
        for (x = ((x10_int)1); ((((x10_long)(x))) <= (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
             x = ((x) + (((x10_int)1)))) {
            
            //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            y = ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::__apply(::x10aux::nullCheck(fnc), 
              this->FMGL(tau), ((x10_long)(x)));
            
            //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            ::x10aux::nullCheck(this->FMGL(pdf))->x10::lang::Rail< x10_double >::__set(
              ((x10_long)(x)), y);
            
            //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            sum = ((sum) + (y));
        }
    }
    
    //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    {
        x10_int x;
        for (x = ((x10_int)1); ((((x10_long)(x))) <= (this->::cpls::solver::SingleSolHeuristic::FMGL(problemSize)));
             x = ((x) + (((x10_int)1)))) {
            
            //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            ::x10::lang::Rail< x10_double >* a__15871 = this->FMGL(pdf);
            x10_long i__15872 = ((x10_long)(x));
            x10_double r__15873 = ((::x10aux::nullCheck(a__15871)->x10::lang::Rail< x10_double >::__apply(
                                      i__15872)) / (sum));
            ::x10aux::nullCheck(a__15871)->x10::lang::Rail< x10_double >::__set(
              i__15872, r__15873);
        }
    }
    
}

//#line 128 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
x10_long cpls::solver::EOSearch::search(::cpls::problem::ProblemGenericModel* problemModel,
                                        x10_long currentCost,
                                        x10_long bestCost,
                                        x10_int nIter) {
    
    //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->selFirstVar(this->FMGL(move), problemModel);
    
    //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long newCost = currentCost;
    
    //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if ((::x10aux::struct_equals(this->FMGL(selSecond), ((x10_int)0))))
    {
        
        //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        newCost = this->selSecondRandom(this->::cpls::solver::SingleSolHeuristic::FMGL(move),
                                        problemModel, currentCost);
    } else {
        
        //#line 134 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        newCost = this->selSecondMinConf(this->::cpls::solver::SingleSolHeuristic::FMGL(move),
                                         problemModel, currentCost);
    }
    
    //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::x10aux::nullCheck(problemModel)->swapVariables(this->::cpls::solver::SingleSolHeuristic::FMGL(move)->getFirst(),
                                                     this->::cpls::solver::SingleSolHeuristic::FMGL(move)->getSecond());
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
    
    //#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::x10aux::nullCheck(problemModel)->executedSwap(this->::cpls::solver::SingleSolHeuristic::FMGL(move)->getFirst(),
                                                    this->::cpls::solver::SingleSolHeuristic::FMGL(move)->getSecond());
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if (((newCost) < (bestCost))) {
        
        //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15888 = ::x10aux::makeStringLit("Costo (EOSearch) in "); strLit__15888; })), ::x10::lang::Place::_make(::x10aux::here)), (__extension__ ({ static ::x10::lang::String* strLit__15889 = ::x10aux::makeStringLit(". "); strLit__15889; }))), ::x10aux::class_cast< ::x10::lang::Runtime__Worker*>(::x10::lang::Thread::currentThread())), (__extension__ ({ static ::x10::lang::String* strLit__15890 = ::x10aux::makeStringLit(": "); strLit__15890; }))), newCost));
        
        //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__15891 = ::x10aux::makeStringLit(". Con variables: "); strLit__15891; })),
                                  ::x10aux::nullCheck(problemModel)->getVariables());
    }
    
    //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    return newCost;
    
}

//#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
x10_int cpls::solver::EOSearch::pdfPick() {
    
    //#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_double p = ::x10aux::nullCheck(this->FMGL(random))->nextDouble();
    
    //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_double fx;
    
    //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_int x = ((x10_int)0);
    
    //#line 151 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    while (((fx = ::x10aux::nullCheck(this->FMGL(pdf))->x10::lang::Rail< x10_double >::__apply(
                    ((x10_long)(x = ((x) + (((x10_int)1))))))) < (p)))
    {
        
        //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__15897 = ::x10aux::makeStringLit("Valor fx: "); strLit__15897; })), fx), (__extension__ ({ static ::x10::lang::String* strLit__15898 = ::x10aux::makeStringLit(". Valor p: "); strLit__15898; }))), p)));
        
        //#line 153 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        p = ((p) - (fx));
    }
    
    //#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    return ((x) - (((x10_int)1)));
    
}

//#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::selFirstVar(::cpls::util::MovePermutation* move,
                                         ::cpls::problem::ProblemGenericModel* problemModel) {
    
    //#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long i = ((x10_long)(((x10_int)-1)));
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long cost;
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long selIndex = ((x10_long)0ll);
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_boolean locMin = true;
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    while (((((x10_ulong) (i = ::x10aux::nullCheck(problemModel)->nextI(
                                 i)))) < (((x10_ulong) (::x10aux::nullCheck(problemModel)->getSize())))))
    {
        
        //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        cost = ::x10aux::nullCheck(problemModel)->costOnVariable(
                 i);
        
        //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        ::x10aux::nullCheck(this->FMGL(fit))->x10::lang::Rail< x10_long >::__set(
          i, ((((cost) << (0x3f & (x10_int)(((x10_long)10ll))))) | (i)));
        
        //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if (((cost) > (((x10_long)0ll)))) {
            
            //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            locMin = false;
        }
        
    }
    
    //#line 28 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< x10_long >* a__15876 = this->FMGL(fit);
    ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int>* cmp__15877 =
      this->FMGL(cmp);
    
    //#line 29 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< x10_long >(a__15876, ((x10_long)0ll),
                                              (((x10_long)(::x10aux::nullCheck(a__15876)->FMGL(size))) - (((x10_long)1ll))),
                                              cmp__15877);
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if (locMin) {
        ::cpls::solver::EOSearch* this__15875 = this;
        
        //#line 242 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        ::x10::lang::Rail< x10_int >* solverState__15874 =
          ::x10aux::nullCheck(this__15875)->createSolverState();
        
    }
    
    //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_int index = this->pdfPick();
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long sVar = ((::x10aux::nullCheck(this->FMGL(fit))->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)(index)))) & (((x10_long)1023ll)));
    
    //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long sCost = ((::x10aux::nullCheck(this->FMGL(fit))->x10::lang::Rail< x10_long >::__apply(
                         ((x10_long)(index)))) >> (0x3f & (x10_int)(((x10_long)10ll))));
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_int nSameFit = ((x10_int)0);
    
    //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < (::x10aux::nullCheck(problemModel)->getSize()));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            x10_long cCost = ((::x10aux::nullCheck(this->FMGL(fit))->x10::lang::Rail< x10_long >::__apply(
                                 ((x10_long)(k)))) >> (0x3f & (x10_int)(((x10_long)10ll))));
            
            //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            if (((cCost) < (sCost))) {
                
                //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
                break;
            }
            
            //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            if (((::x10aux::struct_equals(cCost, sCost)) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                           nSameFit = ((nSameFit) + (((x10_int)1)))),
                                         ((x10_int)0)))))
            {
                
                //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
                selIndex = ((::x10aux::nullCheck(this->FMGL(fit))->x10::lang::Rail< x10_long >::__apply(
                               ((x10_long)(k)))) & (((x10_long)1023ll)));
            }
            
        }
    }
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(move)->setFirst(selIndex);
}

//#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
x10_long cpls::solver::EOSearch::selSecondMinConf(::cpls::util::MovePermutation* move,
                                                  ::cpls::problem::ProblemGenericModel* problemModel,
                                                  x10_long currentCost) {
    
    //#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long j;
    
    //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long cost;
    
    //#line 208 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long second = ((x10_long)0ll);
    
    //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_int nSameMin = ((x10_int)0);
    
    //#line 210 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long minCost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long first = this->FMGL(move)->getFirst();
    
    //#line 212 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    {
        for (j = ((x10_long)0ll); ((j) < (::x10aux::nullCheck(problemModel)->getSize()));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            if ((::x10aux::struct_equals(first, j))) {
                continue;
            }
            
            //#line 214 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            cost = ::x10aux::nullCheck(problemModel)->costIfSwap(
                     currentCost, j, first);
            
            //#line 215 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            if (((cost) < (minCost))) {
                
                //#line 216 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
                minCost = cost;
                
                //#line 217 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
                second = j;
                
                //#line 218 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
                nSameMin = ((x10_int)1);
            } else 
            //#line 219 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            if (((::x10aux::struct_equals(cost, minCost)) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(random))->nextInt(
                                           nSameMin = ((nSameMin) + (((x10_int)1)))),
                                         ((x10_int)0)))))
            {
                
                //#line 220 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
                second = j;
            }
            
        }
    }
    
    //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(move)->setSecond(second);
    
    //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    return minCost;
    
}

//#line 229 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
x10_long cpls::solver::EOSearch::selSecondRandom(::cpls::util::MovePermutation* move,
                                                 ::cpls::problem::ProblemGenericModel* problemModel,
                                                 x10_long currentCost) {
    
    //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long randomJ = ::x10aux::nullCheck(this->FMGL(random))->nextLong(
                         ::x10aux::nullCheck(problemModel)->getSize());
    
    //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_long newCost = ::x10aux::nullCheck(problemModel)->costIfSwap(
                         currentCost, randomJ, this->FMGL(move)->getFirst());
    
    //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->FMGL(move)->setSecond(randomJ);
    
    //#line 233 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    return newCost;
    
}

//#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::onLocMin() {
    
    //#line 242 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::x10::lang::Rail< x10_int >* solverState = this->createSolverState();
    
}

//#line 253 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
::x10::lang::Rail< x10_int >* cpls::solver::EOSearch::createSolverState(
  ) {
    
    //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::x10::lang::Rail< x10_int >* eoState = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                                ((x10_int)-1));
    
    //#line 255 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    eoState->x10::lang::Rail< x10_int >::__set(((x10_long)0ll),
                                               this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType));
    
    //#line 256 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    eoState->x10::lang::Rail< x10_int >::__set(((x10_long)1ll),
                                               this->FMGL(pdfS));
    
    //#line 257 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    eoState->x10::lang::Rail< x10_int >::__set(((x10_long)2ll),
                                               ::x10::lang::DoubleNatives::toInt(((this->FMGL(tau)) * (1000.0))));
    
    //#line 258 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    return eoState;
    
}

//#line 265 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::processSolverState(::x10::lang::Rail< x10_int >* state) {
    
    //#line 267 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    x10_int inSolverType = ::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                             ((x10_long)0ll));
    
    //#line 268 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    if ((::x10aux::struct_equals(inSolverType, this->::cpls::solver::SingleSolHeuristic::FMGL(mySolverType))))
    {
        
        //#line 269 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        x10_int inpdf = ::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)1ll));
        
        //#line 270 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        x10_double intau = ((((x10_double) (::x10aux::nullCheck(state)->x10::lang::Rail< x10_int >::__apply(
                                              ((x10_long)2ll))))) / (1000.0));
        
        //#line 271 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), inpdf)))
        {
            
            //#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->FMGL(tau) = intau;
        } else 
        //#line 274 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)1))))
        {
            
            //#line 275 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->FMGL(tau) = ((this->FMGL(powDown)) + (((((this->FMGL(powUp)) - (this->FMGL(powDown)))) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
        } else 
        //#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)2))))
        {
            
            //#line 277 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->FMGL(tau) = ((this->FMGL(expDown)) + (((((this->FMGL(expUp)) - (this->FMGL(expDown)))) * (::x10aux::nullCheck(this->FMGL(random))->nextDouble()))));
        }
        
        //#line 280 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)3))))
        {
            
            //#line 281 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->initPDF(this->FMGL(gammaFnc));
        } else 
        //#line 282 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        if ((::x10aux::struct_equals(this->FMGL(pdfS), ((x10_int)2))))
        {
            
            //#line 283 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
            this->initPDF(this->FMGL(expFnc));
        }
        
        //#line 284 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
        this->initPDF(this->FMGL(powFnc));
    }
    
}

//#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
::cpls::solver::EOSearch* cpls::solver::EOSearch::cpls__solver__EOSearch____this__cpls__solver__EOSearch(
  ) {
    return this;
    
}
void cpls::solver::EOSearch::__fieldInitializers_cpls_solver_EOSearch(
  ) {
    this->FMGL(pdf) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(fit) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cmp) = reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int> >(sizeof(cpls_solver_EOSearch__closure__1)))cpls_solver_EOSearch__closure__1()));
    this->FMGL(powFnc) = reinterpret_cast< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(sizeof(cpls_solver_EOSearch__closure__2)))cpls_solver_EOSearch__closure__2()));
    this->FMGL(expFnc) = reinterpret_cast< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(sizeof(cpls_solver_EOSearch__closure__3)))cpls_solver_EOSearch__closure__3()));
    this->FMGL(gammaFnc) = reinterpret_cast< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >(sizeof(cpls_solver_EOSearch__closure__4)))cpls_solver_EOSearch__closure__4()));
    this->FMGL(tauUserSel) = 0.0;
    this->FMGL(tau) = 0.0;
    this->FMGL(pdfUserSel) = ((x10_int)0);
    this->FMGL(pdfS) = ((x10_int)1);
    this->FMGL(selSecond) = ((x10_int)0);
    this->FMGL(expDown) = 0.0;
    this->FMGL(expUp) = 0.0;
    this->FMGL(powDown) = 0.0;
    this->FMGL(powUp) = 0.0;
}
const ::x10aux::serialization_id_t cpls::solver::EOSearch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::EOSearch::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::EOSearch::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_serialize_body(buf);
    buf.write(this->FMGL(pdf));
    buf.write(this->FMGL(fit));
    buf.write(this->FMGL(cmp));
    buf.write(this->FMGL(powFnc));
    buf.write(this->FMGL(expFnc));
    buf.write(this->FMGL(gammaFnc));
    buf.write(this->FMGL(tauUserSel));
    buf.write(this->FMGL(tau));
    buf.write(this->FMGL(pdfUserSel));
    buf.write(this->FMGL(pdfS));
    buf.write(this->FMGL(selSecond));
    buf.write(this->FMGL(expDown));
    buf.write(this->FMGL(expUp));
    buf.write(this->FMGL(powDown));
    buf.write(this->FMGL(powUp));
    
}

::x10::lang::Reference* ::cpls::solver::EOSearch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::EOSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::EOSearch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_deserialize_body(buf);
    FMGL(pdf) = buf.read< ::x10::lang::Rail< x10_double >*>();
    FMGL(fit) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(cmp) = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int>*>();
    FMGL(powFnc) = buf.read< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>*>();
    FMGL(expFnc) = buf.read< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>*>();
    FMGL(gammaFnc) = buf.read< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>*>();
    FMGL(tauUserSel) = buf.read<x10_double>();
    FMGL(tau) = buf.read<x10_double>();
    FMGL(pdfUserSel) = buf.read<x10_int>();
    FMGL(pdfS) = buf.read<x10_int>();
    FMGL(selSecond) = buf.read<x10_int>();
    FMGL(expDown) = buf.read<x10_double>();
    FMGL(expUp) = buf.read<x10_double>();
    FMGL(powDown) = buf.read<x10_double>();
    FMGL(powUp) = buf.read<x10_double>();
}

::x10aux::RuntimeType cpls::solver::EOSearch::rtt;
void cpls::solver::EOSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.EOSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_2<x10_long, x10_long, x10_int>::itable<cpls_solver_EOSearch__closure__1>cpls_solver_EOSearch__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_EOSearch__closure__1::__apply, &cpls_solver_EOSearch__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_EOSearch__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int> >, &cpls_solver_EOSearch__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_EOSearch__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_EOSearch__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::itable<cpls_solver_EOSearch__closure__2>cpls_solver_EOSearch__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_EOSearch__closure__2::__apply, &cpls_solver_EOSearch__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_EOSearch__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >, &cpls_solver_EOSearch__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_EOSearch__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_EOSearch__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::itable<cpls_solver_EOSearch__closure__3>cpls_solver_EOSearch__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_EOSearch__closure__3::__apply, &cpls_solver_EOSearch__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_EOSearch__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >, &cpls_solver_EOSearch__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_EOSearch__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_EOSearch__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>::itable<cpls_solver_EOSearch__closure__4>cpls_solver_EOSearch__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_EOSearch__closure__4::__apply, &cpls_solver_EOSearch__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_EOSearch__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double> >, &cpls_solver_EOSearch__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_EOSearch__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_EOSearch__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of EOSearch */
/*************************************************/
