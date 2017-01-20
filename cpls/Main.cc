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
#include <x10/lang/Math.h>
#include <cpls/solver/entities/ASParameters.h>
#include <cpls/solver/entities/EOParameters.h>
#include <cpls/solver/entities/RoTSParameters.h>
#include <cpls/NodeInstancer.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20041 = ::x10aux::makeStringLit("Magic Square Problem"); strLit__20041; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:102";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20043 = ::x10aux::makeStringLit("Costas Array Problem"); strLit__20043; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:105";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20045 = ::x10aux::makeStringLit("All-Interval Array Problem"); strLit__20045; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:108";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20047 = ::x10aux::makeStringLit("Langford Pairing Problem"); strLit__20047; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:111";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20049 = ::x10aux::makeStringLit("Number Partition Problem"); strLit__20049; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:114";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20051 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__20051; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:117";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20053 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__20053; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:120";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__20055 = ::x10aux::makeStringLit("Stable Marriage Problem"); strLit__20055; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10:123";
    }

};

#endif // CPLS_MAIN__CLOSURE__8_CLOSURE

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
void cpls::Main::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::ParamManager* opts =  (new (::x10aux::alloc_z< ::cpls::ParamManager>()) ::cpls::ParamManager());
    (opts)->::cpls::ParamManager::_constructor(args);
    
    //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::CPLSConfig* configCPLS =  (new (::x10aux::alloc_z< ::cpls::entities::CPLSConfig>()) ::cpls::entities::CPLSConfig());
    
    //#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    ::x10aux::nullCheck(configCPLS)->cpls::entities::CPLSConfig::__fieldInitializers_cpls_entities_CPLSConfig();
    
    //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::problem::ProblemGenericModel* problemModel = ::cpls::Main__COPProblemModelFactory::make(
                                                           opts);
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setProblemModel(problemModel);
    
    //#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int nodesPerTeam = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__20007 = ::x10aux::makeStringLit("-N"); strLit__20007; })),
                             ((x10_int)1));
    
    //#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int numberOfTeams = ((((x10_int) (((x10_long)::x10aux::num_hosts)))) / ::x10aux::zeroCheck(nodesPerTeam));
    
    //#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* heuristicString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__20008 = ::x10aux::makeStringLit("-sl"); strLit__20008; })),
                                             (__extension__ ({ static ::x10::lang::String* strLit__20009 = ::x10aux::makeStringLit("AS"); strLit__20009; })));
    
    //#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean whitMasterNode = true;
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__20010 = ::x10aux::makeStringLit("-ce"); strLit__20010; })),
                                   ((x10_int)1)), ((x10_int)0))))
    {
        
        //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        whitMasterNode = false;
    }
    
    //#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
      ::cpls::Main::heuristicsAndRolesDefinition(heuristicString,
                                                 numberOfTeams,
                                                 nodesPerTeam,
                                                 whitMasterNode);
    
    //#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setConfigNodes(nodeConfigs);
    
    //#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setIsThereAMasterNode(
      whitMasterNode);
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* cplsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (cplsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->getSize(), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20011 = ::x10aux::makeStringLit("P_lm"); strLit__20011; })),
                                                      ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20012 = ::x10aux::makeStringLit("P_lmM"); strLit__20012; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__20013 = ::x10aux::makeStringLit("P_lmD"); strLit__20013; })),
                         0.5));
    
    //#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::entities::PoolConfig* teamsPoolConfig =  (new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig());
    (teamsPoolConfig)->::cpls::entities::PoolConfig::_constructor(
      ::x10aux::nullCheck(problemModel)->getSize(), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20014 = ::x10aux::makeStringLit("P_e"); strLit__20014; })),
                                                      ((x10_int)4)),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20015 = ::x10aux::makeStringLit("P_eM"); strLit__20015; })),
        ((x10_int)0)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__20016 = ::x10aux::makeStringLit("P_eD"); strLit__20016; })),
                         0.5));
    
    //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setCPLSPoolConfig(cplsPoolConfig);
    
    //#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setTeamsPoolConfig(teamsPoolConfig);
    
    //#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMaxTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                  (__extension__ ({ static ::x10::lang::String* strLit__20017 = ::x10aux::makeStringLit("-mt"); strLit__20017; })),
                                                  ((x10_long)0ll)));
    
    //#line 52 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setPMaxIters(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__20018 = ::x10aux::makeStringLit("-mi"); strLit__20018; })),
                                                    ((x10_long)100000000ll)));
    
    //#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setMaxRestarts(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20019 = ::x10aux::makeStringLit("-mr"); strLit__20019; })),
                                                      ((x10_int)0)));
    
    //#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setReportPart((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                              (__extension__ ({ static ::x10::lang::String* strLit__20020 = ::x10aux::makeStringLit("-rp"); strLit__20020; })),
                                                                              ((x10_int)0)),
                                                                            ((x10_int)1))));
    
    //#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setModParams(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                    (__extension__ ({ static ::x10::lang::String* strLit__20021 = ::x10aux::makeStringLit("-M"); strLit__20021; })),
                                                    ((x10_int)1)));
    
    //#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setChangeOnDiver(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                        (__extension__ ({ static ::x10::lang::String* strLit__20022 = ::x10aux::makeStringLit("-CD"); strLit__20022; })),
                                                        ((x10_int)1)));
    
    //#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setVerify((::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                          (__extension__ ({ static ::x10::lang::String* strLit__20023 = ::x10aux::makeStringLit("-v"); strLit__20023; })),
                                                                          ((x10_int)0)),
                                                                        ((x10_int)1))));
    
    //#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int rep = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__20024 = ::x10aux::makeStringLit("-R"); strLit__20024; })),
                    ((x10_int)0));
    
    //#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int upd = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                    (__extension__ ({ static ::x10::lang::String* strLit__20025 = ::x10aux::makeStringLit("-U"); strLit__20025; })),
                    ((x10_int)0));
    
    //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_boolean adaptiveComm = (::x10aux::struct_equals(rep,
                                                        ((x10_int)-1)));
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int reportI = adaptiveComm ? (::x10::lang::DoubleNatives::toInt(((((x10_double) (::x10aux::nullCheck(problemModel)->FMGL(size)))) * (::x10::lang::MathNatives::log(((x10_double) (::x10aux::nullCheck(problemModel)->FMGL(size))))))))
      : (rep);
    
    //#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int updateI = adaptiveComm ? (((((x10_int)2)) * (reportI)))
      : (upd);
    
    //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setReport(((x10_long)(reportI)));
    
    //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setUpdate(((x10_long)(updateI)));
    
    //#line 69 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::ASParameters* asParam =  (new (::x10aux::alloc_z< ::cpls::solver::entities::ASParameters>()) ::cpls::solver::entities::ASParameters());
    (asParam)->::cpls::solver::entities::ASParameters::_constructor(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20026 = ::x10aux::makeStringLit("--AS_varToReset"); strLit__20026; })),
        ((x10_long)-1ll)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                             (__extension__ ({ static ::x10::lang::String* strLit__20027 = ::x10aux::makeStringLit("--AS_resetPer"); strLit__20027; })),
                             ((x10_int)10)), (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                                        (__extension__ ({ static ::x10::lang::String* strLit__20028 = ::x10aux::makeStringLit("--AS_exhaustive"); strLit__20028; })),
                                                                        ((x10_int)0)),
                                                                      ((x10_int)1))),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20029 = ::x10aux::makeStringLit("--AS_freezeLocMin"); strLit__20029; })),
        ((x10_int)5)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__20030 = ::x10aux::makeStringLit("--AS_freezeSwap"); strLit__20030; })),
                         ((x10_int)5)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                          (__extension__ ({ static ::x10::lang::String* strLit__20031 = ::x10aux::makeStringLit("--AS_resetLimit"); strLit__20031; })),
                                          ((x10_int)5)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                           (__extension__ ({ static ::x10::lang::String* strLit__20032 = ::x10aux::makeStringLit("--AS_probSelecLocMin"); strLit__20032; })),
                                                           ((x10_int)0)),
      (::x10aux::struct_equals(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__20033 = ::x10aux::makeStringLit("--AS_firstBest"); strLit__20033; })),
                                 ((x10_int)0)), ((x10_int)1))));
    
    //#line 77 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setASParameters(asParam);
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::EOParameters* eoParam =  (new (::x10aux::alloc_z< ::cpls::solver::entities::EOParameters>()) ::cpls::solver::entities::EOParameters());
    (eoParam)->::cpls::solver::entities::EOParameters::_constructor(
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20034 = ::x10aux::makeStringLit("--EO_tau"); strLit__20034; })),
        ((1.0) + (((1.0) / (::x10::lang::MathNatives::log(((x10_double) (::x10aux::nullCheck(problemModel)->FMGL(size))))))))),
      ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
        (__extension__ ({ static ::x10::lang::String* strLit__20035 = ::x10aux::makeStringLit("--EO_pdf"); strLit__20035; })),
        ((x10_int)-1)), ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__20036 = ::x10aux::makeStringLit("--EO_selSec"); strLit__20036; })),
                          ((x10_int)1)));
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setEOParameters(eoParam);
    
    //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::solver::entities::RoTSParameters* roTSParam =
       (new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters());
    
    //#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    x10_double tabuDurationFactorUS__19991 = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                               (__extension__ ({ static ::x10::lang::String* strLit__20037 = ::x10aux::makeStringLit("--RoTS_tabu_duration"); strLit__20037; })),
                                               -1.0);
    x10_double aspirationFactorUS__19992 = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                             (__extension__ ({ static ::x10::lang::String* strLit__20038 = ::x10aux::makeStringLit("--RoTS_aspiration"); strLit__20038; })),
                                             -1.0);
    
    //#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    roTSParam->FMGL(tabuDurationFactorUS) = 0.0;
    roTSParam->FMGL(aspirationFactorUS) = 0.0;
    
    //#line 8 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    roTSParam->FMGL(tabuDurationFactorUS) = tabuDurationFactorUS__19991;
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    roTSParam->FMGL(aspirationFactorUS) = aspirationFactorUS__19992;
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setRoTSParameters(roTSParam);
    
    //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10aux::nullCheck(configCPLS)->setOutTeamTime(::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                                      (__extension__ ({ static ::x10::lang::String* strLit__20039 = ::x10aux::makeStringLit("-I"); strLit__20039; })),
                                                      ((x10_long)0ll)));
    
    //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::cpls::NodeInstancer::installSolvers(configCPLS);
}

