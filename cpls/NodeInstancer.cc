/*************************************************/
/* START of NodeInstancer */
#include <cpls/NodeInstancer.h>

#include <cpls/CPLSNode.h>
#include <cpls/entities/CPLSConfig.h>
#include <cpls/ParamManager.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Long.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup__SimplePlaceGroup.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Int.h>
#include <x10/util/OptionsParser.h>
#include <cpls/measurements/GlobalStats.h>
#include <x10/lang/Iterable.h>
#include <cpls/util/Logger.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
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
        ::cpls::CPLSNode* alloc__17371 =  (new (::x10aux::alloc_z< ::cpls::CPLSNode>()) ::cpls::CPLSNode());
        (alloc__17371)->::cpls::CPLSNode::_constructor();
        return alloc__17371;
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:18";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__1_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__2_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_NodeInstancer__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
            {
                
                //#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                if ((::x10aux::struct_equals(p, ::x10::lang::Place::FMGL(FIRST_PLACE__get)())))
                {
                    
                    //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                    ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                      ::x10aux::nullCheck(configCPLS)->getMasterConfig(),
                      ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig(),
                      ::x10aux::nullCheck(configCPLS)->getProblemModel(),
                      ::x10aux::nullCheck(configCPLS)->getSeed());
                } else {
                    
                    //#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                    ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                      (__extension__ ({
                          
                          //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__5758 = ((((p->FMGL(id)) - (((x10_long)1ll)))) / ::x10aux::zeroCheck(nodesPerTeam));
                          x10_long j__5759 = ((((p->FMGL(id)) - (((x10_long)1ll)))) % ::x10aux::zeroCheck(nodesPerTeam));
                          ::cpls::entities::NodeConfig* ret__5760;
                          
                          //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          ret__5760 = (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                              
                              //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                              x10_long i__17372 = i__5758;
                              x10_long j__17373 = j__5759;
                              ((j__17373) + (((i__17372) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                          }))
                          );
                          ret__5760;
                      }))
                      , ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig(),
                      ::x10aux::nullCheck(configCPLS)->getProblemModel(),
                      ::x10aux::nullCheck(configCPLS)->getSeed());
                }
                
            } else {
                
                //#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  (__extension__ ({
                      
                      //#line 142 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__5796 = ((p->FMGL(id)) / ::x10aux::zeroCheck(nodesPerTeam));
                      x10_long j__5797 = ((p->FMGL(id)) % ::x10aux::zeroCheck(nodesPerTeam));
                      ::cpls::entities::NodeConfig* ret__5798;
                      
                      //#line 147 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      ret__5798 = (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                          
                          //#line 130 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__17374 = i__5796;
                          x10_long j__17375 = j__5797;
                          ((j__17375) + (((i__17374) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                      }))
                      );
                      ret__5798;
                  }))
                  , ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig(),
                  ::x10aux::nullCheck(configCPLS)->getProblemModel(),
                  ::x10aux::nullCheck(configCPLS)->getSeed());
            }
            
            //#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->setPointersCommunication(
              refsToPlaces);
            
            //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->configHeuristic(
              opts);
        }
        catch (::x10::lang::CheckedThrowable* __exc1) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc1)) {
                ::x10::lang::Error* __lowerer__var__0__ =
                  static_cast< ::x10::lang::Error*>(__exc1);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc1);
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
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces;
    x10_long nodesPerTeam;
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes;
    ::cpls::ParamManager* opts;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->configCPLS);
        buf.write(this->p);
        buf.write(this->refsToPlaces);
        buf.write(this->nodesPerTeam);
        buf.write(this->configNodes);
        buf.write(this->opts);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__2* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__2>();
        buf.record_reference(storage);
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_refsToPlaces = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        x10_long that_nodesPerTeam = buf.read<x10_long>();
        ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* that_configNodes = buf.read< ::x10::array::Array_2< ::cpls::entities::NodeConfig*>*>();
        ::cpls::ParamManager* that_opts = buf.read< ::cpls::ParamManager*>();
        cpls_NodeInstancer__closure__2* this_ = new (storage) cpls_NodeInstancer__closure__2(that_configCPLS, that_p, that_refsToPlaces, that_nodesPerTeam, that_configNodes, that_opts);
        return this_;
    }
    
    cpls_NodeInstancer__closure__2(::cpls::entities::CPLSConfig* configCPLS, ::x10::lang::Place p, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces, x10_long nodesPerTeam, ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes, ::cpls::ParamManager* opts) : configCPLS(configCPLS), p(p), refsToPlaces(refsToPlaces), nodesPerTeam(nodesPerTeam), configNodes(configNodes), opts(opts) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:21-42";
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
            
            //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->start(
              ::x10aux::nullCheck(configCPLS)->getSeed(), ::x10aux::nullCheck(configCPLS)->getTargetCost(),
              ::x10aux::nullCheck(configCPLS)->getStrictLow());
        }
        catch (::x10::lang::CheckedThrowable* __exc4) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc4)) {
                ::x10::lang::Error* __lowerer__var__1__ =
                  static_cast< ::x10::lang::Error*>(__exc4);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc4);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__2__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces;
    ::cpls::entities::CPLSConfig* configCPLS;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->refsToPlaces);
        buf.write(this->configCPLS);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__3* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_refsToPlaces = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        cpls_NodeInstancer__closure__3* this_ = new (storage) cpls_NodeInstancer__closure__3(that_refsToPlaces, that_configCPLS);
        return this_;
    }
    
    cpls_NodeInstancer__closure__3(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces, ::cpls::entities::CPLSConfig* configCPLS) : refsToPlaces(refsToPlaces), configCPLS(configCPLS) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:47-49";
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
            
            //#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->clear();
        }
        catch (::x10::lang::CheckedThrowable* __exc7) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc7);
                {
                    x10_int __lowerer__var__3__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__2__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->refsToPlaces);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__4* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__4>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_refsToPlaces = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        cpls_NodeInstancer__closure__4* this_ = new (storage) cpls_NodeInstancer__closure__4(that_refsToPlaces);
        return this_;
    }
    
    cpls_NodeInstancer__closure__4(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces) : refsToPlaces(refsToPlaces) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:52-54";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__4_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__5_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_NodeInstancer__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_NodeInstancer__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__17424 = ::x10aux::makeStringLit("No winner found"); strLit__17424; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__5* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__5>();
        buf.record_reference(storage);
        cpls_NodeInstancer__closure__5* this_ = new (storage) cpls_NodeInstancer__closure__5();
        return this_;
    }
    
    cpls_NodeInstancer__closure__5() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:63";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__5_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__6_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_NodeInstancer__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_long>::itable<cpls_NodeInstancer__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply() {
        try {
            return ::x10aux::nullCheck(refPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->getCost();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc11) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc11);
                {
                    x10_long __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_long>(::x10::lang::Runtime::wrapAtChecked< x10_long >(
                                                                                              __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refPlaces;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->refPlaces);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__6* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__6>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_refPlaces = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        cpls_NodeInstancer__closure__6* this_ = new (storage) cpls_NodeInstancer__closure__6(that_refPlaces);
        return this_;
    }
    
    cpls_NodeInstancer__closure__6(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refPlaces) : refPlaces(refPlaces) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:65";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__6_CLOSURE
#ifndef CPLS_NODEINSTANCER__CLOSURE__7_CLOSURE
#define CPLS_NODEINSTANCER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_NodeInstancer__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_NodeInstancer__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__17425 = ::x10aux::makeStringLit("winner "); strLit__17425; })), place), (__extension__ ({ static ::x10::lang::String* strLit__17426 = ::x10aux::makeStringLit(" final cost "); strLit__17426; }))), mC);
        
    }
    
    // captured environment
    ::x10::lang::Place place;
    x10_long mC;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->place);
        buf.write(this->mC);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__7* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__7>();
        buf.record_reference(storage);
        ::x10::lang::Place that_place = buf.read< ::x10::lang::Place>();
        x10_long that_mC = buf.read<x10_long>();
        cpls_NodeInstancer__closure__7* this_ = new (storage) cpls_NodeInstancer__closure__7(that_place, that_mC);
        return this_;
    }
    
    cpls_NodeInstancer__closure__7(::x10::lang::Place place, x10_long mC) : place(place), mC(mC) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:72";
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
            
            //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(refPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->setStats_(
              targetCost);
        }
        catch (::x10::lang::CheckedThrowable* __exc12) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc12);
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refPlaces;
    x10_long targetCost;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->refPlaces);
        buf.write(this->targetCost);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__8* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__8>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_refPlaces = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        x10_long that_targetCost = buf.read<x10_long>();
        cpls_NodeInstancer__closure__8* this_ = new (storage) cpls_NodeInstancer__closure__8(that_refPlaces, that_targetCost);
        return this_;
    }
    
    cpls_NodeInstancer__closure__8(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refPlaces, x10_long targetCost) : refPlaces(refPlaces), targetCost(targetCost) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10:75-80";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__8_CLOSURE

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
void cpls::NodeInstancer::installSolvers(::cpls::entities::CPLSConfig* configCPLS,
                                         ::cpls::ParamManager* opts) {
    
    //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes =
      ::x10aux::nullCheck(configCPLS)->getConfigNodes();
    
    //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refsToPlaces =
      ::x10::lang::PlaceLocalHandle<void>::make< ::cpls::CPLSNode* >(
        reinterpret_cast< ::x10::lang::PlaceGroup*>(::x10::lang::PlaceGroup::FMGL(WORLD__get)()),
        reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(sizeof(cpls_NodeInstancer__closure__1)))cpls_NodeInstancer__closure__1())));
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    x10_long nodesPerTeam = ::x10aux::nullCheck(configNodes)->FMGL(numElems_2);
    {
        
        //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var0 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__17405 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__1293;
                            for (p__1293 = ::x10::lang::PlaceGroup::FMGL(WORLD__get)()->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(p__1293);
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(p__1293);
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__2)))cpls_NodeInstancer__closure__2(configCPLS, p, refsToPlaces, nodesPerTeam, configNodes, opts))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc2);
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
            catch (::x10::lang::CheckedThrowable* __exc3) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__17406 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc3);
                    {
                        throwable__17405 = formal__17406;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__17405)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__17405))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__17405));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var0);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__17405)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__17405)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__17405));
                }
                
            }
            
        }
    }
    
    //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    x10_int timesPerInstance = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__17423 = ::x10aux::makeStringLit("-b"); strLit__17423; })),
                                 ((x10_int)10));
    
    //#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (timesPerInstance));
             i = ((i) + (((x10_int)1)))) {
            {
                
                //#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10::lang::Runtime::ensureNotInAtomic();
                ::x10::lang::FinishState* x10____var1 = ::x10::lang::Runtime::startFinish();
                {
                    ::x10::lang::CheckedThrowable* throwable__17408 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    try {
                        try {
                            {
                                
                                //#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                                {
                                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1295;
                                    for (p__1295 = ::x10::lang::PlaceGroup::FMGL(WORLD__get)()->iterator();
                                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(p__1295);
                                         ) {
                                        ::x10::lang::Place p =
                                          ::x10::lang::Iterator< ::x10::lang::Place>::next(p__1295);
                                        ::x10::lang::Runtime::runAsync(
                                          p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__3)))cpls_NodeInstancer__closure__3(refsToPlaces, configCPLS))),
                                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                    }
                                }
                                
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc5) {
                            if (true) {
                                ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast< ::x10::lang::CheckedThrowable*>(__exc5);
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
                    catch (::x10::lang::CheckedThrowable* __exc6) {
                        if (true) {
                            ::x10::lang::CheckedThrowable* formal__17409 =
                              static_cast< ::x10::lang::CheckedThrowable*>(__exc6);
                            {
                                throwable__17408 = formal__17409;
                            }
                        } else
                        throw;
                    }
                    if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                                  throwable__17408)))
                    {
                        if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__17408))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__17408));
                        }
                        
                    }
                    if (true) {
                        ::x10::lang::Runtime::stopFinish(
                          x10____var1);
                    }
                    if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                                  throwable__17408)))
                    {
                        if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__17408)))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__17408));
                        }
                        
                    }
                    
                }
            }
            
            //#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::cpls::NodeInstancer::verifyWinner(refsToPlaces,
                                                ::x10aux::nullCheck(configCPLS)->getVerify(),
                                                ::x10aux::nullCheck(configCPLS)->getTargetCost(),
                                                ::x10aux::nullCheck(refsToPlaces->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->getStatsObject()->getExplorerWinner());
            {
                
                //#line 52 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10::lang::Runtime::ensureNotInAtomic();
                ::x10::lang::FinishState* x10____var2 = ::x10::lang::Runtime::startFinish();
                {
                    ::x10::lang::CheckedThrowable* throwable__17411 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    try {
                        try {
                            {
                                {
                                    ::x10::lang::Iterator< ::x10::lang::Place>* p__1297;
                                    for (p__1297 = (reinterpret_cast< ::x10::lang::PlaceGroup*>(::x10::lang::PlaceGroup::FMGL(WORLD__get)()))->iterator();
                                         ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__1297));
                                         ) {
                                        ::x10::lang::Place p =
                                          ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__1297));
                                        {
                                            ::x10::lang::Runtime::runAt(
                                              p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__4)))cpls_NodeInstancer__closure__4(refsToPlaces))),
                                              ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                        }
                                    }
                                }
                                
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc8) {
                            if (true) {
                                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                                  static_cast< ::x10::lang::CheckedThrowable*>(__exc8);
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
                    catch (::x10::lang::CheckedThrowable* __exc9) {
                        if (true) {
                            ::x10::lang::CheckedThrowable* formal__17412 =
                              static_cast< ::x10::lang::CheckedThrowable*>(__exc9);
                            {
                                throwable__17411 = formal__17412;
                            }
                        } else
                        throw;
                    }
                    if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                                  throwable__17411)))
                    {
                        if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__17411))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__17411));
                        }
                        
                    }
                    if (true) {
                        ::x10::lang::Runtime::stopFinish(
                          x10____var2);
                    }
                    if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                                  throwable__17411)))
                    {
                        if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__17411)))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(throwable__17411));
                        }
                        
                    }
                    
                }
            }
        }
    }
    
}

