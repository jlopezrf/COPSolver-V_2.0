/*************************************************/
/* START of Main */
#include <cpls/Main.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Long.h>
#include <cpls/ParamManager.h>
#include <cpls/entities/CPLSConfig.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Int.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/Main__COPProblemModelFactory.h>
#include <x10/lang/Place.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Double.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/CPLSOptionsEnum__NodeRoles.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/lang/System.h>
#include <cpls/NodeInstancer.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <cpls/CPLSOptionsEnum__SupportedProblems.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32360 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__32360; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:247";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32362 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__32362; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:250";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32364 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__32364; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:253";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32366 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__32366; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:256";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32368 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__32368; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:259";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32370 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__32370; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:262";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32372 = ::x10aux::makeStringLit("HRP Problem"); strLit__32372; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:265";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32374 = ::x10aux::makeStringLit("QAP Problem"); strLit__32374; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10:268";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< x10_long >* problemParams = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll),
                                                                                        ((x10_long)-1ll));
    
    //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::ParamManager* opts = ::cpls::ParamManager::_make(args);
    
    //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::CPLSConfig* configCPLS = ::cpls::entities::CPLSConfig::_make();
    
    //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__32279 = ::x10aux::makeStringLit("-p"); strLit__32279; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__32280 = ::x10aux::makeStringLit("QAP"); strLit__32280; })));
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPProblemModelFactory::make(
                                                           opts,
                                                           problem,
                                                           problemParams);
    
    //#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setProblemModel(problemModel);
    
    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__32281 = ::x10aux::makeStringLit("-N"); strLit__32281; })),
                             ((x10_int)1));
    
    //#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int numberOfTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam));
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__32282 = ::x10aux::makeStringLit("-sl"); strLit__32282; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__32283 = ::x10aux::makeStringLit("AS"); strLit__32283; })));
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__32284 = ::x10aux::makeStringLit("-ce"); strLit__32284; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long interTeamCommTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__32285 = ::x10aux::makeStringLit("-I"); strLit__32285; })),
                                   ((x10_long)0ll));
    
    //#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_double affectedPer = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__32286 = ::x10aux::makeStringLit("-A"); strLit__32286; })),
                               1.0);
    
    //#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long iniDelay = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__32287 = ::x10aux::makeStringLit("-W"); strLit__32287; })),
                          ((x10_long)0ll));
    
    //#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__32288 = ::x10aux::makeStringLit("-v"); strLit__32288; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int changeProb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32289 = ::x10aux::makeStringLit("-C"); strLit__32289; })),
                           ((x10_int)100));
    
    //#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int divOption = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__32290 = ::x10aux::makeStringLit("O"); strLit__32290; })),
                          ((x10_int)0));
    
    //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setVerify(verify);
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIsThereAMasterNode(
      modeIndicator);
    
    //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* masterHeuristicAndOthers;
    
    //#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(heuristicString)->x10::lang::String::indexOf(
                                    ((x10_char)'*')), ((x10_int)-1))))
    {
        
        //#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        masterHeuristicAndOthers = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32291 = ::x10aux::makeStringLit("*"); strLit__32291; })), heuristicString);
        
        //#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuristicString = ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                            ((x10_long)1ll));
        
        //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::entities::NodeConfig* masterConfig = ::cpls::entities::NodeConfig::_make(::cpls::Main::whichHeuristicInt(
                                                                                           ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                             ((x10_long)0ll))),
                                                                                         ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)());
        
        //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setHeuristic(::cpls::Main::whichHeuristicInt(
                                                          ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                            ((x10_long)0ll))));
        
        //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setNumberOfTeams(
          numberOfTeams);
        
        //#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setNodesPerTeam(
          nodesPerTeam);
        
        //#line 52 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setTeamId(((x10_int)-1));
        
        //#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setInterTeamCommTime(
          interTeamCommTime);
        
        //#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setAffectedPer(
          affectedPer);
        
        //#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setIniDelay(iniDelay);
        
        //#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setVerify(verify);
        
        //#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setChangeProb(
          changeProb);
        
        //#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(masterConfig)->setDiversificationOption(
          divOption);
        
        //#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(configCPLS)->setMasterConfig(
          masterConfig);
    } else 
    //#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (modeIndicator) {
        
        //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32295 = ::x10aux::makeStringLit("Debe indicar una heur\355stica para el nodo master"); strLit__32295; }))));
    }
    
    //#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::cpls::Main::heuristicsAndRolesDefinition(heuristicString,
                                                 numberOfTeams,
                                                 nodesPerTeam,
                                                 modeIndicator,
                                                 ((x10_int) (interTeamCommTime)),
                                                 affectedPer,
                                                 iniDelay,
                                                 verify, changeProb,
                                                 divOption);
    
    //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((modeIndicator && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                    ((((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))) + (((x10_long)1ll)))))))
    {
        
        //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32296 = ::x10aux::makeStringLit("Inconsistencia en el numero total de nodos"); strLit__32296; }))));
        
        //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        return;
    } else 
    //#line 77 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!(modeIndicator) && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                       ((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))))))
    {
        
        //#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32297 = ::x10aux::makeStringLit("Inconsistencia en el numero total de nodos"); strLit__32297; }))));
        
        //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        return;
    }
    
    //#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setConfigNodes(nodeConfigs);
    
    //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::PoolConfig* cplsPoolConfig = ::cpls::entities::PoolConfig::_make(::x10aux::nullCheck(problemModel)->getSize(),
                                                                                       ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                         (__extension__ ({ static ::x10::lang::String* strLit__32298 = ::x10aux::makeStringLit("P_lm"); strLit__32298; })),
                                                                                         ((x10_int)4)),
                                                                                       ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                         (__extension__ ({ static ::x10::lang::String* strLit__32299 = ::x10aux::makeStringLit("P_lmM"); strLit__32299; })),
                                                                                         ((x10_int)0)),
                                                                                       ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                         (__extension__ ({ static ::x10::lang::String* strLit__32300 = ::x10aux::makeStringLit("P_lmD"); strLit__32300; })),
                                                                                         0.5));
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::PoolConfig* teamsPoolConfig = ::cpls::entities::PoolConfig::_make(::x10aux::nullCheck(problemModel)->getSize(),
                                                                                        ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                          (__extension__ ({ static ::x10::lang::String* strLit__32301 = ::x10aux::makeStringLit("P_e"); strLit__32301; })),
                                                                                          ((x10_int)4)),
                                                                                        ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                          (__extension__ ({ static ::x10::lang::String* strLit__32302 = ::x10aux::makeStringLit("P_eM"); strLit__32302; })),
                                                                                          ((x10_int)0)),
                                                                                        ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                          (__extension__ ({ static ::x10::lang::String* strLit__32303 = ::x10aux::makeStringLit("P_eD"); strLit__32303; })),
                                                                                          0.5));
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setCPLSPoolConfig(cplsPoolConfig);
    
    //#line 89 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTeamsPoolConfig(teamsPoolConfig);
    
    //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setSeed(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__32304 = ::x10aux::makeStringLit("-S"); strLit__32304; })),
                                               ::x10::lang::System::nanoTime()));
    
    //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTimesPerInstance(
      ((x10_long)(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__32305 = ::x10aux::makeStringLit("-b"); strLit__32305; })),
                    ((x10_int)10)))));
    
    //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int outFormat = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__32306 = ::x10aux::makeStringLit("-of"); strLit__32306; })),
                          ((x10_int)1));
    
    //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long costFromF = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__32307 = ::x10aux::makeStringLit("-tf"); strLit__32307; })),
                           ((x10_long)0ll));
    
    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int tCostFromCL = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__32308 = ::x10aux::makeStringLit("-tc"); strLit__32308; })),
                            ((x10_int)0));
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int testNb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                       (__extension__ ({ static ::x10::lang::String* strLit__32309 = ::x10aux::makeStringLit("-b"); strLit__32309; })),
                       ((x10_int)10));
    
    //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long c = ((x10_long)0ll);
    
    //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean sl = false;
    
    //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((::x10aux::struct_equals(costFromF, ((x10_long)0ll))))
    {
        
        //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        if (((((x10_long)(tCostFromCL))) >= (((x10_long)0ll))))
        {
            
            //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            c = ((x10_long)(tCostFromCL));
            
            //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            sl = false;
            
            //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32310 = ::x10aux::makeStringLit("Target from CL: lower or equal than "); strLit__32310; })), c)));
        } else {
            
            //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            c = ((((x10_long)(tCostFromCL))) * (((x10_long)-1ll)));
            
            //#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            sl = true;
            
            //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32311 = ::x10aux::makeStringLit("Target from CL: strictly lower than "); strLit__32311; })), c)));
        }
        
    } else {
        
        //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        sl = ((costFromF) < (((x10_long)0ll)));
        
        //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        if (((::x10aux::struct_equals(costFromF, ((x10_long)1ll))) ||
            (::x10aux::struct_equals(costFromF, ((x10_long)-1ll)))))
        {
            
            //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)1ll));
        } else {
            
            //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)2ll));
        }
        
        //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32314 = ::x10aux::makeStringLit("Target from file: "); strLit__32314; })), sl
            ? ((__extension__ ({ static ::x10::lang::String* strLit__32315 = ::x10aux::makeStringLit("strictly lower than "); strLit__32315; })))
            : ((__extension__ ({ static ::x10::lang::String* strLit__32316 = ::x10aux::makeStringLit(" lower or equal than "); strLit__32316; })))), c)));
    }
    
    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long tCost = ((c) >= (((x10_long)0ll))) ? (c) : (((x10_long)0ll));
    
    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean sLow = sl;
    
    //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::Main::printHeader(outFormat, problem);
    
    //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTargetCost(tCost);
    
    //#line 133 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setStrictLow(sLow);
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMinDistance(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__32317 = ::x10aux::makeStringLit("-D"); strLit__32317; })),
                                                      0.3));
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(configCPLS, opts);
}