//#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::problemDetect(::x10::lang::String* problem) {
    
    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problemParam;
    
    //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(problem)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__20040 = ::x10aux::makeStringLit("MSP"); strLit__20040; }))))
    {
        
        //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__1)))cpls_Main__closure__1())));
        
        //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)1);
    } else 
    //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20042 = ::x10aux::makeStringLit("CAP"); strLit__20042; }))))
    {
        
        //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__2)))cpls_Main__closure__2())));
        
        //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)2);
    } else 
    //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20044 = ::x10aux::makeStringLit("AIP"); strLit__20044; }))))
    {
        
        //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__3)))cpls_Main__closure__3())));
        
        //#line 109 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)3);
    } else 
    //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20046 = ::x10aux::makeStringLit("LNP"); strLit__20046; }))))
    {
        
        //#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__4)))cpls_Main__closure__4())));
        
        //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)4);
    } else 
    //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20048 = ::x10aux::makeStringLit("NPP"); strLit__20048; }))))
    {
        
        //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__5)))cpls_Main__closure__5())));
        
        //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)5);
    } else 
    //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20050 = ::x10aux::makeStringLit("SMP"); strLit__20050; }))))
    {
        
        //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__6)))cpls_Main__closure__6())));
        
        //#line 118 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)6);
    } else 
    //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20052 = ::x10aux::makeStringLit("HRP"); strLit__20052; }))))
    {
        
        //#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__7)))cpls_Main__closure__7())));
        
        //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)7);
    } else 
    //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(problem,(__extension__ ({ static ::x10::lang::String* strLit__20054 = ::x10aux::makeStringLit("QAP"); strLit__20054; }))))
    {
        
        //#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_Main__closure__8)))cpls_Main__closure__8())));
        
        //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)8);
    } else {
        
        //#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        problemParam = ((x10_int)0);
        
        //#line 127 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__20056 = ::x10aux::makeStringLit("Error: Type a valid CSP example: MSP, CAP, AIP, LNP, NPP , SMP, HRP or QAP"); strLit__20056; }))));
    }
    
    //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return problemParam;
    
}

