/*************************************************/
/* START of NodeInstancer */
#include <cpls/NodeInstancer.h>

#include <cpls/CPLSNode.h>
#include <cpls/entities/CPLSConfig.h>
#include <cpls/ParamManager.h>
#include <cpls/MasterNode.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Array.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/PlaceGroup__SimplePlaceGroup.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <cpls/NodeInstancer__NodeFactory.h>
#include <cpls/CPLSOptionsEnum__NodeRoles.h>
#include <x10/lang/Int.h>
#include <x10/lang/Place.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <cpls/HeadNode.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_NODEINSTANCER__CLOSURE__1_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_NodeInstancer__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>::itable<cpls_NodeInstancer__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::CPLSNode* __apply() {
        
        //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        return ::cpls::NodeInstancer__NodeFactory::make(::cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__get)());
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__1* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__1>();
        buf.record_reference(storage);
        cpls_NodeInstancer__closure__1* this_ = new (storage) cpls_NodeInstancer__closure__1();
        return this_;
    }
    
    cpls_NodeInstancer__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:48";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__1_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__2_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_NodeInstancer__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>::itable<cpls_NodeInstancer__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::CPLSNode* __apply() {
        
        //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        return ::cpls::NodeInstancer__NodeFactory::make(::cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__get)());
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__2* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__2>();
        buf.record_reference(storage);
        cpls_NodeInstancer__closure__2* this_ = new (storage) cpls_NodeInstancer__closure__2();
        return this_;
    }
    
    cpls_NodeInstancer__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:50";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__2_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__3_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            if ((::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode() &&
                (::x10aux::struct_equals(p->x10::lang::Place::id(), ((x10_long)0ll)))))
            {
                
                //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  ::x10aux::nullCheck(configNodes)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                    p->x10::lang::Place::id(), ((x10_long)1ll)),
                  ((x10_int) (p->x10::lang::Place::id())),
                  ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig(),
                  ::x10aux::nullCheck(::x10aux::nullCheck(configCPLS)->getProblemModel())->getSize(),
                  ::x10aux::nullCheck(configCPLS)->getSeed(),
                  ::x10aux::nullCheck(configCPLS)->getMaxIters());
            } else {
                
                //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  ::x10aux::nullCheck(configNodes)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                    p->x10::lang::Place::id(), ((x10_long)0ll)),
                  ((x10_int) (p->x10::lang::Place::id())),
                  ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig(),
                  ::x10aux::nullCheck(::x10aux::nullCheck(configCPLS)->getProblemModel())->getSize(),
                  ::x10aux::nullCheck(configCPLS)->getSeed(),
                  ::x10aux::nullCheck(configCPLS)->getMaxIters());
            }
            
        }
        catch (::x10::lang::CheckedThrowable* __exc136) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc136)) {
                ::x10::lang::Error* __lowerer__var__0__ =
                  static_cast< ::x10::lang::Error*>(__exc136);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc136);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__1__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::entities::CPLSConfig* configCPLS;
    ::x10::lang::Place p;
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes;
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->configCPLS);
        buf.write(this->p);
        buf.write(this->headNodes);
        buf.write(this->configNodes);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__3* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__3>();
        buf.record_reference(storage);
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_headNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* that_configNodes = buf.read< ::x10::array::Array_2< ::cpls::entities::NodeConfig*>*>();
        cpls_NodeInstancer__closure__3* this_ = new (storage) cpls_NodeInstancer__closure__3(that_configCPLS, that_p, that_headNodes, that_configNodes);
        return this_;
    }
    
    cpls_NodeInstancer__closure__3(::cpls::entities::CPLSConfig* configCPLS, ::x10::lang::Place p, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes, ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes) : configCPLS(configCPLS), p(p), headNodes(headNodes), configNodes(configNodes) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:53-69";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__3_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__4_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
            {
                
                //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                x10_long indice_i = ((((((x10_long)(((x10_int) (p->x10::lang::Place::id()))))) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
                
                //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                x10_long indice_j = ((((((((x10_long)(((x10_int) (p->x10::lang::Place::id()))))) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))))) + (((x10_long)1ll)));
                
                //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  ::x10aux::nullCheck(configNodes)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                    indice_i, indice_j), ((x10_int) (p->x10::lang::Place::id())),
                  ::x10aux::class_cast_unchecked< ::cpls::entities::PoolConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                  ::x10aux::nullCheck(::x10aux::nullCheck(configCPLS)->getProblemModel())->getSize(),
                  ::x10aux::nullCheck(configCPLS)->getSeed(),
                  ::x10aux::nullCheck(configCPLS)->getMaxIters());
            } else {
                
                //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                x10_long indice_i = ((((x10_long)(((x10_int) (p->x10::lang::Place::id()))))) / ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
                
                //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                x10_long indice_j = ((((x10_long)(((x10_int) (p->x10::lang::Place::id()))))) % ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
                
                //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  ::x10aux::nullCheck(configNodes)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                    indice_i, ((indice_j) + (((x10_long)1ll)))),
                  ((x10_int) (p->x10::lang::Place::id())),
                  ::x10aux::class_cast_unchecked< ::cpls::entities::PoolConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                  ::x10aux::nullCheck(::x10aux::nullCheck(configCPLS)->getProblemModel())->getSize(),
                  ::x10aux::nullCheck(configCPLS)->getSeed(),
                  ::x10aux::nullCheck(configCPLS)->getMaxIters());
            }
            
        }
        catch (::x10::lang::CheckedThrowable* __exc137) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc137)) {
                ::x10::lang::Error* __lowerer__var__0__ =
                  static_cast< ::x10::lang::Error*>(__exc137);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc137);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__1__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::entities::CPLSConfig* configCPLS;
    ::x10::lang::Place p;
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes;
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->configCPLS);
        buf.write(this->p);
        buf.write(this->configNodes);
        buf.write(this->explorersNodes);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__4* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__4>();
        buf.record_reference(storage);
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* that_configNodes = buf.read< ::x10::array::Array_2< ::cpls::entities::NodeConfig*>*>();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_explorersNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        cpls_NodeInstancer__closure__4* this_ = new (storage) cpls_NodeInstancer__closure__4(that_configCPLS, that_p, that_configNodes, that_explorersNodes);
        return this_;
    }
    
    cpls_NodeInstancer__closure__4(::cpls::entities::CPLSConfig* configCPLS, ::x10::lang::Place p, ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes) : configCPLS(configCPLS), p(p), configNodes(configNodes), explorersNodes(explorersNodes) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:70-91";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__4_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__5_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck((::x10aux::class_cast< ::cpls::HeadNode*>(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())))->setMasterNodeIndicator(
              ::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode());
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->addPointerComm(
              headNodes);
            
            //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->addPointerComm(
              explorersNodes);
            
            //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->configHeuristic(
              ::x10aux::nullCheck(configCPLS)->getProblemModel(),
              opts);
        }
        catch (::x10::lang::CheckedThrowable* __exc140) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc140)) {
                ::x10::lang::Error* __lowerer__var__1__ =
                  static_cast< ::x10::lang::Error*>(__exc140);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc140);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__2__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes;
    ::cpls::entities::CPLSConfig* configCPLS;
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes;
    ::cpls::ParamManager* opts;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->headNodes);
        buf.write(this->configCPLS);
        buf.write(this->explorersNodes);
        buf.write(this->opts);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__5* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__5>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_headNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_explorersNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::ParamManager* that_opts = buf.read< ::cpls::ParamManager*>();
        cpls_NodeInstancer__closure__5* this_ = new (storage) cpls_NodeInstancer__closure__5(that_headNodes, that_configCPLS, that_explorersNodes, that_opts);
        return this_;
    }
    
    cpls_NodeInstancer__closure__5(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes, ::cpls::entities::CPLSConfig* configCPLS, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes, ::cpls::ParamManager* opts) : headNodes(headNodes), configCPLS(configCPLS), explorersNodes(explorersNodes), opts(opts) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:103-109";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__5_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__6_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->addPointerComm(
              headNodes);
            
            //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->configHeuristic(
              ::x10aux::nullCheck(configCPLS)->getProblemModel(),
              opts);
        }
        catch (::x10::lang::CheckedThrowable* __exc141) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc141)) {
                ::x10::lang::Error* __lowerer__var__1__ =
                  static_cast< ::x10::lang::Error*>(__exc141);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc141);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__2__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes;
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes;
    ::cpls::entities::CPLSConfig* configCPLS;
    ::cpls::ParamManager* opts;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->explorersNodes);
        buf.write(this->headNodes);
        buf.write(this->configCPLS);
        buf.write(this->opts);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__6* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__6>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_explorersNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_headNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        ::cpls::ParamManager* that_opts = buf.read< ::cpls::ParamManager*>();
        cpls_NodeInstancer__closure__6* this_ = new (storage) cpls_NodeInstancer__closure__6(that_explorersNodes, that_headNodes, that_configCPLS, that_opts);
        return this_;
    }
    
    cpls_NodeInstancer__closure__6(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes, ::cpls::entities::CPLSConfig* configCPLS, ::cpls::ParamManager* opts) : explorersNodes(explorersNodes), headNodes(headNodes), configCPLS(configCPLS), opts(opts) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:110-114";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__6_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__7_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->start(
              ::x10aux::nullCheck(configCPLS)->getSeed(), ::x10aux::nullCheck(configCPLS)->getTargetCost(),
              ::x10aux::nullCheck(configCPLS)->getStrictLow(),
              ::x10aux::nullCheck(configCPLS)->getIterations());
        }
        catch (::x10::lang::CheckedThrowable* __exc144) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc144)) {
                ::x10::lang::Error* __lowerer__var__2__ =
                  static_cast< ::x10::lang::Error*>(__exc144);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc144);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__3__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes;
    ::cpls::entities::CPLSConfig* configCPLS;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->headNodes);
        buf.write(this->configCPLS);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__7* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__7>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_headNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        cpls_NodeInstancer__closure__7* this_ = new (storage) cpls_NodeInstancer__closure__7(that_headNodes, that_configCPLS);
        return this_;
    }
    
    cpls_NodeInstancer__closure__7(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes, ::cpls::entities::CPLSConfig* configCPLS) : headNodes(headNodes), configCPLS(configCPLS) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:124-126";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__7_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__8_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->start(
              ::x10aux::nullCheck(configCPLS)->getSeed(), ::x10aux::nullCheck(configCPLS)->getTargetCost(),
              ::x10aux::nullCheck(configCPLS)->getStrictLow(),
              ::x10aux::nullCheck(configCPLS)->getIterations());
        }
        catch (::x10::lang::CheckedThrowable* __exc145) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc145)) {
                ::x10::lang::Error* __lowerer__var__2__ =
                  static_cast< ::x10::lang::Error*>(__exc145);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc145);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__3__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes;
    ::cpls::entities::CPLSConfig* configCPLS;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->explorersNodes);
        buf.write(this->configCPLS);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__8* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__8>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_explorersNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        cpls_NodeInstancer__closure__8* this_ = new (storage) cpls_NodeInstancer__closure__8(that_explorersNodes, that_configCPLS);
        return this_;
    }
    
    cpls_NodeInstancer__closure__8(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes, ::cpls::entities::CPLSConfig* configCPLS) : explorersNodes(explorersNodes), configCPLS(configCPLS) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10:127-129";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__8_CLOSURE

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
void cpls::NodeInstancer::installSolvers(::cpls::entities::CPLSConfig* configCPLS,
                                         ::cpls::ParamManager* opts) {
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::cpls::CPLSNode* masterNode = ::cpls::MasterNode::_make();
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes =
      ::x10aux::nullCheck(configCPLS)->getConfigNodes();
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    {
        ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>* conf__18198;
        for (conf__18198 = ::x10aux::nullCheck(configNodes)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::iterator();
             ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>::hasNext(::x10aux::nullCheck(conf__18198));
             ) {
            ::cpls::entities::NodeConfig* conf = ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>::next(::x10aux::nullCheck(conf__18198));
            
            //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(conf)->setOutTeamTime(::x10aux::nullCheck(configCPLS)->getOutTeamTime());
        }
    }
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceGroup* headersGroup = ::x10::lang::PlaceGroup::make(
                                              ::x10aux::nullCheck(configNodes)->FMGL(numElems_1));
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__26416 = ::x10aux::makeStringLit("Numero de Teams: "); strLit__26416; })), ::x10aux::nullCheck(headersGroup)->x10::lang::PlaceGroup::size())));
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    x10_long numExplorers = ((::x10aux::nullCheck(configNodes)->FMGL(numElems_1)) * (((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
    {
        
        //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        numExplorers = ((numExplorers) - (((x10_long)1ll)));
        
        //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        masterNode = ::cpls::NodeInstancer__NodeFactory::make(
                       ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)());
        
        //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        ::x10aux::nullCheck(masterNode)->initialize(::x10aux::nullCheck(configNodes)->x10::array::Array_2< ::cpls::entities::NodeConfig*>::__apply(
                                                      ((x10_long)0ll),
                                                      ((x10_long)0ll)),
                                                    ((x10_int) (::x10::lang::Place::FMGL(FIRST_PLACE__get)()->FMGL(id))),
                                                    ::x10aux::nullCheck(configCPLS)->getCPLSPoolConfig(),
                                                    ::x10aux::nullCheck(::x10aux::nullCheck(configCPLS)->getProblemModel())->getSize(),
                                                    ::x10aux::nullCheck(configCPLS)->getSeed(),
                                                    ::x10aux::nullCheck(configCPLS)->getMaxIters());
    }
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceGroup* explorersGroup = ::x10::lang::PlaceGroup::make(
                                                numExplorers);
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes =
      ::x10::lang::PlaceLocalHandle<void>::make< ::cpls::CPLSNode* >(
        headersGroup, reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(sizeof(cpls_NodeInstancer__closure__1)))cpls_NodeInstancer__closure__1())));
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes =
      ::x10::lang::PlaceLocalHandle<void>::make< ::cpls::CPLSNode* >(
        explorersGroup, reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(sizeof(cpls_NodeInstancer__closure__2)))cpls_NodeInstancer__closure__2())));
    {
        
        //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var0 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__18243 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__18200;
                            for (p__18200 = ::x10aux::nullCheck(headersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__18200));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__18200));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__3)))cpls_NodeInstancer__closure__3(configCPLS, p, headNodes, configNodes))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                        //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__18202;
                            for (p__18202 = ::x10aux::nullCheck(explorersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__18202));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__18202));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__4)))cpls_NodeInstancer__closure__4(configCPLS, p, configNodes, explorersNodes))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc138) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc138);
                        {
                            ::x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc139) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__18244 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc139);
                    {
                        throwable__18243 = formal__18244;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__18243)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__18243))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__18243));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var0);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__18243)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__18243)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__18243));
                }
                
            }
            
        }
    }
    {
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var1 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__18246 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
                        {
                            
                            //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->addPointerComm(
                              headNodes);
                            
                            //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->addPointerComm(
                              explorersNodes);
                            
                            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->configHeuristic(
                              ::x10aux::nullCheck(configCPLS)->getProblemModel(),
                              opts);
                        }
                        
                        //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__18204;
                            for (p__18204 = ::x10aux::nullCheck(headersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__18204));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__18204));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__5)))cpls_NodeInstancer__closure__5(headNodes, configCPLS, explorersNodes, opts))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                        //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__18206;
                            for (p__18206 = ::x10aux::nullCheck(explorersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__18206));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__18206));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__6)))cpls_NodeInstancer__closure__6(explorersNodes, headNodes, configCPLS, opts))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc142) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc142);
                        {
                            ::x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc143) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__18247 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc143);
                    {
                        throwable__18246 = formal__18247;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__18246)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__18246))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__18246));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var1);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__18246)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__18246)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__18246));
                }
                
            }
            
        }
    }
    {
        
        //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var2 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__18249 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
                        {
                            
                            //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->start(
                              ::x10aux::nullCheck(configCPLS)->getSeed(),
                              ::x10aux::nullCheck(configCPLS)->getTargetCost(),
                              ::x10aux::nullCheck(configCPLS)->getStrictLow(),
                              ::x10aux::nullCheck(configCPLS)->getIterations());
                        }
                        
                        //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__18208;
                            for (p__18208 = ::x10aux::nullCheck(headersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__18208));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__18208));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__7)))cpls_NodeInstancer__closure__7(headNodes, configCPLS))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                        //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__18210;
                            for (p__18210 = ::x10aux::nullCheck(explorersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__18210));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__18210));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__8)))cpls_NodeInstancer__closure__8(explorersNodes, configCPLS))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc146) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc146);
                        {
                            ::x10::lang::Runtime::pushException(
                              __lowerer__var__2__);
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                ::x10::compiler::Finalization::plausibleThrow();
            }
            catch (::x10::lang::CheckedThrowable* __exc147) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__18250 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc147);
                    {
                        throwable__18249 = formal__18250;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__18249)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__18249))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__18249));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var2);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__18249)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__18249)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__18249));
                }
                
            }
            
        }
    }
}

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
::cpls::NodeInstancer* cpls::NodeInstancer::cpls__NodeInstancer____this__cpls__NodeInstancer(
  ) {
    return this;
    
}
void cpls::NodeInstancer::_constructor() {
    this->cpls::NodeInstancer::__fieldInitializers_cpls_NodeInstancer();
}
::cpls::NodeInstancer* cpls::NodeInstancer::_make() {
    ::cpls::NodeInstancer* this_ = new (::x10aux::alloc_z< ::cpls::NodeInstancer>()) ::cpls::NodeInstancer();
    this_->_constructor();
    return this_;
}


