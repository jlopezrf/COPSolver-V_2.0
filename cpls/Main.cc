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
#include <x10/util/Timer.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26320 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__26320; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:281";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26322 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__26322; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:284";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26324 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__26324; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:287";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26326 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__26326; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:290";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26328 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__26328; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:293";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26330 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__26330; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:296";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26332 = ::x10aux::makeStringLit("HRP Problem"); strLit__26332; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:299";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__26334 = ::x10aux::makeStringLit("QAP Problem"); strLit__26334; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:302";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< x10_long >* problemParams = ::x10::lang::Rail< x10_long >::_make(((x10_long)3ll),
                                                                                        ((x10_long)-1ll));
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::ParamManager* opts =  (new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager());
    (opts)->::cpls::ParamManager::_constructor(args);
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::CPLSConfig* configCPLS =  (new (::x10aux::alloc_z< ::cpls::entities::CPLSConfig>()) ::cpls::entities::CPLSConfig());
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    ::x10aux::nullCheck(configCPLS)->cpls::entities::CPLSConfig::__fieldInitializers_cpls_entities_CPLSConfig();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__26229 = ::x10aux::makeStringLit("-p"); strLit__26229; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__26230 = ::x10aux::makeStringLit("QAP"); strLit__26230; })));
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long inSeed = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                        (__extension__ ({ static ::x10::lang::String* strLit__26231 = ::x10aux::makeStringLit("-S"); strLit__26231; })),
                        ::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPProblemModelFactory::make(
                                                           opts,
                                                           problem,
                                                           problemParams,
                                                           inSeed);
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setProblemModel(problemModel);
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__26232 = ::x10aux::makeStringLit("-ce"); strLit__26232; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__26233 = ::x10aux::makeStringLit("-v"); strLit__26233; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setVerify(verify);
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIsThereAMasterNode(
      modeIndicator);
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* masterHeuristicAndOthers;
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__26234 = ::x10aux::makeStringLit("-sl"); strLit__26234; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__26235 = ::x10aux::makeStringLit("AS"); strLit__26235; })));
    
    //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(heuristicString)->x10::lang::String::indexOf(
                                    ((x10_char)'*')), ((x10_int)-1))))
    {
        
        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        masterHeuristicAndOthers = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26236 = ::x10aux::makeStringLit("*"); strLit__26236; })), heuristicString);
        
        //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuristicString = ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                            ((x10_long)1ll));
        
        //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::entities::NodeConfig* masterConfig = ::cpls::Main::makeMasterConfig(
                                                       opts,
                                                       ::x10aux::nullCheck(problemModel)->FMGL(size),
                                                       ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                         ((x10_long)0ll)));
        
        //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10aux::nullCheck(configCPLS)->setMasterConfig(
          masterConfig);
    } else 
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (modeIndicator) {
        
        //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26239 = ::x10aux::makeStringLit("Error_Ini. Debe indicar una heur\355stica para el nodo master"); strLit__26239; }))));
    }
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::cpls::Main::heuristicsAndRolesDefinition(opts, ::x10aux::nullCheck(problemModel)->FMGL(size),
                                                 heuristicString);
    
    //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((modeIndicator && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                    ((((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))) + (((x10_long)1ll)))))))
    {
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26240 = ::x10aux::makeStringLit("Error_Ini. if - Inconsistencia en el numero total de nodos: "); strLit__26240; })), ((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1))))));
        
        //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        return;
    } else 
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((!(modeIndicator) && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                       ((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))))))
    {
        
        //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26241 = ::x10aux::makeStringLit("Error_Ini. elseif - Inconsistencia en el numero total de nodos"); strLit__26241; })), ((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1))))));
        
        //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        return;
    }
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setConfigNodes(nodeConfigs);
    
    //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* cplsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (cplsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->FMGL(size), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__26242 = ::x10aux::makeStringLit("P_lm"); strLit__26242; })),
                                                       ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__26243 = ::x10aux::makeStringLit("P_lmM"); strLit__26243; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__26244 = ::x10aux::makeStringLit("P_lmD"); strLit__26244; })),
                         0.5));
    
    //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* teamsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (teamsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->FMGL(size), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__26245 = ::x10aux::makeStringLit("P_e"); strLit__26245; })),
                                                       ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__26246 = ::x10aux::makeStringLit("P_eM"); strLit__26246; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__26247 = ::x10aux::makeStringLit("P_eD"); strLit__26247; })),
                         0.5));
    
    //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setCPLSPoolConfig(cplsPoolConfig);
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTeamsPoolConfig(teamsPoolConfig);
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setSeed(inSeed);
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTimesPerInstance(
      ((x10_long)(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__26248 = ::x10aux::makeStringLit("-b"); strLit__26248; })),
                    ((x10_int)10)))));
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int outFormat = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26249 = ::x10aux::makeStringLit("-of"); strLit__26249; })),
                          ((x10_int)1));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long costFromF = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__26250 = ::x10aux::makeStringLit("-tf"); strLit__26250; })),
                           ((x10_long)0ll));
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int tCostFromCL = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__26251 = ::x10aux::makeStringLit("-tc"); strLit__26251; })),
                            ((x10_int)0));
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int testNb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                       (__extension__ ({ static ::x10::lang::String* strLit__26252 = ::x10aux::makeStringLit("-b"); strLit__26252; })),
                       ((x10_int)10));
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setOutFormat(outFormat);
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long c = ((x10_long)0ll);
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean sl = false;
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((::x10aux::struct_equals(costFromF, ((x10_long)0ll))))
    {
        
        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        if (((((x10_long)(tCostFromCL))) >= (((x10_long)0ll))))
        {
            
            //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            c = ((x10_long)(tCostFromCL));
            
            //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            sl = false;
            
            //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26253 = ::x10aux::makeStringLit("Info: Target from CL: lower or equal than "); strLit__26253; })), c)));
        } else {
            
            //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            c = ((((x10_long)(tCostFromCL))) * (((x10_long)-1ll)));
            
            //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            sl = true;
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26254 = ::x10aux::makeStringLit("Info: Target from CL: strictly lower than "); strLit__26254; })), c)));
        }
        
    } else {
        
        //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        sl = ((costFromF) < (((x10_long)0ll)));
        
        //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        if (((::x10aux::struct_equals(costFromF, ((x10_long)1ll))) ||
            (::x10aux::struct_equals(costFromF, ((x10_long)-1ll)))))
        {
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)1ll));
        } else {
            
            //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)2ll));
        }
        
        //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26257 = ::x10aux::makeStringLit("Info: Target from file: "); strLit__26257; })), sl
            ? ((__extension__ ({ static ::x10::lang::String* strLit__26258 = ::x10aux::makeStringLit("strictly lower than "); strLit__26258; })))
            : ((__extension__ ({ static ::x10::lang::String* strLit__26259 = ::x10aux::makeStringLit(" lower or equal than "); strLit__26259; })))), c)));
    }
    
    //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long tCost = ((c) >= (((x10_long)0ll))) ? (c) : (((x10_long)0ll));
    
    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean sLow = sl;
    
    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTargetCost(tCost);
    
    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setStrictLow(sLow);
    
    //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMinDistance(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__26260 = ::x10aux::makeStringLit("-D"); strLit__26260; })),
                                                      0.3));
    
    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(configCPLS, opts);
}

