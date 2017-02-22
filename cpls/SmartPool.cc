/*************************************************/
/* START of SmartPool */
#include <cpls/SmartPool.h>

#include <x10/lang/Int.h>
#include <cpls/entities/State.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/util/Random.h>
#include <cpls/util/Monitor.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/lang/Boolean.h>
#include <cpls/util/Unit.h>
#include <x10/lang/Fun_0_0.h>
#include <cpls/CPLSOptionsEnum__PoolModes.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <cpls/util/Logger.h>
#include <x10/lang/String.h>
#include <cpls/CPLSOptionsEnum__PoolLevels.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <cpls/util/Utils.h>
#include <cpls/util/Maybe.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_SMARTPOOL__CLOSURE__1_CLOSURE
#define CPLS_SMARTPOOL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_SmartPool__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_SmartPool__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Unit __apply() {
        return saved_this->tryInsertConf0(inInfo);
        
    }
    
    // captured environment
    ::cpls::entities::State inInfo;
    ::cpls::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->inInfo);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__1* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__1>();
        buf.record_reference(storage);
        ::cpls::entities::State that_inInfo = buf.read< ::cpls::entities::State>();
        ::cpls::SmartPool* that_saved_this = buf.read< ::cpls::SmartPool*>();
        cpls_SmartPool__closure__1* this_ = new (storage) cpls_SmartPool__closure__1(that_inInfo, that_saved_this);
        return this_;
    }
    
    cpls_SmartPool__closure__1(::cpls::entities::State inInfo, ::cpls::SmartPool* saved_this) : inInfo(inInfo), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10:59";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__1_CLOSURE
#ifndef CPLS_SMARTPOOL__CLOSURE__2_CLOSURE
#define CPLS_SMARTPOOL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_SmartPool__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_SmartPool__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__33493 = ::x10aux::makeStringLit("Smart Pool: Smart Insert"); strLit__33493; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__2* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__2>();
        buf.record_reference(storage);
        cpls_SmartPool__closure__2* this_ = new (storage) cpls_SmartPool__closure__2();
        return this_;
    }
    
    cpls_SmartPool__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10:136";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__2_CLOSURE
#ifndef CPLS_SMARTPOOL__CLOSURE__3_CLOSURE
#define CPLS_SMARTPOOL__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_SmartPool__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_SmartPool__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__33494 = ::x10aux::makeStringLit("Smart Pool: normal Insert"); strLit__33494; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__3* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__3>();
        buf.record_reference(storage);
        cpls_SmartPool__closure__3* this_ = new (storage) cpls_SmartPool__closure__3();
        return this_;
    }
    
    cpls_SmartPool__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10:161";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__3_CLOSURE
