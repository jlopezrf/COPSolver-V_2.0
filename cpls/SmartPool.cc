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
#include <cpls/util/Logger.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <cpls/util/Utils.h>
#include <cpls/util/Maybe.h>
#include <x10/lang/Any.h>
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
        return saved_this->tryInsertConf0(info);
        
    }
    
    // captured environment
    ::cpls::SmartPool* saved_this;
    ::cpls::entities::State info;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->info);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_SmartPool__closure__1* storage = ::x10aux::alloc_z<cpls_SmartPool__closure__1>();
        buf.record_reference(storage);
        ::cpls::SmartPool* that_saved_this = buf.read< ::cpls::SmartPool*>();
        ::cpls::entities::State that_info = buf.read< ::cpls::entities::State>();
        cpls_SmartPool__closure__1* this_ = new (storage) cpls_SmartPool__closure__1(that_saved_this, that_info);
        return this_;
    }
    
    cpls_SmartPool__closure__1(::cpls::SmartPool* saved_this, ::cpls::entities::State info) : saved_this(saved_this), info(info) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10:61";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__6184 = ::x10aux::makeStringLit("Smart Pool: Smart Insert"); strLit__6184; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10:160";
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
        return (__extension__ ({ static ::x10::lang::String* strLit__6185 = ::x10aux::makeStringLit("Smart Pool: normal Insert"); strLit__6185; }));
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10:186";
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
        
        //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int totalEn = ((((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((x10_int)0))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                  ((x10_long)(((x10_int)1))))))) + (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                                                                      ((x10_long)(((x10_int)2))))));
        
        //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((totalEn) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int index;
        
        //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int mem = ((x10_int)0);
        
        //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                              ((x10_long)(((x10_int)0))))))) > (((x10_long)0ll))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(((x10_int)1))))))) > (((x10_long)0ll)))) &&
            ((((x10_long)(saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                            ((x10_long)(((x10_int)2))))))) > (((x10_long)0ll)))))
        {
            
            //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            x10_int pooln = ::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                              ((x10_int)10));
            
            //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            if (((pooln) < (((x10_int)5)))) {
                
                //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                mem = ((x10_int)0);
            } else 
            //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            if (((((x10_long)(pooln))) < (((x10_long)8ll))))
            {
                
                //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                mem = ((x10_int)1);
            } else {
                
                //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                mem = ((x10_int)2);
            }
            
            //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)(mem))))) + (((x10_int)1)));
        } else {
            
            //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            index = ((::x10aux::nullCheck(saved_this->FMGL(random))->nextInt(
                        totalEn)) + (((x10_int)1)));
            
            //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            {
                for (mem = ((x10_int)0); ((index) > (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                       ((x10_long)(mem)))));
                     mem = ((mem) + (((x10_int)1)))) {
                    
                    //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    index = ((index) - (saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                          ((x10_long)(mem)))));
                }
            }
            
        }
        
        //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* aux =
           (new (::x10aux::alloc_z< ::cpls::util::Maybe< ::cpls::entities::State> >()) ::cpls::util::Maybe< ::cpls::entities::State>());
        
        //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Maybe.x10"
        ::cpls::entities::State t__6154 = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                ((x10_long)(mem))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                            ((((x10_long)(index))) - (((x10_long)1ll))));
        ::x10aux::nullCheck(aux)->FMGL(data) = t__6154;
        
        //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10:232-268";
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
        
        //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__6214 = ::x10aux::makeStringLit("Llega adentro de getBestConf de smartPool."); strLit__6214; }))));
        
        //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                ((x10_long)(((x10_int)0))))) < (((x10_int)1)))) {
            return ::x10aux::class_cast_unchecked< ::cpls::util::Maybe< ::cpls::entities::State>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            
        }
        
        //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_long bcost = (x10_long)0x7fffffffffffffffLL;
        
        //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_long best = ((x10_long)-1ll);
        
        //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        x10_int i__2531max__6156 = ((saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                       ((x10_long)(((x10_int)0))))) - (((x10_int)1)));
        {
            x10_int i__6157;
            for (i__6157 = ((x10_int)0); ((i__6157) <= (i__2531max__6156));
                 i__6157 = ((i__6157) + (((x10_int)1)))) {
                x10_int i__6158 = i__6157;
                
                //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                if (((::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                            ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                        ((x10_long)(i__6158)))->FMGL(cost)) < (bcost)))
                {
                    
                    //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    bcost = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                  ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                              ((x10_long)(i__6158)))->FMGL(cost);
                    
                    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    best = ((x10_long)(i__6158));
                }
                
            }
        }
        
        //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Maybe< ::cpls::entities::State>* alloc__6159 =
           (new (::x10aux::alloc_z< ::cpls::util::Maybe< ::cpls::entities::State> >()) ::cpls::util::Maybe< ::cpls::entities::State>());
        
        //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Maybe.x10"
        ::cpls::entities::State t__6155 = ::x10aux::nullCheck(saved_this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                ((x10_long)(((x10_int)0)))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                            best);
        alloc__6159->FMGL(data) = t__6155;
        
        //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        return alloc__6159;
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10:275-287";
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
        
        //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10::lang::Rail< x10_int >* rail__6165 = saved_this->FMGL(nbEntries);
        {
            x10_long i__6166;
            for (i__6166 = ((x10_long)0ll); ((i__6166) < (((x10_long)3ll)));
                 i__6166 = ((i__6166) + (((x10_long)1ll)))) {
                x10_long i__6167 = i__6166;
                
                //#line 307 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                saved_this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__set(
                  i__6167, ((x10_int)0));
            }
        }
        
        //#line 308 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Unit alloc__6168 =  ::cpls::util::Unit::_alloc();
        return alloc__6168;
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10:305-309";
    }

};