void cpls::NodeInstancer::__fieldInitializers_cpls_NodeInstancer(
  ) {
    this->FMGL(masterNode) = (::x10aux::class_cast_unchecked< ::cpls::CPLSNode*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::NodeInstancer::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::NodeInstancer::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::NodeInstancer::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(masterNode));
    
}

::x10::lang::Reference* ::cpls::NodeInstancer::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::NodeInstancer* this_ = new (::x10aux::alloc_z< ::cpls::NodeInstancer>()) ::cpls::NodeInstancer();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::NodeInstancer::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(masterNode) = buf.read< ::cpls::CPLSNode*>();
}

::x10aux::RuntimeType cpls::NodeInstancer::rtt;
void cpls::NodeInstancer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.NodeInstancer",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::cpls::CPLSNode*>::itable<cpls_NodeInstancer__closure__1>cpls_NodeInstancer__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__1::__apply, &cpls_NodeInstancer__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >, &cpls_NodeInstancer__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::CPLSNode*>::itable<cpls_NodeInstancer__closure__2>cpls_NodeInstancer__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__2::__apply, &cpls_NodeInstancer__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >, &cpls_NodeInstancer__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__3>cpls_NodeInstancer__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__3::__apply, &cpls_NodeInstancer__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__3::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__4>cpls_NodeInstancer__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__4::__apply, &cpls_NodeInstancer__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__4::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__5>cpls_NodeInstancer__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__5::__apply, &cpls_NodeInstancer__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__5::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__6>cpls_NodeInstancer__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__6::__apply, &cpls_NodeInstancer__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__6::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__7>cpls_NodeInstancer__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__7::__apply, &cpls_NodeInstancer__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__7::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__8>cpls_NodeInstancer__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__8::__apply, &cpls_NodeInstancer__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__8::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

