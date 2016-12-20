/*************************************************/
/* START of Main */
#include <cpls/Main.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/Main__COPModelProblemFactory.h>
#include <cpls/NodeConfig.h>
#include <cpls/NodeInstancer.h>
#include <x10/lang/Place.h>
#include <x10/lang/Boolean.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <cpls/CPLSOptionsEnum__SupportedProblems.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_MAIN__CLOSURE__1_CLOSURE
#define CPLS_MAIN__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105525 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__105525; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__1* storage = ::x10aux::alloc_z<cpls_Main__closure__1>();
        buf.record_reference(storage);
        cpls_Main__closure__1* this_ = new (storage) cpls_Main__closure__1();
        return this_;
    }
    
    cpls_Main__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:31";
    }

};

#endif // CPLS_MAIN__CLOSURE__1_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__2_CLOSURE
#define CPLS_MAIN__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105533 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__105533; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__2* storage = ::x10aux::alloc_z<cpls_Main__closure__2>();
        buf.record_reference(storage);
        cpls_Main__closure__2* this_ = new (storage) cpls_Main__closure__2();
        return this_;
    }
    
    cpls_Main__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:34";
    }

};

#endif // CPLS_MAIN__CLOSURE__2_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__3_CLOSURE
#define CPLS_MAIN__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105543 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__105543; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__3* storage = ::x10aux::alloc_z<cpls_Main__closure__3>();
        buf.record_reference(storage);
        cpls_Main__closure__3* this_ = new (storage) cpls_Main__closure__3();
        return this_;
    }
    
    cpls_Main__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:37";
    }

};

#endif // CPLS_MAIN__CLOSURE__3_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__4_CLOSURE
#define CPLS_MAIN__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105555 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__105555; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__4* storage = ::x10aux::alloc_z<cpls_Main__closure__4>();
        buf.record_reference(storage);
        cpls_Main__closure__4* this_ = new (storage) cpls_Main__closure__4();
        return this_;
    }
    
    cpls_Main__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:40";
    }

};

#endif // CPLS_MAIN__CLOSURE__4_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__5_CLOSURE
#define CPLS_MAIN__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105565 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__105565; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__5* storage = ::x10aux::alloc_z<cpls_Main__closure__5>();
        buf.record_reference(storage);
        cpls_Main__closure__5* this_ = new (storage) cpls_Main__closure__5();
        return this_;
    }
    
    cpls_Main__closure__5() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:43";
    }

};

#endif // CPLS_MAIN__CLOSURE__5_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__6_CLOSURE
#define CPLS_MAIN__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105571 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__105571; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__6* storage = ::x10aux::alloc_z<cpls_Main__closure__6>();
        buf.record_reference(storage);
        cpls_Main__closure__6* this_ = new (storage) cpls_Main__closure__6();
        return this_;
    }
    
    cpls_Main__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:46";
    }

};

#endif // CPLS_MAIN__CLOSURE__6_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__7_CLOSURE
#define CPLS_MAIN__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105573 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__105573; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__7* storage = ::x10aux::alloc_z<cpls_Main__closure__7>();
        buf.record_reference(storage);
        cpls_Main__closure__7* this_ = new (storage) cpls_Main__closure__7();
        return this_;
    }
    
    cpls_Main__closure__7() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:49";
    }

};

#endif // CPLS_MAIN__CLOSURE__7_CLOSURE
#ifndef CPLS_MAIN__CLOSURE__8_CLOSURE
#define CPLS_MAIN__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_Main__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__105581 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__105581; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_Main__closure__8* storage = ::x10aux::alloc_z<cpls_Main__closure__8>();
        buf.record_reference(storage);
        cpls_Main__closure__8* this_ = new (storage) cpls_Main__closure__8();
        return this_;
    }
    
    cpls_Main__closure__8() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10:52";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::ParamManager* opts = ::cpls::ParamManager::_make(args);
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__105488 = ::x10aux::makeStringLit("-p"); strLit__105488; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__105489 = ::x10aux::makeStringLit("MSP"); strLit__105489; })));
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__105496 = ::x10aux::makeStringLit("-s"); strLit__105496; })),
                      ((x10_long)10ll));
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPModelProblemFactory::make(
                                                           problem,
                                                           ((x10_long)(((x10_int) (size)))));
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__105499 = ::x10aux::makeStringLit("-sl"); strLit__105499; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__105500 = ::x10aux::makeStringLit("AS"); strLit__105500; })));
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int heuristic = ::cpls::Main::heuristicDetect(heuristicString);
    
    //#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::cpls::NodeConfig* >* configCPLS =
      ::cpls::Main::buildConfig();
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(problemModel, configCPLS);
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int expPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__105511 = ::x10aux::makeStringLit("-N"); strLit__105511; })),
                           ((x10_int)1));
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int nTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(expPerTeam));
    
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__105522 = ::x10aux::makeStringLit("MSP"); strLit__105522; }))))
    {
        
        //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)();
    } else 
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105532 = ::x10aux::makeStringLit("CAP"); strLit__105532; }))))
    {
        
        //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)();
    } else 
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105537 = ::x10aux::makeStringLit("AIP"); strLit__105537; }))))
    {
        
        //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)();
    } else 
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105548 = ::x10aux::makeStringLit("LNP"); strLit__105548; }))))
    {
        
        //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)();
    } else 
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105562 = ::x10aux::makeStringLit("NPP"); strLit__105562; }))))
    {
        
        //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__get)();
    } else 
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105570 = ::x10aux::makeStringLit("SMP"); strLit__105570; }))))
    {
        
        //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)();
    } else 
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105572 = ::x10aux::makeStringLit("HRP"); strLit__105572; }))))
    {
        
        //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)();
    } else 
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__105580 = ::x10aux::makeStringLit("QAP"); strLit__105580; }))))
    {
        
        //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)();
    } else {
        
        //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__get)();
        
        //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__105586 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__105586; }))));
    }
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    return problemParam;
    
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
x10_int cpls::Main::heuristicDetect(::x10::lang::String* solverIn) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int solParam;
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__105589 = ::x10aux::makeStringLit("AS"); strLit__105589; }))))
    {
        
        //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        solParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)();
    } else 
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__105590 = ::x10aux::makeStringLit("EO"); strLit__105590; }))))
    {
        
        //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        solParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)();
    } else 
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__105591 = ::x10aux::makeStringLit("RoTS"); strLit__105591; }))))
    {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        solParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)();
    } else 
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__105592 = ::x10aux::makeStringLit("HY"); strLit__105592; }))))
    {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        solParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__get)();
    } else {
        
        //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        solParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__get)();
    }
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    return solParam;
    
}