//#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::cpls::entities::NodeConfig* cpls::Main::makeMasterConfig(
  ::cpls::ParamManager* opts, x10_long problemSize, ::x10::lang::String* solverIn) {
    
    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__26261 = ::x10aux::makeStringLit("-N"); strLit__26261; })),
                             ((x10_int)1));
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::NodeConfig* masterConfig =  (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    x10_int heuristic__26165 = ::cpls::Main::whichHeuristicInt(
                                 solverIn);
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::x10aux::nullCheck(masterConfig)->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::x10aux::nullCheck(masterConfig)->FMGL(heuristic) = heuristic__26165;
    ::x10aux::nullCheck(masterConfig)->FMGL(rol) = ((x10_int)2);
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setHeuristic(::cpls::Main::whichHeuristicInt(
                                                      solverIn));
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setNumberOfTeams(((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam)));
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setNodesPerTeam(nodesPerTeam);
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setTeamId(((x10_int)-1));
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setInterTeamCommTime(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__26262 = ::x10aux::makeStringLit("-I"); strLit__26262; })),
        ((x10_long)0ll)));
    
    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setAffectedPer(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__26263 = ::x10aux::makeStringLit("-A"); strLit__26263; })),
                                                        1.0));
    
    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setIniDelay(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                     (__extension__ ({ static ::x10::lang::String* strLit__26264 = ::x10aux::makeStringLit("-W"); strLit__26264; })),
                                                     ((x10_long)0ll)));
    
    //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setVerify((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                            (__extension__ ({ static ::x10::lang::String* strLit__26265 = ::x10aux::makeStringLit("-v"); strLit__26265; })),
                                                                            ((x10_int)0)),
                                                                          ((x10_int)1))));
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setChangeProb(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__26266 = ::x10aux::makeStringLit("-C"); strLit__26266; })),
                                                       ((x10_int)100)));
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setDiversificationOption(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__26267 = ::x10aux::makeStringLit("O"); strLit__26267; })),
        ((x10_int)0)));
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__26268 = ::x10aux::makeStringLit("-mt"); strLit__26268; })),
                                                    ((x10_long)0ll)));
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxIters(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                     (__extension__ ({ static ::x10::lang::String* strLit__26269 = ::x10aux::makeStringLit("-mi"); strLit__26269; })),
                                                     ((x10_long)100000000ll)));
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxRestarts(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__26270 = ::x10aux::makeStringLit("-mr"); strLit__26270; })),
                                                        ((x10_int)0)));
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setReportPart((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                (__extension__ ({ static ::x10::lang::String* strLit__26271 = ::x10aux::makeStringLit("-rp"); strLit__26271; })),
                                                                                ((x10_int)0)),
                                                                              ((x10_int)1))));
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setModParams(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__26272 = ::x10aux::makeStringLit("-M"); strLit__26272; })),
                                                      ((x10_int)1)));
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setChangeOnDiver(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                          (__extension__ ({ static ::x10::lang::String* strLit__26273 = ::x10aux::makeStringLit("-CD"); strLit__26273; })),
                                                          ((x10_int)1)));
    
    //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__26274 = ::x10aux::makeStringLit("-R"); strLit__26274; })),
                    ((x10_int)0));
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__26275 = ::x10aux::makeStringLit("-U"); strLit__26275; })),
                    ((x10_int)0));
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (problemSize))) * (::x10::lang::MathNatives::log(((x10_double) (problemSize)))))))
      : (rep);
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int maxUpdateI;
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* mustr = (__extension__ ({
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/lang/System.x10"
        ::x10::lang::String* name__17021 = (__extension__ ({ static ::x10::lang::String* strLit__26276 = ::x10aux::makeStringLit("MU"); strLit__26276; }));
        ::x10aux::nullCheck(::x10::lang::Runtime::FMGL(env__get)())->getOrElse(
          name__17021, ::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }))
    ;
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ::x10::util::StringUtil::parseInt(mustr);
    } else {
        
        //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ((x10_int)100000);
    }
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setReportI(reportI);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setUpdateI(updateI);
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxUpdateI(maxUpdateI);
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return masterConfig;
    
}

