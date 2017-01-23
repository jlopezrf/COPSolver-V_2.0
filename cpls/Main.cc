/*************************************************/
/* START of Main */
#include <cpls/Main.h>

#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <cpls/ParamManager.h>
#include <cpls/entities/CPLSConfig.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/Main__COPProblemModelFactory.h>
#include <x10/lang/Int.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Place.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/util/Timer.h>
#include <x10/lang/Math.h>
#include <cpls/solver/entities/ASParameters.h>
#include <cpls/solver/entities/EOParameters.h>
#include <cpls/solver/entities/RoTSParameters.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Array.h>
#include <cpls/solver/entities/HeuristicParameters.h>
#include <cpls/NodeInstancer.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <cpls/entities/ExplorerConfig.h>
#include <cpls/entities/MasterConfig.h>
#include <x10/lang/Unsafe.h>
#include <cpls/entities/HeadConfig.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21003 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__21003; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:147";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21005 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__21005; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:150";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21007 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__21007; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:153";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21009 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__21009; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:156";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21011 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__21011; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:159";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21013 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__21013; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:162";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21015 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__21015; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:165";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__21017 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__21017; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10:168";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::ParamManager* opts =  (new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager());
    (opts)->::cpls::ParamManager::_constructor(args);
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::CPLSConfig* configCPLS =  (new (::x10aux::alloc_z< ::cpls::entities::CPLSConfig>()) ::cpls::entities::CPLSConfig());
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    ::x10aux::nullCheck(configCPLS)->cpls::entities::CPLSConfig::__fieldInitializers_cpls_entities_CPLSConfig();
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPProblemModelFactory::make(
                                                           opts);
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setProblemModel(problemModel);
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__20961 = ::x10aux::makeStringLit("-N"); strLit__20961; })),
                             ((x10_int)1));
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int numberOfTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam));
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__20962 = ::x10aux::makeStringLit("-sl"); strLit__20962; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__20963 = ::x10aux::makeStringLit("AS"); strLit__20963; })));
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean whitMasterNode = true;
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__20964 = ::x10aux::makeStringLit("-ce"); strLit__20964; })),
                                   ((x10_int)1)), ((x10_int)0))))
    {
        
        //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        whitMasterNode = false;
    }
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::cpls::Main::heuristicsAndRolesDefinition(heuristicString,
                                                 numberOfTeams,
                                                 nodesPerTeam,
                                                 whitMasterNode);
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setConfigNodes(nodeConfigs);
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIsThereAMasterNode(
      whitMasterNode);
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* cplsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (cplsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->getSize(), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20965 = ::x10aux::makeStringLit("P_lm"); strLit__20965; })),
                                                      ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20966 = ::x10aux::makeStringLit("P_lmM"); strLit__20966; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__20967 = ::x10aux::makeStringLit("P_lmD"); strLit__20967; })),
                         0.5));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* teamsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (teamsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->getSize(), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20968 = ::x10aux::makeStringLit("P_e"); strLit__20968; })),
                                                      ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20969 = ::x10aux::makeStringLit("P_eM"); strLit__20969; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__20970 = ::x10aux::makeStringLit("P_eD"); strLit__20970; })),
                         0.5));
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setCPLSPoolConfig(cplsPoolConfig);
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTeamsPoolConfig(teamsPoolConfig);
    
    //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMaxTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                  (__extension__ ({ static ::x10::lang::String* strLit__20971 = ::x10aux::makeStringLit("-mt"); strLit__20971; })),
                                                  ((x10_long)0ll)));
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setPMaxIters(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__20972 = ::x10aux::makeStringLit("-mi"); strLit__20972; })),
                                                    ((x10_long)100000000ll)));
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMaxRestarts(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20973 = ::x10aux::makeStringLit("-mr"); strLit__20973; })),
                                                      ((x10_int)0)));
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setReportPart((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                              (__extension__ ({ static ::x10::lang::String* strLit__20974 = ::x10aux::makeStringLit("-rp"); strLit__20974; })),
                                                                              ((x10_int)0)),
                                                                            ((x10_int)1))));
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setModParams(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__20975 = ::x10aux::makeStringLit("-M"); strLit__20975; })),
                                                    ((x10_int)1)));
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setChangeOnDiver(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__20976 = ::x10aux::makeStringLit("-CD"); strLit__20976; })),
                                                        ((x10_int)1)));
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setVerify((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                          (__extension__ ({ static ::x10::lang::String* strLit__20977 = ::x10aux::makeStringLit("-v"); strLit__20977; })),
                                                                          ((x10_int)0)),
                                                                        ((x10_int)1))));
    
    //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setSeed(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__20978 = ::x10aux::makeStringLit("-S"); strLit__20978; })),
                                               ::x10::lang::RuntimeNatives::nanoTime()));
    
    //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int outFormat = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__20979 = ::x10aux::makeStringLit("-of"); strLit__20979; })),
                          ((x10_int)1));
    
    //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long costFromF = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                           (__extension__ ({ static ::x10::lang::String* strLit__20980 = ::x10aux::makeStringLit("-tf"); strLit__20980; })),
                           ((x10_long)0ll));
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int tCostFromCL = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                            (__extension__ ({ static ::x10::lang::String* strLit__20981 = ::x10aux::makeStringLit("-tc"); strLit__20981; })),
                            ((x10_int)0));
    
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int testNb = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                       (__extension__ ({ static ::x10::lang::String* strLit__20982 = ::x10aux::makeStringLit("-b"); strLit__20982; })),
                       ((x10_int)10));
    
    //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long c = ((x10_long)0ll);
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean sl = false;
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if ((::x10aux::struct_equals(costFromF, ((x10_long)0ll))))
    {
        
        //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        if (((((x10_long)(tCostFromCL))) >= (((x10_long)0ll))))
        {
            
            //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            c = ((x10_long)(tCostFromCL));
            
            //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            sl = false;
        } else {
            
            //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            c = ((((x10_long)(tCostFromCL))) * (((x10_long)-1ll)));
            
            //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            sl = true;
        }
        
    }
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long tCost = ((c) >= (((x10_long)0ll))) ? (c) : (((x10_long)0ll));
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean sLow = sl;
    
    //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTargetCost(tCost);
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setStrictLow(sLow);
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__20983 = ::x10aux::makeStringLit("-R"); strLit__20983; })),
                    ((x10_int)0));
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__20984 = ::x10aux::makeStringLit("-U"); strLit__20984; })),
                    ((x10_int)0));
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (::x10aux::nullCheck(problemModel)->FMGL(size)))) * (::x10::lang::MathNatives::log(((x10_double) (::x10aux::nullCheck(problemModel)->FMGL(size))))))))
      : (rep);
    
    //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setReport(((x10_long)(reportI)));
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setUpdate(((x10_long)(updateI)));
    
    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::ASParameters* asParam =  (new (::x10aux::alloc_z< ::cpls::solver::entities::ASParameters>()) ::cpls::solver::entities::ASParameters());
    (asParam)->::cpls::solver::entities::ASParameters::_constructor(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20985 = ::x10aux::makeStringLit("--AS_varToReset"); strLit__20985; })),
        ((x10_long)-1ll)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__20986 = ::x10aux::makeStringLit("--AS_resetPer"); strLit__20986; })),
                             ((x10_int)10)), (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                        (__extension__ ({ static ::x10::lang::String* strLit__20987 = ::x10aux::makeStringLit("--AS_exhaustive"); strLit__20987; })),
                                                                        ((x10_int)0)),
                                                                      ((x10_int)1))),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20988 = ::x10aux::makeStringLit("--AS_freezeLocMin"); strLit__20988; })),
        ((x10_int)5)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__20989 = ::x10aux::makeStringLit("--AS_freezeSwap"); strLit__20989; })),
                         ((x10_int)5)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                          (__extension__ ({ static ::x10::lang::String* strLit__20990 = ::x10aux::makeStringLit("--AS_resetLimit"); strLit__20990; })),
                                          ((x10_int)5)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__20991 = ::x10aux::makeStringLit("--AS_probSelecLocMin"); strLit__20991; })),
                                                           ((x10_int)0)),
      (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__20992 = ::x10aux::makeStringLit("--AS_firstBest"); strLit__20992; })),
                                 ((x10_int)0)), ((x10_int)1))));
    
    //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::EOParameters* eoParam =  (new (::x10aux::alloc_z< ::cpls::solver::entities::EOParameters>()) ::cpls::solver::entities::EOParameters());
    (eoParam)->::cpls::solver::entities::EOParameters::_constructor(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20993 = ::x10aux::makeStringLit("--EO_tau"); strLit__20993; })),
        ((1.0) + (((1.0) / (::x10::lang::MathNatives::log(((x10_double) (::x10aux::nullCheck(problemModel)->FMGL(size))))))))),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20994 = ::x10aux::makeStringLit("--EO_pdf"); strLit__20994; })),
        ((x10_int)-1)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__20995 = ::x10aux::makeStringLit("--EO_selSec"); strLit__20995; })),
                          ((x10_int)1)));
    
    //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::RoTSParameters* roTSParam =
       (new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters());
    (roTSParam)->::cpls::solver::entities::RoTSParameters::_constructor(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20996 = ::x10aux::makeStringLit("--RoTS_tabu_duration"); strLit__20996; })),
        -1.0), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                 (__extension__ ({ static ::x10::lang::String* strLit__20997 = ::x10aux::makeStringLit("--RoTS_aspiration"); strLit__20997; })),
                 -1.0));
    
    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    {
        ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>* a__1558;
        for (a__1558 = ::x10aux::nullCheck(nodeConfigs)->FMGL(raw)->x10::lang::Rail< ::cpls::entities::NodeConfig* >::iterator();
             ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>::hasNext(::x10aux::nullCheck(a__1558));
             ) {
            ::cpls::entities::NodeConfig* a = ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>::next(::x10aux::nullCheck(a__1558));
            
            //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            if (::x10aux::instanceof< ::cpls::solver::entities::ASParameters*>(::x10aux::nullCheck(a)->getHeuristicParameters()))
            {
                
                //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                ::x10aux::nullCheck(a)->setHeuristicParameters(
                  reinterpret_cast< ::cpls::solver::entities::HeuristicParameters*>(asParam));
            } else 
            //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            if (::x10aux::instanceof< ::cpls::solver::entities::EOParameters*>(::x10aux::nullCheck(a)->getHeuristicParameters()))
            {
                
                //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                ::x10aux::nullCheck(a)->setHeuristicParameters(
                  reinterpret_cast< ::cpls::solver::entities::HeuristicParameters*>(eoParam));
            } else 
            //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            if (::x10aux::instanceof< ::cpls::solver::entities::RoTSParameters*>(::x10aux::nullCheck(a)->getHeuristicParameters()))
            {
                
                //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                ::x10aux::nullCheck(a)->setHeuristicParameters(
                  reinterpret_cast< ::cpls::solver::entities::HeuristicParameters*>(roTSParam));
            }
            
        }
    }
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setOutTeamTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20998 = ::x10aux::makeStringLit("-I"); strLit__20998; })),
                                                      ((x10_long)0ll)));
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMinDistance(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20999 = ::x10aux::makeStringLit("-D"); strLit__20999; })),
                                                      0.3));
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIniDelay(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                   (__extension__ ({ static ::x10::lang::String* strLit__21000 = ::x10aux::makeStringLit("-W"); strLit__21000; })),
                                                   ((x10_long)0ll)));
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setAffectedPer(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__21001 = ::x10aux::makeStringLit("-A"); strLit__21001; })),
                                                      1.0));
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(configCPLS);
}