//#line 158 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::Main::heuristicsAndRolesDefinition(
  ::x10::lang::String* solverIn, x10_int numberOfTeams, x10_int nodesPerTeam,
  x10_boolean whitMasterNode) {
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* nodeConfigs =
       (new (::x10aux::alloc_z< ::x10::array::Array_2< ::cpls::entities::NodeConfig*> >()) ::x10::array::Array_2< ::cpls::entities::NodeConfig*>());
    (nodeConfigs)->::x10::array::Array_2< ::cpls::entities::NodeConfig*>::_constructor(
      ((x10_long)(numberOfTeams)), ((x10_long)(nodesPerTeam)),
      (__extension__ ({
          ::cpls::entities::NodeConfig* alloc__1179 =  (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
          
          //#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
          alloc__1179->FMGL(heuristic) = ((x10_int)0);
          alloc__1179->FMGL(outTeamTime) = ((x10_long)0ll);
          
          //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
          alloc__1179->FMGL(heuristic) = ((x10_int)0);
          alloc__1179;
      }))
      );
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* eachTeam =
      ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__20057 = ::x10aux::makeStringLit("/"); strLit__20057; })), solverIn);
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* eachNode;
    
    //#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck(eachTeam)->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            eachNode = ::x10::lang::StringHelper::split((__extension__ ({ static ::x10::lang::String* strLit__20058 = ::x10aux::makeStringLit(","); strLit__20058; })), ::x10aux::nullCheck(eachTeam)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                          i));
            
            //#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            {
                x10_long j;
                for (j = ((x10_long)0ll); ((j) < ((x10_long)(::x10aux::nullCheck(eachNode)->FMGL(size))));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__20001 = i;
                    x10_long j__20002 = j;
                    ::cpls::entities::NodeConfig* v__20003 =
                      (__extension__ ({
                        
                        //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
                        ::cpls::entities::NodeConfig* alloc__20004 =
                           (new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig());
                        
                        //#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                        x10_int heuristic__19998 = ::cpls::Main::whichHeuristic(
                                                     ::x10aux::nullCheck(eachNode)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       j));
                        
                        //#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                        alloc__20004->FMGL(heuristic) = ((x10_int)0);
                        alloc__20004->FMGL(outTeamTime) =
                          ((x10_long)0ll);
                        
                        //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
                        alloc__20004->FMGL(heuristic) = heuristic__19998;
                        alloc__20004;
                    }))
                    ;
                    ::cpls::entities::NodeConfig* ret__20005;
                    
                    //#line 174 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(nodeConfigs)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__19999 = i__20001;
                        x10_long j__20000 = j__20002;
                        ((j__20000) + (((i__19999) * (::x10aux::nullCheck(nodeConfigs)->FMGL(numElems_2)))));
                    }))
                    , v__20003);
                    
                    //#line 175 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__20005 = v__20003;
                    
                    //#line 169 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__20005;
                }
            }
            
        }
    }
    
    //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return nodeConfigs;
    
}

