/*************************************************/
/* START of CPLSNode */
#include <cpls/CPLSNode.h>

#include <x10/lang/Long.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <cpls/entities/State.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/measurements/GlobalStats.h>
#include <cpls/SmartPool.h>
#include <x10/util/concurrent/AtomicBoolean.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/util/Random.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/HeuristicFactory.h>
#include <cpls/CPLSOptionsEnum__NodeRoles.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/System.h>
#include <x10/lang/Error.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Double.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/PlaceGroup.h>
#include <cpls/util/Maybe.h>
#include <x10/util/RailUtils.h>
#include <cpls/util/Utils.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Zero.h>
#ifndef CPLS_CPLSNODE__CLOSURE__1_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__27266 = ::x10aux::makeStringLit("Solver is not yet started. Kill is not set"); strLit__27266; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__1* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__1>();
        buf.record_reference(storage);
        cpls_CPLSNode__closure__1* this_ = new (storage) cpls_CPLSNode__closure__1();
        return this_;
    }
    
    cpls_CPLSNode__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:86";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__1_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__2_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            ::x10::lang::System::sleep(::x10aux::nullCheck(saved_this->FMGL(nodeConfig))->getIniDelay());
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            saved_this->interTeamActivity();
        }
        catch (::x10::lang::CheckedThrowable* __exc6) {
            if (::x10aux::instanceof< ::x10::lang::Error*>(__exc6)) {
                ::x10::lang::Error* __lowerer__var__0__ = static_cast< ::x10::lang::Error*>(__exc6);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc6);
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::Exception::ensureException(
                                                                   __lowerer__var__1__)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__2* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__2>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__2* this_ = new (storage) cpls_CPLSNode__closure__2(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__2(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:101-104";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__2_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__3_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<cpls_CPLSNode__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply() {
        try {
            return saved_this->announceWinner(home);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc7) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc7);
                {
                    x10_boolean __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_boolean>(::x10::lang::Runtime::wrapAtChecked< x10_boolean >(
                                                                                                    __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long home;
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->home);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__3* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__3>();
        buf.record_reference(storage);
        x10_long that_home = buf.read<x10_long>();
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__3* this_ = new (storage) cpls_CPLSNode__closure__3(that_home, that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__3(x10_long home, ::cpls::CPLSNode* saved_this) : home(home), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:120";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__3_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__4_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_int>::itable<cpls_CPLSNode__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply() {
        try {
            return ::x10aux::nullCheck(saved_this->FMGL(pointersComunication)->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->getGroupReset();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc13) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc13);
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__4* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__4>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__4* this_ = new (storage) cpls_CPLSNode__closure__4(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__4(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:169";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__4_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__5_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            ::x10aux::nullCheck(saved_this->FMGL(pointersComunication)->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->setStats(
              c);
        }
        catch (::x10::lang::CheckedThrowable* __exc14) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc14);
                {
                    x10_int __lowerer__var__3__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__2__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    ::cpls::measurements::GlobalStats* c;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->c);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__5* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__5>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        ::cpls::measurements::GlobalStats* that_c = buf.read< ::cpls::measurements::GlobalStats*>();
        cpls_CPLSNode__closure__5* this_ = new (storage) cpls_CPLSNode__closure__5(that_saved_this, that_c);
        return this_;
    }
    
    cpls_CPLSNode__closure__5(::cpls::CPLSNode* saved_this, ::cpls::measurements::GlobalStats* c) : saved_this(saved_this), c(c) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:181";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__5_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__6_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            saved_this->kill();
        }
        catch (::x10::lang::CheckedThrowable* __exc16) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc16);
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__6* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__6>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__6* this_ = new (storage) cpls_CPLSNode__closure__6(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__6(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:191";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__6_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__7_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27276 = ::x10aux::makeStringLit(" kill "); strLit__27276; })), saved_this->FMGL(interTeamKill));
        
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__7* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__7>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__7* this_ = new (storage) cpls_CPLSNode__closure__7(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__7(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:199";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__7_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__8_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27278 = ::x10aux::makeStringLit(" interTeamActivity - run : woken up (every "); strLit__27278; })), ::x10aux::nullCheck(saved_this->FMGL(nodeConfig))->getInterTeamCommTime()), (__extension__ ({ static ::x10::lang::String* strLit__27279 = ::x10aux::makeStringLit(" ms)"); strLit__27279; })));
        
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__8* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__8>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__8* this_ = new (storage) cpls_CPLSNode__closure__8(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__8(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:210";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__8_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__9_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__9 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_CPLSNode__closure__9> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Maybe< ::cpls::entities::State>* __apply() {
        try {
            return ::x10aux::nullCheck(::x10aux::nullCheck(saved_this->FMGL(pointersComunication)->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->FMGL(teamPool))->getBestConf();
            
        }
        catch (::x10::lang::CheckedThrowable* __exc19) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc19);
                {
                    ::cpls::util::Maybe< ::cpls::entities::State>* __lowerer__var__1__ =
                      ::x10::lang::Runtime::wrapAtChecked< ::cpls::util::Maybe< ::cpls::entities::State>* >(
                        __lowerer__var__0__);
                    return __lowerer__var__1__;
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__9* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__9>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__9* this_ = new (storage) cpls_CPLSNode__closure__9(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__9(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:224";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__9_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__10_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__10> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            ::x10aux::nullCheck(saved_this->FMGL(pointersComunication)->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->incGroupReset();
        }
        catch (::x10::lang::CheckedThrowable* __exc20) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc20);
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__10* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__10>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__10* this_ = new (storage) cpls_CPLSNode__closure__10(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__10(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:281";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__10_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__11_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__11> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27294 = ::x10aux::makeStringLit("reset team "); strLit__27294; })), ttr);
        
    }
    
    // captured environment
    x10_long ttr;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->ttr);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__11* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__11>();
        buf.record_reference(storage);
        x10_long that_ttr = buf.read<x10_long>();
        cpls_CPLSNode__closure__11* this_ = new (storage) cpls_CPLSNode__closure__11(that_ttr);
        return this_;
    }
    
    cpls_CPLSNode__closure__11(x10_long ttr) : ttr(ttr) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:282";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__11_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__12_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27295 = ::x10aux::makeStringLit("MW - interTeamComm : send signal force Restart on place "); strLit__27295; })), vali);
        
    }
    
    // captured environment
    x10_long vali;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->vali);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__12* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__12>();
        buf.record_reference(storage);
        x10_long that_vali = buf.read<x10_long>();
        cpls_CPLSNode__closure__12* this_ = new (storage) cpls_CPLSNode__closure__12(that_vali);
        return this_;
    }
    
    cpls_CPLSNode__closure__12(x10_long vali) : vali(vali) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:286";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__12_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__13_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            ::x10aux::nullCheck(saved_this->FMGL(pointersComunication)->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->diversify();
        }
        catch (::x10::lang::CheckedThrowable* __exc21) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc21);
                {
                    x10_int __lowerer__var__3__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__2__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__13* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__13>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__13* this_ = new (storage) cpls_CPLSNode__closure__13(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__13(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:288";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__13_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__14_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            ::x10aux::nullCheck(::x10aux::nullCheck(saved_this->FMGL(pointersComunication)->x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*>::__apply())->FMGL(teamPool))->clear();
        }
        catch (::x10::lang::CheckedThrowable* __exc22) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__2__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc22);
                {
                    x10_int __lowerer__var__3__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__2__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__14* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__14>();
        buf.record_reference(storage);
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__14* this_ = new (storage) cpls_CPLSNode__closure__14(that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__14(::cpls::CPLSNode* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:290";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__14_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__15_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_CPLSNode__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int>::itable<cpls_CPLSNode__closure__15> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(::cpls::entities::State a, ::cpls::entities::State b) {
        
        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        return ((x10_int) (((a->FMGL(cost)) - (b->FMGL(cost)))));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__15* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__15>();
        buf.record_reference(storage);
        cpls_CPLSNode__closure__15* this_ = new (storage) cpls_CPLSNode__closure__15();
        return this_;
    }
    
    cpls_CPLSNode__closure__15() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10:141";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__15_CLOSURE

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
/*********Variables para la configuración del nodo**********/

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
/*********Variables para el reporte de estadísticas*********/

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
/***Variables útiles para la comunicación entre los nodos***/

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
/***********************************************************/

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::_constructor() {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->cpls::CPLSNode::__fieldInitializers_cpls_CPLSNode();
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(random) = ::x10::util::Random::_make();
}
::cpls::CPLSNode* cpls::CPLSNode::_make() {
    ::cpls::CPLSNode* this_ = new (::x10aux::alloc_z< ::cpls::CPLSNode>()) ::cpls::CPLSNode();
    this_->_constructor();
    return this_;
}



//#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                ::cpls::entities::PoolConfig* cplsPoolConfig,
                                x10_long problemSize, x10_long inSeed,
                                x10_long maxIter) {
    
    //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                    ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setMaxIters(
      maxIter);
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setSeed(inSeed);
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(bestSolHere) = ::x10::lang::Rail< x10_int >::_make(problemSize,
                                                                  ((x10_int)0));
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(random))->x10::util::Random::setSeed(
      inSeed);
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(problemSize) = problemSize;
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(nodeConfig) = config;
    
    //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(confArray) = ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(::x10aux::nullCheck(config)->getNumberOfTeams())),
                                                                                ::cpls::entities::State::_make(problemSize,
                                                                                                               ((x10_long)(((x10_int)-1))),
                                                                                                               ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                                                                               ((x10_int)-1),
                                                                                                               ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))));
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(config)->getRol(),
                                 ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)())))
    {
        
        //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        this->FMGL(cplsPool) = ::cpls::SmartPool::_make(cplsPoolConfig);
    } else 
    //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if ((::x10aux::struct_equals(::x10aux::nullCheck(config)->getRol(),
                                 ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__get)())))
    {
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        this->FMGL(teamPool) = ::cpls::SmartPool::_make(cplsPoolConfig);
    }
    
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::setHeuristicSolver(::cpls::solver::HeuristicSolver* hs) {
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(heuristicSolver) = hs;
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::setPointersCommunication(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> pointersComunication) {
    
    //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(pointersComunication) = pointersComunication;
}

//#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                     ::cpls::ParamManager* opts) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->configHeuristic(
      problemModel, opts);
}

