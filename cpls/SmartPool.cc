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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10:59";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32816 = ::x10aux::makeStringLit("Smart Pool: Smart Insert"); strLit__32816; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10:136";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__32817 = ::x10aux::makeStringLit("Smart Pool: normal Insert"); strLit__32817; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10:161";
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
        
        //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int totalEn = ((((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)())))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)())))));
        
        //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((totalEn) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int index;
        
        //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)();
        
        //#line 215 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                              ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))))) > (((x10_long)0ll))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)())))))) > (((x10_long)0ll)))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)())))))) > (((x10_long)0ll)))))
        {
            
            //#line 218 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            x10_int pooln = ::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                              ((x10_int)10));
            
            //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if (((pooln) < (((x10_int)5)))) {
                
                //#line 222 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)();
            } else 
            //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if (((((x10_long)(pooln))) < (((x10_long)8ll))))
            {
                
                //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)();
            } else {
                
                //#line 226 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                mem = ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)();
            }
            
            //#line 227 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)(mem))))) + (((x10_int)1)));
        } else {
            
            //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        totalEn)) + (((x10_int)1)));
            
            //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            {
                for (mem = ((x10_int)0); ((index) > (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                       ((x10_long)(mem)))));
                     mem = ((mem) + (((x10_int)1)))) {
                    
                    //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    index = ((index) - (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                          ((x10_long)(mem)))));
                }
            }
            
        }
        
        //#line 235 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* aux =
          ::cpls::util::Maybe< ::cpls::entities::State>::_make(::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                     ((x10_long)(mem))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                 ((((x10_long)(index))) - (((x10_long)1ll)))));
        
        //#line 236 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10:205-237";
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
        
        //#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))) < (((x10_int)1))))
        {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_long bcost = (x10_long)0x7fffffffffffffffLL;
        
        //#line 247 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_long best = ((x10_long)-1ll);
        
        //#line 248 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        x10_int i__24898min__24986 = ((x10_int)0);
        x10_int i__24898max__24987 = ((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                         ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)())))) - (((x10_int)1)));
        {
            x10_int i__24988;
            for (i__24988 = i__24898min__24986; ((i__24988) <= (i__24898max__24987));
                 i__24988 = ((i__24988) + (((x10_int)1))))
            {
                x10_int i__24989 = i__24988;
                
                //#line 249 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                if (((::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                            ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)()))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                        ((x10_long)(i__24989)))->FMGL(cost)) < (bcost)))
                {
                    
                    //#line 250 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    bcost = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                  ((x10_long)(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)()))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                              ((x10_long)(i__24989)))->FMGL(cost);
                    
                    //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    best = ((x10_long)(i__24989));
                }
                
            }
        }
        
        //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10:244-255";
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
        
        //#line 274 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::x10::lang::Rail< x10_int >* rail__24998 = saved_this->FMGL(nbEntries);
        x10_long i__24946min__24999 = ((x10_long)0ll);
        x10_long i__24946max__25000 = (x10_long)(::x10aux::nullCheck(rail__24998)->FMGL(size));
        {
            x10_long i__25001;
            for (i__25001 = i__24946min__24999; ((i__25001) < (i__24946max__25000));
                 i__25001 = ((i__25001) + (((x10_long)1ll)))) {
                x10_long i__25002 = i__25001;
                
                //#line 275 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__set(
                  i__25002, ((x10_int)0));
            }
        }
        
        //#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10:273-277";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__6_CLOSURE

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(::cpls::entities::PoolConfig* poolConfig) {
    
    //#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    FMGL(sz) = ::x10aux::nullCheck(poolConfig)->getProblemSize();
    FMGL(poolSize) = ::x10aux::nullCheck(poolConfig)->getPoolSize();
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(poolMode) = ((x10_long)(::x10aux::nullCheck(poolConfig)->getPoolMode()));
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(distance) = ::x10aux::nullCheck(poolConfig)->getMinDist();
    
    //#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__24802min__24962 = ((x10_long)0ll);
    x10_long i__24802max__24963 = ((x10_long)2ll);
    {
        x10_long i__24964;
        for (i__24964 = i__24802min__24962; ((i__24964) <= (i__24802max__24963));
             i__24964 = ((i__24964) + (((x10_long)1ll)))) {
            x10_long i__24965 = i__24964;
            
            //#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__24965, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
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



//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(x10_long sz, x10_int pSize,
                                   x10_long pMode, x10_double minDist) {
    
    //#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    FMGL(sz) = sz;
    FMGL(poolSize) = pSize;
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(poolMode) = pMode;
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(distance) = minDist;
    
    //#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__24818min__24966 = ((x10_long)0ll);
    x10_long i__24818max__24967 = ((x10_long)2ll);
    {
        x10_long i__24968;
        for (i__24968 = i__24818min__24966; ((i__24968) <= (i__24818max__24967));
             i__24968 = ((i__24968) + (((x10_long)1ll))))
        {
            x10_long i__24969 = i__24968;
            
            //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__24969, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
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



//#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::setSeed(x10_long seed) {
    
    //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(random) = ::x10::util::Random::_make(seed);
}

//#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::tryInsertConf(::cpls::entities::State inInfo) {
    
    //#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__1)))cpls_SmartPool__closure__1(inInfo, this))));
}

//#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::tryInsertConf0(::cpls::entities::State inInfo) {
    
    //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(poolMode), ::cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__get)())))
    {
        
        //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return this->smartInsert(inInfo);
        
    } else {
        
        //#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return this->normalInsert(inInfo);
        
    }
    
}

//#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::entities::State cpls::SmartPool::insert(x10_int poolType,
                                                x10_double dist,
                                                ::cpls::entities::State inInfo) {
    
    //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long worstConf = ((x10_long)-1ll);
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long worstCost = (x10_long)0x8000000000000000LL;
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                   ((x10_long)(poolType))),
                                 ((x10_int)0)))) {
        
        //#line 89 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                              ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
          ((x10_long)((((__extension__ ({
              ::x10::lang::Rail< x10_int >* a__24452 = this->FMGL(nbEntries);
              x10_long i0__24453 = ((x10_long)(poolType));
              x10_int r__24460 = ((a__24452->x10::lang::Rail< x10_int >::__apply(
                                     i0__24453)) + (((x10_int)1)));
              a__24452->x10::lang::Rail< x10_int >::__set(
                i0__24453, r__24460);
          }))
          ) - (((x10_int)1))))), inInfo);
        
        //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        return ::cpls::entities::State::_make(this->FMGL(sz),
                                              ((x10_long)(((x10_int)0))),
                                              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                              ((x10_int)-1),
                                              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
    } else {
        
        //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)(poolType)))));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                x10_long thisCost = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                          ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                      ((x10_long)(i)))->FMGL(cost);
                
                //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                if (((::x10aux::struct_equals(thisCost, inInfo->FMGL(cost))) &&
                    (((__extension__ ({
                        ::cpls::SmartPool* t__24479 = this;
                        ::x10::lang::Rail< x10_int >* conf1__24480 =
                          inInfo->FMGL(vector);
                        ::x10::lang::Rail< x10_int >* conf2__24481 =
                          ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                            ((x10_long)(i)))->FMGL(vector);
                        if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf1__24480)->FMGL(size)),
                                                        ::x10aux::nullCheck(t__24479)->FMGL(sz))) &&
                            (::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf2__24481)->FMGL(size)),
                                                     ::x10aux::nullCheck(t__24479)->FMGL(sz))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__32809 = ::x10aux::makeStringLit("!(conf1$24480.size == t$24479.sz && conf2$24481.size == t$24479.sz)"); strLit__32809; })))));
                        }
                        ::x10aux::nullCheck(t__24479)->distance(
                          conf1__24480, conf2__24481);
                    }))
                    ) < (dist)))) {
                    
                    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    return ::cpls::entities::State::_make(this->FMGL(sz),
                                                          ((x10_long)(((x10_int)0))),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                          ((x10_int)-1),
                                                          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    
                }
                
                //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                if (((thisCost) > (worstCost))) {
                    
                    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    worstCost = thisCost;
                    
                    //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    worstConf = ((x10_long)(i));
                }
                
            }
        }
        
        //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if ((((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                 ((x10_long)(poolType)))) < (this->FMGL(poolSize))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)((((__extension__ ({
                  ::x10::lang::Rail< x10_int >* a__24511 =
                    this->FMGL(nbEntries);
                  x10_long i0__24512 = ((x10_long)(poolType));
                  x10_int r__24519 = ((a__24511->x10::lang::Rail< x10_int >::__apply(
                                         i0__24512)) + (((x10_int)1)));
                  a__24511->x10::lang::Rail< x10_int >::__set(
                    i0__24512, r__24519);
              }))
              ) - (((x10_int)1))))), inInfo);
            
            //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            return ::cpls::entities::State::_make(this->FMGL(sz),
                                                  ((x10_long)(((x10_int)0))),
                                                  ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                                  ((x10_int)-1),
                                                  ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
            
        } else 
        //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if ((((worstConf) >= (((x10_long)(((x10_int)0))))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            ::cpls::entities::State victim = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                   ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                               worstConf);
            
            //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)(((x10_int) (worstConf)))), inInfo);
            
            //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            return victim;
            
        }
        
    }
    
    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return ::cpls::entities::State::_make(this->FMGL(sz),
                                          ((x10_long)(((x10_int)0))),
                                          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
                                          ((x10_int)-1), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
}

