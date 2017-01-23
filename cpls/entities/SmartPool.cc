/*************************************************/
/* START of SmartPool */
#include <cpls/entities/SmartPool.h>

#include <x10/lang/Int.h>
#include <cpls/entities/State.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <x10/util/Random.h>
#include <cpls/util/Monitor.h>
#include <x10/lang/Boolean.h>
#include <cpls/util/Unit.h>
#include <x10/lang/Fun_0_0.h>
#include <cpls/util/Logger.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <cpls/util/Utils.h>
#include <cpls/util/Maybe.h>
#include <x10/util/StringBuilder.h>
#include <x10/compiler/Synthetic.h>
#include <x10/util/Timer.h>
#ifndef CPLS_ENTITIES_SMARTPOOL__CLOSURE__1_CLOSURE
#define CPLS_ENTITIES_SMARTPOOL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_entities_SmartPool__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_entities_SmartPool__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Unit __apply() {
        return saved_this->tryInsertConf0(inInfo);
        
    }
    
    // captured environment
    ::cpls::entities::SmartPool* saved_this;
    ::cpls::entities::State inInfo;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->inInfo);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_entities_SmartPool__closure__1* storage = ::x10aux::alloc_z<cpls_entities_SmartPool__closure__1>();
        buf.record_reference(storage);
        ::cpls::entities::SmartPool* that_saved_this = buf.read< ::cpls::entities::SmartPool*>();
        ::cpls::entities::State that_inInfo = buf.read< ::cpls::entities::State>();
        cpls_entities_SmartPool__closure__1* this_ = new (storage) cpls_entities_SmartPool__closure__1(that_saved_this, that_inInfo);
        return this_;
    }
    
    cpls_entities_SmartPool__closure__1(::cpls::entities::SmartPool* saved_this, ::cpls::entities::State inInfo) : saved_this(saved_this), inInfo(inInfo) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10:55";
    }

};

#endif // CPLS_ENTITIES_SMARTPOOL__CLOSURE__1_CLOSURE
#ifndef CPLS_ENTITIES_SMARTPOOL__CLOSURE__2_CLOSURE
#define CPLS_ENTITIES_SMARTPOOL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_entities_SmartPool__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_entities_SmartPool__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__6092 = ::x10aux::makeStringLit("Smart Pool: Smart Insert"); strLit__6092; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_entities_SmartPool__closure__2* storage = ::x10aux::alloc_z<cpls_entities_SmartPool__closure__2>();
        buf.record_reference(storage);
        cpls_entities_SmartPool__closure__2* this_ = new (storage) cpls_entities_SmartPool__closure__2();
        return this_;
    }
    
    cpls_entities_SmartPool__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10:132";
    }

};

#endif // CPLS_ENTITIES_SMARTPOOL__CLOSURE__2_CLOSURE
#ifndef CPLS_ENTITIES_SMARTPOOL__CLOSURE__3_CLOSURE
#define CPLS_ENTITIES_SMARTPOOL__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_entities_SmartPool__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_entities_SmartPool__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__6093 = ::x10aux::makeStringLit("Smart Pool: normal Insert"); strLit__6093; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_entities_SmartPool__closure__3* storage = ::x10aux::alloc_z<cpls_entities_SmartPool__closure__3>();
        buf.record_reference(storage);
        cpls_entities_SmartPool__closure__3* this_ = new (storage) cpls_entities_SmartPool__closure__3();
        return this_;
    }
    
    cpls_entities_SmartPool__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10:157";
    }

};

