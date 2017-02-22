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
#include <x10/lang/Boolean.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Place.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/lang/Double.h>
#include <x10/util/Timer.h>
#include <cpls/NodeInstancer.h>
#include <x10/lang/Math.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Runtime.h>
#include <x10/util/StringUtil.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24177 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__24177; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:266";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24179 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__24179; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:269";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24181 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__24181; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:272";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24183 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__24183; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:275";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24185 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__24185; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:278";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24187 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__24187; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:281";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24189 = ::x10aux::makeStringLit("HRP Problem"); strLit__24189; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:284";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__24191 = ::x10aux::makeStringLit("QAP Problem"); strLit__24191; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:287";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< x10_long >* problemParams = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll),
                                                                                        ((x10_long)-1ll));
    
    //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::ParamManager* opts =  (new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager());
    (opts)->::cpls::ParamManager::_constructor(args);
    
    //#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::CPLSConfig* configCPLS =  (new (::x10aux::alloc_z< ::cpls::entities::CPLSConfig>()) ::cpls::entities::CPLSConfig());
    
    //#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    ::x10aux::nullCheck(configCPLS)->cpls::entities::CPLSConfig::__fieldInitializers_cpls_entities_CPLSConfig();
    
    //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__24086 = ::x10aux::makeStringLit("-p"); strLit__24086; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__24087 = ::x10aux::makeStringLit("QAP"); strLit__24087; })));
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPProblemModelFactory::make(
                                                           opts,
                                                           problem,
                                                           problemParams);
    
    //#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setProblemModel(problemModel);
    
    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__24088 = ::x10aux::makeStringLit("-ce"); strLit__24088; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__24089 = ::x10aux::makeStringLit("-v"); strLit__24089; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setVerify(verify);
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIsThereAMasterNode(
      modeIndicator);
    
    //#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* masterHeuristicAndOthers;
    
    //#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__24090 = ::x10aux::makeStringLit("-sl"); strLit__24090; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__24091 = ::x10aux::makeStringLit("AS"); strLit__24091; })));
    
    //#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(heuristicString)->x10::lang::String::indexOf(
                                    ((x10_char)'*')), ((x10_int)-1))))
    {
        
        //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        masterHeuristicAndOthers = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24092 = ::x10aux::makeStringLit("*"); strLit__24092; })), heuristicString);
        
        //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuristicString = ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                            ((x10_long)1ll));
        
        //#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::entities::NodeConfig* masterConfig = ::cpls::Main::makeMasterConfig(
                                                       opts,
                                                       ::x10aux::nullCheck(problemModel)->getSize(),
                                                       ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                         ((x10_long)0ll)));
        
        //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10aux::nullCheck(configCPLS)->setMasterConfig(
          masterConfig);
    } else 
    //#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (modeIndicator) {
        
        //#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24095 = ::x10aux::makeStringLit("Debe indicar una heur\355stica para el nodo master"); strLit__24095; }))));
    }
    
    //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::cpls::Main::heuristicsAndRolesDefinition(opts, ::x10aux::nullCheck(problemModel)->getSize(),
                                                 heuristicString);
    
    //#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((modeIndicator && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                    ((((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))) + (((x10_long)1ll)))))))
    {
        
        //#line 52 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24096 = ::x10aux::makeStringLit("Inconsistencia en el numero total de nodos"); strLit__24096; }))));
        
        //#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        return;
    } else 
    //#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((!(modeIndicator) && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                       ((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))))))
    {
        
        //#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24097 = ::x10aux::makeStringLit("Inconsistencia en el numero total de nodos"); strLit__24097; }))));
        
        //#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        return;
    }
    
    //#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setConfigNodes(nodeConfigs);
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* cplsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (cplsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->getSize(), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__24098 = ::x10aux::makeStringLit("P_lm"); strLit__24098; })),
                                                      ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__24099 = ::x10aux::makeStringLit("P_lmM"); strLit__24099; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__24100 = ::x10aux::makeStringLit("P_lmD"); strLit__24100; })),
                         0.5));
    
    //#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* teamsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (teamsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->getSize(), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__24101 = ::x10aux::makeStringLit("P_e"); strLit__24101; })),
                                                      ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__24102 = ::x10aux::makeStringLit("P_eM"); strLit__24102; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__24103 = ::x10aux::makeStringLit("P_eD"); strLit__24103; })),
                         0.5));
    
    //#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setCPLSPoolConfig(cplsPoolConfig);
    
    //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTeamsPoolConfig(teamsPoolConfig);
    
    //#line 69 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setSeed(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__24104 = ::x10aux::makeStringLit("-S"); strLit__24104; })),
                                               ::x10::lang::RuntimeNatives::nanoTime()));
    
    //#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTimesPerInstance(
      ((x10_long)(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24105 = ::x10aux::makeStringLit("-b"); strLit__24105; })),
                    ((x10_int)10)))));
    
    //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int outFormat = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24106 = ::x10aux::makeStringLit("-of"); strLit__24106; })),
                          ((x10_int)1));
    
    //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long costFromF = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__24107 = ::x10aux::makeStringLit("-tf"); strLit__24107; })),
                           ((x10_long)0ll));
    
    //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int tCostFromCL = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__24108 = ::x10aux::makeStringLit("-tc"); strLit__24108; })),
                            ((x10_int)0));
    
    //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int testNb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                       (__extension__ ({ static ::x10::lang::String* strLit__24109 = ::x10aux::makeStringLit("-b"); strLit__24109; })),
                       ((x10_int)10));
    
    //#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long c = ((x10_long)0ll);
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean sl = false;
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((::x10aux::struct_equals(costFromF, ((x10_long)0ll))))
    {
        
        //#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        if (((((x10_long)(tCostFromCL))) >= (((x10_long)0ll))))
        {
            
            //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            c = ((x10_long)(tCostFromCL));
            
            //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            sl = false;
            
            //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__24110 = ::x10aux::makeStringLit("Target from CL: lower or equal than "); strLit__24110; })), c)));
        } else {
            
            //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            c = ((((x10_long)(tCostFromCL))) * (((x10_long)-1ll)));
            
            //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            sl = true;
            
            //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__24111 = ::x10aux::makeStringLit("Target from CL: strictly lower than "); strLit__24111; })), c)));
        }
        
    } else {
        
        //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        sl = ((costFromF) < (((x10_long)0ll)));
        
        //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        if (((::x10aux::struct_equals(costFromF, ((x10_long)1ll))) ||
            (::x10aux::struct_equals(costFromF, ((x10_long)-1ll)))))
        {
            
            //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)1ll));
        } else {
            
            //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)2ll));
        }
        
        //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__24114 = ::x10aux::makeStringLit("Target from file: "); strLit__24114; })), sl
            ? ((__extension__ ({ static ::x10::lang::String* strLit__24115 = ::x10aux::makeStringLit("strictly lower than "); strLit__24115; })))
            : ((__extension__ ({ static ::x10::lang::String* strLit__24116 = ::x10aux::makeStringLit(" lower or equal than "); strLit__24116; })))), c)));
    }
    
    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long tCost = ((c) >= (((x10_long)0ll))) ? (c) : (((x10_long)0ll));
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean sLow = sl;
    
    //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::Main::printHeader(outFormat, problem);
    
    //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTargetCost(tCost);
    
    //#line 109 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setStrictLow(sLow);
    
    //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMinDistance(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__24117 = ::x10aux::makeStringLit("-D"); strLit__24117; })),
                                                      0.3));
    
    //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(configCPLS, opts);
}

