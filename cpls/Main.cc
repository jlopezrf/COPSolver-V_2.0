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
#include <x10/lang/System.h>
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
#include <cpls/CPLSOptionsEnum__NodeRoles.h>
#include <x10/lang/Math.h>
#include <x10/util/StringUtil.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25027 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__25027; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:269";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25029 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__25029; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:272";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25031 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__25031; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:275";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25033 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__25033; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:278";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25035 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__25035; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:281";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25037 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__25037; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:284";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25039 = ::x10aux::makeStringLit("HRP Problem"); strLit__25039; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:287";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__25041 = ::x10aux::makeStringLit("QAP Problem"); strLit__25041; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10:290";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< x10_long >* problemParams = ::x10::lang::Rail< x10_long >::_make(((x10_long)3ll),
                                                                                        ((x10_long)-1ll));
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::ParamManager* opts = ::cpls::ParamManager::_make(args);
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::CPLSConfig* configCPLS = ::cpls::entities::CPLSConfig::_make();
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__24900 = ::x10aux::makeStringLit("-p"); strLit__24900; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__24901 = ::x10aux::makeStringLit("QAP"); strLit__24901; })));
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long inSeed = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                        (__extension__ ({ static ::x10::lang::String* strLit__24902 = ::x10aux::makeStringLit("-S"); strLit__24902; })),
                        ::x10::lang::System::nanoTime());
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPProblemModelFactory::make(
                                                           opts,
                                                           problem,
                                                           problemParams,
                                                           inSeed);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setProblemModel(problemModel);
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__24903 = ::x10aux::makeStringLit("-ce"); strLit__24903; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__24904 = ::x10aux::makeStringLit("-v"); strLit__24904; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setVerify(verify);
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIsThereAMasterNode(
      modeIndicator);
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* masterHeuristicAndOthers;
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__24905 = ::x10aux::makeStringLit("-sl"); strLit__24905; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__24906 = ::x10aux::makeStringLit("AS"); strLit__24906; })));
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(heuristicString)->x10::lang::String::indexOf(
                                    ((x10_char)'*')), ((x10_int)-1))))
    {
        
        //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        masterHeuristicAndOthers = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24907 = ::x10aux::makeStringLit("*"); strLit__24907; })), heuristicString);
        
        //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuristicString = ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                            ((x10_long)1ll));
        
        //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::entities::NodeConfig* masterConfig = ::cpls::Main::makeMasterConfig(
                                                       opts,
                                                       ::x10aux::nullCheck(problemModel)->FMGL(size),
                                                       ::x10aux::nullCheck(masterHeuristicAndOthers)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                         ((x10_long)0ll)));
        
        //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10aux::nullCheck(configCPLS)->setMasterConfig(
          masterConfig);
    } else 
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (modeIndicator) {
        
        //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24910 = ::x10aux::makeStringLit("Debe indicar una heur\355stica para el nodo master"); strLit__24910; }))));
    }
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::cpls::Main::heuristicsAndRolesDefinition(opts, ::x10aux::nullCheck(problemModel)->FMGL(size),
                                                 heuristicString);
    
    //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((modeIndicator && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                    ((((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))) + (((x10_long)1ll)))))))
    {
        
        //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24911 = ::x10aux::makeStringLit("Inconsistencia en el numero total de nodos"); strLit__24911; }))));
        
        //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        return;
    } else 
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!(modeIndicator) && (!::x10aux::struct_equals(((x10_long)::x10aux::num_hosts),
                                                       ((::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_1)))))))
    {
        
        //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24912 = ::x10aux::makeStringLit("Inconsistencia en el numero total de nodos"); strLit__24912; }))));
        
        //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        return;
    }
    
    //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setConfigNodes(nodeConfigs);
    
    //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::PoolConfig* cplsPoolConfig = ::cpls::entities::PoolConfig::_make(::x10aux::nullCheck(problemModel)->FMGL(size),
                                                                                       ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                         (__extension__ ({ static ::x10::lang::String* strLit__24913 = ::x10aux::makeStringLit("P_lm"); strLit__24913; })),
                                                                                         ((x10_int)4)),
                                                                                       ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                         (__extension__ ({ static ::x10::lang::String* strLit__24914 = ::x10aux::makeStringLit("P_lmM"); strLit__24914; })),
                                                                                         ((x10_int)0)),
                                                                                       ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                         (__extension__ ({ static ::x10::lang::String* strLit__24915 = ::x10aux::makeStringLit("P_lmD"); strLit__24915; })),
                                                                                         0.5));
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::PoolConfig* teamsPoolConfig = ::cpls::entities::PoolConfig::_make(::x10aux::nullCheck(problemModel)->FMGL(size),
                                                                                        ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                          (__extension__ ({ static ::x10::lang::String* strLit__24916 = ::x10aux::makeStringLit("P_e"); strLit__24916; })),
                                                                                          ((x10_int)4)),
                                                                                        ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                          (__extension__ ({ static ::x10::lang::String* strLit__24917 = ::x10aux::makeStringLit("P_eM"); strLit__24917; })),
                                                                                          ((x10_int)0)),
                                                                                        ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                          (__extension__ ({ static ::x10::lang::String* strLit__24918 = ::x10aux::makeStringLit("P_eD"); strLit__24918; })),
                                                                                          0.5));
    
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setCPLSPoolConfig(cplsPoolConfig);
    
    //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTeamsPoolConfig(teamsPoolConfig);
    
    //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setSeed(inSeed);
    
    //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTimesPerInstance(
      ((x10_long)(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24919 = ::x10aux::makeStringLit("-b"); strLit__24919; })),
                    ((x10_int)10)))));
    
    //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int outFormat = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24920 = ::x10aux::makeStringLit("-of"); strLit__24920; })),
                          ((x10_int)1));
    
    //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long costFromF = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__24921 = ::x10aux::makeStringLit("-tf"); strLit__24921; })),
                           ((x10_long)0ll));
    
    //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int tCostFromCL = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__24922 = ::x10aux::makeStringLit("-tc"); strLit__24922; })),
                            ((x10_int)0));
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int testNb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                       (__extension__ ({ static ::x10::lang::String* strLit__24923 = ::x10aux::makeStringLit("-b"); strLit__24923; })),
                       ((x10_int)10));
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setOutFormat(outFormat);
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long c = ((x10_long)0ll);
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean sl = false;
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((::x10aux::struct_equals(costFromF, ((x10_long)0ll))))
    {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        if (((((x10_long)(tCostFromCL))) >= (((x10_long)0ll))))
        {
            
            //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            c = ((x10_long)(tCostFromCL));
            
            //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            sl = false;
            
            //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__24924 = ::x10aux::makeStringLit("Target from CL: lower or equal than "); strLit__24924; })), c)));
        } else {
            
            //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            c = ((((x10_long)(tCostFromCL))) * (((x10_long)-1ll)));
            
            //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            sl = true;
            
            //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__24925 = ::x10aux::makeStringLit("Target from CL: strictly lower than "); strLit__24925; })), c)));
        }
        
    } else {
        
        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        sl = ((costFromF) < (((x10_long)0ll)));
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        if (((::x10aux::struct_equals(costFromF, ((x10_long)1ll))) ||
            (::x10aux::struct_equals(costFromF, ((x10_long)-1ll)))))
        {
            
            //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)1ll));
        } else {
            
            //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            c = problemParams->x10::lang::Rail< x10_long >::__apply(
                  ((x10_long)2ll));
        }
        
        //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__24928 = ::x10aux::makeStringLit("Target from file: "); strLit__24928; })), sl
            ? ((__extension__ ({ static ::x10::lang::String* strLit__24929 = ::x10aux::makeStringLit("strictly lower than "); strLit__24929; })))
            : ((__extension__ ({ static ::x10::lang::String* strLit__24930 = ::x10aux::makeStringLit(" lower or equal than "); strLit__24930; })))), c)));
    }
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long tCost = ((c) >= (((x10_long)0ll))) ? (c) : (((x10_long)0ll));
    
    //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean sLow = sl;
    
    //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTargetCost(tCost);
    
    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setStrictLow(sLow);
    
    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMinDistance(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__24931 = ::x10aux::makeStringLit("-D"); strLit__24931; })),
                                                      0.3));
    
    //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(configCPLS, opts);
}