#endif // CPLS_ENTITIES_SMARTPOOL__CLOSURE__3_CLOSURE
#ifndef CPLS_ENTITIES_SMARTPOOL__CLOSURE__4_CLOSURE
#define CPLS_ENTITIES_SMARTPOOL__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_entities_SmartPool__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_entities_SmartPool__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Maybe< ::cpls::entities::State>* __apply() {
        
        //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        x10_int totalEn = ((((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((x10_int)0))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                  ((x10_long)(((x10_int)1))))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                      ((x10_long)(((x10_int)2))))));
        
        //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        if (((totalEn) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        x10_int index;
        
        //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        x10_int mem = ((x10_int)0);
        
        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        if (((((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                              ((x10_long)(((x10_int)0))))))) > (((x10_long)0ll))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(((x10_int)1))))))) > (((x10_long)0ll)))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(((x10_int)2))))))) > (((x10_long)0ll)))))
        {
            
            //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            x10_int pooln = ::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                              ((x10_int)10));
            
            //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            if (((pooln) < (((x10_int)5)))) {
                
                //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                mem = ((x10_int)0);
            } else 
            //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            if (((((x10_long)(pooln))) < (((x10_long)8ll))))
            {
                
                //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                mem = ((x10_int)1);
            } else {
                
                //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                mem = ((x10_int)2);
            }
            
            //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)(mem))))) + (((x10_int)1)));
        } else {
            
            //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        totalEn)) + (((x10_int)1)));
            
            //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            {
                for (mem = ((x10_int)0); ((index) > (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                       ((x10_long)(mem)))));
                     mem = ((mem) + (((x10_int)1)))) {
                    
                    //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    index = ((index) - (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                          ((x10_long)(mem)))));
                }
            }
            
        }
        
        //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* alloc__6062 =
           (new (::x10aux::alloc_z< ::cpls::util::Maybe< ::cpls::entities::State> >()) ::cpls::util::Maybe< ::cpls::entities::State>());
        
        //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Maybe.x10"
        ::cpls::entities::State t__6061 = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                ((x10_long)(mem))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                            ((((x10_long)(index))) - (((x10_long)1ll))));
        alloc__6062->FMGL(data) = t__6061;
        
        //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        return alloc__6062;
        
    }
    
    // captured environment
    ::cpls::entities::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_entities_SmartPool__closure__4* storage = ::x10aux::alloc_z<cpls_entities_SmartPool__closure__4>();
        buf.record_reference(storage);
        ::cpls::entities::SmartPool* that_saved_this = buf.read< ::cpls::entities::SmartPool*>();
        cpls_entities_SmartPool__closure__4* this_ = new (storage) cpls_entities_SmartPool__closure__4(that_saved_this);
        return this_;
    }
    
    cpls_entities_SmartPool__closure__4(::cpls::entities::SmartPool* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10:201-247";
    }

};

#endif // CPLS_ENTITIES_SMARTPOOL__CLOSURE__4_CLOSURE
#ifndef CPLS_ENTITIES_SMARTPOOL__CLOSURE__5_CLOSURE
#define CPLS_ENTITIES_SMARTPOOL__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_entities_SmartPool__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_entities_SmartPool__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Maybe< ::cpls::entities::State>* __apply() {
        
        //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        if (((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                ((x10_long)(((x10_int)0))))) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        x10_long bcost = (x10_long)0x7fffffffffffffffLL;
        
        //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        x10_long best = ((x10_long)-1ll);
        
        //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        x10_int i__2453max__6064 = ((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                       ((x10_long)(((x10_int)0))))) - (((x10_int)1)));
        {
            x10_int i__6065;
            for (i__6065 = ((x10_int)0); ((i__6065) <= (i__2453max__6064));
                 i__6065 = ((i__6065) + (((x10_int)1)))) {
                x10_int i__6066 = i__6065;
                
                //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                if (((::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                            ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                        ((x10_long)(i__6066)))->FMGL(cost)) < (bcost)))
                {
                    
                    //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    bcost = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                  ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                              ((x10_long)(i__6066)))->FMGL(cost);
                    
                    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    best = ((x10_long)(i__6066));
                }
                
            }
        }
        
        //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* alloc__6067 =
           (new (::x10aux::alloc_z< ::cpls::util::Maybe< ::cpls::entities::State> >()) ::cpls::util::Maybe< ::cpls::entities::State>());
        
        //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Maybe.x10"
        ::cpls::entities::State t__6063 = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                            best);
        alloc__6067->FMGL(data) = t__6063;
        
        //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        return alloc__6067;
        
    }
    
    // captured environment
    ::cpls::entities::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_entities_SmartPool__closure__5* storage = ::x10aux::alloc_z<cpls_entities_SmartPool__closure__5>();
        buf.record_reference(storage);
        ::cpls::entities::SmartPool* that_saved_this = buf.read< ::cpls::entities::SmartPool*>();
        cpls_entities_SmartPool__closure__5* this_ = new (storage) cpls_entities_SmartPool__closure__5(that_saved_this);
        return this_;
    }
    
    cpls_entities_SmartPool__closure__5(::cpls::entities::SmartPool* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10:254-265";
    }

};