//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
::x10::lang::Rail< ::cpls::NodeConfig* >* cpls::Main::buildConfig(
  ) {
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::cpls::NodeConfig* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
::cpls::Main* cpls::Main::cpls__Main____this__cpls__Main(
  ) {
    return this;
    
}
void cpls::Main::_constructor() {
    this->cpls::Main::__fieldInitializers_cpls_Main();
}
::cpls::Main* cpls::Main::_make() {
    ::cpls::Main* this_ = new (::x10aux::alloc_z< ::cpls::Main>()) ::cpls::Main();
    this_->_constructor();
    return this_;
}


void cpls::Main::__fieldInitializers_cpls_Main() {
 
}
const ::x10aux::serialization_id_t cpls::Main::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::Main::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::Main::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::cpls::Main::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::Main* this_ = new (::x10aux::alloc_z< ::cpls::Main>()) ::cpls::Main();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::Main::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType cpls::Main::rtt;
void cpls::Main::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.Main",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__1>cpls_Main__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__1::__apply, &cpls_Main__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__2>cpls_Main__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__2::__apply, &cpls_Main__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__3>cpls_Main__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__3::__apply, &cpls_Main__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__4>cpls_Main__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__4::__apply, &cpls_Main__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__5>cpls_Main__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__5::__apply, &cpls_Main__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__5::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__6>cpls_Main__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__6::__apply, &cpls_Main__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__6::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__7>cpls_Main__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__7::__apply, &cpls_Main__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__7::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_Main__closure__8>cpls_Main__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_Main__closure__8::__apply, &cpls_Main__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_Main__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_Main__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_Main__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_Main__closure__8::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Main */
/*************************************************/
/*************************************************/
/* START of Main$COPModelProblemFactory */
#include <cpls/Main__COPModelProblemFactory.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/CPLSOptionsEnum__SupportedProblems.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class Main__COPModelProblemFactory_ibox0 : public ::x10::lang::IBox< ::cpls::Main__COPModelProblemFactory> {
public:
    static ::x10::lang::Any::itable< Main__COPModelProblemFactory_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< Main__COPModelProblemFactory_ibox0 >  Main__COPModelProblemFactory_ibox0::itable(&Main__COPModelProblemFactory_ibox0::equals, &Main__COPModelProblemFactory_ibox0::hashCode, &Main__COPModelProblemFactory_ibox0::toString, &Main__COPModelProblemFactory_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::Main__COPModelProblemFactory >  cpls::Main__COPModelProblemFactory::_itable_0(&cpls::Main__COPModelProblemFactory::equals, &cpls::Main__COPModelProblemFactory::hashCode, &cpls::Main__COPModelProblemFactory::toString, &cpls::Main__COPModelProblemFactory::typeName);
::x10aux::itable_entry cpls::Main__COPModelProblemFactory::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::Main__COPModelProblemFactory::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::Main__COPModelProblemFactory")};
::x10aux::itable_entry cpls::Main__COPModelProblemFactory::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::Main__COPModelProblemFactory_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::Main__COPModelProblemFactory")};

//#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPModelProblemFactory::make(
  x10_int kind, x10_long size) {
    
    //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    switch (kind) {
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 1/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)()*/: ;
        
        //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 2/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)()*/: ;
        
        //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 3/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)()*/: ;
        
        //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 4/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)()*/: ;
        
        //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 6/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)()*/: ;
        
        //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 7/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()*/: ;
        
        //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        case 8/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)()*/: ;
        
        //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
        default: ;
        
    }
    
    //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
    return ::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPModelProblemFactory::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPModelProblemFactory::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__105667 = ::x10aux::makeStringLit("struct cpls.Main.COPModelProblemFactory"); strLit__105667; }));
    
}
x10_boolean cpls::Main__COPModelProblemFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPModelProblemFactory>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::Main__COPModelProblemFactory::equals(::x10aux::class_cast< ::cpls::Main__COPModelProblemFactory>(other));
    
}
x10_boolean cpls::Main__COPModelProblemFactory::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPModelProblemFactory>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::Main__COPModelProblemFactory::_struct_equals(::x10aux::class_cast< ::cpls::Main__COPModelProblemFactory>(other));
    
}

void ::cpls::Main__COPModelProblemFactory::_serialize(::cpls::Main__COPModelProblemFactory this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::Main__COPModelProblemFactory::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::Main__COPModelProblemFactory::rtt;
void cpls::Main__COPModelProblemFactory::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.Main.COPModelProblemFactory",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Main$COPModelProblemFactory */
/*************************************************/