//#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
x10_int cpls::Main::whichHeuristic(::x10::lang::String* solverIn) {
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int solParam;
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::nullCheck(solverIn)->x10::lang::String::equalsIgnoreCase(
          (__extension__ ({ static ::x10::lang::String* strLit__20061 = ::x10aux::makeStringLit("AS"); strLit__20061; }))))
    {
        
        //#line 178 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        solParam = ((x10_int)2);
    } else 
    //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__20062 = ::x10aux::makeStringLit("EO"); strLit__20062; }))))
    {
        
        //#line 180 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        solParam = ((x10_int)3);
    } else 
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__20063 = ::x10aux::makeStringLit("RoTS"); strLit__20063; }))))
    {
        
        //#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        solParam = ((x10_int)4);
    } else 
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    if (::x10aux::equals(solverIn,(__extension__ ({ static ::x10::lang::String* strLit__20064 = ::x10aux::makeStringLit("HY"); strLit__20064; }))))
    {
        
        //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        solParam = ((x10_int)5);
    } else {
        
        //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        solParam = ((x10_int)0);
    }
    
    //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    return solParam;
    
}

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::cpls::Main* cpls::Main::cpls__Main____this__cpls__Main(
  ) {
    return this;
    
}
void cpls::Main::_constructor() {
    ::cpls::Main* this__20006 = this;
    
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

//#line 133 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::cpls::problem::ProblemGenericModel* cpls::Main__COPProblemModelFactory::make(
  ::cpls::ParamManager* opts) {
    
    //#line 134 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* problemString = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                           (__extension__ ({ static ::x10::lang::String* strLit__20071 = ::x10aux::makeStringLit("-p"); strLit__20071; })),
                                           (__extension__ ({ static ::x10::lang::String* strLit__20072 = ::x10aux::makeStringLit("MSP"); strLit__20072; })));
    
    //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int problem = ::cpls::Main::problemDetect(problemString);
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long size = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                      (__extension__ ({ static ::x10::lang::String* strLit__20073 = ::x10aux::makeStringLit("-s"); strLit__20073; })),
                      ((x10_long)10ll));
    
    //#line 137 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_int baseValue = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                          (__extension__ ({ static ::x10::lang::String* strLit__20074 = ::x10aux::makeStringLit("-bv"); strLit__20074; })),
                          ((x10_int)1));
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    ::x10::lang::String* inPath = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                    (__extension__ ({ static ::x10::lang::String* strLit__20075 = ::x10aux::makeStringLit("-if"); strLit__20075; })),
                                    (__extension__ ({ static ::x10::lang::String* strLit__20076 = ::x10aux::makeStringLit("."); strLit__20076; })));
    
    //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    x10_long inSeed = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                        (__extension__ ({ static ::x10::lang::String* strLit__20077 = ::x10aux::makeStringLit("-S"); strLit__20077; })),
                        ::x10::lang::RuntimeNatives::nanoTime());
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
    switch (problem) {
        
        //#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)1): ;
        {
            {
                ::cpls::problem::MSPModel* alloc__1172 = 
                (new (::x10aux::alloc_z< ::cpls::problem::MSPModel>()) ::cpls::problem::MSPModel());
                (alloc__1172)->::cpls::problem::MSPModel::_constructor(
                  size);
                return alloc__1172;
                
            }
        }
        //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::problem::CAPModel* alloc__1173 = 
                (new (::x10aux::alloc_z< ::cpls::problem::CAPModel>()) ::cpls::problem::CAPModel());
                (alloc__1173)->::cpls::problem::CAPModel::_constructor(
                  size);
                return alloc__1173;
                
            }
        }
        //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::problem::AIPModel* alloc__1174 = 
                (new (::x10aux::alloc_z< ::cpls::problem::AIPModel>()) ::cpls::problem::AIPModel());
                (alloc__1174)->::cpls::problem::AIPModel::_constructor(
                  size);
                return alloc__1174;
                
            }
        }
        //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::problem::LNPModel* alloc__1175 = 
                (new (::x10aux::alloc_z< ::cpls::problem::LNPModel>()) ::cpls::problem::LNPModel());
                (alloc__1175)->::cpls::problem::LNPModel::_constructor(
                  size);
                return alloc__1175;
                
            }
        }
        //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)6): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__1176 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__1176)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__1176;
                
            }
        }
        //#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)7): ;
        {
            {
                ::cpls::problem::SMTIModel* alloc__1177 =
                   (new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel());
                (alloc__1177)->::cpls::problem::SMTIModel::_constructor(
                  size);
                return alloc__1177;
                
            }
        }
        //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        case ((x10_int)8): ;
        {
            
            //#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::cpls::problem::QAPModel* problemModel =  (new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel());
            (problemModel)->::cpls::problem::QAPModel::_constructor(
              size);
            
            //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->setBaseValue(
              baseValue);
            
            //#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->setInPath(
              inPath);
            
            //#line 151 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            ::x10aux::nullCheck(problemModel)->setSeed(inSeed);
            
            //#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
            return problemModel;
            
        }
        //#line 153 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
        default: ;
        {
            {
                ::cpls::problem::PNPModel* alloc__1178 = 
                (new (::x10aux::alloc_z< ::cpls::problem::PNPModel>()) ::cpls::problem::PNPModel());
                (alloc__1178)->::cpls::problem::PNPModel::_constructor(
                  size);
                return alloc__1178;
                
            }
        }
    }
}

//#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/Main.x10"
::x10::lang::String* cpls::Main__COPProblemModelFactory::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::Main__COPProblemModelFactory::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__20078 = ::x10aux::makeStringLit("struct cpls.Main.COPProblemModelFactory"); strLit__20078; }));
    
}
x10_boolean cpls::Main__COPProblemModelFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__19993 = (*this);
    ::cpls::Main__COPProblemModelFactory other__19994 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
    return true;
    
}
x10_boolean cpls::Main__COPProblemModelFactory::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::Main__COPProblemModelFactory>(other)))
    {
        return false;
        
    }
    ::cpls::Main__COPProblemModelFactory this__19995 = (*this);
    ::cpls::Main__COPProblemModelFactory other__19996 = ::x10aux::class_cast< ::cpls::Main__COPProblemModelFactory>(other);
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