#endif // CPLS_ENTITIES_SMARTPOOL__CLOSURE__5_CLOSURE
#ifndef CPLS_ENTITIES_SMARTPOOL__CLOSURE__6_CLOSURE
#define CPLS_ENTITIES_SMARTPOOL__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_entities_SmartPool__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_entities_SmartPool__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Unit __apply() {
        
        //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::x10::lang::Rail< x10_int >* rail__6073 = saved_this->FMGL(nbEntries);
        {
            x10_long i__6074;
            for (i__6074 = ((x10_long)0ll); ((i__6074) < (((x10_long)3ll)));
                 i__6074 = ((i__6074) + (((x10_long)1ll)))) {
                x10_long i__6075 = i__6074;
                
                //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__set(
                  i__6075, ((x10_int)0));
            }
        }
        
        //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::cpls::util::Unit alloc__6076 =  ::cpls::util::Unit::_alloc();
        return alloc__6076;
        
    }
    
    // captured environment
    ::cpls::entities::SmartPool* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_entities_SmartPool__closure__6* storage = ::x10aux::alloc_z<cpls_entities_SmartPool__closure__6>();
        buf.record_reference(storage);
        ::cpls::entities::SmartPool* that_saved_this = buf.read< ::cpls::entities::SmartPool*>();
        cpls_entities_SmartPool__closure__6* this_ = new (storage) cpls_entities_SmartPool__closure__6(that_saved_this);
        return this_;
    }
    
    cpls_entities_SmartPool__closure__6(::cpls::entities::SmartPool* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10:283-287";
    }

};