#ifndef CPLS_SMARTPOOL__CLOSURE__4_CLOSURE
#define CPLS_SMARTPOOL__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_SmartPool__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_SmartPool__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Maybe< ::cpls::entities::State>* __apply() {
        
        //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int totalEn = ((((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)())))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)())))));
        
        //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((totalEn) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int index;
        
        //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)();
        
        //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                              ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))))) > (((x10_long)0ll))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)())))))) > (((x10_long)0ll)))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)())))))) > (((x10_long)0ll)))))
        {
            
            //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            x10_int pooln = ::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                              ((x10_int)10));
            
            //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if (((pooln) < (((x10_int)5)))) {
                
                //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)();
            } else 
            //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if (((((x10_long)(pooln))) < (((x10_long)8ll))))
            {
                
                //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)();
            } else {
                
                //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)();
            }
            
            //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)(mem))))) + (((x10_int)1)));
        } else {
            
            //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        totalEn)) + (((x10_int)1)));
            
            //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            {
                for (mem = ((x10_int)0); ((index) > (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                       ((x10_long)(mem)))));
                     mem = ((mem) + (((x10_int)1)))) {
                    
                    //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    index = ((index) - (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                          ((x10_long)(mem)))));
                }
            }
            
        }
        
        //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* aux =
          ::cpls::util::Maybe< ::cpls::entities::State>::_make(::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                     ((x10_long)(mem))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                 ((((x10_long)(index))) - (((x10_long)1ll)))));
        
        //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return aux;
        
    }
    
    // captured environment
    ::cpls::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__4* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__4>();
        buf.record_reference(storage);
        ::cpls::SmartPool* that_saved_this = buf.read< ::cpls::SmartPool*>();
        cpls_SmartPool__closure__4* this_ = new (storage) cpls_SmartPool__closure__4(that_saved_this);
        return this_;
    }
    
    cpls_SmartPool__closure__4(::cpls::SmartPool* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10:205-237";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__4_CLOSURE
#ifndef CPLS_SMARTPOOL__CLOSURE__5_CLOSURE
#define CPLS_SMARTPOOL__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_SmartPool__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_SmartPool__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Maybe< ::cpls::entities::State>* __apply() {
        
        //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))) < (((x10_int)1))))
        {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_long bcost = (x10_long)0x7fffffffffffffffLL;
        
        //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_long best = ((x10_long)-1ll);
        
        //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int i__25761min__25849 = ((x10_int)0);
        x10_int i__25761max__25850 = ((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                         ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))) - (((x10_int)1)));
        {
            x10_int i__25851;
            for (i__25851 = i__25761min__25849; ((i__25851) <= (i__25761max__25850));
                 i__25851 = ((i__25851) + (((x10_int)1))))
            {
                x10_int i__25852 = i__25851;
                
                //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                if (((::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)()))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                        ((x10_long)(i__25852)))->FMGL(cost)) < (bcost)))
                {
                    
                    //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    bcost = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                  ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)()))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                              ((x10_long)(i__25852)))->FMGL(cost);
                    
                    //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    best = ((x10_long)(i__25852));
                }
                
            }
        }
        
        //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return ::cpls::util::Maybe< ::cpls::entities::State>::_make(::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                          ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)()))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                      best));
        
    }
    
    // captured environment
    ::cpls::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__5* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__5>();
        buf.record_reference(storage);
        ::cpls::SmartPool* that_saved_this = buf.read< ::cpls::SmartPool*>();
        cpls_SmartPool__closure__5* this_ = new (storage) cpls_SmartPool__closure__5(that_saved_this);
        return this_;
    }
    
    cpls_SmartPool__closure__5(::cpls::SmartPool* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10:244-255";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__5_CLOSURE
#ifndef CPLS_SMARTPOOL__CLOSURE__6_CLOSURE
#define CPLS_SMARTPOOL__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_SmartPool__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_SmartPool__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Unit __apply() {
        
        //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::x10::lang::Rail< x10_int >* rail__25861 = saved_this->FMGL(nbEntries);
        x10_long i__25809min__25862 = ((x10_long)0ll);
        x10_long i__25809max__25863 = (x10_long)(::x10aux::nullCheck(rail__25861)->FMGL(size));
        {
            x10_long i__25864;
            for (i__25864 = i__25809min__25862; ((i__25864) < (i__25809max__25863));
                 i__25864 = ((i__25864) + (((x10_long)1ll)))) {
                x10_long i__25865 = i__25864;
                
                //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__set(
                  i__25865, ((x10_int)0));
            }
        }
        
        //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return ::cpls::util::Unit::_make();
        
    }
    
    // captured environment
    ::cpls::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__6* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__6>();
        buf.record_reference(storage);
        ::cpls::SmartPool* that_saved_this = buf.read< ::cpls::SmartPool*>();
        cpls_SmartPool__closure__6* this_ = new (storage) cpls_SmartPool__closure__6(that_saved_this);
        return this_;
    }
    
    cpls_SmartPool__closure__6(::cpls::SmartPool* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10:273-277";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__6_CLOSURE

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(::cpls::entities::PoolConfig* poolConfig) {
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    FMGL(sz) = ::x10aux::nullCheck(poolConfig)->getProblemSize();
    FMGL(poolSize) = ::x10aux::nullCheck(poolConfig)->getPoolSize();
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(poolMode) = ((x10_long)(::x10aux::nullCheck(poolConfig)->getPoolMode()));
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(distance) = ::x10aux::nullCheck(poolConfig)->getMinDist();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__25665min__25825 = ((x10_long)0ll);
    x10_long i__25665max__25826 = ((x10_long)2ll);
    {
        x10_long i__25827;
        for (i__25827 = i__25665min__25825; ((i__25827) <= (i__25665max__25826));
             i__25827 = ((i__25827) + (((x10_long)1ll)))) {
            x10_long i__25828 = i__25827;
            
            //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__25828, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                            ::cpls::entities::State::_make(this->FMGL(sz),
                                                                                                           ((x10_long)(((x10_int)0))),
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                                                                           ((x10_int)0),
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))));
        }
    }
    
}
::cpls::SmartPool* cpls::SmartPool::_make(::cpls::entities::PoolConfig* poolConfig)
{
    ::cpls::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool();
    this_->_constructor(poolConfig);
    return this_;
}