//#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::Main::heuristicsAndRolesDefinition(
  ::x10::lang::String* solverIn, x10_int numberOfTeams, x10_int nodesPerTeam,
  x10_boolean modeIndicator, x10_int interTeamCommTime, x10_double affectedPer,
  x10_long iniDelay, x10_boolean verify, x10_int changeProb,
  x10_int divOption) {
    
    //#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::x10::array::Array_2< ::cpls::entities::NodeConfig*>::_make(((x10_long)(numberOfTeams)),
                                                                   ((x10_long)(nodesPerTeam)),
                                                                   ::cpls::entities::NodeConfig::_make());
    
    //#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teamsWithMultiplicity;
    
    //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(solverIn)->x10::lang::String::indexOf(
                                    ((x10_char)'-')), ((x10_int)-1))))
    {
        
        //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32318 = ::x10aux::makeStringLit("-"); strLit__32318; })), solverIn);
    } else {
        
        //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                 solverIn);
    }
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teams;
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodesWithMultiplicity;
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodes;
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* heuristic;
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int multiplicityOfTeam;
    
    //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int multiplicityOfNode;
    
    //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int counter = ((x10_int)0);
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int k = ((x10_int)0);
    x10_int l = ((x10_int)0);
    x10_int m = ((x10_int)0);
    x10_int n = ((x10_int)0);
    x10_int i = ((x10_int)0);
    x10_int j = ((x10_int)0);
    
    //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (((!::x10aux::struct_equals(teamsWithMultiplicity,
                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        (((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))) > (((x10_long)0ll)))))
    {
        
        //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        {
            for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))));
                 k = ((k) + (((x10_int)1)))) {
                
                //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                    ((x10_long)(k))))->x10::lang::String::indexOf(
                                                ((x10_char)'/')),
                                              ((x10_int)-1))))
                {
                    
                    //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32320 = ::x10aux::makeStringLit("/"); strLit__32320; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                } else {
                    
                    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                    ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                      ((x10_long)(k)), ::x10::lang::String::__plus(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                     ((x10_long)(k))), (__extension__ ({ static ::x10::lang::String* strLit__32323 = ::x10aux::makeStringLit("/1"); strLit__32323; }))));
                    
                    //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32324 = ::x10aux::makeStringLit("/"); strLit__32324; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                }
                
                //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                if (((!::x10aux::struct_equals(teams, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                    (((x10_long)(::x10aux::nullCheck(teams)->FMGL(size))) > (((x10_long)0ll)))))
                {
                    
                    //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                    nodesWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32326 = ::x10aux::makeStringLit(","); strLit__32326; })), ::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                               ((x10_long)0ll)));
                    
                    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                    multiplicityOfTeam = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                             ((x10_long)1ll)));
                    
                    //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                    {
                        for (l = ((x10_int)0); ((l) < (multiplicityOfTeam));
                             l = ((l) + (((x10_int)1)))) {
                            
                            //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                            {
                                for (m = ((x10_int)0); ((((x10_long)(m))) < ((x10_long)(::x10aux::nullCheck(nodesWithMultiplicity)->FMGL(size))));
                                     m = ((m) + (((x10_int)1))))
                                {
                                    
                                    //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                    if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                        ((x10_long)(m))))->x10::lang::String::indexOf(
                                                                    (__extension__ ({ static ::x10::lang::String* strLit__32330 = ::x10aux::makeStringLit("x"); strLit__32330; }))),
                                                                  ((x10_int)-1))))
                                    {
                                        
                                        //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32331 = ::x10aux::makeStringLit("x"); strLit__32331; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    } else {
                                        
                                        //#line 185 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                        ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                                          ((x10_long)(m)),
                                          ::x10::lang::String::__plus(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                        ((x10_long)(m))), (__extension__ ({ static ::x10::lang::String* strLit__32334 = ::x10aux::makeStringLit("x1"); strLit__32334; }))));
                                        
                                        //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__32335 = ::x10aux::makeStringLit("x"); strLit__32335; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    }
                                    
                                    //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                    multiplicityOfNode = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                             ((x10_long)1ll)));
                                    
                                    //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                    heuristic = ::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                  ((x10_long)0ll));
                                    
                                    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                    {
                                        for (n = ((x10_int)0);
                                             ((n) < (multiplicityOfNode));
                                             n = ((n) + (((x10_int)1))))
                                        {
                                            
                                            //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            i = ((counter) / ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            j = ((counter) % ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            if ((::x10aux::struct_equals(((counter) % ::x10aux::zeroCheck(nodesPerTeam)),
                                                                         ((x10_int)0))))
                                            {
                                                
                                                //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                                ::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__set(
                                                  ((x10_long)(i)),
                                                  ((x10_long)(j)),
                                                  ::cpls::entities::NodeConfig::_make(::cpls::Main::whichHeuristicInt(
                                                                                        heuristic),
                                                                                      ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__get)()));
                                            } else {
                                                
                                                //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                                ::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__set(
                                                  ((x10_long)(i)),
                                                  ((x10_long)(j)),
                                                  ::cpls::entities::NodeConfig::_make(::cpls::Main::whichHeuristicInt(
                                                                                        heuristic),
                                                                                      ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__get)()));
                                            }
                                            
                                            //#line 199 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setHeuristic(
                                              ::cpls::Main::whichHeuristicInt(
                                                heuristic));
                                            
                                            //#line 200 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setNumberOfTeams(
                                              numberOfTeams);
                                            
                                            //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setNodesPerTeam(
                                              nodesPerTeam);
                                            
                                            //#line 202 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setTeamId(
                                              i);
                                            
                                            //#line 203 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setInterTeamCommTime(
                                              ((x10_long)(interTeamCommTime)));
                                            
                                            //#line 204 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setAffectedPer(
                                              affectedPer);
                                            
                                            //#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setIniDelay(
                                              iniDelay);
                                            
                                            //#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setVerify(
                                              verify);
                                            
                                            //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setChangeProb(
                                              changeProb);
                                            
                                            //#line 208 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setDiversificationOption(
                                              divOption);
                                            
                                            //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
                                            counter = ((counter) + (((x10_int)1)));
                                        }
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    
                }
                
            }
        }
        
    }
    
    //#line 241 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    return nodeConfigs;
    
}

