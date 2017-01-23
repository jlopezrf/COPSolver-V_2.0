/*************************************************/
/* START of NodeInstancer */
#include <cpls/NodeInstancer.h>

#include <cpls/CPLSNode.h>
#include <cpls/entities/CPLSConfig.h>
#include <cpls/MasterNode.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Rail.h>
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
#include <x10/lang/Unsafe.h>
#include <x10/lang/Int.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Place.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <cpls/problem/ProblemGenericModel.h>
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
        
        //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        return ::cpls::NodeInstancer__NodeFactory::make(((x10_int)1));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:44";
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
        
        //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        return ::cpls::NodeInstancer__NodeFactory::make(((x10_int)0));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:46";
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
            
            //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            if ((::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode() &&
                (::x10aux::struct_equals(p->FMGL(id), ((x10_long)0ll)))))
            {
                
                //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  (__extension__ ({
                      
                      //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__4250 = p->FMGL(id);
                      ::cpls::entities::NodeConfig* ret__4252;
                      
                      //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      ret__4252 = (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                          
                          //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__4672 = i__4250;
                          ((((x10_long)1ll)) + (((i__4672) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                      }))
                      );
                      ret__4252;
                  }))
                  , ((x10_int) (p->FMGL(id))), ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig());
            } else {
                
                //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  (__extension__ ({
                      
                      //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__4256 = p->FMGL(id);
                      ::cpls::entities::NodeConfig* ret__4258;
                      
                      //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      ret__4258 = (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                          
                          //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__4673 = i__4256;
                          ((((x10_long)0ll)) + (((i__4673) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                      }))
                      );
                      ret__4258;
                  }))
                  , ((x10_int) (p->FMGL(id))), ::x10aux::nullCheck(configCPLS)->getTeamsPoolConfig());
            }
            
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:49-55";
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
            
            //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
            {
                
                //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                x10_long indice_i = ((((((x10_long)(((x10_int) (p->FMGL(id)))))) + (((x10_long)1ll)))) / ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
                
                //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                x10_long indice_j = ((((((((x10_long)(((x10_int) (p->FMGL(id)))))) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))))) + (((x10_long)1ll)));
                
                //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  (__extension__ ({
                      
                      //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__4262 = indice_i;
                      x10_long j__4263 = indice_j;
                      ::cpls::entities::NodeConfig* ret__4264;
                      
                      //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      ret__4264 = (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                          
                          //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__4674 = i__4262;
                          x10_long j__4675 = j__4263;
                          ((j__4675) + (((i__4674) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                      }))
                      );
                      ret__4264;
                  }))
                  , ((x10_int) (p->FMGL(id))), ::x10aux::class_cast_unchecked< ::cpls::entities::PoolConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            } else {
                
                //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                x10_long indice_i = ((((x10_long)(((x10_int) (p->FMGL(id)))))) / ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
                
                //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                x10_long indice_j = ((((x10_long)(((x10_int) (p->FMGL(id)))))) % ::x10aux::zeroCheck(((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
                
                //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->initialize(
                  (__extension__ ({
                      
                      //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      x10_long i__4268 = indice_i;
                      x10_long j__4269 = ((indice_j) + (((x10_long)1ll)));
                      ::cpls::entities::NodeConfig* ret__4270;
                      
                      //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                      ret__4270 = (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                          
                          //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__4676 = i__4268;
                          x10_long j__4677 = j__4269;
                          ((j__4677) + (((i__4676) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                      }))
                      );
                      ret__4270;
                  }))
                  , ((x10_int) (p->FMGL(id))), ::x10aux::class_cast_unchecked< ::cpls::entities::PoolConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
        }
        catch (::x10::lang::CheckedThrowable* __exc2) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc2)) {
                ::x10::lang::Error* __lowerer__var__0__ =
                  static_cast< ::x10::lang::Error*>(__exc2);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc2);
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:56-67";
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
            
            //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck((::x10aux::class_cast< ::cpls::HeadNode*>(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())))->setMasterNodeIndicator(
              ::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode());
            
            //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->addPointerComm(
              headNodes);
            
            //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->addPointerComm(
              explorersNodes);
            
            //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->configHeuristic(
              ::x10aux::nullCheck(configCPLS)->getPoblemModel());
        }
        catch (::x10::lang::CheckedThrowable* __exc5) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc5)) {
                ::x10::lang::Error* __lowerer__var__1__ =
                  static_cast< ::x10::lang::Error*>(__exc5);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc5);
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
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->headNodes);
        buf.write(this->configCPLS);
        buf.write(this->explorersNodes);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__5* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__5>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_headNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_explorersNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        cpls_NodeInstancer__closure__5* this_ = new (storage) cpls_NodeInstancer__closure__5(that_headNodes, that_configCPLS, that_explorersNodes);
        return this_;
    }
    
    cpls_NodeInstancer__closure__5(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes, ::cpls::entities::CPLSConfig* configCPLS, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes) : headNodes(headNodes), configCPLS(configCPLS), explorersNodes(explorersNodes) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:79-85";
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
            
            //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->addPointerComm(
              headNodes);
            
            //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->configHeuristic(
              ::x10aux::nullCheck(configCPLS)->getPoblemModel());
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc6)) {
                ::x10::lang::Error* __lowerer__var__1__ =
                  static_cast< ::x10::lang::Error*>(__exc6);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc6);
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
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->explorersNodes);
        buf.write(this->headNodes);
        buf.write(this->configCPLS);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_NodeInstancer__closure__6* storage = ::x10aux::alloc_z<cpls_NodeInstancer__closure__6>();
        buf.record_reference(storage);
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_explorersNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> that_headNodes = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
        ::cpls::entities::CPLSConfig* that_configCPLS = buf.read< ::cpls::entities::CPLSConfig*>();
        cpls_NodeInstancer__closure__6* this_ = new (storage) cpls_NodeInstancer__closure__6(that_explorersNodes, that_headNodes, that_configCPLS);
        return this_;
    }
    
    cpls_NodeInstancer__closure__6(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes, ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes, ::cpls::entities::CPLSConfig* configCPLS) : explorersNodes(explorersNodes), headNodes(headNodes), configCPLS(configCPLS) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:86-90";
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
            
            //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(headNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->start(
              ::x10aux::nullCheck(configCPLS)->getSeed(), ::x10aux::nullCheck(configCPLS)->getTargetCost(),
              ::x10aux::nullCheck(configCPLS)->getStrictLow());
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc9)) {
                ::x10::lang::Error* __lowerer__var__2__ =
                  static_cast< ::x10::lang::Error*>(__exc9);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc9);
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:100-102";
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
            
            //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(explorersNodes->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->start(
              ::x10aux::nullCheck(configCPLS)->getSeed(), ::x10aux::nullCheck(configCPLS)->getTargetCost(),
              ::x10aux::nullCheck(configCPLS)->getStrictLow());
        }
        catch (::x10::lang::CheckedThrowable* __exc10) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc10)) {
                ::x10::lang::Error* __lowerer__var__2__ =
                  static_cast< ::x10::lang::Error*>(__exc10);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc10);
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10:103-105";
    }

};