//#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
::cpls::entities::NodeConfig* cpls::Main::makeMasterConfig(
  ::cpls::ParamManager* opts, x10_long problemSize, ::x10::lang::String* solverIn) {
    
    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__24932 = ::x10aux::makeStringLit("-N"); strLit__24932; })),
                             ((x10_int)1));
    
    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::cpls::entities::NodeConfig* masterConfig = ::cpls::entities::NodeConfig::_make(::cpls::Main::whichHeuristicInt(
                                                                                       solverIn),
                                                                                     ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)());
    
    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setHeuristic(::cpls::Main::whichHeuristicInt(
                                                      solverIn));
    
    //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setNumberOfTeams(((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam)));
    
    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setNodesPerTeam(nodesPerTeam);
    
    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setTeamId(((x10_int)-1));
    
    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setInterTeamCommTime(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__24933 = ::x10aux::makeStringLit("-I"); strLit__24933; })),
        ((x10_long)0ll)));
    
    //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setAffectedPer(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__24934 = ::x10aux::makeStringLit("-A"); strLit__24934; })),
                                                        1.0));
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setIniDelay(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                     (__extension__ ({ static ::x10::lang::String* strLit__24935 = ::x10aux::makeStringLit("-W"); strLit__24935; })),
                                                     ((x10_long)0ll)));
    
    //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setVerify((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                            (__extension__ ({ static ::x10::lang::String* strLit__24936 = ::x10aux::makeStringLit("-v"); strLit__24936; })),
                                                                            ((x10_int)0)),
                                                                          ((x10_int)1))));
    
    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setChangeProb(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                       (__extension__ ({ static ::x10::lang::String* strLit__24937 = ::x10aux::makeStringLit("-C"); strLit__24937; })),
                                                       ((x10_int)100)));
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setDiversificationOption(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__24938 = ::x10aux::makeStringLit("O"); strLit__24938; })),
        ((x10_int)0)));
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__24939 = ::x10aux::makeStringLit("-mt"); strLit__24939; })),
                                                    ((x10_long)0ll)));
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxIters(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                     (__extension__ ({ static ::x10::lang::String* strLit__24940 = ::x10aux::makeStringLit("-mi"); strLit__24940; })),
                                                     ((x10_long)100000000ll)));
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxRestarts(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__24941 = ::x10aux::makeStringLit("-mr"); strLit__24941; })),
                                                        ((x10_int)0)));
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setReportPart((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                                (__extension__ ({ static ::x10::lang::String* strLit__24942 = ::x10aux::makeStringLit("-rp"); strLit__24942; })),
                                                                                ((x10_int)0)),
                                                                              ((x10_int)1))));
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setModParams(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__24943 = ::x10aux::makeStringLit("-M"); strLit__24943; })),
                                                      ((x10_int)1)));
    
    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setChangeOnDiver(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                          (__extension__ ({ static ::x10::lang::String* strLit__24944 = ::x10aux::makeStringLit("-CD"); strLit__24944; })),
                                                          ((x10_int)1)));
    
    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24945 = ::x10aux::makeStringLit("-R"); strLit__24945; })),
                    ((x10_int)0));
    
    //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24946 = ::x10aux::makeStringLit("-U"); strLit__24946; })),
                    ((x10_int)0));
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (problemSize))) * (::x10::lang::MathNatives::log(((x10_double) (problemSize)))))))
      : (rep);
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int maxUpdateI;
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* mustr = ::x10::lang::System::getenv(
                                   (__extension__ ({ static ::x10::lang::String* strLit__24947 = ::x10aux::makeStringLit("MU"); strLit__24947; })));
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        maxUpdateI = ::x10::util::StringUtil::parseInt(mustr);
    } else {
        
        //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        maxUpdateI = ((x10_int)100000);
    }
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setReportI(reportI);
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setUpdateI(updateI);
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10aux::nullCheck(masterConfig)->setMaxUpdateI(maxUpdateI);
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    return masterConfig;
    
}