//#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__21002 = ::x10aux::makeStringLit("MSP"); strLit__21002; }))))
    {
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)1);
    } else 
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21004 = ::x10aux::makeStringLit("CAP"); strLit__21004; }))))
    {
        
        //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)2);
    } else 
    //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21006 = ::x10aux::makeStringLit("AIP"); strLit__21006; }))))
    {
        
        //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)3);
    } else 
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21008 = ::x10aux::makeStringLit("LNP"); strLit__21008; }))))
    {
        
        //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)4);
    } else 
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21010 = ::x10aux::makeStringLit("NPP"); strLit__21010; }))))
    {
        
        //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)5);
    } else 
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21012 = ::x10aux::makeStringLit("SMP"); strLit__21012; }))))
    {
        
        //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)6);
    } else 
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21014 = ::x10aux::makeStringLit("HRP"); strLit__21014; }))))
    {
        
        //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)7);
    } else 
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__21016 = ::x10aux::makeStringLit("QAP"); strLit__21016; }))))
    {
        
        //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)8);
    } else {
        
        //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)0);
        
        //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__21018 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__21018; }))));
    }
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return problemParam;
    
}

//#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::Main::heuristicsAndRolesDefinition(
  ::x10::lang::String* solverIn, x10_int numberOfTeams, x10_int nodesPerTeam,
  x10_boolean whitMasterNode) {
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
       (new (::x10aux::alloc_z< ::x10::array::Array_2< ::cpls::entities::NodeConfig*> >()) ::x10::array::Array_2< ::cpls::entities::NodeConfig*>());
    (nodeConfigs)->::x10::array::Array_2< ::cpls::entities::NodeConfig*>::_constructor(
      ((x10_long)(numberOfTeams)), ((x10_long)(nodesPerTeam)),
      reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
          ::cpls::entities::ExplorerConfig* alloc__1507 =
             (new (::x10aux::alloc_z< ::cpls::entities::ExplorerConfig>()) ::cpls::entities::ExplorerConfig());
          (alloc__1507)->::cpls::entities::ExplorerConfig::_constructor();
          alloc__1507;
      }))
      ));
    
    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* eachTeam =
      ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__21019 = ::x10aux::makeStringLit("/"); strLit__21019; })), solverIn);
    
    //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* eachNode;
    
    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck(eachTeam)->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            eachNode = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__21020 = ::x10aux::makeStringLit(","); strLit__21020; })), ::x10aux::nullCheck(eachTeam)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                          i));
            
            //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(eachNode)->FMGL(size))));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    if (whitMasterNode) {
                        
                        //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                        if ((::x10aux::struct_equals(i, ((x10_long)0ll))))
                        {
                            
                            //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                            if ((::x10aux::struct_equals(j,
                                                         ((x10_long)0ll))))
                            {
                                
                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__20909 = i;
                                x10_long j__20910 = j;
                                ::cpls::entities::NodeConfig* v__20911 =
                                  reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                                    
                                    //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    ::cpls::entities::MasterConfig* alloc__20912 =
                                       (new (::x10aux::alloc_z< ::cpls::entities::MasterConfig>()) ::cpls::entities::MasterConfig());
                                    (alloc__20912)->::cpls::entities::MasterConfig::_constructor();
                                    alloc__20912;
                                }))
                                );
                                ::cpls::entities::NodeConfig* ret__20913;
                                
                                //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                    
                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__20907 = i__20909;
                                    x10_long j__20908 = j__20910;
                                    ((j__20908) + (((i__20907) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                }))
                                , v__20911);
                                
                                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__20913 = v__20911;
                                
                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__20913;
                            } else 
                            //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                            if ((::x10aux::struct_equals(j,
                                                         ((x10_long)1ll))))
                            {
                                
                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__20916 = i;
                                x10_long j__20917 = j;
                                ::cpls::entities::NodeConfig* v__20918 =
                                  reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                                    
                                    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    ::cpls::entities::HeadConfig* alloc__20919 =
                                       (new (::x10aux::alloc_z< ::cpls::entities::HeadConfig>()) ::cpls::entities::HeadConfig());
                                    (alloc__20919)->::cpls::entities::HeadConfig::_constructor();
                                    alloc__20919;
                                }))
                                );
                                ::cpls::entities::NodeConfig* ret__20920;
                                
                                //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                    
                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__20914 = i__20916;
                                    x10_long j__20915 = j__20917;
                                    ((j__20915) + (((i__20914) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                }))
                                , v__20918);
                                
                                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__20920 = v__20918;
                                
                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__20920;
                            } else {
                                
                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__20923 = i;
                                x10_long j__20924 = j;
                                ::cpls::entities::NodeConfig* v__20925 =
                                  reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                                    
                                    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                    ::cpls::entities::ExplorerConfig* alloc__20926 =
                                       (new (::x10aux::alloc_z< ::cpls::entities::ExplorerConfig>()) ::cpls::entities::ExplorerConfig());
                                    (alloc__20926)->::cpls::entities::ExplorerConfig::_constructor();
                                    alloc__20926;
                                }))
                                );
                                ::cpls::entities::NodeConfig* ret__20927;
                                
                                //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                    
                                    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                    x10_long i__20921 = i__20923;
                                    x10_long j__20922 = j__20924;
                                    ((j__20922) + (((i__20921) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                                }))
                                , v__20925);
                                
                                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__20927 = v__20925;
                                
                                //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                ret__20927;
                            }
                            
                        } else 
                        //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                        if ((::x10aux::struct_equals(j, ((x10_long)0ll))))
                        {
                            
                            //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__20930 = i;
                            x10_long j__20931 = j;
                            ::cpls::entities::NodeConfig* v__20932 =
                              reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                                
                                //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                ::cpls::entities::HeadConfig* alloc__20933 =
                                   (new (::x10aux::alloc_z< ::cpls::entities::HeadConfig>()) ::cpls::entities::HeadConfig());
                                (alloc__20933)->::cpls::entities::HeadConfig::_constructor();
                                alloc__20933;
                            }))
                            );
                            ::cpls::entities::NodeConfig* ret__20934;
                            
                            //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                
                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__20928 = i__20930;
                                x10_long j__20929 = j__20931;
                                ((j__20929) + (((i__20928) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                            }))
                            , v__20932);
                            
                            //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__20934 = v__20932;
                            
                            //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__20934;
                        } else {
                            
                            //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__20937 = i;
                            x10_long j__20938 = j;
                            ::cpls::entities::NodeConfig* v__20939 =
                              reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                                
                                //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                                ::cpls::entities::ExplorerConfig* alloc__20940 =
                                   (new (::x10aux::alloc_z< ::cpls::entities::ExplorerConfig>()) ::cpls::entities::ExplorerConfig());
                                (alloc__20940)->::cpls::entities::ExplorerConfig::_constructor();
                                alloc__20940;
                            }))
                            );
                            ::cpls::entities::NodeConfig* ret__20941;
                            
                            //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                                
                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__20935 = i__20937;
                                x10_long j__20936 = j__20938;
                                ((j__20936) + (((i__20935) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                            }))
                            , v__20939);
                            
                            //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__20941 = v__20939;
                            
                            //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__20941;
                        }
                        
                    } else 
                    //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    if ((::x10aux::struct_equals(j, ((x10_long)0ll))))
                    {
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__20944 = i;
                        x10_long j__20945 = j;
                        ::cpls::entities::NodeConfig* v__20946 =
                          reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                            
                            //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                            ::cpls::entities::HeadConfig* alloc__20947 =
                               (new (::x10aux::alloc_z< ::cpls::entities::HeadConfig>()) ::cpls::entities::HeadConfig());
                            (alloc__20947)->::cpls::entities::HeadConfig::_constructor();
                            alloc__20947;
                        }))
                        );
                        ::cpls::entities::NodeConfig* ret__20948;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__20942 = i__20944;
                            x10_long j__20943 = j__20945;
                            ((j__20943) + (((i__20942) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                        }))
                        , v__20946);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__20948 = v__20946;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__20948;
                    } else {
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__20951 = i;
                        x10_long j__20952 = j;
                        ::cpls::entities::NodeConfig* v__20953 =
                          reinterpret_cast< ::cpls::entities::NodeConfig*>((__extension__ ({
                            
                            //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                            ::cpls::entities::ExplorerConfig* alloc__20954 =
                               (new (::x10aux::alloc_z< ::cpls::entities::ExplorerConfig>()) ::cpls::entities::ExplorerConfig());
                            (alloc__20954)->::cpls::entities::ExplorerConfig::_constructor();
                            alloc__20954;
                        }))
                        );
                        ::cpls::entities::NodeConfig* ret__20955;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__20949 = i__20951;
                            x10_long j__20950 = j__20952;
                            ((j__20950) + (((i__20949) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                        }))
                        , v__20953);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__20955 = v__20953;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__20955;
                    }
                    
                    //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    ::x10aux::nullCheck((__extension__ ({
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__20887 = i;
                        x10_long j__20888 = j;
                        ::cpls::entities::NodeConfig* ret__20889;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__20889 = (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__20956 = i__20887;
                            x10_long j__20957 = j__20888;
                            ((j__20957) + (((i__20956) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__20889;
                    }))
                    )->setHeuristicParameters(::cpls::Main::whichHeuristicParam(
                                                ::x10aux::nullCheck(eachNode)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                  j)));
                    
                    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
                    ::x10aux::nullCheck((__extension__ ({
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__20893 = i;
                        x10_long j__20894 = j;
                        ::cpls::entities::NodeConfig* ret__20895;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__20895 = (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__20958 = i__20893;
                            x10_long j__20959 = j__20894;
                            ((j__20959) + (((i__20958) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__20895;
                    }))
                    )->setHeuristic(::cpls::Main::whichHeuristicInt(
                                      ::x10aux::nullCheck(eachNode)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                        j)));
                }
            }
            
        }
    }
    
    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return nodeConfigs;
    
}

