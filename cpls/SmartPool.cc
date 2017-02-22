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
#include <x10/lang/FailedDynamicCheckException.h>
#include <cpls/util/Logger.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <cpls/util/Utils.h>
#include <cpls/util/Maybe.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/util/Timer.h>
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
    ::cpls::SmartPool* saved_this;
    ::cpls::entities::State inInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->inInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__1* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__1>();
        buf.record_reference(storage);
        ::cpls::SmartPool* that_saved_this = buf.read< ::cpls::SmartPool*>();
        ::cpls::entities::State that_inInfo = buf.read< ::cpls::entities::State>();
        cpls_SmartPool__closure__1* this_ = new (storage) cpls_SmartPool__closure__1(that_saved_this, that_inInfo);
        return this_;
    }
    
    cpls_SmartPool__closure__1(::cpls::SmartPool* saved_this, ::cpls::entities::State inInfo) : saved_this(saved_this), inInfo(inInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10:59";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__6264 = ::x10aux::makeStringLit("Smart Pool: Smart Insert"); strLit__6264; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10:136";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__6265 = ::x10aux::makeStringLit("Smart Pool: normal Insert"); strLit__6265; }));
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10:161";
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
        
        //#line 207 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int totalEn = ((((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((x10_int)0))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                  ((x10_long)(((x10_int)1))))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                      ((x10_long)(((x10_int)2))))));
        
        //#line 209 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((totalEn) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 211 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int index;
        
        //#line 213 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int mem = ((x10_int)0);
        
        //#line 215 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                              ((x10_long)(((x10_int)0))))))) > (((x10_long)0ll))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(((x10_int)1))))))) > (((x10_long)0ll)))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(((x10_int)2))))))) > (((x10_long)0ll)))))
        {
            
            //#line 218 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            x10_int pooln = ::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                              ((x10_int)10));
            
            //#line 221 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            if (((pooln) < (((x10_int)5)))) {
                
                //#line 222 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                mem = ((x10_int)0);
            } else 
            //#line 223 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            if (((((x10_long)(pooln))) < (((x10_long)8ll))))
            {
                
                //#line 224 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                mem = ((x10_int)1);
            } else {
                
                //#line 226 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                mem = ((x10_int)2);
            }
            
            //#line 227 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)(mem))))) + (((x10_int)1)));
        } else {
            
            //#line 230 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        totalEn)) + (((x10_int)1)));
            
            //#line 231 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            {
                for (mem = ((x10_int)0); ((index) > (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                       ((x10_long)(mem)))));
                     mem = ((mem) + (((x10_int)1)))) {
                    
                    //#line 232 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    index = ((index) - (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                          ((x10_long)(mem)))));
                }
            }
            
        }
        
        //#line 235 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* aux =
           (new (::x10aux::alloc_z< ::cpls::util::Maybe< ::cpls::entities::State> >()) ::cpls::util::Maybe< ::cpls::entities::State>());
        
        //#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Maybe.x10"
        ::cpls::entities::State t__6233 = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                ((x10_long)(mem))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                            ((((x10_long)(index))) - (((x10_long)1ll))));
        aux->FMGL(data) = t__6233;
        
        //#line 236 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10:205-237";
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
        
        //#line 245 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                ((x10_long)(((x10_int)0))))) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 246 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_long bcost = (x10_long)0x7fffffffffffffffLL;
        
        //#line 247 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_long best = ((x10_long)-1ll);
        
        //#line 248 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int i__2601max__6235 = ((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                       ((x10_long)(((x10_int)0))))) - (((x10_int)1)));
        {
            x10_int i__6236;
            for (i__6236 = ((x10_int)0); ((i__6236) <= (i__2601max__6235));
                 i__6236 = ((i__6236) + (((x10_int)1)))) {
                x10_int i__6237 = i__6236;
                
                //#line 249 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                if (((::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                            ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                        ((x10_long)(i__6237)))->FMGL(cost)) < (bcost)))
                {
                    
                    //#line 250 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    bcost = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                  ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                              ((x10_long)(i__6237)))->FMGL(cost);
                    
                    //#line 251 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    best = ((x10_long)(i__6237));
                }
                
            }
        }
        
        //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* alloc__6238 =
           (new (::x10aux::alloc_z< ::cpls::util::Maybe< ::cpls::entities::State> >()) ::cpls::util::Maybe< ::cpls::entities::State>());
        
        //#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Maybe.x10"
        ::cpls::entities::State t__6234 = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                            best);
        alloc__6238->FMGL(data) = t__6234;
        
        //#line 254 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        return alloc__6238;
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10:244-255";
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
        
        //#line 274 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10::lang::Rail< x10_int >* rail__6244 = saved_this->FMGL(nbEntries);
        {
            x10_long i__6245;
            for (i__6245 = ((x10_long)0ll); ((i__6245) < (((x10_long)3ll)));
                 i__6245 = ((i__6245) + (((x10_long)1ll)))) {
                x10_long i__6246 = i__6245;
                
                //#line 275 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__set(
                  i__6246, ((x10_int)0));
            }
        }
        
        //#line 276 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Unit alloc__6247 =  ::cpls::util::Unit::_alloc();
        return alloc__6247;
        
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10:273-277";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__6_CLOSURE

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(::cpls::entities::PoolConfig* poolConfig) {
    
    //#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    FMGL(sz) = ::x10aux::nullCheck(poolConfig)->getProblemSize();
    FMGL(poolSize) = ::x10aux::nullCheck(poolConfig)->getPoolSize();
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(poolMode) = ((x10_long)(::x10aux::nullCheck(poolConfig)->getPoolMode()));
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(distance) = ::x10aux::nullCheck(poolConfig)->getMinDist();
    
    //#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_long i__6191;
        for (i__6191 = ((x10_long)0ll); ((i__6191) <= (((x10_long)2ll)));
             i__6191 = ((i__6191) + (((x10_long)1ll)))) {
            x10_long i__6192 = i__6191;
            
            //#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__6192, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                           (__extension__ ({
                                                                               ::cpls::entities::State alloc__6190 =
                                                                                 
                                                                               ::cpls::entities::State::_alloc();
                                                                               
                                                                               //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/State.x10"
                                                                               x10_long sz__6186 =
                                                                                 this->FMGL(sz);
                                                                               x10_long cost__6187 =
                                                                                 ((x10_long)(((x10_int)0)));
                                                                               ::x10::lang::Rail< x10_int >* vector__6188 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               ::x10::lang::Rail< x10_int >* solverState__6189 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               alloc__6190->FMGL(sz) =
                                                                                 sz__6186;
                                                                               alloc__6190->FMGL(cost) =
                                                                                 cost__6187;
                                                                               alloc__6190->FMGL(vector) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6190->FMGL(place) =
                                                                                 ((x10_int)0);
                                                                               alloc__6190->FMGL(solverState) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6190;
                                                                           }))
                                                                           ));
        }
    }
    
}
::cpls::SmartPool* cpls::SmartPool::_make(::cpls::entities::PoolConfig* poolConfig)
{
    ::cpls::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool();
    this_->_constructor(poolConfig);
    return this_;
}