//#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::kill() {
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if ((!::x10aux::struct_equals(this->FMGL(heuristicSolver),
                                  reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::x10aux::nullCheck(this->FMGL(heuristicSolver))->kill();
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        this->FMGL(interTeamKill) = true;
    } else {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_CPLSNode__closure__1)))cpls_CPLSNode__closure__1())));
    }
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::start(x10_long seedIn, x10_long targetCost,
                           x10_boolean strictLow) {
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(stats)->setTarget(targetCost);
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(sampleAccStats)->setTarget(targetCost);
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(genAccStats)->setTarget(targetCost);
    
    //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(random))->x10::util::Random::setSeed(
      seedIn);
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_long cost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if (((((::x10aux::nullCheck(this->FMGL(nodeConfig))->getInterTeamCommTime()) > (((x10_long)0ll))) &&
        ((::x10aux::nullCheck(this->FMGL(nodeConfig))->getNodesPerTeam()) > (((x10_int)1)))) &&
        (::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(nodeConfig))->getRol(),
                                 ::cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)()))))
    {
        
        //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::x10::lang::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__2)))cpls_CPLSNode__closure__2(this))));
    }
    
    //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setSeed(
      ::x10aux::nullCheck(this->FMGL(random))->nextLong());
    
    //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(time) = (-(::x10::lang::System::nanoTime()));
    
    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    cost = ::x10aux::nullCheck(this->FMGL(heuristicSolver))->solve(
             targetCost, strictLow);
    
    //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(time) = ((this->FMGL(time)) + (::x10::lang::System::nanoTime()));
    
    //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(interTeamKill) = true;
    
    //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if (((strictLow && ((cost) < (targetCost))) || (!(strictLow) &&
        ((cost) <= (targetCost))))) {
        
        //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        x10_long home = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        x10_boolean winner = ::x10::lang::Runtime::evalAt< x10_boolean >(
                               ::x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                               reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(cpls_CPLSNode__closure__3)))cpls_CPLSNode__closure__3(home, this))),
                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        this->FMGL(bcost) = cost;
        
        //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        if (winner) {
            
            //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            this->setStats_(targetCost);
            
            //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            if (::x10aux::nullCheck(this->FMGL(nodeConfig))->getVerify())
            {
                
                //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10aux::nullCheck(this->FMGL(heuristicSolver))->displaySolution();
                
                //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27267 = ::x10aux::makeStringLit(", Solution is "); strLit__27267; })), ::x10aux::nullCheck(this->FMGL(heuristicSolver))->verify()
                    ? ((__extension__ ({ static ::x10::lang::String* strLit__27268 = ::x10aux::makeStringLit("perfect !!!"); strLit__27268; })))
                    : ((__extension__ ({ static ::x10::lang::String* strLit__27269 = ::x10aux::makeStringLit("not perfect "); strLit__27269; }))))));
            }
            
        }
        
    } else {
        
        //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        this->FMGL(solString) = ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__27270 = ::x10aux::makeStringLit("Solution "); strLit__27270; })), ::x10::lang::Place::_make(::x10aux::here)), (__extension__ ({ static ::x10::lang::String* strLit__27271 = ::x10aux::makeStringLit(" is "); strLit__27271; }))), ::x10aux::nullCheck(this->FMGL(heuristicSolver))->verify()
          ? ((__extension__ ({ static ::x10::lang::String* strLit__27272 = ::x10aux::makeStringLit("perfect !!!"); strLit__27272; })))
          : ((__extension__ ({ static ::x10::lang::String* strLit__27273 = ::x10aux::makeStringLit("not perfect, maybe wrong ..."); strLit__27273; }))));
        
        //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        x10_long sz = ::x10aux::nullCheck(this->FMGL(heuristicSolver))->getSizeProblem();
        
        //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::x10::lang::Rail< x10_int >* src__18967 = ::x10aux::nullCheck(this->FMGL(heuristicSolver))->getBestConfiguration();
        ::x10::lang::Rail< x10_int >* dst__18968 = (__extension__ ({
            ::x10::lang::Rail< x10_int >* t__18969 = this->FMGL(bestSolHere);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__18969)->FMGL(size)),
                                           sz)))) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__27274 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__27274; })))));
            }
            t__18969;
        }))
        ;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(src__18967)->FMGL(size)),
                                       (x10_long)(::x10aux::nullCheck(dst__18968)->FMGL(size))))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__27275 = ::x10aux::makeStringLit("!(src$18683.size == dst$18684.size)"); strLit__27275; })))));
        }
        ::x10::lang::Rail< void >::copy< x10_int >(src__18967,
                                                   dst__18968);
    }
    
}