//#line 244 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__32359 = ::x10aux::makeStringLit("MSP"); strLit__32359; }))))
    {
        
        //#line 247 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 248 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)();
    } else 
    //#line 249 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32361 = ::x10aux::makeStringLit("CAP"); strLit__32361; }))))
    {
        
        //#line 250 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)();
    } else 
    //#line 252 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32363 = ::x10aux::makeStringLit("AIP"); strLit__32363; }))))
    {
        
        //#line 253 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)();
    } else 
    //#line 255 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32365 = ::x10aux::makeStringLit("LNP"); strLit__32365; }))))
    {
        
        //#line 256 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 257 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)();
    } else 
    //#line 258 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32367 = ::x10aux::makeStringLit("NPP"); strLit__32367; }))))
    {
        
        //#line 259 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 260 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__get)();
    } else 
    //#line 261 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32369 = ::x10aux::makeStringLit("SMP"); strLit__32369; }))))
    {
        
        //#line 262 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 263 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)();
    } else 
    //#line 264 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32371 = ::x10aux::makeStringLit("HRP"); strLit__32371; }))))
    {
        
        //#line 265 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 266 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)();
    } else 
    //#line 267 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__32373 = ::x10aux::makeStringLit("QAP"); strLit__32373; }))))
    {
        
        //#line 268 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 269 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)();
    } else {
        
        //#line 271 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__get)();
        
        //#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32375 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__32375; }))));
    }
    
    //#line 274 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    return problemParam;
    
}