#endif // CPLS_NODEINSTANCER__CLOSURE__8_CLOSURE

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
void cpls::NodeInstancer::installSolvers(::cpls::entities::CPLSConfig* configCPLS) {
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::cpls::MasterNode* a__504 =  (new (::x10aux::alloc_z< ::cpls::MasterNode>()) ::cpls::MasterNode());
    (a__504)->::cpls::MasterNode::_constructor();
    ::cpls::CPLSNode* masterNode = a__504;
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes = ::x10aux::nullCheck(configCPLS)->getConfigNodes();
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    {
        ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>* conf__547;
        for (conf__547 = ::x10aux::nullCheck(configNodes)->FMGL(raw)->x10::lang::Rail< ::cpls::entities::NodeConfig* >::iterator();
             ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>::hasNext(::x10aux::nullCheck(conf__547));
             ) {
            ::cpls::entities::NodeConfig* conf = ::x10::lang::Iterator< ::cpls::entities::NodeConfig*>::next(::x10aux::nullCheck(conf__547));
            
            //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
            ::x10aux::nullCheck(conf)->setOutTeamTime(::x10aux::nullCheck(configCPLS)->getOutTeamTime());
        }
    }
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceGroup* headersGroup = (__extension__ ({
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/lang/PlaceGroup.x10"
        x10_long numPlaces__1888 = ::x10aux::nullCheck(configNodes)->FMGL(numElems_1);
        (__extension__ ({
            ::x10::lang::PlaceGroup__SimplePlaceGroup* alloc__1889 =
               (new (::x10aux::alloc_z< ::x10::lang::PlaceGroup__SimplePlaceGroup>()) ::x10::lang::PlaceGroup__SimplePlaceGroup());
            (alloc__1889)->::x10::lang::PlaceGroup__SimplePlaceGroup::_constructor(
              numPlaces__1888);
            alloc__1889;
        }))
        ;
    }))
    ;
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__4734 = ::x10aux::makeStringLit("Numero de Teams: "); strLit__4734; })), ::x10aux::nullCheck(headersGroup)->numPlaces())));
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    x10_long numExplorers = ((::x10aux::nullCheck(configNodes)->FMGL(numElems_1)) * (((::x10aux::nullCheck(configNodes)->FMGL(numElems_2)) - (((x10_long)1ll)))));
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
    {
        
        //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        numExplorers = ((numExplorers) - (((x10_long)1ll)));
        
        //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        masterNode = ::cpls::NodeInstancer__NodeFactory::make(
                       ((x10_int)2));
        
        //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10aux::nullCheck(masterNode)->initialize((__extension__ ({
                                                        
                                                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        ::cpls::entities::NodeConfig* ret__3216;
                                                        
                                                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                        ret__3216 =
                                                          (::x10aux::nullCheck(configNodes)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                            ((((x10_long)0ll)) + (((((x10_long)0ll)) * (::x10aux::nullCheck(configNodes)->FMGL(numElems_2)))));
                                                        }))
                                                        );
                                                        ret__3216;
                                                    }))
                                                    , ((x10_int) (((x10_long)0ll))),
                                                    ::x10aux::nullCheck(configCPLS)->getCPLSPoolConfig());
    }
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceGroup* explorersGroup = (__extension__ ({
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/lang/PlaceGroup.x10"
        x10_long numPlaces__3905 = numExplorers;
        (__extension__ ({
            ::x10::lang::PlaceGroup__SimplePlaceGroup* alloc__3906 =
               (new (::x10aux::alloc_z< ::x10::lang::PlaceGroup__SimplePlaceGroup>()) ::x10::lang::PlaceGroup__SimplePlaceGroup());
            (alloc__3906)->::x10::lang::PlaceGroup__SimplePlaceGroup::_constructor(
              numPlaces__3905);
            alloc__3906;
        }))
        ;
    }))
    ;
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> headNodes =
      ::x10::lang::PlaceLocalHandle<void>::make< ::cpls::CPLSNode* >(
        headersGroup, reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(sizeof(cpls_NodeInstancer__closure__1)))cpls_NodeInstancer__closure__1())));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> explorersNodes =
      ::x10::lang::PlaceLocalHandle<void>::make< ::cpls::CPLSNode* >(
        explorersGroup, reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::CPLSNode*> >(sizeof(cpls_NodeInstancer__closure__2)))cpls_NodeInstancer__closure__2())));
    {
        
        //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var0 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__4716 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__549;
                            for (p__549 = ::x10aux::nullCheck(headersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__549));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__549));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__3)))cpls_NodeInstancer__closure__3(configCPLS, p, headNodes, configNodes))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                        //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__551;
                            for (p__551 = ::x10aux::nullCheck(explorersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__551));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__551));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__4)))cpls_NodeInstancer__closure__4(configCPLS, p, configNodes, explorersNodes))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc3);
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
            catch (::x10::lang::CheckedThrowable* __exc4) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__4717 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc4);
                    {
                        throwable__4716 = formal__4717;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__4716)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__4716))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__4716));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var0);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__4716)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__4716)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__4716));
                }
                
            }
            
        }
    }
    {
        
        //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var1 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__4719 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
                        {
                            
                            //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->addPointerComm(
                              headNodes);
                            
                            //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->addPointerComm(
                              explorersNodes);
                            
                            //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->configHeuristic(
                              ::x10aux::nullCheck(configCPLS)->getPoblemModel());
                        }
                        
                        //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__553;
                            for (p__553 = ::x10aux::nullCheck(headersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__553));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__553));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__5)))cpls_NodeInstancer__closure__5(headNodes, configCPLS, explorersNodes))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__555;
                            for (p__555 = ::x10aux::nullCheck(explorersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__555));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__555));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__6)))cpls_NodeInstancer__closure__6(explorersNodes, headNodes, configCPLS))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc7);
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
            catch (::x10::lang::CheckedThrowable* __exc8) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__4720 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc8);
                    {
                        throwable__4719 = formal__4720;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__4719)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__4719))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__4719));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var1);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__4719)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__4719)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__4719));
                }
                
            }
            
        }
    }
    {
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        ::x10::lang::Runtime::ensureNotInAtomic();
        ::x10::lang::FinishState* x10____var2 = ::x10::lang::Runtime::startFinish();
        {
            ::x10::lang::CheckedThrowable* throwable__4722 =
              ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            try {
                try {
                    {
                        
                        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        if (::x10aux::nullCheck(configCPLS)->getIsThereAMasterNode())
                        {
                            
                            //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                            ::x10aux::nullCheck(masterNode)->start(
                              ::x10aux::nullCheck(configCPLS)->getSeed(),
                              ::x10aux::nullCheck(configCPLS)->getTargetCost(),
                              ::x10aux::nullCheck(configCPLS)->getStrictLow());
                        }
                        
                        //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__557;
                            for (p__557 = ::x10aux::nullCheck(headersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__557));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__557));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__7)))cpls_NodeInstancer__closure__7(headNodes, configCPLS))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                        //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
                        {
                            ::x10::lang::Iterator< ::x10::lang::Place>* p__559;
                            for (p__559 = ::x10aux::nullCheck(explorersGroup)->iterator();
                                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__559));
                                 ) {
                                ::x10::lang::Place p = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__559));
                                ::x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_NodeInstancer__closure__8)))cpls_NodeInstancer__closure__8(explorersNodes, configCPLS))),
                                  ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc11) {
                    if (true) {
                        ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                          static_cast< ::x10::lang::CheckedThrowable*>(__exc11);
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
            catch (::x10::lang::CheckedThrowable* __exc12) {
                if (true) {
                    ::x10::lang::CheckedThrowable* formal__4723 =
                      static_cast< ::x10::lang::CheckedThrowable*>(__exc12);
                    {
                        throwable__4722 = formal__4723;
                    }
                } else
                throw;
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__4722)))
            {
                if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__4722))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__4722));
                }
                
            }
            if (true) {
                ::x10::lang::Runtime::stopFinish(x10____var2);
            }
            if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                          throwable__4722)))
            {
                if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__4722)))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(throwable__4722));
                }
                
            }
            
        }
    }
}

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
::cpls::NodeInstancer* cpls::NodeInstancer::cpls__NodeInstancer____this__cpls__NodeInstancer(
  ) {
    return this;
    
}
void cpls::NodeInstancer::_constructor() {
    ::cpls::NodeInstancer* this__4683 = this;
    ::x10aux::nullCheck(this__4683)->FMGL(masterNode) = (::x10aux::class_cast_unchecked< ::cpls::CPLSNode*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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

//#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
::cpls::CPLSNode* cpls::NodeInstancer__NodeFactory::make(x10_int nodeRole) {
    
    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
    switch (nodeRole) {
        
        //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        case ((x10_int)0): ;
        {
            {
                ::cpls::ExplorerNode* alloc__505 =  (new (::x10aux::alloc_z< ::cpls::ExplorerNode>()) ::cpls::ExplorerNode());
                (alloc__505)->::cpls::ExplorerNode::_constructor();
                return alloc__505;
                
            }
        }
        //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        case ((x10_int)1): ;
        {
            {
                ::cpls::HeadNode* alloc__506 =  (new (::x10aux::alloc_z< ::cpls::HeadNode>()) ::cpls::HeadNode());
                (alloc__506)->::cpls::HeadNode::_constructor();
                return alloc__506;
                
            }
        }
        //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::MasterNode* alloc__507 =  (new (::x10aux::alloc_z< ::cpls::MasterNode>()) ::cpls::MasterNode());
                (alloc__507)->::cpls::MasterNode::_constructor();
                return alloc__507;
                
            }
        }
        //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
        default: ;
        {
            {
                ::cpls::ExplorerNode* alloc__508 =  (new (::x10aux::alloc_z< ::cpls::ExplorerNode>()) ::cpls::ExplorerNode());
                (alloc__508)->::cpls::ExplorerNode::_constructor();
                return alloc__508;
                
            }
        }
    }
}

//#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/NodeInstancer.x10"
::x10::lang::String* cpls::NodeInstancer__NodeFactory::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::NodeInstancer__NodeFactory::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__4741 = ::x10aux::makeStringLit("struct cpls.NodeInstancer.NodeFactory"); strLit__4741; }));
    
}
x10_boolean cpls::NodeInstancer__NodeFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::NodeInstancer__NodeFactory>(other)))
    {
        return false;
        
    }
    ::cpls::NodeInstancer__NodeFactory this__4678 = (*this);
    ::cpls::NodeInstancer__NodeFactory other__4679 = ::x10aux::class_cast< ::cpls::NodeInstancer__NodeFactory>(other);
    return true;
    
}
x10_boolean cpls::NodeInstancer__NodeFactory::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::NodeInstancer__NodeFactory>(other)))
    {
        return false;
        
    }
    ::cpls::NodeInstancer__NodeFactory this__4680 = (*this);
    ::cpls::NodeInstancer__NodeFactory other__4681 = ::x10aux::class_cast< ::cpls::NodeInstancer__NodeFactory>(other);
    return true;
    
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