//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(x10_long sz, x10_int pSize,
                                   x10_long pMode, x10_double minDist) {
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    FMGL(sz) = sz;
    FMGL(poolSize) = pSize;
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(poolMode) = pMode;
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(distance) = minDist;
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__25681min__25829 = ((x10_long)0ll);
    x10_long i__25681max__25830 = ((x10_long)2ll);
    {
        x10_long i__25831;
        for (i__25831 = i__25681min__25829; ((i__25831) <= (i__25681max__25830));
             i__25831 = ((i__25831) + (((x10_long)1ll))))
        {
            x10_long i__25832 = i__25831;
            
            //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__25832, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                            ::cpls::entities::State::_make(sz,
                                                                                                           ((x10_long)(((x10_int)0))),
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                                                                           ((x10_int)0),
                                                                                                           ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))));
        }
    }
    
}
::cpls::SmartPool* cpls::SmartPool::_make(x10_long sz, x10_int pSize,
                                          x10_long pMode,
                                          x10_double minDist)
{
    ::cpls::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool();
    this_->_constructor(sz, pSize, pMode, minDist);
    return this_;
}



//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::setSeed(x10_long seed) {
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(random) = ::x10::util::Random::_make(seed);
}

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::tryInsertConf(::cpls::entities::State inInfo) {
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__1)))cpls_SmartPool__closure__1(inInfo, this))));
}

//#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::tryInsertConf0(::cpls::entities::State inInfo) {
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(poolMode), ::cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__get)())))
    {
        
        //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return this->smartInsert(inInfo);
        
    } else {
        
        //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return this->normalInsert(inInfo);
        
    }
    
}