//#line 304 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
x10_int cpls::Main::whichHeuristicInt(::x10::lang::String* solverIn) {
    
    //#line 305 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int heuParam;
    
    //#line 306 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__32376 = ::x10aux::makeStringLit("AS"); strLit__32376; }))))
    {
        
        //#line 307 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)();
    } else 
    //#line 308 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__32377 = ::x10aux::makeStringLit("EO"); strLit__32377; }))))
    {
        
        //#line 309 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)();
    } else 
    //#line 310 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__32378 = ::x10aux::makeStringLit("RoTS"); strLit__32378; }))))
    {
        
        //#line 311 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)();
    } else 
    //#line 312 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__32379 = ::x10aux::makeStringLit("GA"); strLit__32379; }))))
    {
        
        //#line 313 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)();
    } else 
    //#line 314 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__32380 = ::x10aux::makeStringLit("HY"); strLit__32380; }))))
    {
        
        //#line 315 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__get)();
    } else {
        
        //#line 317 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__get)();
    }
    
    //#line 318 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    return heuParam;
    
}

//#line 321 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
void cpls::Main::printHeader(x10_int outF, x10_int problem) {
    
    //#line 322 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((::x10aux::struct_equals(outF, ((x10_int)1)))) {
        
        //#line 323 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        if (((::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)())) ||
            (::x10aux::struct_equals(problem, ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()))))
        {
            
            //#line 324 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32381 = ::x10aux::makeStringLit("|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|"); strLit__32381; }))));
            
            //#line 325 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32382 = ::x10aux::makeStringLit("| Count | Time (s) |  Iters   | Place  |  LocMin  |  Swaps   |  Resets  | Sa/It |ReSta| BP  | Sng | Cng  | frP-frT |  PS | TS |final cost|  gap  |   state   |   wtime  |"); strLit__32382; }))));
            
            //#line 326 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32383 = ::x10aux::makeStringLit("|-------|----------|----------|--------|----------|----------|----------|-------|-----|-----|-----|------|---------|-----|----|----------|-------|-----------|----------|"); strLit__32383; }))));
        } else {
            
            //#line 328 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32384 = ::x10aux::makeStringLit("|-----------------------------------------------------------------------------------------------------------------------------------------------------------|"); strLit__32384; }))));
            
            //#line 329 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32385 = ::x10aux::makeStringLit("| Count | Time (s) |  Iters   | Place  |  LocMin  |  Swaps   |  Resets  | Sa/It |ReSta| Cng  | frP-frT |  PS | TS |final cost|  gap  |   state   |   wtime  |"); strLit__32385; }))));
            
            //#line 330 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32386 = ::x10aux::makeStringLit("|-------|----------|----------|--------|----------|----------|----------|-------|-----|------|---------|-----|----|----------|-------|-----------|----------|"); strLit__32386; }))));
        }
        
    }
    
}

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
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
/* START of Main$COPProblemModelFactory */
#include <cpls/Main__COPProblemModelFactory.h>