/* END of NodeInstancer */
/*************************************************/
/*************************************************/
/* START of NodeInstancer$NodeFactory */
#include <cpls/NodeInstancer__NodeFactory.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <cpls/CPLSNode.h>
#include <cpls/CPLSOptionsEnum__NodeRoles.h>
#include <cpls/ExplorerNode.h>
#include <cpls/HeadNode.h>
#include <cpls/MasterNode.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class NodeInstancer__NodeFactory_ibox0 : public ::x10::lang::IBox< ::cpls::NodeInstancer__NodeFactory> {
public:
    static ::x10::lang::Any::itable< NodeInstancer__NodeFactory_ibox0 > itable;
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
::x10::lang::Any::itable< NodeInstancer__NodeFactory_ibox0 >  NodeInstancer__NodeFactory_ibox0::itable(&NodeInstancer__NodeFactory_ibox0::equals, &NodeInstancer__NodeFactory_ibox0::hashCode, &NodeInstancer__NodeFactory_ibox0::toString, &NodeInstancer__NodeFactory_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::NodeInstancer__NodeFactory >  cpls::NodeInstancer__NodeFactory::_itable_0(&cpls::NodeInstancer__NodeFactory::equals, &cpls::NodeInstancer__NodeFactory::hashCode, &cpls::NodeInstancer__NodeFactory::toString, &cpls::NodeInstancer__NodeFactory::typeName);
::x10aux::itable_entry cpls::NodeInstancer__NodeFactory::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::NodeInstancer__NodeFactory::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::NodeInstancer__NodeFactory")};
::x10aux::itable_entry cpls::NodeInstancer__NodeFactory::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::NodeInstancer__NodeFactory_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::NodeInstancer__NodeFactory")};

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
::cpls::CPLSNode* cpls::NodeInstancer__NodeFactory::make(x10_int nodeRole) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
    switch (nodeRole) {
        
        //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        case 0/*::cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__get)()*/: ;
        {
            return ::cpls::ExplorerNode::_make();
            
        }
        //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        case 1/*::cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__get)()*/: ;
        {
            return ::cpls::HeadNode::_make();
            
        }
        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        case 2/*::cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)()*/: ;
        {
            return ::cpls::MasterNode::_make();
            
        }
        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
        default: ;
        {
            return ::cpls::ExplorerNode::_make();
            
        }
    }
}

//#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/NodeInstancer.x10"
::x10::lang::String* cpls::NodeInstancer__NodeFactory::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::NodeInstancer__NodeFactory::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__26433 = ::x10aux::makeStringLit("struct cpls.NodeInstancer.NodeFactory"); strLit__26433; }));
    
}
x10_boolean cpls::NodeInstancer__NodeFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::NodeInstancer__NodeFactory>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::NodeInstancer__NodeFactory::equals(::x10aux::class_cast< ::cpls::NodeInstancer__NodeFactory>(other));
    
}
x10_boolean cpls::NodeInstancer__NodeFactory::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::NodeInstancer__NodeFactory>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::NodeInstancer__NodeFactory::_struct_equals(::x10aux::class_cast< ::cpls::NodeInstancer__NodeFactory>(other));
    
}

void ::cpls::NodeInstancer__NodeFactory::_serialize(::cpls::NodeInstancer__NodeFactory this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::NodeInstancer__NodeFactory::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::NodeInstancer__NodeFactory::rtt;
void cpls::NodeInstancer__NodeFactory::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.NodeInstancer.NodeFactory",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of NodeInstancer$NodeFactory */
/*************************************************/