//#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::Main::heuristicsAndRolesDefinition(
  ::cpls::ParamManager* opts, x10_long problemSize, ::x10::lang::String* solverIn) {
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__26279 = ::x10aux::makeStringLit("-N"); strLit__26279; })),
                             ((x10_int)1));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int numberOfTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__26280 = ::x10aux::makeStringLit("-ce"); strLit__26280; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long interTeamCommTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__26281 = ::x10aux::makeStringLit("-I"); strLit__26281; })),
                                   ((x10_long)0ll));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_double affectedPer = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__26282 = ::x10aux::makeStringLit("-A"); strLit__26282; })),
                               1.0);
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long iniDelay = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26283 = ::x10aux::makeStringLit("-W"); strLit__26283; })),
                          ((x10_long)0ll));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__26284 = ::x10aux::makeStringLit("-v"); strLit__26284; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int changeProb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__26285 = ::x10aux::makeStringLit("-C"); strLit__26285; })),
                           ((x10_int)100));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int divOption = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26286 = ::x10aux::makeStringLit("O"); strLit__26286; })),
                          ((x10_int)0));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long maxTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__26287 = ::x10aux::makeStringLit("-mt"); strLit__26287; })),
                         ((x10_long)0ll));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long maxIters = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26288 = ::x10aux::makeStringLit("-mi"); strLit__26288; })),
                          ((x10_long)100000000ll));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int maxRestarts = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__26289 = ::x10aux::makeStringLit("-mr"); strLit__26289; })),
                            ((x10_int)0));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean reportPart = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__26290 = ::x10aux::makeStringLit("-rp"); strLit__26290; })),
                                                        ((x10_int)0)),
                                                      ((x10_int)1)));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int modParams = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26291 = ::x10aux::makeStringLit("-M"); strLit__26291; })),
                          ((x10_int)1));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int changeOnDiver = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                              (__extension__ ({ static ::x10::lang::String* strLit__26292 = ::x10aux::makeStringLit("-CD"); strLit__26292; })),
                              ((x10_int)1));
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__26293 = ::x10aux::makeStringLit("-R"); strLit__26293; })),
                    ((x10_int)0));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__26294 = ::x10aux::makeStringLit("-U"); strLit__26294; })),
                    ((x10_int)0));
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (problemSize))) * (::x10::lang::MathNatives::log(((x10_double) (problemSize)))))))
      : (rep);
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int maxUpdateI;
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* mustr = (__extension__ ({
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/lang/System.x10"
        ::x10::lang::String* name__18239 = (__extension__ ({ static ::x10::lang::String* strLit__26295 = ::x10aux::makeStringLit("MU"); strLit__26295; }));
        ::x10aux::nullCheck(::x10::lang::Runtime::FMGL(env__get)())->getOrElse(
          name__18239, ::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }))
    ;
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ::x10::util::StringUtil::parseInt(mustr);
    } else {
        
        //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        maxUpdateI = ((x10_int)100000);
    }
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
       (new (::x10aux::alloc_z< ::x10::array::Array_2< ::cpls::entities::NodeConfig*> >()) ::x10::array::Array_2< ::cpls::entities::NodeConfig*>());
    (nodeConfigs)->::x10::array::Array_2< ::cpls::entities::NodeConfig*>::_constructor(
      ((x10_long)(numberOfTeams)), ((x10_long)(nodesPerTeam)),
      (__extension__ ({
          ::cpls::entities::NodeConfig* alloc__3288 =  (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
          
          //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
          alloc__3288->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
          alloc__3288;
      }))
      );
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teamsWithMultiplicity;
    
    //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(solverIn)->x10::lang::String::indexOf(
                                    ((x10_char)'-')), ((x10_int)-1))))
    {
        
        //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26298 = ::x10aux::makeStringLit("-"); strLit__26298; })), solverIn);
    } else {
        
        //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                 solverIn);
    }
    
    //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teams;
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodesWithMultiplicity;
    
    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodes;
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* heuristic;
    
    //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int multiplicityOfTeam;
    
    //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int multiplicityOfNode;
    
    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int counter = ((x10_int)0);
    
    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int k = ((x10_int)0);
    x10_int l = ((x10_int)0);
    x10_int m = ((x10_int)0);
    x10_int n = ((x10_int)0);
    x10_int i = ((x10_int)0);
    x10_int j = ((x10_int)0);
    
    //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (((!::x10aux::struct_equals(teamsWithMultiplicity,
                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        (((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))) > (((x10_long)0ll)))))
    {
        
        //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        {
            for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))));
                 k = ((k) + (((x10_int)1)))) {
                
                //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                    ((x10_long)(k))))->x10::lang::String::indexOf(
                                                ((x10_char)'/')),
                                              ((x10_int)-1))))
                {
                    
                    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26300 = ::x10aux::makeStringLit("/"); strLit__26300; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                } else {
                    
                    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                      ((x10_long)(k)), ::x10::lang::String::__plus(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                     ((x10_long)(k))), (__extension__ ({ static ::x10::lang::String* strLit__26303 = ::x10aux::makeStringLit("/1"); strLit__26303; }))));
                    
                    //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26304 = ::x10aux::makeStringLit("/"); strLit__26304; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                }
                
                //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                if (((!::x10aux::struct_equals(teams, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                    (((x10_long)(::x10aux::nullCheck(teams)->FMGL(size))) > (((x10_long)0ll)))))
                {
                    
                    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    nodesWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26306 = ::x10aux::makeStringLit(","); strLit__26306; })), ::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                               ((x10_long)0ll)));
                    
                    //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    multiplicityOfTeam = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                             ((x10_long)1ll)));
                    
                    //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    {
                        for (l = ((x10_int)0); ((l) < (multiplicityOfTeam));
                             l = ((l) + (((x10_int)1)))) {
                            
                            //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                            {
                                for (m = ((x10_int)0); ((((x10_long)(m))) < ((x10_long)(::x10aux::nullCheck(nodesWithMultiplicity)->FMGL(size))));
                                     m = ((m) + (((x10_int)1))))
                                {
                                    
                                    //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                        ((x10_long)(m))))->x10::lang::String::indexOf(
                                                                    (__extension__ ({ static ::x10::lang::String* strLit__26310 = ::x10aux::makeStringLit("x"); strLit__26310; }))),
                                                                  ((x10_int)-1))))
                                    {
                                        
                                        //#line 229 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26311 = ::x10aux::makeStringLit("x"); strLit__26311; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    } else {
                                        
                                        //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                        ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                                          ((x10_long)(m)),
                                          ::x10::lang::String::__plus(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                        ((x10_long)(m))), (__extension__ ({ static ::x10::lang::String* strLit__26314 = ::x10aux::makeStringLit("x1"); strLit__26314; }))));
                                        
                                        //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__26315 = ::x10aux::makeStringLit("x"); strLit__26315; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    }
                                    
                                    //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    multiplicityOfNode = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                             ((x10_long)1ll)));
                                    
                                    //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    heuristic = ::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                  ((x10_long)0ll));
                                    
                                    //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    {
                                        for (n = ((x10_int)0);
                                             ((n) < (multiplicityOfNode));
                                             n = ((n) + (((x10_int)1))))
                                        {
                                            
                                            //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            i = ((counter) / ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            j = ((counter) % ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            if ((::x10aux::struct_equals(((counter) % ::x10aux::zeroCheck(nodesPerTeam)),
                                                                         ((x10_int)0))))
                                            {
                                                
                                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__26169 =
                                                  ((x10_long)(i));
                                                x10_long j__26170 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* v__26171 =
                                                  (__extension__ ({
                                                    
                                                    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                                    ::cpls::entities::NodeConfig* alloc__26172 =
                                                       (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
                                                    
                                                    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    x10_int heuristic__26166 =
                                                      ::cpls::Main::whichHeuristicInt(
                                                        heuristic);
                                                    
                                                    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__26172->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
                                                    
                                                    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__26172->FMGL(heuristic) =
                                                      heuristic__26166;
                                                    alloc__26172->FMGL(rol) =
                                                      ((x10_int)1);
                                                    alloc__26172;
                                                }))
                                                ;
                                                ::cpls::entities::NodeConfig* ret__26173;
                                                
                                                //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26167 =
                                                      i__26169;
                                                    x10_long j__26168 =
                                                      j__26170;
                                                    ((j__26168) + (((i__26167) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                , v__26171);
                                                
                                                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__26173 =
                                                  v__26171;
                                                
                                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__26173;
                                            } else {
                                                
                                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__26177 =
                                                  ((x10_long)(i));
                                                x10_long j__26178 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* v__26179 =
                                                  (__extension__ ({
                                                    
                                                    //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                                    ::cpls::entities::NodeConfig* alloc__26180 =
                                                       (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
                                                    
                                                    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    x10_int heuristic__26174 =
                                                      ::cpls::Main::whichHeuristicInt(
                                                        heuristic);
                                                    
                                                    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__26180->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
                                                    
                                                    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                                                    alloc__26180->FMGL(heuristic) =
                                                      heuristic__26174;
                                                    alloc__26180->FMGL(rol) =
                                                      ((x10_int)0);
                                                    alloc__26180;
                                                }))
                                                ;
                                                ::cpls::entities::NodeConfig* ret__26181;
                                                
                                                //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26175 =
                                                      i__26177;
                                                    x10_long j__26176 =
                                                      j__26178;
                                                    ((j__26176) + (((i__26175) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                , v__26179);
                                                
                                                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__26181 =
                                                  v__26179;
                                                
                                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__26181;
                                            }
                                            
                                            //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19372 =
                                                  ((x10_long)(i));
                                                x10_long j__19373 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19374;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19374 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26182 =
                                                      i__19372;
                                                    x10_long j__26183 =
                                                      j__19373;
                                                    ((j__26183) + (((i__26182) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19374;
                                            }))
                                            )->setHeuristic(
                                              ::cpls::Main::whichHeuristicInt(
                                                heuristic));
                                            
                                            //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19378 =
                                                  ((x10_long)(i));
                                                x10_long j__19379 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19380;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19380 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26184 =
                                                      i__19378;
                                                    x10_long j__26185 =
                                                      j__19379;
                                                    ((j__26185) + (((i__26184) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19380;
                                            }))
                                            )->setNumberOfTeams(
                                              numberOfTeams);
                                            
                                            //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19384 =
                                                  ((x10_long)(i));
                                                x10_long j__19385 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19386;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19386 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26186 =
                                                      i__19384;
                                                    x10_long j__26187 =
                                                      j__19385;
                                                    ((j__26187) + (((i__26186) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19386;
                                            }))
                                            )->setNodesPerTeam(
                                              nodesPerTeam);
                                            
                                            //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            if (modeIndicator)
                                            {
                                                
                                                //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                                ::x10aux::nullCheck((__extension__ ({
                                                    
                                                    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__19390 =
                                                      ((x10_long)(i));
                                                    x10_long j__19391 =
                                                      ((x10_long)(j));
                                                    ::cpls::entities::NodeConfig* ret__19392;
                                                    
                                                    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__19392 =
                                                      (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__26188 =
                                                          i__19390;
                                                        x10_long j__26189 =
                                                          j__19391;
                                                        ((j__26189) + (((i__26188) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__19392;
                                                }))
                                                )->setTeamId(
                                                  ((((x10_int)1)) + (((i) * (nodesPerTeam)))));
                                            } else {
                                                
                                                //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                                ::x10aux::nullCheck((__extension__ ({
                                                    
                                                    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__19396 =
                                                      ((x10_long)(i));
                                                    x10_long j__19397 =
                                                      ((x10_long)(j));
                                                    ::cpls::entities::NodeConfig* ret__19398;
                                                    
                                                    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    ret__19398 =
                                                      (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                        
                                                        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        x10_long i__26190 =
                                                          i__19396;
                                                        x10_long j__26191 =
                                                          j__19397;
                                                        ((j__26191) + (((i__26190) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                    }))
                                                    );
                                                    ret__19398;
                                                }))
                                                )->setTeamId(
                                                  ((i) * (nodesPerTeam)));
                                            }
                                            
                                            //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19402 =
                                                  ((x10_long)(i));
                                                x10_long j__19403 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19404;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19404 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26192 =
                                                      i__19402;
                                                    x10_long j__26193 =
                                                      j__19403;
                                                    ((j__26193) + (((i__26192) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19404;
                                            }))
                                            )->setInterTeamCommTime(
                                              interTeamCommTime);
                                            
                                            //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19408 =
                                                  ((x10_long)(i));
                                                x10_long j__19409 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19410;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19410 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26194 =
                                                      i__19408;
                                                    x10_long j__26195 =
                                                      j__19409;
                                                    ((j__26195) + (((i__26194) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19410;
                                            }))
                                            )->setAffectedPer(
                                              affectedPer);
                                            
                                            //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19414 =
                                                  ((x10_long)(i));
                                                x10_long j__19415 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19416;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19416 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26196 =
                                                      i__19414;
                                                    x10_long j__26197 =
                                                      j__19415;
                                                    ((j__26197) + (((i__26196) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19416;
                                            }))
                                            )->setIniDelay(
                                              iniDelay);
                                            
                                            //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19420 =
                                                  ((x10_long)(i));
                                                x10_long j__19421 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19422;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19422 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26198 =
                                                      i__19420;
                                                    x10_long j__26199 =
                                                      j__19421;
                                                    ((j__26199) + (((i__26198) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19422;
                                            }))
                                            )->setVerify(
                                              verify);
                                            
                                            //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19426 =
                                                  ((x10_long)(i));
                                                x10_long j__19427 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19428;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19428 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26200 =
                                                      i__19426;
                                                    x10_long j__26201 =
                                                      j__19427;
                                                    ((j__26201) + (((i__26200) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19428;
                                            }))
                                            )->setChangeProb(
                                              changeProb);
                                            
                                            //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19432 =
                                                  ((x10_long)(i));
                                                x10_long j__19433 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19434;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19434 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26202 =
                                                      i__19432;
                                                    x10_long j__26203 =
                                                      j__19433;
                                                    ((j__26203) + (((i__26202) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19434;
                                            }))
                                            )->setDiversificationOption(
                                              divOption);
                                            
                                            //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19438 =
                                                  ((x10_long)(i));
                                                x10_long j__19439 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19440;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19440 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26204 =
                                                      i__19438;
                                                    x10_long j__26205 =
                                                      j__19439;
                                                    ((j__26205) + (((i__26204) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19440;
                                            }))
                                            )->setMaxTime(
                                              maxTime);
                                            
                                            //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19444 =
                                                  ((x10_long)(i));
                                                x10_long j__19445 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19446;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19446 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26206 =
                                                      i__19444;
                                                    x10_long j__26207 =
                                                      j__19445;
                                                    ((j__26207) + (((i__26206) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19446;
                                            }))
                                            )->setMaxIters(
                                              maxIters);
                                            
                                            //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19450 =
                                                  ((x10_long)(i));
                                                x10_long j__19451 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19452;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19452 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26208 =
                                                      i__19450;
                                                    x10_long j__26209 =
                                                      j__19451;
                                                    ((j__26209) + (((i__26208) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19452;
                                            }))
                                            )->setMaxRestarts(
                                              maxRestarts);
                                            
                                            //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19456 =
                                                  ((x10_long)(i));
                                                x10_long j__19457 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19458;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19458 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26210 =
                                                      i__19456;
                                                    x10_long j__26211 =
                                                      j__19457;
                                                    ((j__26211) + (((i__26210) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19458;
                                            }))
                                            )->setReportPart(
                                              reportPart);
                                            
                                            //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19462 =
                                                  ((x10_long)(i));
                                                x10_long j__19463 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19464;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19464 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26212 =
                                                      i__19462;
                                                    x10_long j__26213 =
                                                      j__19463;
                                                    ((j__26213) + (((i__26212) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19464;
                                            }))
                                            )->setModParams(
                                              modParams);
                                            
                                            //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19468 =
                                                  ((x10_long)(i));
                                                x10_long j__19469 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19470;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19470 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26214 =
                                                      i__19468;
                                                    x10_long j__26215 =
                                                      j__19469;
                                                    ((j__26215) + (((i__26214) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19470;
                                            }))
                                            )->setChangeOnDiver(
                                              changeOnDiver);
                                            
                                            //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19474 =
                                                  ((x10_long)(i));
                                                x10_long j__19475 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19476;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19476 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26216 =
                                                      i__19474;
                                                    x10_long j__26217 =
                                                      j__19475;
                                                    ((j__26217) + (((i__26216) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19476;
                                            }))
                                            )->setReportI(
                                              reportI);
                                            
                                            //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19480 =
                                                  ((x10_long)(i));
                                                x10_long j__19481 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19482;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19482 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26218 =
                                                      i__19480;
                                                    x10_long j__26219 =
                                                      j__19481;
                                                    ((j__26219) + (((i__26218) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19482;
                                            }))
                                            )->setUpdateI(
                                              updateI);
                                            
                                            //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                            ::x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__19486 =
                                                  ((x10_long)(i));
                                                x10_long j__19487 =
                                                  ((x10_long)(j));
                                                ::cpls::entities::NodeConfig* ret__19488;
                                                
                                                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                ret__19488 =
                                                  (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                    
                                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                    x10_long i__26220 =
                                                      i__19486;
                                                    x10_long j__26221 =
                                                      j__19487;
                                                    ((j__26221) + (((i__26220) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                                }))
                                                );
                                                ret__19488;
                                            }))
                                            )->setMaxUpdateI(
                                              maxUpdateI);
                                            
                                            //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
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
    
    //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return nodeConfigs;
    
}