#endif // CPLS_ENTITIES_SMARTPOOL__CLOSURE__6_CLOSURE

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
x10_int cpls::entities::SmartPool::FMGL(HIGH);
void cpls::entities::SmartPool::FMGL(HIGH__do_init)() {
    FMGL(HIGH__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::entities::SmartPool.HIGH");
    x10_int __var0__ = ((x10_int)0);
    FMGL(HIGH) = __var0__;
    FMGL(HIGH__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::entities::SmartPool::FMGL(HIGH__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(HIGH__status), &FMGL(HIGH__do_init), &FMGL(HIGH__exception), "cpls::entities::SmartPool.HIGH");
    
}
volatile ::x10aux::StaticInitController::status cpls::entities::SmartPool::FMGL(HIGH__status);
::x10::lang::CheckedThrowable* cpls::entities::SmartPool::FMGL(HIGH__exception);

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
x10_int cpls::entities::SmartPool::FMGL(MEDIUM);
void cpls::entities::SmartPool::FMGL(MEDIUM__do_init)() {
    FMGL(MEDIUM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::entities::SmartPool.MEDIUM");
    x10_int __var1__ = ((x10_int)1);
    FMGL(MEDIUM) = __var1__;
    FMGL(MEDIUM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::entities::SmartPool::FMGL(MEDIUM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(MEDIUM__status), &FMGL(MEDIUM__do_init), &FMGL(MEDIUM__exception), "cpls::entities::SmartPool.MEDIUM");
    
}
volatile ::x10aux::StaticInitController::status cpls::entities::SmartPool::FMGL(MEDIUM__status);
::x10::lang::CheckedThrowable* cpls::entities::SmartPool::FMGL(MEDIUM__exception);

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
x10_int cpls::entities::SmartPool::FMGL(LOW);
void cpls::entities::SmartPool::FMGL(LOW__do_init)() {
    FMGL(LOW__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::entities::SmartPool.LOW");
    x10_int __var2__ = ((x10_int)2);
    FMGL(LOW) = __var2__;
    FMGL(LOW__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::entities::SmartPool::FMGL(LOW__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(LOW__status), &FMGL(LOW__do_init), &FMGL(LOW__exception), "cpls::entities::SmartPool.LOW");
    
}
volatile ::x10aux::StaticInitController::status cpls::entities::SmartPool::FMGL(LOW__status);
::x10::lang::CheckedThrowable* cpls::entities::SmartPool::FMGL(LOW__exception);

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
x10_long cpls::entities::SmartPool::FMGL(SMART);
void cpls::entities::SmartPool::FMGL(SMART__do_init)() {
    FMGL(SMART__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::entities::SmartPool.SMART");
    x10_long __var3__ = ((x10_long)1ll);
    FMGL(SMART) = __var3__;
    FMGL(SMART__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::entities::SmartPool::FMGL(SMART__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(SMART__status), &FMGL(SMART__do_init), &FMGL(SMART__exception), "cpls::entities::SmartPool.SMART");
    
}
volatile ::x10aux::StaticInitController::status cpls::entities::SmartPool::FMGL(SMART__status);
::x10::lang::CheckedThrowable* cpls::entities::SmartPool::FMGL(SMART__exception);

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
void cpls::entities::SmartPool::_constructor(x10_long sz, x10_int pSize, x10_long pMode,
                                             x10_double minDist) {
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    FMGL(sz) = sz;
    FMGL(poolSize) = pSize;
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->cpls::entities::SmartPool::__fieldInitializers_cpls_entities_SmartPool();
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->FMGL(poolMode) = pMode;
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->FMGL(distance) = minDist;
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    {
        x10_long i__6026;
        for (i__6026 = ((x10_long)0ll); ((i__6026) <= (((x10_long)2ll)));
             i__6026 = ((i__6026) + (((x10_long)1ll)))) {
            x10_long i__6027 = i__6026;
            
            //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__6027, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                           (__extension__ ({
                                                                               ::cpls::entities::State alloc__6025 =
                                                                                 
                                                                               ::cpls::entities::State::_alloc();
                                                                               
                                                                               //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
                                                                               x10_long sz__6021 =
                                                                                 sz;
                                                                               x10_long cost__6022 =
                                                                                 ((x10_long)(((x10_int)0)));
                                                                               ::x10::lang::Rail< x10_int >* vector__6023 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               ::x10::lang::Rail< x10_int >* solverState__6024 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               alloc__6025->FMGL(sz) =
                                                                                 sz__6021;
                                                                               alloc__6025->FMGL(cost) =
                                                                                 cost__6022;
                                                                               alloc__6025->FMGL(vector) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6025->FMGL(place) =
                                                                                 ((x10_int)0);
                                                                               alloc__6025->FMGL(solverState) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6025;
                                                                           }))
                                                                           ));
        }
    }
    
}
::cpls::entities::SmartPool* cpls::entities::SmartPool::_make(
  x10_long sz, x10_int pSize, x10_long pMode, x10_double minDist)
{
    ::cpls::entities::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::entities::SmartPool>()) ::cpls::entities::SmartPool();
    this_->_constructor(sz, pSize, pMode, minDist);
    return this_;
}



//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
void cpls::entities::SmartPool::setSeed(x10_long seed) {
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->FMGL(random) = (__extension__ ({
        ::x10::util::Random* alloc__2323 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        (alloc__2323)->::x10::util::Random::_constructor(
          seed);
        alloc__2323;
    }))
    ;
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
void cpls::entities::SmartPool::tryInsertConf(::cpls::entities::State inInfo) {
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_entities_SmartPool__closure__1)))cpls_entities_SmartPool__closure__1(this, inInfo))));
}