#include <x10/lang/Any.h>
#include <cpls/ParamManager.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/String.h>
#include <x10/lang/System.h>
#include <cpls/CPLSOptionsEnum__SupportedProblems.h>
#include <cpls/problem/MSPModel.h>
#include <cpls/problem/CAPModel.h>
#include <cpls/problem/AIPModel.h>
#include <cpls/problem/LNPModel.h>
#include <cpls/problem/SMTIModel.h>
#include <cpls/util/CPLSFileReader.h>
#include <x10/lang/Boolean.h>
#include <cpls/problem/QAPModel.h>
#include <cpls/problem/PNPModel.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
namespace cpls { 
class Main__COPProblemModelFactory_ibox0 : public ::x10::lang::IBox< ::cpls::Main__COPProblemModelFactory> {
public:
    static ::x10::lang::Any::itable< Main__COPProblemModelFactory_ibox0 > itable;
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
::x10::lang::Any::itable< Main__COPProblemModelFactory_ibox0 >  Main__COPProblemModelFactory_ibox0::itable(&Main__COPProblemModelFactory_ibox0::equals, &Main__COPProblemModelFactory_ibox0::hashCode, &Main__COPProblemModelFactory_ibox0::toString, &Main__COPProblemModelFactory_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::Main__COPProblemModelFactory >  cpls::Main__COPProblemModelFactory::_itable_0(&cpls::Main__COPProblemModelFactory::equals, &cpls::Main__COPProblemModelFactory::hashCode, &cpls::Main__COPProblemModelFactory::toString, &cpls::Main__COPProblemModelFactory::typeName);
::x10aux::itable_entry cpls::Main__COPProblemModelFactory::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::Main__COPProblemModelFactory::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::Main__COPProblemModelFactory")};
::x10aux::itable_entry cpls::Main__COPProblemModelFactory::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::Main__COPProblemModelFactory_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::Main__COPProblemModelFactory")};

//#line 278 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPProblemModelFactory::make(
  ::cpls::ParamManager* opts, x10_int problem, ::x10::lang::Rail< x10_long >* problemParams) {
    
    //#line 279 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__32393 = ::x10aux::makeStringLit("-s"); strLit__32393; })),
                      ((x10_long)10ll));
    