//#line 39 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(x10_long sz, x10_int pSize,
                                   x10_long pMode, x10_double minDist) {
    
    //#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    FMGL(sz) = sz;
    FMGL(poolSize) = pSize;
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(poolMode) = pMode;
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(distance) = minDist;
    
    //#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_long i__6198;
        for (i__6198 = ((x10_long)0ll); ((i__6198) <= (((x10_long)2ll)));
             i__6198 = ((i__6198) + (((x10_long)1ll)))) {
            x10_long i__6199 = i__6198;
            
            //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__6199, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                           (__extension__ ({
                                                                               ::cpls::entities::State alloc__6197 =
                                                                                 
                                                                               ::cpls::entities::State::_alloc();
                                                                               
                                                                               //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/State.x10"
                                                                               x10_long sz__6193 =
                                                                                 sz;
                                                                               x10_long cost__6194 =
                                                                                 ((x10_long)(((x10_int)0)));
                                                                               ::x10::lang::Rail< x10_int >* vector__6195 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               ::x10::lang::Rail< x10_int >* solverState__6196 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               alloc__6197->FMGL(sz) =
                                                                                 sz__6193;
                                                                               alloc__6197->FMGL(cost) =
                                                                                 cost__6194;
                                                                               alloc__6197->FMGL(vector) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6197->FMGL(place) =
                                                                                 ((x10_int)0);
                                                                               alloc__6197->FMGL(solverState) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6197;
                                                                           }))
                                                                           ));
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



//#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::setSeed(x10_long seed) {
    
    //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(random) = (__extension__ ({
        ::x10::util::Random* alloc__2456 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        (alloc__2456)->::x10::util::Random::_constructor(
          seed);
        alloc__2456;
    }))
    ;
}

//#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::tryInsertConf(::cpls::entities::State inInfo) {
    
    //#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__1)))cpls_SmartPool__closure__1(this, inInfo))));
}