//#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::util::Unit cpls::entities::SmartPool::tryInsertConf0(
  ::cpls::entities::State inInfo) {
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(poolMode), ((x10_long)1ll))))
    {
        
        //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        return this->smartInsert(inInfo);
        
    } else {
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        return this->normalInsert(inInfo);
        
    }
    
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::entities::State cpls::entities::SmartPool::insert(
  x10_int poolType, x10_double dist, ::cpls::entities::State inInfo) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    x10_long worstConf = ((x10_long)-1ll);
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    x10_long worstCost = (x10_long)0x8000000000000000LL;
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                   ((x10_long)(poolType))),
                                 ((x10_int)0)))) {
        
        //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                              ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
          ((x10_long)((((__extension__ ({
              ::x10::lang::Rail< x10_int >* a__1979 = this->FMGL(nbEntries);
              x10_long i0__1980 = ((x10_long)(poolType));
              x10_int r__1987 = ((a__1979->x10::lang::Rail< x10_int >::__apply(
                                    i0__1980)) + (((x10_int)1)));
              a__1979->x10::lang::Rail< x10_int >::__set(
                i0__1980, r__1987);
          }))
          ) - (((x10_int)1))))), inInfo);
        
        //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::cpls::entities::State alloc__6032 =  ::cpls::entities::State::_alloc();
        
        //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
        x10_long sz__6028 = this->FMGL(sz);
        x10_long cost__6029 = ((x10_long)(((x10_int)0)));
        ::x10::lang::Rail< x10_int >* vector__6030 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        ::x10::lang::Rail< x10_int >* solverState__6031 =
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        alloc__6032->FMGL(sz) = sz__6028;
        alloc__6032->FMGL(cost) = cost__6029;
        alloc__6032->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
        alloc__6032->FMGL(place) = ((x10_int)-1);
        alloc__6032->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
        
        //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        return alloc__6032;
        
    } else {
        
        //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)(poolType)))));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                x10_long thisCost = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                          ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                      ((x10_long)(i)))->FMGL(cost);
                
                //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                if (((::x10aux::struct_equals(thisCost, inInfo->FMGL(cost))) &&
                    ((this->distance(inInfo->FMGL(vector),
                                     ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                           ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                       ((x10_long)(i)))->FMGL(vector))) < (dist))))
                {
                    
                    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    ::cpls::entities::State alloc__6037 =
                       ::cpls::entities::State::_alloc();
                    
                    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
                    x10_long sz__6033 = this->FMGL(sz);
                    x10_long cost__6034 = ((x10_long)(((x10_int)0)));
                    ::x10::lang::Rail< x10_int >* vector__6035 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    ::x10::lang::Rail< x10_int >* solverState__6036 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    alloc__6037->FMGL(sz) = sz__6033;
                    alloc__6037->FMGL(cost) = cost__6034;
                    alloc__6037->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                    alloc__6037->FMGL(place) = ((x10_int)-1);
                    alloc__6037->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                    
                    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    return alloc__6037;
                    
                }
                
                //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                if (((thisCost) > (worstCost))) {
                    
                    //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    worstCost = thisCost;
                    
                    //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    worstConf = ((x10_long)(i));
                }
                
            }
        }
        
        //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        if ((((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                 ((x10_long)(poolType)))) < (this->FMGL(poolSize))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)((((__extension__ ({
                  ::x10::lang::Rail< x10_int >* a__2032 =
                    this->FMGL(nbEntries);
                  x10_long i0__2033 = ((x10_long)(poolType));
                  x10_int r__2040 = ((a__2032->x10::lang::Rail< x10_int >::__apply(
                                        i0__2033)) + (((x10_int)1)));
                  a__2032->x10::lang::Rail< x10_int >::__set(
                    i0__2033, r__2040);
              }))
              ) - (((x10_int)1))))), inInfo);
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            ::cpls::entities::State alloc__6042 =  ::cpls::entities::State::_alloc();
            
            //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
            x10_long sz__6038 = this->FMGL(sz);
            x10_long cost__6039 = ((x10_long)(((x10_int)0)));
            ::x10::lang::Rail< x10_int >* vector__6040 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            ::x10::lang::Rail< x10_int >* solverState__6041 =
              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            alloc__6042->FMGL(sz) = sz__6038;
            alloc__6042->FMGL(cost) = cost__6039;
            alloc__6042->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
            alloc__6042->FMGL(place) = ((x10_int)-1);
            alloc__6042->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            return alloc__6042;
            
        } else 
        //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        if ((((worstConf) >= (((x10_long)(((x10_int)0))))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            ::cpls::entities::State victim = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                   ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                               worstConf);
            
            //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)(((x10_int) (worstConf)))), inInfo);
            
            //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            return victim;
            
        }
        
    }
    
    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::cpls::entities::State alloc__6047 =  ::cpls::entities::State::_alloc();
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
    x10_long sz__6043 = this->FMGL(sz);
    x10_long cost__6044 = ((x10_long)(((x10_int)0)));
    ::x10::lang::Rail< x10_int >* vector__6045 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    ::x10::lang::Rail< x10_int >* solverState__6046 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    alloc__6047->FMGL(sz) = sz__6043;
    alloc__6047->FMGL(cost) = cost__6044;
    alloc__6047->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
    alloc__6047->FMGL(place) = ((x10_int)-1);
    alloc__6047->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
    
    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    return alloc__6047;
    
}