//#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::Main::heuristicsAndRolesDefinition(
  ::cpls::ParamManager* opts, x10_long problemSize, ::x10::lang::String* solverIn) {
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__24948 = ::x10aux::makeStringLit("-N"); strLit__24948; })),
                             ((x10_int)1));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int numberOfTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean modeIndicator = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__24949 = ::x10aux::makeStringLit("-ce"); strLit__24949; })),
                                                           ((x10_int)1)),
                                                         ((x10_int)0)))
      ? (false) : (true);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long interTeamCommTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__24950 = ::x10aux::makeStringLit("-I"); strLit__24950; })),
                                   ((x10_long)0ll));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_double affectedPer = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                               (__extension__ ({ static ::x10::lang::String* strLit__24951 = ::x10aux::makeStringLit("-A"); strLit__24951; })),
                               1.0);
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long iniDelay = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24952 = ::x10aux::makeStringLit("-W"); strLit__24952; })),
                          ((x10_long)0ll));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean verify = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__24953 = ::x10aux::makeStringLit("-v"); strLit__24953; })),
                                                    ((x10_int)0)),
                                                  ((x10_int)1)));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int changeProb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__24954 = ::x10aux::makeStringLit("-C"); strLit__24954; })),
                           ((x10_int)100));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int divOption = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24955 = ::x10aux::makeStringLit("O"); strLit__24955; })),
                          ((x10_int)0));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long maxTime = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__24956 = ::x10aux::makeStringLit("-mt"); strLit__24956; })),
                         ((x10_long)0ll));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long maxIters = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24957 = ::x10aux::makeStringLit("-mi"); strLit__24957; })),
                          ((x10_long)100000000ll));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int maxRestarts = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__24958 = ::x10aux::makeStringLit("-mr"); strLit__24958; })),
                            ((x10_int)0));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean reportPart = (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__24959 = ::x10aux::makeStringLit("-rp"); strLit__24959; })),
                                                        ((x10_int)0)),
                                                      ((x10_int)1)));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int modParams = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__24960 = ::x10aux::makeStringLit("-M"); strLit__24960; })),
                          ((x10_int)1));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int changeOnDiver = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                              (__extension__ ({ static ::x10::lang::String* strLit__24961 = ::x10aux::makeStringLit("-CD"); strLit__24961; })),
                              ((x10_int)1));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24962 = ::x10aux::makeStringLit("-R"); strLit__24962; })),
                    ((x10_int)0));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__24963 = ::x10aux::makeStringLit("-U"); strLit__24963; })),
                    ((x10_int)0));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (problemSize))) * (::x10::lang::MathNatives::log(((x10_double) (problemSize)))))))
      : (rep);
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int maxUpdateI;
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* mustr = ::x10::lang::System::getenv(
                                   (__extension__ ({ static ::x10::lang::String* strLit__24964 = ::x10aux::makeStringLit("MU"); strLit__24964; })));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!::x10aux::struct_equals(mustr, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        maxUpdateI = ::x10::util::StringUtil::parseInt(mustr);
    } else {
        
        //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        maxUpdateI = ((x10_int)100000);
    }
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::x10::array::Array_2< ::cpls::entities::NodeConfig*>::_make(((x10_long)(numberOfTeams)),
                                                                   ((x10_long)(nodesPerTeam)),
                                                                   ::cpls::entities::NodeConfig::_make());
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teamsWithMultiplicity;
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if ((!::x10aux::struct_equals(::x10aux::nullCheck(solverIn)->x10::lang::String::indexOf(
                                    ((x10_char)'-')), ((x10_int)-1))))
    {
        
        //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24965 = ::x10aux::makeStringLit("-"); strLit__24965; })), solverIn);
    } else {
        
        //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        teamsWithMultiplicity = ::x10::lang::Rail< ::x10::lang::String* >::_make(((x10_long)1ll),
                                                                                 solverIn);
    }
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* teams;
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodesWithMultiplicity;
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* nodes;
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* heuristic;
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int multiplicityOfTeam;
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int multiplicityOfNode;
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int counter = ((x10_int)0);
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int k = ((x10_int)0);
    x10_int l = ((x10_int)0);
    x10_int m = ((x10_int)0);
    x10_int n = ((x10_int)0);
    x10_int i = ((x10_int)0);
    x10_int j = ((x10_int)0);
    
    //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (((!::x10aux::struct_equals(teamsWithMultiplicity,
                                   reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
        (((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))) > (((x10_long)0ll)))))
    {
        
        //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        {
            for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(teamsWithMultiplicity)->FMGL(size))));
                 k = ((k) + (((x10_int)1)))) {
                
                //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                    ((x10_long)(k))))->x10::lang::String::indexOf(
                                                ((x10_char)'/')),
                                              ((x10_int)-1))))
                {
                    
                    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24967 = ::x10aux::makeStringLit("/"); strLit__24967; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                } else {
                    
                    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                    ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                      ((x10_long)(k)), ::x10::lang::String::__plus(::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                     ((x10_long)(k))), (__extension__ ({ static ::x10::lang::String* strLit__24970 = ::x10aux::makeStringLit("/1"); strLit__24970; }))));
                    
                    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                    teams = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24971 = ::x10aux::makeStringLit("/"); strLit__24971; })), ::x10aux::nullCheck(teamsWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                               ((x10_long)(k))));
                }
                
                //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                if (((!::x10aux::struct_equals(teams, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))) &&
                    (((x10_long)(::x10aux::nullCheck(teams)->FMGL(size))) > (((x10_long)0ll)))))
                {
                    
                    //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                    nodesWithMultiplicity = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24973 = ::x10aux::makeStringLit(","); strLit__24973; })), ::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                               ((x10_long)0ll)));
                    
                    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                    multiplicityOfTeam = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(teams)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                             ((x10_long)1ll)));
                    
                    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                    {
                        for (l = ((x10_int)0); ((l) < (multiplicityOfTeam));
                             l = ((l) + (((x10_int)1)))) {
                            
                            //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                            {
                                for (m = ((x10_int)0); ((((x10_long)(m))) < ((x10_long)(::x10aux::nullCheck(nodesWithMultiplicity)->FMGL(size))));
                                     m = ((m) + (((x10_int)1))))
                                {
                                    
                                    //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                    if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                        ((x10_long)(m))))->x10::lang::String::indexOf(
                                                                    (__extension__ ({ static ::x10::lang::String* strLit__24977 = ::x10aux::makeStringLit("x"); strLit__24977; }))),
                                                                  ((x10_int)-1))))
                                    {
                                        
                                        //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24978 = ::x10aux::makeStringLit("x"); strLit__24978; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    } else {
                                        
                                        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                        ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__set(
                                          ((x10_long)(m)),
                                          ::x10::lang::String::__plus(::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                        ((x10_long)(m))), (__extension__ ({ static ::x10::lang::String* strLit__24981 = ::x10aux::makeStringLit("x1"); strLit__24981; }))));
                                        
                                        //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                        nodes = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__24982 = ::x10aux::makeStringLit("x"); strLit__24982; })), ::x10aux::nullCheck(nodesWithMultiplicity)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                   ((x10_long)(m))));
                                    }
                                    
                                    //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                    multiplicityOfNode = ::x10::lang::IntNatives::parseInt(::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                             ((x10_long)1ll)));
                                    
                                    //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                    heuristic = ::x10aux::nullCheck(nodes)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                  ((x10_long)0ll));
                                    
                                    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                    {
                                        for (n = ((x10_int)0);
                                             ((n) < (multiplicityOfNode));
                                             n = ((n) + (((x10_int)1))))
                                        {
                                            
                                            //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            i = ((counter) / ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            j = ((counter) % ::x10aux::zeroCheck(nodesPerTeam));
                                            
                                            //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            if ((::x10aux::struct_equals(((counter) % ::x10aux::zeroCheck(nodesPerTeam)),
                                                                         ((x10_int)0))))
                                            {
                                                
                                                //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                                ::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__set(
                                                  ((x10_long)(i)),
                                                  ((x10_long)(j)),
                                                  ::cpls::entities::NodeConfig::_make(::cpls::Main::whichHeuristicInt(
                                                                                        heuristic),
                                                                                      ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__get)()));
                                            } else {
                                                
                                                //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                                ::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__set(
                                                  ((x10_long)(i)),
                                                  ((x10_long)(j)),
                                                  ::cpls::entities::NodeConfig::_make(::cpls::Main::whichHeuristicInt(
                                                                                        heuristic),
                                                                                      ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__get)()));
                                            }
                                            
                                            //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setHeuristic(
                                              ::cpls::Main::whichHeuristicInt(
                                                heuristic));
                                            
                                            //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setNumberOfTeams(
                                              numberOfTeams);
                                            
                                            //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setNodesPerTeam(
                                              nodesPerTeam);
                                            
                                            //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            if (modeIndicator)
                                            {
                                                
                                                //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                      ((x10_long)(i)),
                                                                      ((x10_long)(j))))->setTeamId(
                                                  ((i) + (((x10_int)1))));
                                            } else {
                                                
                                                //#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                                ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                      ((x10_long)(i)),
                                                                      ((x10_long)(j))))->setTeamId(
                                                  i);
                                            }
                                            
                                            //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setInterTeamCommTime(
                                              interTeamCommTime);
                                            
                                            //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setAffectedPer(
                                              affectedPer);
                                            
                                            //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setIniDelay(
                                              iniDelay);
                                            
                                            //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setVerify(
                                              verify);
                                            
                                            //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setChangeProb(
                                              changeProb);
                                            
                                            //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setDiversificationOption(
                                              divOption);
                                            
                                            //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setMaxTime(
                                              maxTime);
                                            
                                            //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setMaxIters(
                                              maxIters);
                                            
                                            //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setMaxRestarts(
                                              maxRestarts);
                                            
                                            //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setReportPart(
                                              reportPart);
                                            
                                            //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setModParams(
                                              modParams);
                                            
                                            //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setChangeOnDiver(
                                              changeOnDiver);
                                            
                                            //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setReportI(
                                              reportI);
                                            
                                            //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setUpdateI(
                                              updateI);
                                            
                                            //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
                                            ::x10aux::nullCheck(::x10aux::nullCheck(nodeConfigs)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                                  ((x10_long)(i)),
                                                                  ((x10_long)(j))))->setMaxUpdateI(
                                              maxUpdateI);
                                            
                                            //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
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
    
    //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    return nodeConfigs;
    
}