//#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::tryInsertConf0(::cpls::entities::State inInfo) {
    
    //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(poolMode), ((x10_long)1ll))))
    {
        
        //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        return this->smartInsert(inInfo);
        
    } else {
        
        //#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        return this->normalInsert(inInfo);
        
    }
    
}

//#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::entities::State cpls::SmartPool::insert(x10_int poolType,
                                                x10_double dist,
                                                ::cpls::entities::State inInfo) {
    
    //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_long worstConf = ((x10_long)-1ll);
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_long worstCost = (x10_long)0x8000000000000000LL;
    
    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                   ((x10_long)(poolType))),
                                 ((x10_int)0)))) {
        
        //#line 89 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                              ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
          ((x10_long)((((__extension__ ({
              ::x10::lang::Rail< x10_int >* a__2105 = this->FMGL(nbEntries);
              x10_long i0__2106 = ((x10_long)(poolType));
              x10_int r__2113 = ((a__2105->x10::lang::Rail< x10_int >::__apply(
                                    i0__2106)) + (((x10_int)1)));
              a__2105->x10::lang::Rail< x10_int >::__set(
                i0__2106, r__2113);
          }))
          ) - (((x10_int)1))))), inInfo);
        
        //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::entities::State alloc__6204 =  ::cpls::entities::State::_alloc();
        
        //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/State.x10"
        x10_long sz__6200 = this->FMGL(sz);
        x10_long cost__6201 = ((x10_long)(((x10_int)0)));
        ::x10::lang::Rail< x10_int >* vector__6202 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        ::x10::lang::Rail< x10_int >* solverState__6203 =
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        alloc__6204->FMGL(sz) = sz__6200;
        alloc__6204->FMGL(cost) = cost__6201;
        alloc__6204->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
        alloc__6204->FMGL(place) = ((x10_int)-1);
        alloc__6204->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
        
        //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        return alloc__6204;
        
    } else {
        
        //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)(poolType)))));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                x10_long thisCost = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                          ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                      ((x10_long)(i)))->FMGL(cost);
                
                //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                if (((::x10aux::struct_equals(thisCost, inInfo->FMGL(cost))) &&
                    (((__extension__ ({
                        ::cpls::SmartPool* t__2132 = this;
                        ::x10::lang::Rail< x10_int >* conf1__2133 =
                          inInfo->FMGL(vector);
                        ::x10::lang::Rail< x10_int >* conf2__2134 =
                          ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                            ((x10_long)(i)))->FMGL(vector);
                        if (!(((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf1__2133)->FMGL(size)),
                                                        ::x10aux::nullCheck(t__2132)->FMGL(sz))) &&
                            (::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(conf2__2134)->FMGL(size)),
                                                     ::x10aux::nullCheck(t__2132)->FMGL(sz))))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__6257 = ::x10aux::makeStringLit("!(conf1$2133.size == t$2132.sz && conf2$2134.size == t$2132.sz)"); strLit__6257; })))));
                        }
                        ::x10aux::nullCheck(t__2132)->distance(
                          conf1__2133, conf2__2134);
                    }))
                    ) < (dist)))) {
                    
                    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    ::cpls::entities::State alloc__6209 =
                       ::cpls::entities::State::_alloc();
                    
                    //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/State.x10"
                    x10_long sz__6205 = this->FMGL(sz);
                    x10_long cost__6206 = ((x10_long)(((x10_int)0)));
                    ::x10::lang::Rail< x10_int >* vector__6207 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    ::x10::lang::Rail< x10_int >* solverState__6208 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    alloc__6209->FMGL(sz) = sz__6205;
                    alloc__6209->FMGL(cost) = cost__6206;
                    alloc__6209->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                    alloc__6209->FMGL(place) = ((x10_int)-1);
                    alloc__6209->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                    
                    //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    return alloc__6209;
                    
                }
                
                //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                if (((thisCost) > (worstCost))) {
                    
                    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    worstCost = thisCost;
                    
                    //#line 101 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    worstConf = ((x10_long)(i));
                }
                
            }
        }
        
        //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        if ((((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                 ((x10_long)(poolType)))) < (this->FMGL(poolSize))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)((((__extension__ ({
                  ::x10::lang::Rail< x10_int >* a__2164 =
                    this->FMGL(nbEntries);
                  x10_long i0__2165 = ((x10_long)(poolType));
                  x10_int r__2172 = ((a__2164->x10::lang::Rail< x10_int >::__apply(
                                        i0__2165)) + (((x10_int)1)));
                  a__2164->x10::lang::Rail< x10_int >::__set(
                    i0__2165, r__2172);
              }))
              ) - (((x10_int)1))))), inInfo);
            
            //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::cpls::entities::State alloc__6214 =  ::cpls::entities::State::_alloc();
            
            //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/State.x10"
            x10_long sz__6210 = this->FMGL(sz);
            x10_long cost__6211 = ((x10_long)(((x10_int)0)));
            ::x10::lang::Rail< x10_int >* vector__6212 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            ::x10::lang::Rail< x10_int >* solverState__6213 =
              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            alloc__6214->FMGL(sz) = sz__6210;
            alloc__6214->FMGL(cost) = cost__6211;
            alloc__6214->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
            alloc__6214->FMGL(place) = ((x10_int)-1);
            alloc__6214->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
            
            //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            return alloc__6214;
            
        } else 
        //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        if ((((worstConf) >= (((x10_long)(((x10_int)0))))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::cpls::entities::State victim = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                   ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                               worstConf);
            
            //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)(((x10_int) (worstConf)))), inInfo);
            
            //#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            return victim;
            
        }
        
    }
    
    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::entities::State alloc__6219 =  ::cpls::entities::State::_alloc();
    
    //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/State.x10"
    x10_long sz__6215 = this->FMGL(sz);
    x10_long cost__6216 = ((x10_long)(((x10_int)0)));
    ::x10::lang::Rail< x10_int >* vector__6217 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    ::x10::lang::Rail< x10_int >* solverState__6218 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    alloc__6219->FMGL(sz) = sz__6215;
    alloc__6219->FMGL(cost) = cost__6216;
    alloc__6219->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
    alloc__6219->FMGL(place) = ((x10_int)-1);
    alloc__6219->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
    
    //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    return alloc__6219;
    
}