//#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::util::Unit cpls::entities::SmartPool::smartInsert(
  ::cpls::entities::State inInfo) {
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_entities_SmartPool__closure__2)))cpls_entities_SmartPool__closure__2())));
    
    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::cpls::entities::State victimShort = this->insert(((void)(this),::cpls::entities::SmartPool::FMGL(HIGH__get)()),
                                                       0.3,
                                                       inInfo);
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    if (((((x10_long)(victimShort->FMGL(place)))) >= (((x10_long)0ll))))
    {
        
        //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::cpls::entities::State victimMedium = this->insert(
                                                 ((void)(this),::cpls::entities::SmartPool::FMGL(MEDIUM__get)()),
                                                 0.6, victimShort);
        
        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        if (((((x10_long)(victimMedium->FMGL(place)))) >= (((x10_long)0ll))))
        {
            
            //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            this->insert(((void)(this),::cpls::entities::SmartPool::FMGL(LOW__get)()),
                         0.9, victimMedium);
        }
        
    }
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::cpls::util::Unit alloc__6048 =  ::cpls::util::Unit::_alloc();
    return alloc__6048;
    
}

//#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::util::Unit cpls::entities::SmartPool::normalInsert(
  ::cpls::entities::State inInfo) {
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_entities_SmartPool__closure__3)))cpls_entities_SmartPool__closure__3())));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->insert(((x10_int)0), this->FMGL(distance), inInfo);
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::cpls::util::Unit alloc__6049 =  ::cpls::util::Unit::_alloc();
    return alloc__6049;
    
}