//#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::cpls::entities::NodeConfig* cpls::Main::makeMasterConfig(
  ::cpls::ParamManager* opts, x10_long problemSize, ::x10::lang::String* solverIn) {
    
    //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__24118 = ::x10aux::makeStringLit("-N"); strLit__24118; })),
                             ((x10_int)1));
    
    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::NodeConfig* masterConfig =  (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
    
    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    x10_int heuristic__24023 = ::cpls::Main::whichHeuristicInt(
                                 solverIn);
    
    //#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::x10aux::nullCheck(masterConfig)->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
    
    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::x10aux::nullCheck(masterConfig)->FMGL(heuristic) = heuristic__24023;
    ::x10aux::nullCheck(masterConfig)->FMGL(rol) = ((x10_int)2);
    
    //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setHeuristic(::cpls::Main::whichHeuristicInt(
                                                      solverIn));
    
    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setNumberOfTeams(((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam)));
    
    //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setNodesPerTeam(nodesPerTeam);
    
    //#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setTeamId(((x10_int)-1));
    
    //#line 127 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setInterTeamCommTime(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__24119 = ::x10aux::makeStringLit("-I"); strLit__24119; })),
        ((x10_long)0ll)));
    
    //#line 128 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setAffectedPer(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__24120 = ::x10aux::makeStringLit("-A"); strLit__24120; })),
                                                        1.0));
    
    //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setIniDelay(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                     (__extension__ ({ static ::x10::lang::String* strLit__24121 = ::x10aux::makeStringLit("-W"); strLit__24121; })),
                                                     ((x10_long)0ll)));
    
    //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setVerify((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                            (__extension__ ({ static ::x10::lang::String* strLit__24122 = ::x10aux::makeStringLit("-v"); strLit__24122; })),
                                                                            ((x10_int)0)),
                                                                          ((x10_int)1))));
    
    //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setChangeProb(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__24123 = ::x10aux::makeStringLit("-C"); strLit__24123; })),
                                                       ((x10_int)100)));
    
    //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setDiversificationOption(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__24124 = ::x10aux::makeStringLit("O"); strLit__24124; })),
        ((x10_int)0)));
    
    //#line 133 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__24125 = ::x10aux::makeStringLit("-mt"); strLit__24125; })),
                                                    ((x10_long)0ll)));
    
    //#line 134 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxIters(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                     (__extension__ ({ static ::x10::lang::String* strLit__24126 = ::x10aux::makeStringLit("-mi"); strLit__24126; })),
                                                     ((x10_long)100000000ll)));
    
    //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxRestarts(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__24127 = ::x10aux::makeStringLit("-mr"); strLit__24127; })),
                                                        ((x10_int)0)));
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setReportPart((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                (__extension__ ({ static ::x10::lang::String* strLit__24128 = ::x10aux::makeStringLit("-rp"); strLit__24128; })),
                                                                                ((x10_int)0)),
                                                                              ((x10_int)1))));
    
    //#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setModParams(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__24129 = ::x10aux::makeStringLit("-M"); strLit__24129; })),
                                                      ((x10_int)1)));
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setChangeOnDiver(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                          (__extension__ ({ static ::x10::lang::String* strLit__24130 = ::x10aux::makeStringLit("-CD"); strLit__24130; })),
                                                          ((x10_int)1)));
    
    //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24131 = ::x10aux::makeStringLit("-R"); strLit__24131; })),
                    ((x10_int)0));
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24132 = ::x10aux::makeStringLit("-U"); strLit__24132; })),
                    ((x10_int)0));
    
    //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (problemSize))) * (::x10::lang::MathNatives::log(((x10_double) (problemSize)))))))
      : (rep);
    
    //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int maxUpdateI;
    
    //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* mustr = (__extension__ ({
        
        //#line 86 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/lang/System.x10"
        ::x10::lang::String* name__16475 = (__extension__ ({ static ::x10::lang::String* strLit__24133 = ::x10aux::makeStringLit("MU"); strLit__24133; }));
        ::x10aux::nullCheck(::x10::lang::Runtime::FMGL(env__get)())->getOrElse(
          name__16475, ::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }))
    ;
    
    //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ::x10::util::StringUtil::parseInt(mustr);
    } else {
        
        //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ((x10_int)100000);
    }
    
    //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setReportI(reportI);
    
    //#line 151 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setUpdateI(updateI);
    
    //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxUpdateI(maxUpdateI);
    
    //#line 153 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return masterConfig;
    
}