//#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"

//#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::setStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(stats)->setStats(c);
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->accStats(this->FMGL(stats));
}

//#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::accStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(genAccStats)->accStats(c);
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(sampleAccStats)->accStats(c);
}

//#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
x10_int cpls::CPLSNode::getGroupReset() {
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    return this->FMGL(cGroupReset);
    
}

//#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
x10_long cpls::CPLSNode::getCost() {
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    return ::x10aux::nullCheck(this->FMGL(heuristicSolver))->getBestCost();
    
}

//#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::setStats_(x10_long targetCost) {
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_long winPlace = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_double time = ((((x10_double) (this->FMGL(time)))) / (1.0E9));
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::cpls::measurements::GlobalStats* c = ::cpls::measurements::GlobalStats::_make();
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->reportStats(
      c);
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_long head = ((::x10::lang::Place::_make(::x10aux::here)->FMGL(id)) % ::x10aux::zeroCheck(((x10_long)(::x10aux::nullCheck(this->FMGL(nodeConfig))->getNumberOfTeams()))));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_int gR = ::x10::lang::Runtime::evalAt< x10_int >(
                   ::x10::lang::Place::_make(head), reinterpret_cast< ::x10::lang::Fun_0_0<x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_int> >(sizeof(cpls_CPLSNode__closure__4)))cpls_CPLSNode__closure__4(this))),
                   ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_int gReset = ((c->getForceRestart()) > (gR)) ? (c->getForceRestart())
      : (gR);
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_long fft = ((c->getCost()) - (targetCost));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    c->setTime(time);
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    c->setTeam(((x10_int) (winPlace)));
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    c->setGroupR(gReset);
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    c->setFFTarget(((x10_int) (fft)));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    c->setExplorer(((x10_int)0));
    {
        
        //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::x10::lang::Runtime::runAt(::x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                    reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__5)))cpls_CPLSNode__closure__5(this, c))),
                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
x10_boolean cpls::CPLSNode::announceWinner(x10_long p) {
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_boolean result = this->FMGL(winnerLatch)->x10::util::concurrent::AtomicBoolean::compareAndSet(
                           false, true);
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if (result) {
        
        //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Place>* k__18966;
            for (k__18966 = ::x10aux::nullCheck(::x10::lang::Place::places())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(k__18966));
                 ) {
                ::x10::lang::Place k = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(k__18966));
                
                //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                if ((!::x10aux::struct_equals(p, k->FMGL(id))))
                {
                    {
                        
                        //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                        ::x10::lang::Runtime::runAt(k, reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__6)))cpls_CPLSNode__closure__6(this))),
                                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                
            }
        }
        
    }
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    return result;
    
}