//#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__25026 = ::x10aux::makeStringLit("MSP"); strLit__25026; }))))
    {
        
        //#line 269 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)();
    } else 
    //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25028 = ::x10aux::makeStringLit("CAP"); strLit__25028; }))))
    {
        
        //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)();
    } else 
    //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25030 = ::x10aux::makeStringLit("AIP"); strLit__25030; }))))
    {
        
        //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)();
    } else 
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25032 = ::x10aux::makeStringLit("LNP"); strLit__25032; }))))
    {
        
        //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)();
    } else 
    //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25034 = ::x10aux::makeStringLit("NPP"); strLit__25034; }))))
    {
        
        //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__get)();
    } else 
    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25036 = ::x10aux::makeStringLit("SMP"); strLit__25036; }))))
    {
        
        //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)();
    } else 
    //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25038 = ::x10aux::makeStringLit("HRP"); strLit__25038; }))))
    {
        
        //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)();
    } else 
    //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__25040 = ::x10aux::makeStringLit("QAP"); strLit__25040; }))))
    {
        
        //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 291 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)();
    } else {
        
        //#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        problemParam = ::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__get)();
        
        //#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25042 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__25042; }))));
    }
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    return problemParam;
    
}

//#line 328 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
x10_int cpls::Main::whichHeuristicInt(::x10::lang::String* solverIn) {
    
    //#line 329 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int heuParam;
    
    //#line 330 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__25043 = ::x10aux::makeStringLit("AS"); strLit__25043; }))))
    {
        
        //#line 331 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)();
    } else 
    //#line 332 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__25044 = ::x10aux::makeStringLit("EO"); strLit__25044; }))))
    {
        
        //#line 333 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)();
    } else 
    //#line 334 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__25045 = ::x10aux::makeStringLit("RoTS"); strLit__25045; }))))
    {
        
        //#line 335 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)();
    } else 
    //#line 336 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__25046 = ::x10aux::makeStringLit("GA"); strLit__25046; }))))
    {
        
        //#line 337 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)();
    } else 
    //#line 338 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__25047 = ::x10aux::makeStringLit("HY"); strLit__25047; }))))
    {
        
        //#line 339 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__get)();
    } else {
        
        //#line 341 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        heuParam = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__get)();
    }
    
    //#line 342 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    return heuParam;
    
}

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
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
#include <x10/util/Random.h>
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