    //#line 280 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int baseValue = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__32394 = ::x10aux::makeStringLit("-bv"); strLit__32394; })),
                          ((x10_int)0));
    
    //#line 281 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* inPathDataProblem = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__32395 = ::x10aux::makeStringLit("-f"); strLit__32395; })),
                                               (__extension__ ({ static ::x10::lang::String* strLit__32396 = ::x10aux::makeStringLit("."); strLit__32396; })));
    
    //#line 282 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* inPathVectorSol = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__32397 = ::x10aux::makeStringLit("-if"); strLit__32397; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__32398 = ::x10aux::makeStringLit("."); strLit__32398; })));
    
    //#line 283 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long inSeed = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                        (__extension__ ({ static ::x10::lang::String* strLit__32399 = ::x10aux::makeStringLit("-S"); strLit__32399; })),
                        ::x10::lang::System::nanoTime());
    
    //#line 284 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
    switch (problem) {
        
        //#line 285 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 1/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)()*/: ;
        {
            
            //#line 286 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            return ::cpls::problem::MSPModel::_make(size);
            
        }
        //#line 287 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 2/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::CAPModel::_make(size);
            
        }
        //#line 288 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 3/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::AIPModel::_make(size);
            
        }
        //#line 289 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 4/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::LNPModel::_make(size);
            
        }
        //#line 290 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 6/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::SMTIModel::_make(size);
            
        }
        //#line 291 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 7/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::SMTIModel::_make(size);
            
        }
        //#line 292 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        case 8/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)()*/: ;
        {
            
            //#line 293 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::lang::Rail< x10_long >* params = ::cpls::util::CPLSFileReader::tryReadParameters(
                                                      inPathDataProblem,
                                                      problemParams);
            
            //#line 294 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            x10_long n1 = ((::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                              ((x10_long)0ll))) < (((x10_long)0ll)))
              ? (((x10_long)1ll)) : (::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                                       ((x10_long)0ll)));
            
            //#line 295 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::cpls::problem::QAPModel* problemModel = ::cpls::problem::QAPModel::_make(n1,
                                                                                       inPathDataProblem,
                                                                                       inPathVectorSol,
                                                                                       baseValue,
                                                                                       inSeed);
            
            //#line 296 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->initialize();
            
            //#line 297 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->loadData(inPathDataProblem);
            
            //#line 298 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
            return problemModel;
            
        }
        //#line 299 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
        default: ;
        {
            return ::cpls::problem::PNPModel::_make(size);
            
        }
    }
}

//#line 277 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPProblemModelFactory::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPProblemModelFactory::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__32402 = ::x10aux::makeStringLit("struct cpls.Main.COPProblemModelFactory"); strLit__32402; }));
    
}
x10_boolean cpls::Main__COPProblemModelFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::Main__COPProblemModelFactory::equals(
             ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other));
    
}
x10_boolean cpls::Main__COPProblemModelFactory::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::Main__COPProblemModelFactory::_struct_equals(
             ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other));
    
}

void ::cpls::Main__COPProblemModelFactory::_serialize(::cpls::Main__COPProblemModelFactory this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::Main__COPProblemModelFactory::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::Main__COPProblemModelFactory::rtt;
void cpls::Main__COPProblemModelFactory::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.Main.COPProblemModelFactory",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Main$COPProblemModelFactory */
/*************************************************/