//#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::interTeamActivity() {
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    while (!(this->FMGL(interTeamKill))) {
        
        //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_CPLSNode__closure__7)))cpls_CPLSNode__closure__7(this))));
        
        //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        if (!(::x10::lang::System::sleep(::x10aux::nullCheck(this->FMGL(nodeConfig))->getInterTeamCommTime())))
        {
            
            //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (__extension__ ({ static ::x10::lang::String* strLit__27277 = ::x10aux::makeStringLit(" interTeamActivity error: cannot execute sleep"); strLit__27277; })))));
            
            //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            continue;
        }
        
        //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_CPLSNode__closure__8)))cpls_CPLSNode__closure__8(this))));
        
        //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        this->interTeamComm();
        
        //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::x10::lang::Runtime::probe();
    }
    
}

//#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::interTeamComm() {
    
    //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_long teamToRest = ((x10_long)-1ll);
    
    //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    {
        x10_int head;
        for (head = ((x10_int)0); ((head) < (::x10aux::nullCheck(this->FMGL(nodeConfig))->getNumberOfTeams()));
             head = ((head) + (((x10_int)1)))) {
            
            //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            x10_int h = head;
            
            //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            ::cpls::util::Maybe< ::cpls::entities::State>* conf =
              ::x10::lang::Runtime::evalAt< ::cpls::util::Maybe< ::cpls::entities::State>* >(
                ::x10::lang::Place::_make(((x10_long)(h))),
                reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_CPLSNode__closure__9)))cpls_CPLSNode__closure__9(this))),
                ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
            //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            if ((::x10aux::struct_equals(conf, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                
                //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__set(
                  ((x10_long)(h)), ::cpls::entities::State::_make(this->FMGL(problemSize),
                                                                  ((x10_long)-1ll),
                                                                  ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                                  h,
                                                                  ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))));
            } else {
                
                //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__set(
                  ((x10_long)(h)), (__extension__ ({
                      x10_long sz__18780 = this->FMGL(problemSize);
                      x10_long cost__18781 = ::x10aux::nullCheck(conf)->__apply()->FMGL(cost);
                      ::x10::lang::Rail< x10_int >* vector__18782 =
                        ::x10aux::nullCheck(conf)->__apply()->FMGL(vector);
                      x10_int place__18783 = h;
                      ::x10::lang::Rail< x10_int >* solverState__18784 =
                        ::x10aux::nullCheck(conf)->__apply()->FMGL(solverState);
                      if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(vector__18782)->FMGL(size)),
                                                      sz__18780)) &&
                          (::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(solverState__18784)->FMGL(size)),
                                                   ((x10_long)3ll))))))
                      {
                          ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__27280 = ::x10aux::makeStringLit("!(vector$18782.size == sz$18780 && solverState$18784.size == 3L)"); strLit__27280; })))));
                      }
                      ::cpls::entities::State::_make(sz__18780,
                                                     cost__18781,
                                                     vector__18782,
                                                     place__18783,
                                                     solverState__18784);
                  }))
                  );
            }
            
        }
    }
    
    //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_int nEqTeams = ((x10_int)0);
    
    //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10::lang::Rail< x10_long >* eqTeams = ::x10::lang::Rail< x10_long >::_make(((x10_long)(::x10aux::nullCheck(this->FMGL(nodeConfig))->getNumberOfTeams())),
                                                                                  ((x10_long)-1ll));
    
    //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10::util::RailUtils::sort< ::cpls::entities::State >(
      this->FMGL(confArray), this->FMGL(cmp));
    
    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_int c;
    
    //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    {
        for (c = ((x10_int)0); ((((x10_long)(c))) < (((((x10_long)(::x10aux::nullCheck(this->FMGL(nodeConfig))->getNumberOfTeams()))) - (((x10_long)1ll)))));
             c = ((c) + (((x10_int)1)))) {
            
            //#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            x10_long sz = this->FMGL(problemSize);
            
            //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            if ((((!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                              ((x10_long)(c)))->FMGL(cost),
                                            ((x10_long)-1ll))) &&
                (::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                           ((x10_long)(c)))->FMGL(cost),
                                         ::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                           ((((x10_long)(c))) + (((x10_long)1ll))))->FMGL(cost)))) &&
                (::x10aux::struct_equals((__extension__ ({
                                             
                                             //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                                             ::cpls::problem::ProblemGenericModel* t__18825 =
                                               ::x10aux::nullCheck(this->FMGL(heuristicSolver))->getProblemModel();
                                             ::x10::lang::Rail< x10_int >* conf1__18826 =
                                               (__extension__ ({
                                                 ::x10::lang::Rail< x10_int >* t__18815 =
                                                   ::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                     ((x10_long)(c)))->FMGL(vector);
                                                 if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__18815)->FMGL(size)),
                                                                                sz))))
                                                 {
                                                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__27285 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__27285; })))));
                                                 }
                                                 t__18815;
                                             }))
                                             ;
                                             ::x10::lang::Rail< x10_int >* conf2__18827 =
                                               (__extension__ ({
                                                 ::x10::lang::Rail< x10_int >* t__18823 =
                                                   ::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                     ((((x10_long)(c))) + (((x10_long)1ll))))->FMGL(vector);
                                                 if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__18823)->FMGL(size)),
                                                                                sz))))
                                                 {
                                                     ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__27287 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__27287; })))));
                                                 }
                                                 t__18823;
                                             }))
                                             ;
                                             if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf1__18826)->FMGL(size)),
                                                                             ::x10aux::nullCheck(t__18825)->FMGL(size))) &&
                                                 (::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf2__18827)->FMGL(size)),
                                                                          ::x10aux::nullCheck(t__18825)->FMGL(size))))))
                                             {
                                                 ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__27288 = ::x10aux::makeStringLit("!(conf1$18826.size == t$18825.size && conf2$18827.size == t$18825.size)"); strLit__27288; })))));
                                             }
                                             ::x10aux::nullCheck(t__18825)->distance(
                                               conf1__18826,
                                               conf2__18827);
                                         }))
                                         , 0.0)))) {
                
                //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10aux::nullCheck(eqTeams)->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)((__extension__ ({
                      x10_int pre__18831 = nEqTeams;
                      nEqTeams = ((nEqTeams) + (((x10_int)1)));
                      pre__18831;
                  }))
                  )), ((x10_long)(::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                    ((((x10_long)(c))) + (((x10_long)1ll))))->FMGL(place))));
            } else 
            //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            if ((((nEqTeams) > (((x10_int)0))) && (!::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                              ((x10_long)(c)))->FMGL(cost),
                                                                            ::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                              ((((x10_long)(c))) + (((x10_long)1ll))))->FMGL(cost)))))
            {
                
                //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                break;
            }
            
        }
    }
    
    //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    x10_long worstTeam = ((x10_long)(::x10aux::nullCheck(this->FMGL(confArray))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                       ((((x10_long)(::x10aux::nullCheck(this->FMGL(nodeConfig))->getNumberOfTeams()))) - (((x10_long)1ll))))->FMGL(place)));
    
    //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    if (((::x10aux::struct_equals(nEqTeams, ((x10_int)0))) &&
        (!::x10aux::struct_equals(worstTeam, ((x10_long)-1ll)))))
    {
        
        //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
        ::x10aux::nullCheck(eqTeams)->x10::lang::Rail< x10_long >::__set(
          ((x10_long)((__extension__ ({
              x10_int pre__18862 = nEqTeams;
              nEqTeams = ((nEqTeams) + (((x10_int)1)));
              pre__18862;
          }))
          )), worstTeam);
    }
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    {
        x10_long rp;
        for (rp = ((x10_long)0ll); ((rp) < (((x10_long)(nEqTeams))));
             rp = ((rp) + (((x10_long)1ll)))) {
            
            //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            teamToRest = ::x10aux::nullCheck(eqTeams)->x10::lang::Rail< x10_long >::__apply(
                           rp);
            
            //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            x10_long ttr = teamToRest;
            {
                
                //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10::lang::Runtime::runAt(::x10::lang::Place::_make(teamToRest),
                                            reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__10)))cpls_CPLSNode__closure__10(this))),
                                            ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
            
            //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_CPLSNode__closure__11)))cpls_CPLSNode__closure__11(ttr))));
            
            //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
            {
                x10_long i;
                for (i = teamToRest; ((i) < (((x10_long)::x10aux::num_hosts)));
                     i = ((i) + (((x10_long)(::x10aux::nullCheck(this->FMGL(nodeConfig))->getNumberOfTeams())))))
                {
                    
                    //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                    x10_long vali = i;
                    
                    //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_CPLSNode__closure__12)))cpls_CPLSNode__closure__12(vali))));
                    
                    //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                    if (((::x10aux::nullCheck(this->FMGL(random))->nextDouble()) <= (::x10aux::nullCheck(this->FMGL(nodeConfig))->getAffectedPer())))
                    {
                     
                    }
                    {
                        
                        //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                        ::x10::lang::Runtime::runAt(::x10::lang::Place::_make(i),
                                                    reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__13)))cpls_CPLSNode__closure__13(this))),
                                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
            }
            {
                
                //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
                ::x10::lang::Runtime::runAt(::x10::lang::Place::_make(teamToRest),
                                            reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__14)))cpls_CPLSNode__closure__14(this))),
                                            ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            }
        }
    }
    
}