//#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::cpls::solver::entities::HeuristicParameters* cpls::Main::whichHeuristicParam(
  ::x10::lang::String* solverIn) {
    
    //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::HeuristicParameters* heuParam;
    
    //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__21024 = ::x10aux::makeStringLit("AS"); strLit__21024; }))))
    {
        
        //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = (__extension__ ({
            ::cpls::solver::entities::ASParameters* alloc__1515 =
               (new (::x10aux::alloc_z< ::cpls::solver::entities::ASParameters>()) ::cpls::solver::entities::ASParameters());
            (alloc__1515)->::cpls::solver::entities::ASParameters::_constructor();
            alloc__1515;
        }))
        ;
    } else 
    //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__21025 = ::x10aux::makeStringLit("EO"); strLit__21025; }))))
    {
        
        //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = (__extension__ ({
            ::cpls::solver::entities::EOParameters* alloc__1516 =
               (new (::x10aux::alloc_z< ::cpls::solver::entities::EOParameters>()) ::cpls::solver::entities::EOParameters());
            (alloc__1516)->::cpls::solver::entities::EOParameters::_constructor();
            alloc__1516;
        }))
        ;
    } else 
    //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__21026 = ::x10aux::makeStringLit("RoTS"); strLit__21026; }))))
    {
        
        //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = (__extension__ ({
            ::cpls::solver::entities::RoTSParameters* alloc__1517 =
               (new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters());
            (alloc__1517)->::cpls::solver::entities::RoTSParameters::_constructor();
            alloc__1517;
        }))
        ;
    } else 
    //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__21027 = ::x10aux::makeStringLit("HY"); strLit__21027; }))))
    {
        
        //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = (__extension__ ({
            ::cpls::solver::entities::RoTSParameters* alloc__1518 =
               (new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters());
            (alloc__1518)->::cpls::solver::entities::RoTSParameters::_constructor();
            alloc__1518;
        }))
        ;
    } else {
        
        //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = (__extension__ ({
            ::cpls::solver::entities::RoTSParameters* alloc__1519 =
               (new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters());
            (alloc__1519)->::cpls::solver::entities::RoTSParameters::_constructor();
            alloc__1519;
        }))
        ;
    }
    
    //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return heuParam;
    
}