//#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::smartInsert(::cpls::entities::State inInfo) {
    
    //#line 136 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__2)))cpls_SmartPool__closure__2())));
    
    //#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::entities::State victimShort = this->insert(((x10_int)0),
                                                       0.3,
                                                       inInfo);
    
    //#line 140 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    if (((((x10_long)(victimShort->FMGL(place)))) >= (((x10_long)0ll))))
    {
        
        //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::entities::State victimMedium = this->insert(
                                                 ((x10_int)1),
                                                 0.6, victimShort);
        
        //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((((x10_long)(victimMedium->FMGL(place)))) >= (((x10_long)0ll))))
        {
            
            //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            this->insert(((x10_int)2), 0.9, victimMedium);
        }
        
    }
    
    //#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Unit alloc__6220 =  ::cpls::util::Unit::_alloc();
    return alloc__6220;
    
}

//#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::normalInsert(::cpls::entities::State inInfo) {
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__3)))cpls_SmartPool__closure__3())));
    
    //#line 162 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->insert(((x10_int)0), this->FMGL(distance), inInfo);
    
    //#line 163 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Unit alloc__6221 =  ::cpls::util::Unit::_alloc();
    return alloc__6221;
    
}

//#line 175 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
x10_double cpls::SmartPool::distance(::x10::lang::Rail< x10_int >* conf1,
                                     ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_int count = ((x10_int)0);
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_int i__2537max__6222 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__6223;
        for (i__6223 = ((x10_int)0); ((i__6223) <= (i__2537max__6222));
             i__6223 = ((i__6223) + (((x10_int)1)))) {
            x10_int i__6224 = i__6223;
            
            //#line 179 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__6224))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__6224))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 181 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    return dist;
    
}

//#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
x10_boolean cpls::SmartPool::compareVectors(::x10::lang::Rail< x10_int >* vec1,
                                            ::x10::lang::Rail< x10_int >* vec2) {
    
    //#line 187 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_long i__2553max__6225 = (((x10_long)(::x10aux::nullCheck(vec1)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6226;
        for (i__6226 = ((x10_long)0ll); ((i__6226) <= (i__2553max__6225));
             i__6226 = ((i__6226) + (((x10_long)1ll)))) {
            x10_long i__6227 = i__6226;
            
            //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(vec1)->x10::lang::Rail< x10_int >::__apply(
                                            i__6227), ::x10aux::nullCheck(vec2)->x10::lang::Rail< x10_int >::__apply(
                                                        i__6227))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 189 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    return true;
    
}