//#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::clear() {
    
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(winnerLatch)->x10::util::concurrent::AtomicBoolean::set(
      false);
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(teamPool))->clear();
    
    //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(cplsPool))->clear();
    
    //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(stats)->clear();
    
    //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->clear();
    
    //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(cGroupReset) = ((x10_int)0);
}

//#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::verify_() {
    
    //#line 305 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__27296 = ::x10aux::makeStringLit("Solution"); strLit__27296; })),
                              this->FMGL(bestSolHere));
    
    //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(this->FMGL(solString)));
}

//#line 309 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::diversify() {
    
    //#line 310 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->forceRestart();
}

//#line 313 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
void cpls::CPLSNode::incGroupReset() {
    
    //#line 314 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
    this->FMGL(cGroupReset) = ((this->FMGL(cGroupReset)) + (((x10_int)1)));
}

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSNode.x10"
::cpls::CPLSNode* cpls::CPLSNode::cpls__CPLSNode____this__cpls__CPLSNode(
  ) {
    return this;
    
}
void cpls::CPLSNode::__fieldInitializers_cpls_CPLSNode() {
    this->FMGL(nodeConfig) = (::x10aux::class_cast_unchecked< ::cpls::entities::NodeConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(stats) = ::cpls::measurements::GlobalStats::_make();
    this->FMGL(sampleAccStats) = ::cpls::measurements::GlobalStats::_make();
    this->FMGL(genAccStats) = ::cpls::measurements::GlobalStats::_make();
    this->FMGL(time) = ((x10_long)0ll);
    this->FMGL(pointersComunication) = ::x10aux::zeroValue< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
    this->FMGL(interTeamKill) = false;
    this->FMGL(teamPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cplsPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(winnerLatch) = ::x10::util::concurrent::AtomicBoolean::_make(false);
    this->FMGL(bcost) = ((x10_long)0ll);
    this->FMGL(bestSolHere) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(solString) = ::x10::lang::String::_make();
    this->FMGL(cGroupReset) = ((x10_int)0);
    this->FMGL(problemSize) = ((x10_long)0ll);
    this->FMGL(confArray) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::cpls::entities::State >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cmp) = reinterpret_cast< ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int> >(sizeof(cpls_CPLSNode__closure__15)))cpls_CPLSNode__closure__15()));
}
const ::x10aux::serialization_id_t cpls::CPLSNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::CPLSNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::CPLSNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nodeConfig));
    buf.write(this->FMGL(heuristicSolver));
    buf.write(this->FMGL(stats));
    buf.write(this->FMGL(sampleAccStats));
    buf.write(this->FMGL(genAccStats));
    buf.write(this->FMGL(time));
    buf.write(this->FMGL(pointersComunication));
    buf.write(this->FMGL(interTeamKill));
    buf.write(this->FMGL(teamPool));
    buf.write(this->FMGL(cplsPool));
    buf.write(this->FMGL(winnerLatch));
    buf.write(this->FMGL(bcost));
    buf.write(this->FMGL(bestSolHere));
    buf.write(this->FMGL(solString));
    buf.write(this->FMGL(cGroupReset));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(problemSize));
    buf.write(this->FMGL(confArray));
    buf.write(this->FMGL(cmp));
    
}