#endif // CPLS_SMARTPOOL__CLOSURE__6_CLOSURE

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(x10_long size, ::cpls::entities::PoolConfig* poolConfig) {
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    FMGL(sz) = size;
    FMGL(poolSize) = ::x10aux::nullCheck(poolConfig)->getPoolSize();
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(poolMode) = ((x10_long)(::x10aux::nullCheck(poolConfig)->getPoolMode()));
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(distance) = ::x10aux::nullCheck(poolConfig)->getMinDist();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_long i__6112;
        for (i__6112 = ((x10_long)0ll); ((i__6112) <= (((x10_long)2ll)));
             i__6112 = ((i__6112) + (((x10_long)1ll)))) {
            x10_long i__6113 = i__6112;
            
            //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__6113, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                           (__extension__ ({
                                                                               ::cpls::entities::State alloc__6111 =
                                                                                 
                                                                               ::cpls::entities::State::_alloc();
                                                                               
                                                                               //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
                                                                               x10_long sz__6107 =
                                                                                 this->FMGL(sz);
                                                                               x10_long cost__6108 =
                                                                                 ((x10_long)(((x10_int)0)));
                                                                               ::x10::lang::Rail< x10_int >* vector__6109 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               ::x10::lang::Rail< x10_int >* solverState__6110 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               alloc__6111->FMGL(sz) =
                                                                                 sz__6107;
                                                                               alloc__6111->FMGL(cost) =
                                                                                 cost__6108;
                                                                               alloc__6111->FMGL(vector) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6111->FMGL(place) =
                                                                                 ((x10_int)0);
                                                                               alloc__6111->FMGL(solverState) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6111;
                                                                           }))
                                                                           ));
        }
    }
    
}
::cpls::SmartPool* cpls::SmartPool::_make(x10_long size, ::cpls::entities::PoolConfig* poolConfig)
{
    ::cpls::SmartPool* this_ = new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool();
    this_->_constructor(size, poolConfig);
    return this_;
}



//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::_constructor(x10_long sz, x10_int pSize,
                                   x10_long pMode, x10_double minDist) {
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    FMGL(sz) = sz;
    FMGL(poolSize) = pSize;
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->cpls::SmartPool::__fieldInitializers_cpls_SmartPool();
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(poolMode) = pMode;
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(distance) = minDist;
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_long i__6119;
        for (i__6119 = ((x10_long)0ll); ((i__6119) <= (((x10_long)2ll)));
             i__6119 = ((i__6119) + (((x10_long)1ll)))) {
            x10_long i__6120 = i__6119;
            
            //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__set(
              i__6120, ::x10::lang::Rail< ::cpls::entities::State >::_make(((x10_long)(this->FMGL(poolSize))),
                                                                           (__extension__ ({
                                                                               ::cpls::entities::State alloc__6118 =
                                                                                 
                                                                               ::cpls::entities::State::_alloc();
                                                                               
                                                                               //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
                                                                               x10_long sz__6114 =
                                                                                 sz;
                                                                               x10_long cost__6115 =
                                                                                 ((x10_long)(((x10_int)0)));
                                                                               ::x10::lang::Rail< x10_int >* vector__6116 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               ::x10::lang::Rail< x10_int >* solverState__6117 =
                                                                                 ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                                                                               alloc__6118->FMGL(sz) =
                                                                                 sz__6114;
                                                                               alloc__6118->FMGL(cost) =
                                                                                 cost__6115;
                                                                               alloc__6118->FMGL(vector) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6118->FMGL(place) =
                                                                                 ((x10_int)0);
                                                                               alloc__6118->FMGL(solverState) =
                                                                                 (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                                                                               alloc__6118;
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



//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::setSeed(x10_long seed) {
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(random) = (__extension__ ({
        ::x10::util::Random* alloc__2386 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        (alloc__2386)->::x10::util::Random::_constructor(
          seed);
        alloc__2386;
    }))
    ;
}

//#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::tryInsertConf(::cpls::entities::State info) {
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__1)))cpls_SmartPool__closure__1(this, info))));
}