//#line 192 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::printVectors() {
    
    //#line 193 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_int i__6231;
        for (i__6231 = ((x10_int)0); ((i__6231) <= (((x10_int)2)));
             i__6231 = ((i__6231) + (((x10_int)1)))) {
            x10_int i__6232 = i__6231;
            
            //#line 194 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            x10_long i__2569max__6228 = ((((x10_long)(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                        ((x10_long)(i__6232)))))) - (((x10_long)1ll)));
            {
                x10_long i__6229;
                for (i__6229 = ((x10_long)0ll); ((i__6229) <= (i__2569max__6228));
                     i__6229 = ((i__6229) + (((x10_long)1ll))))
                {
                    x10_long j__6230 = i__6229;
                    
                    //#line 195 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((::x10aux::struct_equals(i__6232,
                                                                                                                                                                                           ((x10_int)2)))
                        ? ((__extension__ ({ static ::x10::lang::String* strLit__6271 = ::x10aux::makeStringLit("long "); strLit__6271; })))
                        : ((::x10aux::struct_equals(i__6232,
                                                    ((x10_int)1)))
                             ? ((__extension__ ({ static ::x10::lang::String* strLit__6272 = ::x10aux::makeStringLit("med "); strLit__6272; })))
                             : ((__extension__ ({ static ::x10::lang::String* strLit__6273 = ::x10aux::makeStringLit("short "); strLit__6273; })))), j__6230), (__extension__ ({ static ::x10::lang::String* strLit__6274 = ::x10aux::makeStringLit(". Cost = "); strLit__6274; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                            ((x10_long)(i__6232))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                        j__6230)->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__6277 = ::x10aux::makeStringLit(" place "); strLit__6277; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                          ((x10_long)(i__6232))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                      j__6230)->FMGL(place)));
                    
                    //#line 197 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__6280 = ::x10aux::makeStringLit(" Vector"); strLit__6280; })),
                                              ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                    ((x10_long)(i__6232))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                j__6230)->FMGL(vector));
                }
            }
            
        }
    }
    
}

//#line 204 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getPConf(
  ) {
    
    //#line 205 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__4)))cpls_SmartPool__closure__4(this))));
    
}

//#line 243 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getBestConf(
  ) {
    
    //#line 244 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__5)))cpls_SmartPool__closure__5(this))));
    
}

//#line 257 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::x10::lang::String* cpls::SmartPool::getCostList() {
    
    //#line 258 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::x10::util::StringBuilder* str =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (str)->::x10::util::StringBuilder::_constructor();
    
    //#line 260 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_long i__6242;
        for (i__6242 = ((x10_long)0ll); ((i__6242) <= (((x10_long)2ll)));
             i__6242 = ((i__6242) + (((x10_long)1ll)))) {
            x10_long j__6243 = i__6242;
            
            //#line 261 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
            x10_int i__2617max__6239 = ((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                           j__6243)) - (((x10_int)1)));
            {
                x10_int i__6240;
                for (i__6240 = ((x10_int)0); ((i__6240) <= (i__2617max__6239));
                     i__6240 = ((i__6240) + (((x10_int)1))))
                {
                    x10_int i__6241 = i__6240;
                    
                    //#line 262 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    str->add(::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                   j__6243))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                               ((x10_long)(i__6241)))->FMGL(cost));
                    
                    //#line 263 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
                    str->add((__extension__ ({ static ::x10::lang::String* strLit__6307 = ::x10aux::makeStringLit(" "); strLit__6307; })));
                }
            }
            
        }
    }
    
    //#line 266 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    return str->toString();
    
}

//#line 272 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::clear() {
    
    //#line 273 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__6)))cpls_SmartPool__closure__6(this))));
}

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::SmartPool* cpls::SmartPool::cpls__SmartPool____this__cpls__SmartPool(
  ) {
    return this;
    
}
void cpls::SmartPool::__fieldInitializers_cpls_SmartPool(
  ) {
    this->FMGL(nbEntries) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                ((x10_int)0));
    this->FMGL(pool) = ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::_make(((x10_long)3ll));
    this->FMGL(random) = (__extension__ ({
        
        //#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10::util::Random* alloc__2465 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        
        //#line 32 "/home/artica/bin/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
        (alloc__2465)->::x10::util::Random::_constructor(
          ::x10::lang::RuntimeNatives::nanoTime());
        alloc__2465;
    }))
    ;
    this->FMGL(monitor) = (__extension__ ({
        
        //#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Monitor* alloc__2466 =  (new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor());
        
        //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Monitor.x10"
        ::x10::lang::String* n__6248 = (__extension__ ({ static ::x10::lang::String* strLit__6308 = ::x10aux::makeStringLit("SmartPool"); strLit__6308; }));
        
        //#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2466->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
        
        //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2466->FMGL(name) = n__6248;
        alloc__2466;
    }))
    ;
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