//#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::entities::State cpls::SmartPool::insert(x10_int poolType,
                                                x10_double dist,
                                                ::cpls::entities::State inInfo) {
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long worstConf = ((x10_long)-1ll);
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long worstCost = (x10_long)0x8000000000000000LL;
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                   ((x10_long)(poolType))),
                                 ((x10_int)0)))) {
        
        //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                              ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
          ((x10_long)((((__extension__ ({
              ::x10::lang::Rail< x10_int >* a__25315 = this->FMGL(nbEntries);
              x10_long i0__25316 = ((x10_long)(poolType));
              x10_int r__25323 = ((a__25315->x10::lang::Rail< x10_int >::__apply(
                                     i0__25316)) + (((x10_int)1)));
              a__25315->x10::lang::Rail< x10_int >::__set(
                i0__25316, r__25323);
          }))
          ) - (((x10_int)1))))), inInfo);
        
        //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return ::cpls::entities::State::_make(this->FMGL(sz),
                                              ((x10_long)(((x10_int)0))),
                                              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                              ((x10_int)-1),
                                              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    } else {
        
        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)(poolType)))));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                x10_long thisCost = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                          ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                      ((x10_long)(i)))->FMGL(cost);
                
                //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                if (((::x10aux::struct_equals(thisCost, inInfo->FMGL(cost))) &&
                    (((__extension__ ({
                        ::cpls::SmartPool* t__25342 = this;
                        ::x10::lang::Rail< x10_int >* conf1__25343 =
                          inInfo->FMGL(vector);
                        ::x10::lang::Rail< x10_int >* conf2__25344 =
                          ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                            ((x10_long)(i)))->FMGL(vector);
                        if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf1__25343)->FMGL(size)),
                                                        ::x10aux::nullCheck(t__25342)->FMGL(sz))) &&
                            (::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf2__25344)->FMGL(size)),
                                                     ::x10aux::nullCheck(t__25342)->FMGL(sz))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__33486 = ::x10aux::makeStringLit("!(conf1$25343.size == t$25342.sz && conf2$25344.size == t$25342.sz)"); strLit__33486; })))));
                        }
                        ::x10aux::nullCheck(t__25342)->distance(
                          conf1__25343, conf2__25344);
                    }))
                    ) < (dist)))) {
                    
                    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    return ::cpls::entities::State::_make(this->FMGL(sz),
                                                          ((x10_long)(((x10_int)0))),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                          ((x10_int)-1),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    
                }
                
                //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                if (((thisCost) > (worstCost))) {
                    
                    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    worstCost = thisCost;
                    
                    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    worstConf = ((x10_long)(i));
                }
                
            }
        }
        
        //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if ((((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                 ((x10_long)(poolType)))) < (this->FMGL(poolSize))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)((((__extension__ ({
                  ::x10::lang::Rail< x10_int >* a__25374 =
                    this->FMGL(nbEntries);
                  x10_long i0__25375 = ((x10_long)(poolType));
                  x10_int r__25382 = ((a__25374->x10::lang::Rail< x10_int >::__apply(
                                         i0__25375)) + (((x10_int)1)));
                  a__25374->x10::lang::Rail< x10_int >::__set(
                    i0__25375, r__25382);
              }))
              ) - (((x10_int)1))))), inInfo);
            
            //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            return ::cpls::entities::State::_make(this->FMGL(sz),
                                                  ((x10_long)(((x10_int)0))),
                                                  ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                  ((x10_int)-1),
                                                  ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
        } else 
        //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if ((((worstConf) >= (((x10_long)(((x10_int)0))))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            ::cpls::entities::State victim = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                   ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                               worstConf);
            
            //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)(((x10_int) (worstConf)))), inInfo);
            
            //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            return victim;
            
        }
        
    }
    
    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return ::cpls::entities::State::_make(this->FMGL(sz),
                                          ((x10_long)(((x10_int)0))),
                                          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                          ((x10_int)-1), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::smartInsert(::cpls::entities::State inInfo) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__2)))cpls_SmartPool__closure__2())));
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::cpls::entities::State victimShort = this->insert(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)(),
                                                       0.3,
                                                       inInfo);
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    if (((((x10_long)(victimShort->FMGL(place)))) >= (((x10_long)0ll))))
    {
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::cpls::entities::State victimMedium = this->insert(
                                                 ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)(),
                                                 0.6, victimShort);
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((((x10_long)(victimMedium->FMGL(place)))) >= (((x10_long)0ll))))
        {
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            this->insert(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)(),
                         0.9, victimMedium);
        }
        
    }
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return ::cpls::util::Unit::_make();
    
}

//#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::normalInsert(::cpls::entities::State inInfo) {
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__3)))cpls_SmartPool__closure__3())));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->insert(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)(),
                 this->FMGL(distance), inInfo);
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return ::cpls::util::Unit::_make();
    
}