//#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::smartInsert(::cpls::entities::State inInfo) {
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__2)))cpls_SmartPool__closure__2())));
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::cpls::entities::State victimShort = this->insert(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)(),
                                                       0.3,
                                                       inInfo);
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    if (((((x10_long)(victimShort->FMGL(place)))) >= (((x10_long)0ll))))
    {
        
        //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        ::cpls::entities::State victimMedium = this->insert(
                                                 ::cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)(),
                                                 0.6, victimShort);
        
        //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
        if (((((x10_long)(victimMedium->FMGL(place)))) >= (((x10_long)0ll))))
        {
            
            //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            this->insert(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)(),
                         0.9, victimMedium);
        }
        
    }
    
    //#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return ::cpls::util::Unit::_make();
    
}

//#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::normalInsert(::cpls::entities::State inInfo) {
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__3)))cpls_SmartPool__closure__3())));
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->insert(::cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)(),
                 this->FMGL(distance), inInfo);
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return ::cpls::util::Unit::_make();
    
}

//#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
x10_double cpls::SmartPool::distance(::x10::lang::Rail< x10_int >* conf1,
                                     ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_int count = ((x10_int)0);
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_int i__24834min__24970 = ((x10_int)0);
    x10_int i__24834max__24971 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__24972;
        for (i__24972 = i__24834min__24970; ((i__24972) <= (i__24834max__24971));
             i__24972 = ((i__24972) + (((x10_int)1)))) {
            x10_int i__24973 = i__24972;
            
            //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__24973))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__24973))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return dist;
    
}

//#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
x10_boolean cpls::SmartPool::compareVectors(::x10::lang::Rail< x10_int >* vec1,
                                            ::x10::lang::Rail< x10_int >* vec2) {
    
    //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__24850min__24974 = ((x10_long)0ll);
    x10_long i__24850max__24975 = (((x10_long)(::x10aux::nullCheck(vec1)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__24976;
        for (i__24976 = i__24850min__24974; ((i__24976) <= (i__24850max__24975));
             i__24976 = ((i__24976) + (((x10_long)1ll))))
        {
            x10_long i__24977 = i__24976;
            
            //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(vec1)->x10::lang::Rail< x10_int >::__apply(
                                            i__24977), ::x10aux::nullCheck(vec2)->x10::lang::Rail< x10_int >::__apply(
                                                         i__24977))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return true;
    
}

//#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::printVectors() {
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_int i__24882min__24982 = ((x10_int)0);
    x10_int i__24882max__24983 = ((x10_int)2);
    {
        x10_int i__24984;
        for (i__24984 = i__24882min__24982; ((i__24984) <= (i__24882max__24983));
             i__24984 = ((i__24984) + (((x10_int)1)))) {
            x10_int i__24985 = i__24984;
            
            //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            x10_long i__24866min__24978 = ((x10_long)0ll);
            x10_long i__24866max__24979 = ((((x10_long)(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                          ((x10_long)(i__24985)))))) - (((x10_long)1ll)));
            {
                x10_long i__24980;
                for (i__24980 = i__24866min__24978; ((i__24980) <= (i__24866max__24979));
                     i__24980 = ((i__24980) + (((x10_long)1ll))))
                {
                    x10_long j__24981 = i__24980;
                    
                    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((::x10aux::struct_equals(i__24985,
                                                                                                                                                                                           ((x10_int)2)))
                        ? ((__extension__ ({ static ::x10::lang::String* strLit__32823 = ::x10aux::makeStringLit("long "); strLit__32823; })))
                        : ((::x10aux::struct_equals(i__24985,
                                                    ((x10_int)1)))
                             ? ((__extension__ ({ static ::x10::lang::String* strLit__32824 = ::x10aux::makeStringLit("med "); strLit__32824; })))
                             : ((__extension__ ({ static ::x10::lang::String* strLit__32825 = ::x10aux::makeStringLit("short "); strLit__32825; })))), j__24981), (__extension__ ({ static ::x10::lang::String* strLit__32826 = ::x10aux::makeStringLit(". Cost = "); strLit__32826; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                 ((x10_long)(i__24985))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                             j__24981)->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__32829 = ::x10aux::makeStringLit(" place "); strLit__32829; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ((x10_long)(i__24985))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                              j__24981)->FMGL(place)));
                    
                    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__32832 = ::x10aux::makeStringLit(" Vector"); strLit__32832; })),
                                              ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                    ((x10_long)(i__24985))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                j__24981)->FMGL(vector));
                }
            }
            
        }
    }
    
}