//#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::tryInsertConf0(::cpls::entities::State info) {
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(poolMode), ((x10_long)1ll))))
    {
        
        //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        return this->smartInsert(info);
        
    } else {
        
        //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        return this->normalInsert(info);
        
    }
    
}

//#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::entities::State cpls::SmartPool::insert(x10_int poolType,
                                                x10_double dist,
                                                ::cpls::entities::State inInfo) {
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_long worstConf = ((x10_long)-1ll);
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_long worstCost = (x10_long)0x8000000000000000LL;
    
    //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    if ((::x10aux::struct_equals(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                   ((x10_long)(poolType))),
                                 ((x10_int)0)))) {
        
        //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                              ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
          ((x10_long)((((__extension__ ({
              ::x10::lang::Rail< x10_int >* a__2041 = this->FMGL(nbEntries);
              x10_long i0__2042 = ((x10_long)(poolType));
              x10_int r__2049 = ((a__2041->x10::lang::Rail< x10_int >::__apply(
                                    i0__2042)) + (((x10_int)1)));
              a__2041->x10::lang::Rail< x10_int >::__set(
                i0__2042, r__2049);
          }))
          ) - (((x10_int)1))))), inInfo);
        
        //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::entities::State alloc__6125 =  ::cpls::entities::State::_alloc();
        
        //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
        x10_long sz__6121 = this->FMGL(sz);
        x10_long cost__6122 = ((x10_long)(((x10_int)0)));
        ::x10::lang::Rail< x10_int >* vector__6123 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        ::x10::lang::Rail< x10_int >* solverState__6124 =
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        alloc__6125->FMGL(sz) = sz__6121;
        alloc__6125->FMGL(cost) = cost__6122;
        alloc__6125->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
        alloc__6125->FMGL(place) = ((x10_int)-1);
        alloc__6125->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
        
        //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        return alloc__6125;
        
    } else {
        
        //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                             ((x10_long)(poolType)))));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                x10_long thisCost = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                          ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                      ((x10_long)(i)))->FMGL(cost);
                
                //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                if (((::x10aux::struct_equals(thisCost, inInfo->FMGL(cost))) &&
                    ((this->distance(inInfo->FMGL(vector),
                                     ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                           ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                       ((x10_long)(i)))->FMGL(vector))) < (dist))))
                {
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    ::cpls::entities::State alloc__6130 =
                       ::cpls::entities::State::_alloc();
                    
                    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
                    x10_long sz__6126 = this->FMGL(sz);
                    x10_long cost__6127 = ((x10_long)(((x10_int)0)));
                    ::x10::lang::Rail< x10_int >* vector__6128 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    ::x10::lang::Rail< x10_int >* solverState__6129 =
                      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                    alloc__6130->FMGL(sz) = sz__6126;
                    alloc__6130->FMGL(cost) = cost__6127;
                    alloc__6130->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                    alloc__6130->FMGL(place) = ((x10_int)-1);
                    alloc__6130->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
                    
                    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    return alloc__6130;
                    
                }
                
                //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                if (((thisCost) > (worstCost))) {
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    worstCost = thisCost;
                    
                    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    worstConf = ((x10_long)(i));
                }
                
            }
        }
        
        //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        if ((((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                 ((x10_long)(poolType)))) < (this->FMGL(poolSize))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)((((__extension__ ({
                  ::x10::lang::Rail< x10_int >* a__2094 =
                    this->FMGL(nbEntries);
                  x10_long i0__2095 = ((x10_long)(poolType));
                  x10_int r__2102 = ((a__2094->x10::lang::Rail< x10_int >::__apply(
                                        i0__2095)) + (((x10_int)1)));
                  a__2094->x10::lang::Rail< x10_int >::__set(
                    i0__2095, r__2102);
              }))
              ) - (((x10_int)1))))), inInfo);
            
            //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::cpls::entities::State alloc__6135 =  ::cpls::entities::State::_alloc();
            
            //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
            x10_long sz__6131 = this->FMGL(sz);
            x10_long cost__6132 = ((x10_long)(((x10_int)0)));
            ::x10::lang::Rail< x10_int >* vector__6133 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            ::x10::lang::Rail< x10_int >* solverState__6134 =
              ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
            alloc__6135->FMGL(sz) = sz__6131;
            alloc__6135->FMGL(cost) = cost__6132;
            alloc__6135->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
            alloc__6135->FMGL(place) = ((x10_int)-1);
            alloc__6135->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
            
            //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            return alloc__6135;
            
        } else 
        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        if ((((worstConf) >= (((x10_long)(((x10_int)0))))) &&
            ((inInfo->FMGL(cost)) < (worstCost)))) {
            
            //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::cpls::entities::State victim = ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                   ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                               worstConf);
            
            //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                  ((x10_long)(poolType))))->x10::lang::Rail< ::cpls::entities::State >::__set(
              ((x10_long)(((x10_int) (worstConf)))), inInfo);
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            return victim;
            
        }
        
    }
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::entities::State alloc__6140 =  ::cpls::entities::State::_alloc();
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/State.x10"
    x10_long sz__6136 = this->FMGL(sz);
    x10_long cost__6137 = ((x10_long)(((x10_int)0)));
    ::x10::lang::Rail< x10_int >* vector__6138 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    ::x10::lang::Rail< x10_int >* solverState__6139 = ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    alloc__6140->FMGL(sz) = sz__6136;
    alloc__6140->FMGL(cost) = cost__6137;
    alloc__6140->FMGL(vector) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
    alloc__6140->FMGL(place) = ((x10_int)-1);
    alloc__6140->FMGL(solverState) = (reinterpret_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Rail< x10_int >*>(X10_NULL)));
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    return alloc__6140;
    
}