//#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::whichHeuristicInt(::x10::lang::String* solverIn) {
    
    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int heuParam;
    
    //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__21028 = ::x10aux::makeStringLit("AS"); strLit__21028; }))))
    {
        
        //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)2);
    } else 
    //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__21029 = ::x10aux::makeStringLit("EO"); strLit__21029; }))))
    {
        
        //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)3);
    } else 
    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__21030 = ::x10aux::makeStringLit("RoTS"); strLit__21030; }))))
    {
        
        //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)4);
    } else 
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__21031 = ::x10aux::makeStringLit("HY"); strLit__21031; }))))
    {
        
        //#line 269 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)5);
    } else {
        
        //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        heuParam = ((x10_int)0);
    }
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    return heuParam;
    
}

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::cpls::Main* cpls::Main::cpls__Main____this__cpls__Main(
  ) {
    return this;
    
}
void cpls::Main::_constructor() {
    ::cpls::Main* this__20960 = this;
    
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
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/String.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Int.h>
#include <cpls/Main.h>
#include <x10/lang/Long.h>
#include <x10/util/Timer.h>
#include <cpls/problem/MSPModel.h>
#include <cpls/problem/CAPModel.h>
#include <cpls/problem/AIPModel.h>
#include <cpls/problem/LNPModel.h>
#include <cpls/problem/SMTIModel.h>
#include <cpls/problem/QAPModel.h>
#include <cpls/problem/PNPModel.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
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

//#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPProblemModelFactory::make(
  ::cpls::ParamManager* opts) {
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__21038 = ::x10aux::makeStringLit("-p"); strLit__21038; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__21039 = ::x10aux::makeStringLit("MSP"); strLit__21039; })));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__21040 = ::x10aux::makeStringLit("-s"); strLit__21040; })),
                      ((x10_long)10ll));
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_int baseValue = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__21041 = ::x10aux::makeStringLit("-bv"); strLit__21041; })),
                          ((x10_int)1));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* inPath = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                    (__extension__ ({ static ::x10::lang::String* strLit__21042 = ::x10aux::makeStringLit("-if"); strLit__21042; })),
                                    (__extension__ ({ static ::x10::lang::String* strLit__21043 = ::x10aux::makeStringLit("."); strLit__21043; })));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    x10_long inSeed = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                        (__extension__ ({ static ::x10::lang::String* strLit__21044 = ::x10aux::makeStringLit("-S"); strLit__21044; })),
                        ::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
    switch (problem) {
        
        //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)1): ;
        {
            {
                ::cpls::problem::MSPModel* alloc__1500 = 
                (new (::x10aux::alloc_z< ::cpls::problem::MSPModel>()) ::cpls::problem::MSPModel());
                (alloc__1500)->::cpls::problem::MSPModel::_constructor(
                  size);
                return alloc__1500;
                
            }
        }
        //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::problem::CAPModel* alloc__1501 = 
                (new (::x10aux::alloc_z< ::cpls::problem::CAPModel>()) ::cpls::problem::CAPModel());
                (alloc__1501)->::cpls::problem::CAPModel::_constructor(
                  size);
                return alloc__1501;
                
            }
        }
        //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::problem::AIPModel* alloc__1502 = 
                (new (::x10aux::alloc_z< ::cpls::problem::AIPModel>()) ::cpls::problem::AIPModel());
                (alloc__1502)->::cpls::problem::AIPModel::_constructor(
                  size);
                return alloc__1502;
                
            }
        }
        //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::problem::LNPModel* alloc__1503 = 
                (new (::x10aux::alloc_z< ::cpls::problem::LNPModel>()) ::cpls::problem::LNPModel());
                (alloc__1503)->::cpls::problem::LNPModel::_constructor(
                  size);
                return alloc__1503;
                
            }
        }
        //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)6): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__1504 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__1504)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__1504;
                
            }
        }
        //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)7): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__1505 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__1505)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__1505;
                
            }
        }
        //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)8): ;
        {
            
            //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::cpls::problem::QAPModel* problemModel =  (new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel());
            (problemModel)->::cpls::problem::QAPModel::_constructor(
              size);
            
            //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->setBaseValue(
              baseValue);
            
            //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->setInPath(
              inPath);
            
            //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->setSeed(inSeed);
            
            //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
            return problemModel;
            
        }
        //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
        default: ;
        {
            {
                ::cpls::problem::PNPModel* alloc__1506 = 
                (new (::x10aux::alloc_z< ::cpls::problem::PNPModel>()) ::cpls::problem::PNPModel());
                (alloc__1506)->::cpls::problem::PNPModel::_constructor(
                  size);
                return alloc__1506;
                
            }
        }
    }
}

//#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPProblemModelFactory::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPProblemModelFactory::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__21045 = ::x10aux::makeStringLit("struct cpls.Main.COPProblemModelFactory"); strLit__21045; }));
    
}
x10_boolean cpls::Main__COPProblemModelFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__20902 = (*this);
    ::cpls::Main__COPProblemModelFactory other__20903 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
    return true;
    
}
x10_boolean cpls::Main__COPProblemModelFactory::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__20904 = (*this);
    ::cpls::Main__COPProblemModelFactory other__20905 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
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