//#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::Main::heuristicsAndRolesDefinition(
  ::cpls::ParamManager* opts, x10_long problemSize, ::x10::lang::String* solverIn) {
    
    //#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__24136 = ::x10aux::makeStringLit("-N"); strLit__24136; })),
                             ((x10_int)1));
    
    //#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int numberOfTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam));
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__24137 = ::x10aux::makeStringLit("-ce"); strLit__24137; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long interTeamCommTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__24138 = ::x10aux::makeStringLit("-I"); strLit__24138; })),
                                   ((x10_long)0ll));
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_double affectedPer = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__24139 = ::x10aux::makeStringLit("-A"); strLit__24139; })),
                               1.0);
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long iniDelay = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24140 = ::x10aux::makeStringLit("-W"); strLit__24140; })),
                          ((x10_long)0ll));
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__24141 = ::x10aux::makeStringLit("-v"); strLit__24141; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int changeProb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__24142 = ::x10aux::makeStringLit("-C"); strLit__24142; })),
                           ((x10_int)100));
    
    //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int divOption = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24143 = ::x10aux::makeStringLit("O"); strLit__24143; })),
                          ((x10_int)0));
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long maxTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__24144 = ::x10aux::makeStringLit("-mt"); strLit__24144; })),
                         ((x10_long)0ll));
    
    //#line 169 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long maxIters = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24145 = ::x10aux::makeStringLit("-mi"); strLit__24145; })),
                          ((x10_long)100000000ll));
    
    //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int maxRestarts = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__24146 = ::x10aux::makeStringLit("-mr"); strLit__24146; })),
                            ((x10_int)0));
    
    //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean reportPart = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__24147 = ::x10aux::makeStringLit("-rp"); strLit__24147; })),
                                                        ((x10_int)0)),
                                                      ((x10_int)1)));
    
    //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int modParams = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24148 = ::x10aux::makeStringLit("-M"); strLit__24148; })),
                          ((x10_int)1));
    
    //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int changeOnDiver = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                              (__extension__ ({ static ::x10::lang::String* strLit__24149 = ::x10aux::makeStringLit("-CD"); strLit__24149; })),
                              ((x10_int)1));
    
    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24150 = ::x10aux::makeStringLit("-R"); strLit__24150; })),
                    ((x10_int)0));
    
    //#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24151 = ::x10aux::makeStringLit("-U"); strLit__24151; })),
                    ((x10_int)0));
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (problemSize))) * (::x10::lang::MathNatives::log(((x10_double) (problemSize)))))))
      : (rep);
    
    //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int maxUpdateI;
    
    //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* mustr = (__extension__ ({
        
        //#line 86 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/lang/System.x10"
        ::x10::lang::String* name__17693 = (__extension__ ({ static ::x10::lang::String* strLit__24152 = ::x10aux::makeStringLit("MU"); strLit__24152; }));
        ::x10aux::nullCheck(::x10::lang::Runtime::FMGL(env__get)())->getOrElse(
          name__17693, ::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }))
    ;
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ::x10::util::StringUtil::parseInt(mustr);
    } else {
        
        //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ((x10_int)100000);
    }
    
    //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
       (new (::x10aux::alloc_z< ::x10::array::Array_2< ::cpls::entities::NodeConfig*> >()) ::x10::array::Array_2< ::cpls::entities::NodeConfig*>());
    (nodeConfigs)->::x10::array::Array_2< ::cpls::entities::NodeConfig*>::_constructor(
      ((x10_long)(numberOfTeams)), ((x10_long)(nodesPerTeam)),
      (__extension__ ({
          ::cpls::entities::NodeConfig* alloc__3462 =  (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
          
          //#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
          alloc__3462->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
          alloc__3462;
      }))
      );
    
    //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teamsWithMultiplicity;
    
    //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(solverIn)->x10::lang::String::indexOf(
                                    ((x10_char)'-')), ((x10_int)-1))))
    {
        
        //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24155 = ::x10aux::makeStringLit("-"); strLit__24155; })), solverIn);
    } else {
        
        //#line 191 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                 solverIn);
    }
    
    //#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teams;
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodesWithMultiplicity;
    
    //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodes;
    
    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* heuristic;
    
    //#line 196 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int multiplicityOfTeam;
    
    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int multiplicityOfNode;
    
    //#line 198 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int counter = ((x10_int)0);
    
    //#line 199 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int k = ((x10_int)0);
    x10_int l = ((x10_int)0);
    x10_int m = ((x10_int)0);
    x10_int n = ((x10_int)0);
    x10_int i = ((x10_int)0);
    x10_int j = ((x10_int)0);
    
    //#line 200 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (((!::x10aux::struct_equals(teamsWithMultiplicity,
                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        (((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))) > (((x10_long)0ll)))))
    {
        
        //#line 201 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        {
            for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))));
                 k = ((k) + (((x10_int)1)))) {
                
                //#line 202 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                    ((x10_long)(k))))->x10::lang::String::indexOf(
                                                ((x10_char)'/')),
                                              ((x10_int)-1))))
                {
                    
                    //#line 203 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24157 = ::x10aux::makeStringLit("/"); strLit__24157; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                } else {
                    
                    //#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                    ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                      ((x10_long)(k)), ::x10::lang::String::__plus(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                     ((x10_long)(k))), (__extension__ ({ static ::x10::lang::String* strLit__24160 = ::x10aux::makeStringLit("/1"); strLit__24160; }))));
                    
                    //#line 206 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24161 = ::x10aux::makeStringLit("/"); strLit__24161; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                }
                
                //#line 208 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                if (((!::x10aux::struct_equals(teams, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                    (((x10_long)(::x10aux::nullCheck(teams)->FMGL(size))) > (((x10_long)0ll)))))
                {
                    
                    //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                    nodesWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24163 = ::x10aux::makeStringLit(","); strLit__24163; })), ::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                               ((x10_long)0ll)));
                    
                    //#line 210 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                    multiplicityOfTeam = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                             ((x10_long)1ll)));
                    
                    //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                    {
                        for (l = ((x10_int)0); ((l) < (multiplicityOfTeam));
                             l = ((l) + (((x10_int)1)))) {
                            
                            //#line 212 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                            {
                                for (m = ((x10_int)0); ((((x10_long)(m))) < ((x10_long)(::x10aux::nullCheck(nodesWithMultiplicity)->FMGL(size))));
                                     m = ((m) + (((x10_int)1))))
                                {
                                    
                                    //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                    if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                        ((x10_long)(m))))->x10::lang::String::indexOf(
                                                                    (__extension__ ({ static ::x10::lang::String* strLit__24167 = ::x10aux::makeStringLit("x"); strLit__24167; }))),
                                                                  ((x10_int)-1))))
                                    {
                                        
                                        //#line 214 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24168 = ::x10aux::makeStringLit("x"); strLit__24168; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    } else {
                                        
                                        //#line 216 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                        ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                                          ((x10_long)(m)),
                                          ::x10::lang::String::__plus(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                        ((x10_long)(m))), (__extension__ ({ static ::x10::lang::String* strLit__24171 = ::x10aux::makeStringLit("x1"); strLit__24171; }))));
                                        
                                        //#line 217 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24172 = ::x10aux::makeStringLit("x"); strLit__24172; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    }
                                    
                                    //#line 219 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                    multiplicityOfNode = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                             ((x10_long)1ll)));
                                    
                                    //#line 220 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                    heuristic = ::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                  ((x10_long)0ll));
                                    
                                    //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                    {
                                        for (n = ((x10_int)0);
                                             ((n) < (multiplicityOfNode));
                                             n = ((n) + (((x10_int)1))))
                                        {
                                            
                                            //#line 222 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            i = ((counter) / ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            j = ((counter) % ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            if ((::x10aux::struct_equals(((counter) % ::x10aux::zeroCheck(nodesPerTeam)),
                                                                         ((x10_int)0))))
                                            {
                                                
                                                //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__24027 =
                                                  ((x10_long)(i));
                                                x10_long j__24028 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* v__24029 =
                                                  (__extension__ ({
                                                    
                                                    //#line 225 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                                    ::cpls::entities::NodeConfig* alloc__24030 =
                                                       (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
                                                    
                                                    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    x10_int heuristic__24024 =
                                                      ::cpls::Main::whichHeuristicInt(
                                                        heuristic);
                                                    
                                                    //#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__24030->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
                                                    
                                                    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__24030->FMGL(heuristic) =
                                                      heuristic__24024;
                                                    alloc__24030->FMGL(rol) =
                                                      ((x10_int)1);
                                                    alloc__24030;
                                                }))
                                                ;
                                                ::cpls::entities::NodeConfig* ret__24031;
                                                
                                                //#line 174 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24025 =
                                                      i__24027;
                                                    x10_long j__24026 =
                                                      j__24028;
                                                    ((j__24026) + (((i__24025) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                , v__24029);
                                                
                                                //#line 175 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__24031 =
                                                  v__24029;
                                                
                                                //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__24031;
                                            } else {
                                                
                                                //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__24035 =
                                                  ((x10_long)(i));
                                                x10_long j__24036 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* v__24037 =
                                                  (__extension__ ({
                                                    
                                                    //#line 228 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                                    ::cpls::entities::NodeConfig* alloc__24038 =
                                                       (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
                                                    
                                                    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    x10_int heuristic__24032 =
                                                      ::cpls::Main::whichHeuristicInt(
                                                        heuristic);
                                                    
                                                    //#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__24038->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
                                                    
                                                    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__24038->FMGL(heuristic) =
                                                      heuristic__24032;
                                                    alloc__24038->FMGL(rol) =
                                                      ((x10_int)0);
                                                    alloc__24038;
                                                }))
                                                ;
                                                ::cpls::entities::NodeConfig* ret__24039;
                                                
                                                //#line 174 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24033 =
                                                      i__24035;
                                                    x10_long j__24034 =
                                                      j__24036;
                                                    ((j__24034) + (((i__24033) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                , v__24037);
                                                
                                                //#line 175 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__24039 =
                                                  v__24037;
                                                
                                                //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__24039;
                                            }
                                            
                                            //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18826 =
                                                  ((x10_long)(i));
                                                x10_long j__18827 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18828;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18828 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24040 =
                                                      i__18826;
                                                    x10_long j__24041 =
                                                      j__18827;
                                                    ((j__24041) + (((i__24040) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18828;
                                            }))
                                            )->setHeuristic(
                                              ::cpls::Main::whichHeuristicInt(
                                                heuristic));
                                            
                                            //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18832 =
                                                  ((x10_long)(i));
                                                x10_long j__18833 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18834;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18834 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24042 =
                                                      i__18832;
                                                    x10_long j__24043 =
                                                      j__18833;
                                                    ((j__24043) + (((i__24042) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18834;
                                            }))
                                            )->setNumberOfTeams(
                                              numberOfTeams);
                                            
                                            //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18838 =
                                                  ((x10_long)(i));
                                                x10_long j__18839 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18840;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18840 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24044 =
                                                      i__18838;
                                                    x10_long j__24045 =
                                                      j__18839;
                                                    ((j__24045) + (((i__24044) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18840;
                                            }))
                                            )->setNodesPerTeam(
                                              nodesPerTeam);
                                            
                                            //#line 233 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            if (modeIndicator)
                                            {
                                                
                                                //#line 234 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                                ::x10aux::nullCheck((__extension__ ({
                                                    
                                                    //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__18844 =
                                                      ((x10_long)(i));
                                                    x10_long j__18845 =
                                                      ((x10_long)(j));
                                                    ::cpls::entities::NodeConfig* ret__18846;
                                                    
                                                    //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__18846 =
                                                      (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__24046 =
                                                          i__18844;
                                                        x10_long j__24047 =
                                                          j__18845;
                                                        ((j__24047) + (((i__24046) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__18846;
                                                }))
                                                )->setTeamId(
                                                  ((i) + (((x10_int)1))));
                                            } else {
                                                
                                                //#line 236 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                                ::x10aux::nullCheck((__extension__ ({
                                                    
                                                    //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__18850 =
                                                      ((x10_long)(i));
                                                    x10_long j__18851 =
                                                      ((x10_long)(j));
                                                    ::cpls::entities::NodeConfig* ret__18852;
                                                    
                                                    //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__18852 =
                                                      (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__24048 =
                                                          i__18850;
                                                        x10_long j__24049 =
                                                          j__18851;
                                                        ((j__24049) + (((i__24048) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__18852;
                                                }))
                                                )->setTeamId(
                                                  i);
                                            }
                                            
                                            //#line 238 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18856 =
                                                  ((x10_long)(i));
                                                x10_long j__18857 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18858;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18858 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24050 =
                                                      i__18856;
                                                    x10_long j__24051 =
                                                      j__18857;
                                                    ((j__24051) + (((i__24050) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18858;
                                            }))
                                            )->setInterTeamCommTime(
                                              interTeamCommTime);
                                            
                                            //#line 239 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18862 =
                                                  ((x10_long)(i));
                                                x10_long j__18863 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18864;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18864 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24052 =
                                                      i__18862;
                                                    x10_long j__24053 =
                                                      j__18863;
                                                    ((j__24053) + (((i__24052) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18864;
                                            }))
                                            )->setAffectedPer(
                                              affectedPer);
                                            
                                            //#line 240 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18868 =
                                                  ((x10_long)(i));
                                                x10_long j__18869 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18870;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18870 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24054 =
                                                      i__18868;
                                                    x10_long j__24055 =
                                                      j__18869;
                                                    ((j__24055) + (((i__24054) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18870;
                                            }))
                                            )->setIniDelay(
                                              iniDelay);
                                            
                                            //#line 241 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18874 =
                                                  ((x10_long)(i));
                                                x10_long j__18875 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18876;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18876 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24056 =
                                                      i__18874;
                                                    x10_long j__24057 =
                                                      j__18875;
                                                    ((j__24057) + (((i__24056) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18876;
                                            }))
                                            )->setVerify(
                                              verify);
                                            
                                            //#line 242 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18880 =
                                                  ((x10_long)(i));
                                                x10_long j__18881 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18882;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18882 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24058 =
                                                      i__18880;
                                                    x10_long j__24059 =
                                                      j__18881;
                                                    ((j__24059) + (((i__24058) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18882;
                                            }))
                                            )->setChangeProb(
                                              changeProb);
                                            
                                            //#line 243 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18886 =
                                                  ((x10_long)(i));
                                                x10_long j__18887 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18888;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18888 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24060 =
                                                      i__18886;
                                                    x10_long j__24061 =
                                                      j__18887;
                                                    ((j__24061) + (((i__24060) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18888;
                                            }))
                                            )->setDiversificationOption(
                                              divOption);
                                            
                                            //#line 244 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18892 =
                                                  ((x10_long)(i));
                                                x10_long j__18893 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18894;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18894 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24062 =
                                                      i__18892;
                                                    x10_long j__24063 =
                                                      j__18893;
                                                    ((j__24063) + (((i__24062) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18894;
                                            }))
                                            )->setMaxTime(
                                              maxTime);
                                            
                                            //#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18898 =
                                                  ((x10_long)(i));
                                                x10_long j__18899 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18900;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18900 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24064 =
                                                      i__18898;
                                                    x10_long j__24065 =
                                                      j__18899;
                                                    ((j__24065) + (((i__24064) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18900;
                                            }))
                                            )->setMaxIters(
                                              maxIters);
                                            
                                            //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18904 =
                                                  ((x10_long)(i));
                                                x10_long j__18905 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18906;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18906 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24066 =
                                                      i__18904;
                                                    x10_long j__24067 =
                                                      j__18905;
                                                    ((j__24067) + (((i__24066) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18906;
                                            }))
                                            )->setMaxRestarts(
                                              maxRestarts);
                                            
                                            //#line 247 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18910 =
                                                  ((x10_long)(i));
                                                x10_long j__18911 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18912;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18912 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24068 =
                                                      i__18910;
                                                    x10_long j__24069 =
                                                      j__18911;
                                                    ((j__24069) + (((i__24068) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18912;
                                            }))
                                            )->setReportPart(
                                              reportPart);
                                            
                                            //#line 248 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18916 =
                                                  ((x10_long)(i));
                                                x10_long j__18917 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18918;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18918 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24070 =
                                                      i__18916;
                                                    x10_long j__24071 =
                                                      j__18917;
                                                    ((j__24071) + (((i__24070) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18918;
                                            }))
                                            )->setModParams(
                                              modParams);
                                            
                                            //#line 249 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18922 =
                                                  ((x10_long)(i));
                                                x10_long j__18923 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18924;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18924 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24072 =
                                                      i__18922;
                                                    x10_long j__24073 =
                                                      j__18923;
                                                    ((j__24073) + (((i__24072) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18924;
                                            }))
                                            )->setChangeOnDiver(
                                              changeOnDiver);
                                            
                                            //#line 250 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18928 =
                                                  ((x10_long)(i));
                                                x10_long j__18929 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18930;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18930 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24074 =
                                                      i__18928;
                                                    x10_long j__24075 =
                                                      j__18929;
                                                    ((j__24075) + (((i__24074) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18930;
                                            }))
                                            )->setReportI(
                                              reportI);
                                            
                                            //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18934 =
                                                  ((x10_long)(i));
                                                x10_long j__18935 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18936;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18936 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24076 =
                                                      i__18934;
                                                    x10_long j__24077 =
                                                      j__18935;
                                                    ((j__24077) + (((i__24076) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18936;
                                            }))
                                            )->setUpdateI(
                                              updateI);
                                            
                                            //#line 252 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__18940 =
                                                  ((x10_long)(i));
                                                x10_long j__18941 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__18942;
                                                
                                                //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__18942 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__24078 =
                                                      i__18940;
                                                    x10_long j__24079 =
                                                      j__18941;
                                                    ((j__24079) + (((i__24078) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__18942;
                                            }))
                                            )->setMaxUpdateI(
                                              maxUpdateI);
                                            
                                            //#line 253 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
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
    
    //#line 260 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return nodeConfigs;
    
}