//#line 204 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getPConf(
  ) {
    
    //#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__4)))cpls_SmartPool__closure__4(this))));
    
}

//#line 243 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getBestConf(
  ) {
    
    //#line 244 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__5)))cpls_SmartPool__closure__5(this))));
    
}

//#line 257 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
::x10::lang::String* cpls::SmartPool::getCostList() {
    
    //#line 258 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    ::x10::util::StringBuilder* str = ::x10::util::StringBuilder::_make();
    
    //#line 260 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    x10_long i__24930min__24994 = ((x10_long)0ll);
    x10_long i__24930max__24995 = ((x10_long)2ll);
    {
        x10_long i__24996;
        for (i__24996 = i__24930min__24994; ((i__24996) <= (i__24930max__24995));
             i__24996 = ((i__24996) + (((x10_long)1ll))))
        {
            x10_long j__24997 = i__24996;
            
            //#line 261 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
            x10_int i__24914min__24990 = ((x10_int)0);
            x10_int i__24914max__24991 = ((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             j__24997)) - (((x10_int)1)));
            {
                x10_int i__24992;
                for (i__24992 = i__24914min__24990; ((i__24992) <= (i__24914max__24991));
                     i__24992 = ((i__24992) + (((x10_int)1))))
                {
                    x10_int i__24993 = i__24992;
                    
                    //#line 262 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    str->add(::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                   j__24997))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                               ((x10_long)(i__24993)))->FMGL(cost));
                    
                    //#line 263 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
                    str->add((__extension__ ({ static ::x10::lang::String* strLit__32859 = ::x10aux::makeStringLit(" "); strLit__32859; })));
                }
            }
            
        }
    }
    
    //#line 266 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    return str->toString();
    
}

//#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
void cpls::SmartPool::clear() {
    
    //#line 273 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__6)))cpls_SmartPool__closure__6(this))));
}

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/SmartPool.x10"
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
    this->FMGL(monitor) = ::cpls::util::Monitor::_make((__extension__ ({ static ::x10::lang::String* strLit__32860 = ::x10aux::makeStringLit("SmartPool"); strLit__32860; })));
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