//#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPProblemModelFactory::make(
  ::cpls::ParamManager* opts, x10_int problem, ::x10::lang::Rail< x10_long >* problemParams,
  x10_long inSeed) {
    
    //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__25054 = ::x10aux::makeStringLit("-s"); strLit__25054; })),
                      ((x10_long)10ll));
    
    //#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    x10_int baseValue = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__25055 = ::x10aux::makeStringLit("-bv"); strLit__25055; })),
                          ((x10_int)0));
    
    //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* inPathDataProblem = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__25056 = ::x10aux::makeStringLit("-f"); strLit__25056; })),
                                               (__extension__ ({ static ::x10::lang::String* strLit__25057 = ::x10aux::makeStringLit("."); strLit__25057; })));
    
    //#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::lang::String* inPathVectorSol = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__25058 = ::x10aux::makeStringLit("-if"); strLit__25058; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__25059 = ::x10aux::makeStringLit("."); strLit__25059; })));
    
    //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    ::x10::util::Random* random = ::x10::util::Random::_make();
    
    //#line 307 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    random->x10::util::Random::setSeed(inSeed);
    
    //#line 308 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
    switch (problem) {
        
        //#line 309 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 1/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)()*/: ;
        {
            
            //#line 310 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            return ::cpls::problem::MSPModel::_make(size);
            
        }
        //#line 311 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 2/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::CAPModel::_make(size);
            
        }
        //#line 312 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 3/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::AIPModel::_make(size);
            
        }
        //#line 313 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 4/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::LNPModel::_make(size);
            
        }
        //#line 314 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 6/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::SMTIModel::_make(size);
            
        }
        //#line 315 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 7/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)()*/: ;
        {
            return ::cpls::problem::SMTIModel::_make(size);
            
        }
        //#line 316 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        case 8/*::cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)()*/: ;
        {
            
            //#line 317 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10::lang::Rail< x10_long >* params = ::cpls::util::CPLSFileReader::tryReadParameters(
                                                      inPathDataProblem,
                                                      problemParams);
            
            //#line 318 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            x10_long n1 = ((::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                              ((x10_long)0ll))) < (((x10_long)0ll)))
              ? (((x10_long)1ll)) : (::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__apply(
                                       ((x10_long)0ll)));
            
            //#line 319 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            ::cpls::problem::QAPModel* problemModel = ::cpls::problem::QAPModel::_make(n1,
                                                                                       inPathDataProblem,
                                                                                       inPathVectorSol,
                                                                                       baseValue);
            
            //#line 321 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->loadData(inPathDataProblem);
            
            //#line 322 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
            return problemModel;
            
        }
        //#line 323 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
        default: ;
        {
            return ::cpls::problem::PNPModel::_make(size);
            
        }
    }
}

//#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPProblemModelFactory::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPProblemModelFactory::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__25062 = ::x10aux::makeStringLit("struct cpls.Main.COPProblemModelFactory"); strLit__25062; }));
    
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