//#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
x10_double cpls::SmartPool::distance(::x10::lang::Rail< x10_int >* conf1,
                                     ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_int count = ((x10_int)0);
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_int i__25697min__25833 = ((x10_int)0);
    x10_int i__25697max__25834 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__25835;
        for (i__25835 = i__25697min__25833; ((i__25835) <= (i__25697max__25834));
             i__25835 = ((i__25835) + (((x10_int)1)))) {
            x10_int i__25836 = i__25835;
            
            //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__25836))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__25836))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return dist;
    
}

//#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
x10_boolean cpls::SmartPool::compareVectors(::x10::lang::Rail< x10_int >* vec1,
                                            ::x10::lang::Rail< x10_int >* vec2) {
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__25713min__25837 = ((x10_long)0ll);
    x10_long i__25713max__25838 = (((x10_long)(::x10aux::nullCheck(vec1)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__25839;
        for (i__25839 = i__25713min__25837; ((i__25839) <= (i__25713max__25838));
             i__25839 = ((i__25839) + (((x10_long)1ll))))
        {
            x10_long i__25840 = i__25839;
            
            //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(vec1)->x10::lang::Rail< x10_int >::__apply(
                                            i__25840), ::x10aux::nullCheck(vec2)->x10::lang::Rail< x10_int >::__apply(
                                                         i__25840))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return true;
    
}

//#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::printVectors() {
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_int i__25745min__25845 = ((x10_int)0);
    x10_int i__25745max__25846 = ((x10_int)2);
    {
        x10_int i__25847;
        for (i__25847 = i__25745min__25845; ((i__25847) <= (i__25745max__25846));
             i__25847 = ((i__25847) + (((x10_int)1)))) {
            x10_int i__25848 = i__25847;
            
            //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            x10_long i__25729min__25841 = ((x10_long)0ll);
            x10_long i__25729max__25842 = ((((x10_long)(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                          ((x10_long)(i__25848)))))) - (((x10_long)1ll)));
            {
                x10_long i__25843;
                for (i__25843 = i__25729min__25841; ((i__25843) <= (i__25729max__25842));
                     i__25843 = ((i__25843) + (((x10_long)1ll))))
                {
                    x10_long j__25844 = i__25843;
                    
                    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((::x10aux::struct_equals(i__25848,
                                                                                                                                                                                           ((x10_int)2)))
                        ? ((__extension__ ({ static ::x10::lang::String* strLit__33500 = ::x10aux::makeStringLit("long "); strLit__33500; })))
                        : ((::x10aux::struct_equals(i__25848,
                                                    ((x10_int)1)))
                             ? ((__extension__ ({ static ::x10::lang::String* strLit__33501 = ::x10aux::makeStringLit("med "); strLit__33501; })))
                             : ((__extension__ ({ static ::x10::lang::String* strLit__33502 = ::x10aux::makeStringLit("short "); strLit__33502; })))), j__25844), (__extension__ ({ static ::x10::lang::String* strLit__33503 = ::x10aux::makeStringLit(". Cost = "); strLit__33503; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                 ((x10_long)(i__25848))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                             j__25844)->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__33506 = ::x10aux::makeStringLit(" place "); strLit__33506; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ((x10_long)(i__25848))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                              j__25844)->FMGL(place)));
                    
                    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__33509 = ::x10aux::makeStringLit(" Vector"); strLit__33509; })),
                                              ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                    ((x10_long)(i__25848))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                j__25844)->FMGL(vector));
                }
            }
            
        }
    }
    
}

//#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getPConf(
  ) {
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__4)))cpls_SmartPool__closure__4(this))));
    
}

//#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getBestConf(
  ) {
    
    //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__5)))cpls_SmartPool__closure__5(this))));
    
}