//#line 263 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 264 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 265 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__24176 = ::x10aux::makeStringLit("MSP"); strLit__24176; }))))
    {
        
        //#line 266 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 267 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)1);
    } else 
    //#line 268 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24178 = ::x10aux::makeStringLit("CAP"); strLit__24178; }))))
    {
        
        //#line 269 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 270 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)2);
    } else 
    //#line 271 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24180 = ::x10aux::makeStringLit("AIP"); strLit__24180; }))))
    {
        
        //#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 273 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)3);
    } else 
    //#line 274 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24182 = ::x10aux::makeStringLit("LNP"); strLit__24182; }))))
    {
        
        //#line 275 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)4);
    } else 
    //#line 277 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24184 = ::x10aux::makeStringLit("NPP"); strLit__24184; }))))
    {
        
        //#line 278 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 279 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)5);
    } else 
    //#line 280 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24186 = ::x10aux::makeStringLit("SMP"); strLit__24186; }))))
    {
        
        //#line 281 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 282 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)6);
    } else 
    //#line 283 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24188 = ::x10aux::makeStringLit("HRP"); strLit__24188; }))))
    {
        
        //#line 284 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 285 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)7);
    } else 
    //#line 286 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__24190 = ::x10aux::makeStringLit("QAP"); strLit__24190; }))))
    {
        
        //#line 287 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 288 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)8);
    } else {
        
        //#line 290 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)0);
        
        //#line 291 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24192 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__24192; }))));
    }
    
    //#line 293 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return problemParam;
    
}