//#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::smartInsert(::cpls::entities::State inInfo) {
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__2)))cpls_SmartPool__closure__2())));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::entities::State victimShort = this->insert(((x10_int)0),
                                                       0.3,
                                                       inInfo);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    if (((((x10_long)(victimShort->FMGL(place)))) >= (((x10_long)0ll))))
    {
        
        //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::entities::State victimMedium = this->insert(
                                                 ((x10_int)1),
                                                 0.6, victimShort);
        
        //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        if (((((x10_long)(victimMedium->FMGL(place)))) >= (((x10_long)0ll))))
        {
            
            //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            this->insert(((x10_int)2), 0.9, victimMedium);
        }
        
    }
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Unit alloc__6141 =  ::cpls::util::Unit::_alloc();
    return alloc__6141;
    
}

//#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Unit cpls::SmartPool::normalInsert(::cpls::entities::State inInfo) {
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_SmartPool__closure__3)))cpls_SmartPool__closure__3())));
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->insert(((x10_int)0), this->FMGL(distance), inInfo);
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::cpls::util::Unit alloc__6142 =  ::cpls::util::Unit::_alloc();
    return alloc__6142;
    
}

//#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
x10_double cpls::SmartPool::distance(::x10::lang::Rail< x10_int >* conf1,
                                     ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_int count = ((x10_int)0);
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_int i__2467max__6143 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__6144;
        for (i__6144 = ((x10_int)0); ((i__6144) <= (i__2467max__6143));
             i__6144 = ((i__6144) + (((x10_int)1)))) {
            x10_int i__6145 = i__6144;
            
            //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__6145))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__6145))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    return dist;
    
}

//#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
x10_boolean cpls::SmartPool::compareVectors(::x10::lang::Rail< x10_int >* vec1,
                                            ::x10::lang::Rail< x10_int >* vec2) {
    
    //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    x10_long i__2483max__6146 = (((x10_long)(::x10aux::nullCheck(vec1)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__6147;
        for (i__6147 = ((x10_long)0ll); ((i__6147) <= (i__2483max__6146));
             i__6147 = ((i__6147) + (((x10_long)1ll)))) {
            x10_long i__6148 = i__6147;
            
            //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(vec1)->x10::lang::Rail< x10_int >::__apply(
                                            i__6148), ::x10aux::nullCheck(vec2)->x10::lang::Rail< x10_int >::__apply(
                                                        i__6148))))
            {
                return false;
                
            }
            
        }
    }
    
    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    return true;
    
}