//#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::x10::lang::String* cpls::SmartPool::getCostList() {
    
    //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::x10::util::StringBuilder* str = ::x10::util::StringBuilder::_make();
    
    //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__25793min__25857 = ((x10_long)0ll);
    x10_long i__25793max__25858 = ((x10_long)2ll);
    {
        x10_long i__25859;
        for (i__25859 = i__25793min__25857; ((i__25859) <= (i__25793max__25858));
             i__25859 = ((i__25859) + (((x10_long)1ll))))
        {
            x10_long j__25860 = i__25859;
            
            //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            x10_int i__25777min__25853 = ((x10_int)0);
            x10_int i__25777max__25854 = ((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             j__25860)) - (((x10_int)1)));
            {
                x10_int i__25855;
                for (i__25855 = i__25777min__25853; ((i__25855) <= (i__25777max__25854));
                     i__25855 = ((i__25855) + (((x10_int)1))))
                {
                    x10_int i__25856 = i__25855;
                    
                    //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    str->add(::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                   j__25860))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                               ((x10_long)(i__25856)))->FMGL(cost));
                    
                    //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    str->add((__extension__ ({ static ::x10::lang::String* strLit__33536 = ::x10aux::makeStringLit(" "); strLit__33536; })));
                }
            }
            
        }
    }
    
    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return str->toString();
    
}

//#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::clear() {
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__6)))cpls_SmartPool__closure__6(this))));
}

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::SmartPool* cpls::SmartPool::cpls__SmartPool____this__cpls__SmartPool(
  ) {
    return this;
    
}
void cpls::SmartPool::__fieldInitializers_cpls_SmartPool(
  ) {
    this->FMGL(nbEntries) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                ((x10_int)0));
    this->FMGL(pool) = ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::_make(((x10_long)3ll));
    this->FMGL(random) = ::x10::util::Random::_make();
    this->FMGL(monitor) = ::cpls::util::Monitor::_make((__extension__ ({ static ::x10::lang::String* strLit__33537 = ::x10aux::makeStringLit("SmartPool"); strLit__33537; })));
    this->FMGL(distance) = 0.0;
}
const ::x10aux::serialization_id_t cpls::SmartPool::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::SmartPool::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::SmartPool::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nbEntries));
    buf.write(this->FMGL(pool));
    buf.write(this->FMGL(poolMode));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(monitor));
    buf.write(this->FMGL(distance));
    buf.write(this->FMGL(sz));
    buf.write(this->FMGL(poolSize));
    
}

::x10::lang::Reference* ::cpls::SmartPool::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::SmartPool::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nbEntries) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(pool) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >*>();
    FMGL(poolMode) = buf.read<x10_long>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(monitor) = buf.read< ::cpls::util::Monitor*>();
    FMGL(distance) = buf.read<x10_double>();
    FMGL(sz) = buf.read<x10_long>();
    FMGL(poolSize) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::SmartPool::rtt;
void cpls::SmartPool::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.SmartPool",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_SmartPool__closure__1>cpls_SmartPool__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_SmartPool__closure__1::__apply, &cpls_SmartPool__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_SmartPool__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >, &cpls_SmartPool__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_SmartPool__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_SmartPool__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_SmartPool__closure__2>cpls_SmartPool__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_SmartPool__closure__2::__apply, &cpls_SmartPool__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_SmartPool__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_SmartPool__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_SmartPool__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_SmartPool__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_SmartPool__closure__3>cpls_SmartPool__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_SmartPool__closure__3::__apply, &cpls_SmartPool__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_SmartPool__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_SmartPool__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_SmartPool__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_SmartPool__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_SmartPool__closure__4>cpls_SmartPool__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_SmartPool__closure__4::__apply, &cpls_SmartPool__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_SmartPool__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >, &cpls_SmartPool__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_SmartPool__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_SmartPool__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_SmartPool__closure__5>cpls_SmartPool__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_SmartPool__closure__5::__apply, &cpls_SmartPool__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_SmartPool__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >, &cpls_SmartPool__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_SmartPool__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_SmartPool__closure__5::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_SmartPool__closure__6>cpls_SmartPool__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_SmartPool__closure__6::__apply, &cpls_SmartPool__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_SmartPool__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >, &cpls_SmartPool__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_SmartPool__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_SmartPool__closure__6::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of SmartPool */
/*************************************************/