//#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__26319 = ::x10aux::makeStringLit("MSP"); strLit__26319; }))))
    {
        
        //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)1);
    } else 
    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26321 = ::x10aux::makeStringLit("CAP"); strLit__26321; }))))
    {
        
        //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)2);
    } else 
    //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26323 = ::x10aux::makeStringLit("AIP"); strLit__26323; }))))
    {
        
        //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)3);
    } else 
    //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26325 = ::x10aux::makeStringLit("LNP"); strLit__26325; }))))
    {
        
        //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 291 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)4);
    } else 
    //#line 292 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26327 = ::x10aux::makeStringLit("NPP"); strLit__26327; }))))
    {
        
        //#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)5);
    } else 
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26329 = ::x10aux::makeStringLit("SMP"); strLit__26329; }))))
    {
        
        //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)6);
    } else 
    //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26331 = ::x10aux::makeStringLit("HRP"); strLit__26331; }))))
    {
        
        //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)7);
    } else 
    //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__26333 = ::x10aux::makeStringLit("QAP"); strLit__26333; }))))
    {
        
        //#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)8);
    } else {
        
        //#line 305 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)0);
        
        //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26335 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__26335; }))));
    }
    
    //#line 308 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return problemParam;
    
}

//#line 341 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::whichHeuristicInt(::x10::lang::String* solverIn) {
    
    //#line 342 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int heuParam;
    
    //#line 343 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__26336 = ::x10aux::makeStringLit("AS"); strLit__26336; }))))
    {
        
        //#line 344 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)2);
    } else 
    //#line 345 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__26337 = ::x10aux::makeStringLit("EO"); strLit__26337; }))))
    {
        
        //#line 346 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)3);
    } else 
    //#line 347 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__26338 = ::x10aux::makeStringLit("RoTS"); strLit__26338; }))))
    {
        
        //#line 348 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)4);
    } else 
    //#line 349 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__26339 = ::x10aux::makeStringLit("GA"); strLit__26339; }))))
    {
        
        //#line 350 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)5);
    } else 
    //#line 351 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__26340 = ::x10aux::makeStringLit("HY"); strLit__26340; }))))
    {
        
        //#line 352 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)6);
    } else {
        
        //#line 354 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)0);
    }
    
    //#line 355 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return heuParam;
    
}

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::cpls::Main* cpls::Main::cpls__Main____this__cpls__Main(
  ) {
    return this;
    
}
void cpls::Main::_constructor() {
    ::cpls::Main* this__26228 = this;
    
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
#include <x10/util/Random.h>
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

//#line 312 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPProblemModelFactory::make(
  ::cpls::ParamManager* opts, x10_int problem, ::x10::lang::Rail< x10_long >* problemParams,
  x10_long inSeed) {
    
    //#line 313 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__26347 = ::x10aux::makeStringLit("-s"); strLit__26347; })),
                      ((x10_long)10ll));
    
    //#line 314 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int baseValue = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__26348 = ::x10aux::makeStringLit("-bv"); strLit__26348; })),
                          ((x10_int)0));
    
    //#line 315 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* inPathDataProblem = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__26349 = ::x10aux::makeStringLit("-f"); strLit__26349; })),
                                               (__extension__ ({ static ::x10::lang::String* strLit__26350 = ::x10aux::makeStringLit("."); strLit__26350; })));
    
    //#line 316 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* inPathVectorSol = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__26351 = ::x10aux::makeStringLit("-if"); strLit__26351; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__26352 = ::x10aux::makeStringLit("."); strLit__26352; })));
    
    //#line 318 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::util::Random* random =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    (random)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    x10_long seed__26222 = inSeed;
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    random->x10::util::Random::init(seed__26222);
    
    //#line 320 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    switch (problem) {
        
        //#line 321 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)1): ;
        {
            {
                
                //#line 322 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                ::cpls::problem::MSPModel* alloc__3291 = 
                (new (::x10aux::alloc_z< ::cpls::problem::MSPModel>()) ::cpls::problem::MSPModel());
                (alloc__3291)->::cpls::problem::MSPModel::_constructor(
                  size);
                return alloc__3291;
                
            }
        }
        //#line 323 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::problem::CAPModel* alloc__3292 = 
                (new (::x10aux::alloc_z< ::cpls::problem::CAPModel>()) ::cpls::problem::CAPModel());
                (alloc__3292)->::cpls::problem::CAPModel::_constructor(
                  size);
                return alloc__3292;
                
            }
        }
        //#line 324 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::problem::AIPModel* alloc__3293 = 
                (new (::x10aux::alloc_z< ::cpls::problem::AIPModel>()) ::cpls::problem::AIPModel());
                (alloc__3293)->::cpls::problem::AIPModel::_constructor(
                  size);
                return alloc__3293;
                
            }
        }
        //#line 325 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::problem::LNPModel* alloc__3294 = 
                (new (::x10aux::alloc_z< ::cpls::problem::LNPModel>()) ::cpls::problem::LNPModel());
                (alloc__3294)->::cpls::problem::LNPModel::_constructor(
                  size);
                return alloc__3294;
                
            }
        }
        //#line 326 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)6): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__3295 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__3295)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__3295;
                
            }
        }
        //#line 327 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)7): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__3296 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__3296)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__3296;
                
            }
        }
        //#line 328 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)8): ;
        {
            
            //#line 329 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10::lang::Rail< x10_long >* params = ::cpls::util::CPLSFileReader::tryReadParameters(
                                                      inPathDataProblem,
                                                      problemParams);
            
            //#line 330 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            x10_long n1 = ((::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                              ((x10_long)0ll))) < (((x10_long)0ll)))
              ? (((x10_long)1ll)) : (::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                                       ((x10_long)0ll)));
            
            //#line 332 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::cpls::problem::QAPModel* problemModel =  (new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel());
            (problemModel)->::cpls::problem::QAPModel::_constructor(
              n1, inPathDataProblem, inPathVectorSol, baseValue);
            
            //#line 334 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->loadData(inPathDataProblem);
            
            //#line 335 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            return problemModel;
            
        }
        //#line 336 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        default: ;
        {
            {
                ::cpls::problem::PNPModel* alloc__3297 = 
                (new (::x10aux::alloc_z< ::cpls::problem::PNPModel>()) ::cpls::problem::PNPModel());
                (alloc__3297)->::cpls::problem::PNPModel::_constructor(
                  size);
                return alloc__3297;
                
            }
        }
    }
}

//#line 311 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPProblemModelFactory::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPProblemModelFactory::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__26355 = ::x10aux::makeStringLit("struct cpls.Main.COPProblemModelFactory"); strLit__26355; }));
    
}
x10_boolean cpls::Main__COPProblemModelFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__26223 = (*this);
    ::cpls::Main__COPProblemModelFactory other__26224 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
    return true;
    
}
x10_boolean cpls::Main__COPProblemModelFactory::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__26225 = (*this);
    ::cpls::Main__COPProblemModelFactory other__26226 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
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