//#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
x10_double cpls::entities::SmartPool::distance(::x10::lang::Rail< x10_int >* conf1,
                                               ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    x10_int count = ((x10_int)0);
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    x10_int i__2389max__6050 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__6051;
        for (i__6051 = ((x10_int)0); ((i__6051) <= (i__2389max__6050));
             i__6051 = ((i__6051) + (((x10_int)1)))) {
            x10_int i__6052 = i__6051;
            
            //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__6052))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__6052))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    return dist;
    
}

//#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
x10_boolean cpls::entities::SmartPool::compareVectors(::x10::lang::Rail< x10_int >* vec1,
                                                      ::x10::lang::Rail< x10_int >* vec2) {
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    x10_long i__2405max__6053 = (((x10_long)(::x10aux::nullCheck(vec1)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6054;
        for (i__6054 = ((x10_long)0ll); ((i__6054) <= (i__2405max__6053));
             i__6054 = ((i__6054) + (((x10_long)1ll)))) {
            x10_long i__6055 = i__6054;
            
            //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(vec1)->x10::lang::Rail< x10_int >::__apply(
                                            i__6055), ::x10aux::nullCheck(vec2)->x10::lang::Rail< x10_int >::__apply(
                                                        i__6055))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    return true;
    
}

//#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
void cpls::entities::SmartPool::printVectors() {
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    {
        x10_int i__6059;
        for (i__6059 = ((x10_int)0); ((i__6059) <= (((x10_int)2)));
             i__6059 = ((i__6059) + (((x10_int)1)))) {
            x10_int i__6060 = i__6059;
            
            //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            x10_long i__2421max__6056 = ((((x10_long)(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                        ((x10_long)(i__6060)))))) - (((x10_long)1ll)));
            {
                x10_long i__6057;
                for (i__6057 = ((x10_long)0ll); ((i__6057) <= (i__2421max__6056));
                     i__6057 = ((i__6057) + (((x10_long)1ll))))
                {
                    x10_long j__6058 = i__6057;
                    
                    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((::x10aux::struct_equals(i__6060,
                                                                                                                                                                                           ((x10_int)2)))
                        ? ((__extension__ ({ static ::x10::lang::String* strLit__6099 = ::x10aux::makeStringLit("long "); strLit__6099; })))
                        : ((::x10aux::struct_equals(i__6060,
                                                    ((x10_int)1)))
                             ? ((__extension__ ({ static ::x10::lang::String* strLit__6100 = ::x10aux::makeStringLit("med "); strLit__6100; })))
                             : ((__extension__ ({ static ::x10::lang::String* strLit__6101 = ::x10aux::makeStringLit("short "); strLit__6101; })))), j__6058), (__extension__ ({ static ::x10::lang::String* strLit__6102 = ::x10aux::makeStringLit(". Cost = "); strLit__6102; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                            ((x10_long)(i__6060))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                        j__6058)->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__6105 = ::x10aux::makeStringLit(" place "); strLit__6105; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                          ((x10_long)(i__6060))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                      j__6058)->FMGL(place)));
                    
                    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__6108 = ::x10aux::makeStringLit(" Vector"); strLit__6108; })),
                                              ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                    ((x10_long)(i__6060))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                j__6058)->FMGL(vector));
                }
            }
            
        }
    }
    
}

//#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::entities::SmartPool::getPConf(
  ) {
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_entities_SmartPool__closure__4)))cpls_entities_SmartPool__closure__4(this))));
    
}

//#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::entities::SmartPool::getBestConf(
  ) {
    
    //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_entities_SmartPool__closure__5)))cpls_entities_SmartPool__closure__5(this))));
    
}

//#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::x10::lang::String* cpls::entities::SmartPool::getCostList(
  ) {
    
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    ::x10::util::StringBuilder* str =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (str)->::x10::util::StringBuilder::_constructor();
    
    //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    {
        x10_long i__6071;
        for (i__6071 = ((x10_long)0ll); ((i__6071) <= (((x10_long)2ll)));
             i__6071 = ((i__6071) + (((x10_long)1ll)))) {
            x10_long j__6072 = i__6071;
            
            //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
            x10_int i__2469max__6068 = ((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                           j__6072)) - (((x10_int)1)));
            {
                x10_int i__6069;
                for (i__6069 = ((x10_int)0); ((i__6069) <= (i__2469max__6068));
                     i__6069 = ((i__6069) + (((x10_int)1))))
                {
                    x10_int i__6070 = i__6069;
                    
                    //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    str->add(::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                   j__6072))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                               ((x10_long)(i__6070)))->FMGL(cost));
                    
                    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
                    str->add((__extension__ ({ static ::x10::lang::String* strLit__6135 = ::x10aux::makeStringLit(" "); strLit__6135; })));
                }
            }
            
        }
    }
    
    //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    return str->toString();
    
}