//#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
void cpls::NodeInstancer::verifyWinner(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refPlaces,
                                       x10_boolean verify,
                                       x10_long targetCost,
                                       x10_int explorerWinner) {
    
    //#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    x10_long minCost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::lang::Place bestPlace = ::x10::lang::Place::_make(::x10aux::here);
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    if ((::x10aux::struct_equals(explorerWinner, ((x10_int)-1))))
    {
        
        //#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_NodeInstancer__closure__5)))cpls_NodeInstancer__closure__5())));
        
        //#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Place>* k__1299;
            for (k__1299 = (reinterpret_cast< ::x10::lang::PlaceGroup*>(::x10::lang::PlaceGroup::FMGL(WORLD__get)()))->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(k__1299));
                 ) {
                ::x10::lang::Place k = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(k__1299));
                
                //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                x10_long cCost = ::x10::lang::Runtime::evalAt< x10_long >(
                                   k, reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(cpls_NodeInstancer__closure__6)))cpls_NodeInstancer__closure__6(refPlaces))),
                                   ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                
                //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                if (((cCost) < (minCost))) {
                    
                    //#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                    minCost = cCost;
                    
                    //#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                    bestPlace = k;
                }
                
            }
        }
        
        //#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::lang::Place place = bestPlace;
        x10_long mC = minCost;
        
        //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_NodeInstancer__closure__7)))cpls_NodeInstancer__closure__7(place, mC))));
        
        //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__17427 = ::x10aux::makeStringLit("Termina la ejecucion e ingresa a reportar las estadisticas"); strLit__17427; }))));
        
        //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__17428 = ::x10aux::makeStringLit("winner "); strLit__17428; })), place), (__extension__ ({ static ::x10::lang::String* strLit__17429 = ::x10aux::makeStringLit(" final cost "); strLit__17429; }))), mC)));
        {
            
            //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10::lang::Runtime::runAt(bestPlace, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__8)))cpls_NodeInstancer__closure__8(refPlaces, targetCost))),
                                        ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
    }
    
}

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/NodeInstancer.x10"
::cpls::NodeInstancer* cpls::NodeInstancer::cpls__NodeInstancer____this__cpls__NodeInstancer(
  ) {
    return this;
    
}
void cpls::NodeInstancer::_constructor() {
    ::cpls::NodeInstancer* this__17376 = this;
    ::x10aux::nullCheck(this__17376)->FMGL(masterNode) = (::x10aux::class_cast_unchecked< ::cpls::CPLSNode*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__2>cpls_NodeInstancer__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__2::__apply, &cpls_NodeInstancer__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__2::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__3>cpls_NodeInstancer__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__3::__apply, &cpls_NodeInstancer__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__3::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__4>cpls_NodeInstancer__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__4::__apply, &cpls_NodeInstancer__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_NodeInstancer__closure__5>cpls_NodeInstancer__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__5::__apply, &cpls_NodeInstancer__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_NodeInstancer__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__5::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0<x10_long>::itable<cpls_NodeInstancer__closure__6>cpls_NodeInstancer__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__6::__apply, &cpls_NodeInstancer__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &cpls_NodeInstancer__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__6::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_NodeInstancer__closure__7>cpls_NodeInstancer__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__7::__apply, &cpls_NodeInstancer__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_NodeInstancer__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__7::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_NodeInstancer__closure__8>cpls_NodeInstancer__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_NodeInstancer__closure__8::__apply, &cpls_NodeInstancer__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_NodeInstancer__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_NodeInstancer__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_NodeInstancer__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_NodeInstancer__closure__8::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of NodeInstancer */
/*************************************************/