//#line 323 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::whichHeuristicInt(::x10::lang::String* solverIn) {
    
    //#line 324 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int heuParam;
    
    //#line 325 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__24193 = ::x10aux::makeStringLit("AS"); strLit__24193; }))))
    {
        
        //#line 326 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)2);
    } else 
    //#line 327 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__24194 = ::x10aux::makeStringLit("EO"); strLit__24194; }))))
    {
        
        //#line 328 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)3);
    } else 
    //#line 329 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__24195 = ::x10aux::makeStringLit("RoTS"); strLit__24195; }))))
    {
        
        //#line 330 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)4);
    } else 
    //#line 331 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__24196 = ::x10aux::makeStringLit("GA"); strLit__24196; }))))
    {
        
        //#line 332 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)5);
    } else 
    //#line 333 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__24197 = ::x10aux::makeStringLit("HY"); strLit__24197; }))))
    {
        
        //#line 334 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)6);
    } else {
        
        //#line 336 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)0);
    }
    
    //#line 337 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return heuParam;
    
}

//#line 340 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
void cpls::Main::printHeader(x10_int outF, x10_int problem) {
    
    //#line 341 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((::x10aux::struct_equals(outF, ((x10_int)1)))) {
        
        //#line 342 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        if (((::x10aux::struct_equals(problem, ((x10_int)6))) ||
            (::x10aux::struct_equals(problem, ((x10_int)7)))))
        {
            
            //#line 343 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24198 = ::x10aux::makeStringLit("|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|"); strLit__24198; }))));
            
            //#line 344 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24199 = ::x10aux::makeStringLit("| Count | Time (s) |  Iters   | Place  |  LocMin  |  Swaps   |  Resets  | Sa/It |ReSta| BP  | Sng | Cng  | frP-frT |  PS | TS |final cost|  gap  |   state   |   wtime  |"); strLit__24199; }))));
            
            //#line 345 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24200 = ::x10aux::makeStringLit("|-------|----------|----------|--------|----------|----------|----------|-------|-----|-----|-----|------|---------|-----|----|----------|-------|-----------|----------|"); strLit__24200; }))));
        } else {
            
            //#line 347 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24201 = ::x10aux::makeStringLit("|-----------------------------------------------------------------------------------------------------------------------------------------------------------|"); strLit__24201; }))));
            
            //#line 348 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24202 = ::x10aux::makeStringLit("| Count | Time (s) |  Iters   | Place  |  LocMin  |  Swaps   |  Resets  | Sa/It |ReSta| Cng  | frP-frT |  PS | TS |final cost|  gap  |   state   |   wtime  |"); strLit__24202; }))));
            
            //#line 349 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24203 = ::x10aux::makeStringLit("|-------|----------|----------|--------|----------|----------|----------|-------|-----|------|---------|-----|----|----------|-------|-----------|----------|"); strLit__24203; }))));
        }
        
    }
    
}

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::cpls::Main* cpls::Main::cpls__Main____this__cpls__Main(
  ) {
    return this;
    
}
void cpls::Main::_constructor() {
    ::cpls::Main* this__24085 = this;
    
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
#include <x10/util/Timer.h>
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

//#line 297 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPProblemModelFactory::make(
  ::cpls::ParamManager* opts, x10_int problem, ::x10::lang::Rail< x10_long >* problemParams) {
    
    //#line 298 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__24210 = ::x10aux::makeStringLit("-s"); strLit__24210; })),
                      ((x10_long)10ll));
    
    //#line 299 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int baseValue = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24211 = ::x10aux::makeStringLit("-bv"); strLit__24211; })),
                          ((x10_int)0));
    
    //#line 300 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* inPathDataProblem = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__24212 = ::x10aux::makeStringLit("-f"); strLit__24212; })),
                                               (__extension__ ({ static ::x10::lang::String* strLit__24213 = ::x10aux::makeStringLit("."); strLit__24213; })));
    
    //#line 301 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* inPathVectorSol = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__24214 = ::x10aux::makeStringLit("-if"); strLit__24214; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__24215 = ::x10aux::makeStringLit("."); strLit__24215; })));
    
    //#line 302 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long inSeed = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                        (__extension__ ({ static ::x10::lang::String* strLit__24216 = ::x10aux::makeStringLit("-S"); strLit__24216; })),
                        ::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 303 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    switch (problem) {
        
        //#line 304 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)1): ;
        {
            {
                
                //#line 305 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                ::cpls::problem::MSPModel* alloc__3465 = 
                (new (::x10aux::alloc_z< ::cpls::problem::MSPModel>()) ::cpls::problem::MSPModel());
                (alloc__3465)->::cpls::problem::MSPModel::_constructor(
                  size);
                return alloc__3465;
                
            }
        }
        //#line 306 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::problem::CAPModel* alloc__3466 = 
                (new (::x10aux::alloc_z< ::cpls::problem::CAPModel>()) ::cpls::problem::CAPModel());
                (alloc__3466)->::cpls::problem::CAPModel::_constructor(
                  size);
                return alloc__3466;
                
            }
        }
        //#line 307 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::problem::AIPModel* alloc__3467 = 
                (new (::x10aux::alloc_z< ::cpls::problem::AIPModel>()) ::cpls::problem::AIPModel());
                (alloc__3467)->::cpls::problem::AIPModel::_constructor(
                  size);
                return alloc__3467;
                
            }
        }
        //#line 308 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::problem::LNPModel* alloc__3468 = 
                (new (::x10aux::alloc_z< ::cpls::problem::LNPModel>()) ::cpls::problem::LNPModel());
                (alloc__3468)->::cpls::problem::LNPModel::_constructor(
                  size);
                return alloc__3468;
                
            }
        }
        //#line 309 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)6): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__3469 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__3469)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__3469;
                
            }
        }
        //#line 310 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)7): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__3470 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__3470)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__3470;
                
            }
        }
        //#line 311 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)8): ;
        {
            
            //#line 312 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::lang::Rail< x10_long >* params = ::cpls::util::CPLSFileReader::tryReadParameters(
                                                      inPathDataProblem,
                                                      problemParams);
            
            //#line 313 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            x10_long n1 = ((::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                              ((x10_long)0ll))) < (((x10_long)0ll)))
              ? (((x10_long)1ll)) : (::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                                       ((x10_long)0ll)));
            
            //#line 314 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::cpls::problem::QAPModel* problemModel =  (new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel());
            (problemModel)->::cpls::problem::QAPModel::_constructor(
              n1, inPathDataProblem, inPathVectorSol, baseValue,
              inSeed);
            
            //#line 315 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->initialize();
            
            //#line 316 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->loadData(inPathDataProblem);
            
            //#line 317 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            return problemModel;
            
        }
        //#line 318 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        default: ;
        {
            {
                ::cpls::problem::PNPModel* alloc__3471 = 
                (new (::x10aux::alloc_z< ::cpls::problem::PNPModel>()) ::cpls::problem::PNPModel());
                (alloc__3471)->::cpls::problem::PNPModel::_constructor(
                  size);
                return alloc__3471;
                
            }
        }
    }
}

//#line 296 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPProblemModelFactory::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPProblemModelFactory::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__24219 = ::x10aux::makeStringLit("struct cpls.Main.COPProblemModelFactory"); strLit__24219; }));
    
}
x10_boolean cpls::Main__COPProblemModelFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__24080 = (*this);
    ::cpls::Main__COPProblemModelFactory other__24081 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
    return true;
    
}
x10_boolean cpls::Main__COPProblemModelFactory::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__24082 = (*this);
    ::cpls::Main__COPProblemModelFactory other__24083 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
    return true;
    
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