//#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
void cpls::entities::SmartPool::clear() {
    
    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_entities_SmartPool__closure__6)))cpls_entities_SmartPool__closure__6(this))));
}

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
::cpls::entities::SmartPool* cpls::entities::SmartPool::cpls__entities__SmartPool____this__cpls__entities__SmartPool(
  ) {
    return this;
    
}
void cpls::entities::SmartPool::__fieldInitializers_cpls_entities_SmartPool(
  ) {
    this->FMGL(nbEntries) = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                ((x10_int)0));
    this->FMGL(pool) = ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::_make(((x10_long)3ll));
    this->FMGL(random) = (__extension__ ({
        
        //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::x10::util::Random* alloc__2333 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        
        //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
        (alloc__2333)->::x10::util::Random::_constructor(
          ::x10::lang::RuntimeNatives::nanoTime());
        alloc__2333;
    }))
    ;
    this->FMGL(monitor) = (__extension__ ({
        
        //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/SmartPool.x10"
        ::cpls::util::Monitor* alloc__2334 =  (new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor());
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        ::x10::lang::String* n__6077 = (__extension__ ({ static ::x10::lang::String* strLit__6136 = ::x10aux::makeStringLit("SmartPool"); strLit__6136; }));
        
        //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2334->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2334->FMGL(name) = n__6077;
        alloc__2334;
    }))
    ;
    this->FMGL(distance) = 0.0;
}
const ::x10aux::serialization_id_t cpls::entities::SmartPool::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::SmartPool::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::SmartPool::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nbEntries));
    buf.write(this->FMGL(pool));
    buf.write(this->FMGL(poolMode));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(monitor));
    buf.write(this->FMGL(distance));
    buf.write(this->FMGL(sz));
    buf.write(this->FMGL(poolSize));
    
}

::x10::lang::Reference* ::cpls::entities::SmartPool::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::entities::SmartPool>()) ::cpls::entities::SmartPool();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::SmartPool::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nbEntries) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(pool) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >*>();
    FMGL(poolMode) = buf.read<x10_long>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(monitor) = buf.read< ::cpls::util::Monitor*>();
    FMGL(distance) = buf.read<x10_double>();
    FMGL(sz) = buf.read<x10_long>();
    FMGL(poolSize) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::entities::SmartPool::rtt;
void cpls::entities::SmartPool::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.SmartPool",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_entities_SmartPool__closure__1>cpls_entities_SmartPool__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_entities_SmartPool__closure__1::__apply, &cpls_entities_SmartPool__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_entities_SmartPool__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >, &cpls_entities_SmartPool__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_entities_SmartPool__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_entities_SmartPool__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_entities_SmartPool__closure__2>cpls_entities_SmartPool__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_entities_SmartPool__closure__2::__apply, &cpls_entities_SmartPool__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_entities_SmartPool__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_entities_SmartPool__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_entities_SmartPool__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_entities_SmartPool__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_entities_SmartPool__closure__3>cpls_entities_SmartPool__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_entities_SmartPool__closure__3::__apply, &cpls_entities_SmartPool__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_entities_SmartPool__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_entities_SmartPool__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_entities_SmartPool__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_entities_SmartPool__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_entities_SmartPool__closure__4>cpls_entities_SmartPool__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_entities_SmartPool__closure__4::__apply, &cpls_entities_SmartPool__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_entities_SmartPool__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >, &cpls_entities_SmartPool__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_entities_SmartPool__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_entities_SmartPool__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>::itable<cpls_entities_SmartPool__closure__5>cpls_entities_SmartPool__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_entities_SmartPool__closure__5::__apply, &cpls_entities_SmartPool__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_entities_SmartPool__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >, &cpls_entities_SmartPool__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_entities_SmartPool__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_entities_SmartPool__closure__5::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_entities_SmartPool__closure__6>cpls_entities_SmartPool__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_entities_SmartPool__closure__6::__apply, &cpls_entities_SmartPool__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_entities_SmartPool__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >, &cpls_entities_SmartPool__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_entities_SmartPool__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_entities_SmartPool__closure__6::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of SmartPool */
/*************************************************/