::x10::lang::Reference* ::cpls::CPLSNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::CPLSNode* this_ = new (::x10aux::alloc_z< ::cpls::CPLSNode>()) ::cpls::CPLSNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::CPLSNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nodeConfig) = buf.read< ::cpls::entities::NodeConfig*>();
    FMGL(heuristicSolver) = buf.read< ::cpls::solver::HeuristicSolver*>();
    FMGL(stats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(sampleAccStats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(genAccStats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(time) = buf.read<x10_long>();
    FMGL(pointersComunication) = buf.read< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >();
    FMGL(interTeamKill) = buf.read<x10_boolean>();
    FMGL(teamPool) = buf.read< ::cpls::SmartPool*>();
    FMGL(cplsPool) = buf.read< ::cpls::SmartPool*>();
    FMGL(winnerLatch) = buf.read< ::x10::util::concurrent::AtomicBoolean*>();
    FMGL(bcost) = buf.read<x10_long>();
    FMGL(bestSolHere) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(solString) = buf.read< ::x10::lang::String*>();
    FMGL(cGroupReset) = buf.read<x10_int>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(problemSize) = buf.read<x10_long>();
    FMGL(confArray) = buf.read< ::x10::lang::Rail< ::cpls::entities::State >*>();
    FMGL(cmp) = buf.read< ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int>*>();
}

::x10aux::RuntimeType cpls::CPLSNode::rtt;
void cpls::CPLSNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.CPLSNode",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__1>cpls_CPLSNode__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__1::__apply, &cpls_CPLSNode__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_CPLSNode__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__2>cpls_CPLSNode__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__2::__apply, &cpls_CPLSNode__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__2::_deserialize,::x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

::x10::lang::Fun_0_0<x10_boolean>::itable<cpls_CPLSNode__closure__3>cpls_CPLSNode__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__3::__apply, &cpls_CPLSNode__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >, &cpls_CPLSNode__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0<x10_int>::itable<cpls_CPLSNode__closure__4>cpls_CPLSNode__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__4::__apply, &cpls_CPLSNode__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_int> >, &cpls_CPLSNode__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__5>cpls_CPLSNode__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__5::__apply, &cpls_CPLSNode__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__5::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__6>cpls_CPLSNode__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__6::__apply, &cpls_CPLSNode__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__6::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__7>cpls_CPLSNode__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__7::__apply, &cpls_CPLSNode__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_CPLSNode__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__7::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__8>cpls_CPLSNode__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__8::__apply, &cpls_CPLSNode__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_CPLSNode__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__8::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_CPLSNode__closure__9>cpls_CPLSNode__closure__9::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__9::__apply, &cpls_CPLSNode__closure__9::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__9::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >, &cpls_CPLSNode__closure__9::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__9::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__9::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__10>cpls_CPLSNode__closure__10::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__10::__apply, &cpls_CPLSNode__closure__10::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__10::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__10::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__10::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__10::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__11>cpls_CPLSNode__closure__11::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__11::__apply, &cpls_CPLSNode__closure__11::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__11::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_CPLSNode__closure__11::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__11::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__11::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_CPLSNode__closure__12>cpls_CPLSNode__closure__12::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__12::__apply, &cpls_CPLSNode__closure__12::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__12::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_CPLSNode__closure__12::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__12::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__12::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__13>cpls_CPLSNode__closure__13::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__13::__apply, &cpls_CPLSNode__closure__13::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__13::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__13::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__13::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__13::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__14>cpls_CPLSNode__closure__14::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__14::__apply, &cpls_CPLSNode__closure__14::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__14::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__14::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__14::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__14::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int>::itable<cpls_CPLSNode__closure__15>cpls_CPLSNode__closure__15::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__15::__apply, &cpls_CPLSNode__closure__15::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__15::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::entities::State, ::cpls::entities::State, x10_int> >, &cpls_CPLSNode__closure__15::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__15::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__15::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CPLSNode */
/*************************************************/