//#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::printVectors() {
    
    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_int i__6152;
        for (i__6152 = ((x10_int)0); ((i__6152) <= (((x10_int)2)));
             i__6152 = ((i__6152) + (((x10_int)1)))) {
            x10_int i__6153 = i__6152;
            
            //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            x10_long i__2499max__6149 = ((((x10_long)(this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                                        ((x10_long)(i__6153)))))) - (((x10_long)1ll)));
            {
                x10_long i__6150;
                for (i__6150 = ((x10_long)0ll); ((i__6150) <= (i__2499max__6149));
                     i__6150 = ((i__6150) + (((x10_long)1ll))))
                {
                    x10_long j__6151 = i__6150;
                    
                    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((::x10aux::struct_equals(i__6153,
                                                                                                                                                                                           ((x10_int)2)))
                        ? ((__extension__ ({ static ::x10::lang::String* strLit__6191 = ::x10aux::makeStringLit("long "); strLit__6191; })))
                        : ((::x10aux::struct_equals(i__6153,
                                                    ((x10_int)1)))
                             ? ((__extension__ ({ static ::x10::lang::String* strLit__6192 = ::x10aux::makeStringLit("med "); strLit__6192; })))
                             : ((__extension__ ({ static ::x10::lang::String* strLit__6193 = ::x10aux::makeStringLit("short "); strLit__6193; })))), j__6151), (__extension__ ({ static ::x10::lang::String* strLit__6194 = ::x10aux::makeStringLit(". Cost = "); strLit__6194; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                            ((x10_long)(i__6153))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                        j__6151)->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__6197 = ::x10aux::makeStringLit(" place "); strLit__6197; }))), ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                          ((x10_long)(i__6153))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                      j__6151)->FMGL(place)));
                    
                    //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__6200 = ::x10aux::makeStringLit(" Vector"); strLit__6200; })),
                                              ::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                                    ((x10_long)(i__6153))))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                                                j__6151)->FMGL(vector));
                }
            }
            
        }
    }
    
}

//#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getPConf(
  ) {
    
    //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__4)))cpls_SmartPool__closure__4(this))));
    
}

//#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::cpls::util::Maybe< ::cpls::entities::State>* cpls::SmartPool::getBestConf(
  ) {
    
    //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    return this->FMGL(monitor)->atomicBlock< ::cpls::util::Maybe< ::cpls::entities::State>* >(
             reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Maybe< ::cpls::entities::State>*> >(sizeof(cpls_SmartPool__closure__5)))cpls_SmartPool__closure__5(this))));
    
}

//#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
::x10::lang::String* cpls::SmartPool::getCostList() {
    
    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    ::x10::util::StringBuilder* str =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (str)->::x10::util::StringBuilder::_constructor();
    
    //#line 292 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    {
        x10_long i__6163;
        for (i__6163 = ((x10_long)0ll); ((i__6163) <= (((x10_long)2ll)));
             i__6163 = ((i__6163) + (((x10_long)1ll)))) {
            x10_long j__6164 = i__6163;
            
            //#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
            x10_int i__2547max__6160 = ((this->FMGL(nbEntries)->x10::lang::Rail< x10_int >::__apply(
                                           j__6164)) - (((x10_int)1)));
            {
                x10_int i__6161;
                for (i__6161 = ((x10_int)0); ((i__6161) <= (i__2547max__6160));
                     i__6161 = ((i__6161) + (((x10_int)1))))
                {
                    x10_int i__6162 = i__6161;
                    
                    //#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    str->add(::x10aux::nullCheck(this->FMGL(pool)->x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >::__apply(
                                                   j__6164))->x10::lang::Rail< ::cpls::entities::State >::__apply(
                               ((x10_long)(i__6162)))->FMGL(cost));
                    
                    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
                    str->add((__extension__ ({ static ::x10::lang::String* strLit__6228 = ::x10aux::makeStringLit(" "); strLit__6228; })));
                }
            }
            
        }
    }
    
    //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    return str->toString();
    
}

//#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
void cpls::SmartPool::clear() {
    
    //#line 305 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
    this->FMGL(monitor)->atomicBlock< ::cpls::util::Unit >(
      reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_SmartPool__closure__6)))cpls_SmartPool__closure__6(this))));
}

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
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
        
        //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::x10::util::Random* alloc__2395 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        
        //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
        (alloc__2395)->::x10::util::Random::_constructor(
          ::x10::lang::RuntimeNatives::nanoTime());
        alloc__2395;
    }))
    ;
    this->FMGL(monitor) = (__extension__ ({
        
        //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/SmartPool.x10"
        ::cpls::util::Monitor* alloc__2396 =  (new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor());
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        ::x10::lang::String* n__6169 = (__extension__ ({ static ::x10::lang::String* strLit__6229 = ::x10aux::makeStringLit("SmartPool"); strLit__6229; }));
        
        //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2396->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2396->FMGL(name) = n__6169;
        alloc__2396;
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
