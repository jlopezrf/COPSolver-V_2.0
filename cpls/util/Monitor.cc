/*************************************************/
/* START of Monitor */
#include <cpls/util/Monitor.h>

#ifndef CPLS_UTIL_MONITOR__CLOSURE__1_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<cpls_util_Monitor__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply() {
        return true;
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__1* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__1>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__1* this_ = new (storage) cpls_util_Monitor__closure__1();
        return this_;
    }
    
    cpls_util_Monitor__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:33";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__1_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__2_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_util_Monitor__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::cpls::util::Unit __apply() {
        return ::cpls::util::Unit::_make();
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__2* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__2>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__2* this_ = new (storage) cpls_util_Monitor__closure__2();
        return this_;
    }
    
    cpls_util_Monitor__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:34";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__2_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__3_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_util_Monitor__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>::itable<cpls_util_Monitor__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply(::x10::lang::String* t) {
        return ::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25873 = ::x10aux::makeStringLit("Monitor: waking "); strLit__25873; })), t);
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__3* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__3>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__3* this_ = new (storage) cpls_util_Monitor__closure__3();
        return this_;
    }
    
    cpls_util_Monitor__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:99";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__3_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__4_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__4 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__4> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25874 = ::x10aux::makeStringLit("Monitor: Trying cond "); strLit__25874; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__4* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__4>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__4* this_ = new (storage) cpls_util_Monitor__closure__4();
        return this_;
    }
    
    cpls_util_Monitor__closure__4() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:100";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__4_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__5_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__5 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__5> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25875 = ::x10aux::makeStringLit("Monitor: Retrying cond "); strLit__25875; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__5* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__5>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__5* this_ = new (storage) cpls_util_Monitor__closure__5();
        return this_;
    }
    
    cpls_util_Monitor__closure__5() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:101";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__5_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__6_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__6> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25876 = ::x10aux::makeStringLit("Monitor:  Suspending. "); strLit__25876; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__6* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__6>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__6* this_ = new (storage) cpls_util_Monitor__closure__6();
        return this_;
    }
    
    cpls_util_Monitor__closure__6() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:102";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__6_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__7_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25877 = ::x10aux::makeStringLit("Monitor: Trying action."); strLit__25877; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__7* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__7>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__7* this_ = new (storage) cpls_util_Monitor__closure__7();
        return this_;
    }
    
    cpls_util_Monitor__closure__7() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:103";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__7_CLOSURE
#ifndef CPLS_UTIL_MONITOR__CLOSURE__8_CLOSURE
#define CPLS_UTIL_MONITOR__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_Monitor__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__8> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__25878 = ::x10aux::makeStringLit("Monitor: done"); strLit__25878; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Monitor__closure__8* storage = ::x10aux::alloc_z<cpls_util_Monitor__closure__8>();
        buf.record_reference(storage);
        cpls_util_Monitor__closure__8* this_ = new (storage) cpls_util_Monitor__closure__8();
        return this_;
    }
    
    cpls_util_Monitor__closure__8() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10:104";
    }

};

#endif // CPLS_UTIL_MONITOR__CLOSURE__8_CLOSURE

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
void cpls::util::Monitor::_constructor() {
    (this)->::cpls::util::Monitor::_constructor((__extension__ ({ static ::x10::lang::String* strLit__25870 = ::x10aux::makeStringLit(""); strLit__25870; })));
    
}
::cpls::util::Monitor* cpls::util::Monitor::_make() {
    ::cpls::util::Monitor* this_ = new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor();
    this_->_constructor();
    return this_;
}



//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
void cpls::util::Monitor::_constructor(::x10::lang::String* n) {
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
    this->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
    this->FMGL(name) = n;
}
::cpls::util::Monitor* cpls::util::Monitor::_make(::x10::lang::String* n)
{
    ::cpls::util::Monitor* this_ = new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor();
    this_->_constructor(n);
    return this_;
}



//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
void cpls::util::Monitor::lock() {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
    if (!(this->FMGL(lock)->tryLock())) {
        
        //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
        ::x10::lang::Runtime::increaseParallelism();
        
        //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
        this->FMGL(lock)->lock();
        
        //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
        ::x10::lang::Runtime::decreaseParallelism(((x10_int)1));
    }
    
}

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
void cpls::util::Monitor::unlock() {
    this->FMGL(lock)->unlock();
}

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0<x10_boolean>* cpls::util::Monitor::FMGL(TRUE);
void cpls::util::Monitor::FMGL(TRUE__do_init)() {
    FMGL(TRUE__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.TRUE");
    ::x10::lang::Fun_0_0<x10_boolean>* __var360__ = reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(cpls_util_Monitor__closure__1)))cpls_util_Monitor__closure__1()));
    FMGL(TRUE) = __var360__;
    FMGL(TRUE__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(TRUE__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(TRUE__status), &FMGL(TRUE__do_init), &FMGL(TRUE__exception), "cpls::util::Monitor.TRUE");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(TRUE__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(TRUE__exception);

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0< ::cpls::util::Unit>* cpls::util::Monitor::FMGL(NOTHING);
void cpls::util::Monitor::FMGL(NOTHING__do_init)() {
    FMGL(NOTHING__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.NOTHING");
    ::x10::lang::Fun_0_0< ::cpls::util::Unit>* __var361__ = reinterpret_cast< ::x10::lang::Fun_0_0< ::cpls::util::Unit>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >(sizeof(cpls_util_Monitor__closure__2)))cpls_util_Monitor__closure__2()));
    FMGL(NOTHING) = __var361__;
    FMGL(NOTHING__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(NOTHING__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(NOTHING__status), &FMGL(NOTHING__do_init), &FMGL(NOTHING__exception), "cpls::util::Monitor.NOTHING");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(NOTHING__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(NOTHING__exception);

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
void cpls::util::Monitor::awaken() {
    this->on< ::cpls::util::Unit >(::cpls::util::Monitor::FMGL(TRUE__get)(),
                                   ::cpls::util::Monitor::FMGL(NOTHING__get)());
}

//#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
void cpls::util::Monitor::await(::x10::lang::Fun_0_0<x10_boolean>* cond) {
    this->on< ::cpls::util::Unit >(cond, ::cpls::util::Monitor::FMGL(NOTHING__get)());
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"

//#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"

//#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>* cpls::util::Monitor::FMGL(waking);
void cpls::util::Monitor::FMGL(waking__do_init)() {
    FMGL(waking__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.waking");
    ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>* __var367__ = reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*> >(sizeof(cpls_util_Monitor__closure__3)))cpls_util_Monitor__closure__3()));
    FMGL(waking) = __var367__;
    FMGL(waking__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(waking__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(waking__status), &FMGL(waking__do_init), &FMGL(waking__exception), "cpls::util::Monitor.waking");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(waking__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(waking__exception);

//#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(trying);
void cpls::util::Monitor::FMGL(trying__do_init)() {
    FMGL(trying__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.trying");
    ::x10::lang::Fun_0_0< ::x10::lang::String*>* __var368__ = reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_util_Monitor__closure__4)))cpls_util_Monitor__closure__4()));
    FMGL(trying) = __var368__;
    FMGL(trying__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(trying__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(trying__status), &FMGL(trying__do_init), &FMGL(trying__exception), "cpls::util::Monitor.trying");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(trying__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(trying__exception);

//#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(retrying);
void cpls::util::Monitor::FMGL(retrying__do_init)() {
    FMGL(retrying__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.retrying");
    ::x10::lang::Fun_0_0< ::x10::lang::String*>* __var369__ = reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_util_Monitor__closure__5)))cpls_util_Monitor__closure__5()));
    FMGL(retrying) = __var369__;
    FMGL(retrying__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(retrying__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(retrying__status), &FMGL(retrying__do_init), &FMGL(retrying__exception), "cpls::util::Monitor.retrying");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(retrying__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(retrying__exception);

//#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(suspending);
void cpls::util::Monitor::FMGL(suspending__do_init)() {
    FMGL(suspending__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.suspending");
    ::x10::lang::Fun_0_0< ::x10::lang::String*>* __var370__ = reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_util_Monitor__closure__6)))cpls_util_Monitor__closure__6()));
    FMGL(suspending) = __var370__;
    FMGL(suspending__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(suspending__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(suspending__status), &FMGL(suspending__do_init), &FMGL(suspending__exception), "cpls::util::Monitor.suspending");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(suspending__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(suspending__exception);

//#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(acting);
void cpls::util::Monitor::FMGL(acting__do_init)() {
    FMGL(acting__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.acting");
    ::x10::lang::Fun_0_0< ::x10::lang::String*>* __var371__ = reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_util_Monitor__closure__7)))cpls_util_Monitor__closure__7()));
    FMGL(acting) = __var371__;
    FMGL(acting__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(acting__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(acting__status), &FMGL(acting__do_init), &FMGL(acting__exception), "cpls::util::Monitor.acting");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(acting__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(acting__exception);

//#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(finished);
void cpls::util::Monitor::FMGL(finished__do_init)() {
    FMGL(finished__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Monitor.finished");
    ::x10::lang::Fun_0_0< ::x10::lang::String*>* __var372__ = reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_util_Monitor__closure__8)))cpls_util_Monitor__closure__8()));
    FMGL(finished) = __var372__;
    FMGL(finished__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Monitor::FMGL(finished__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(finished__status), &FMGL(finished__do_init), &FMGL(finished__exception), "cpls::util::Monitor.finished");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Monitor::FMGL(finished__status);
::x10::lang::CheckedThrowable* cpls::util::Monitor::FMGL(finished__exception);

//#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::x10::lang::String* cpls::util::Monitor::toString() {
    return this->FMGL(name);
    
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
::cpls::util::Monitor* cpls::util::Monitor::cpls__util__Monitor____this__cpls__util__Monitor(
  ) {
    return this;
    
}
void cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor() {
    this->FMGL(lock) = ::x10::util::concurrent::Lock::_make();
    this->FMGL(threads) = ::x10::lang::Rail< ::x10::lang::Runtime__Worker* >::_make(((x10_long)(::x10::lang::Runtime::FMGL(MAX_THREADS__get)())));
    this->FMGL(size) = ((x10_int)0);
}
const ::x10aux::serialization_id_t cpls::util::Monitor::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::Monitor::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::util::Monitor::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(lock));
    buf.write(this->FMGL(threads));
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(name));
    
}

::x10::lang::Reference* ::cpls::util::Monitor::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::Monitor* this_ = new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::util::Monitor::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(lock) = buf.read< ::x10::util::concurrent::Lock*>();
    FMGL(threads) = buf.read< ::x10::lang::Rail< ::x10::lang::Runtime__Worker* >*>();
    FMGL(size) = buf.read<x10_int>();
    FMGL(name) = buf.read< ::x10::lang::String*>();
    
}

::x10aux::RuntimeType cpls::util::Monitor::rtt;
void cpls::util::Monitor::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.util.Monitor",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0<x10_boolean>::itable<cpls_util_Monitor__closure__1>cpls_util_Monitor__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__1::__apply, &cpls_util_Monitor__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >, &cpls_util_Monitor__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::cpls::util::Unit>::itable<cpls_util_Monitor__closure__2>cpls_util_Monitor__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__2::__apply, &cpls_util_Monitor__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::cpls::util::Unit> >, &cpls_util_Monitor__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>::itable<cpls_util_Monitor__closure__3>cpls_util_Monitor__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__3::__apply, &cpls_util_Monitor__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*> >, &cpls_util_Monitor__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__4>cpls_util_Monitor__closure__4::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__4::__apply, &cpls_util_Monitor__closure__4::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__4::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_util_Monitor__closure__4::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__4::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__4::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__5>cpls_util_Monitor__closure__5::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__5::__apply, &cpls_util_Monitor__closure__5::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__5::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_util_Monitor__closure__5::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__5::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__5::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__6>cpls_util_Monitor__closure__6::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__6::__apply, &cpls_util_Monitor__closure__6::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__6::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_util_Monitor__closure__6::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__6::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__6::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__7>cpls_util_Monitor__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__7::__apply, &cpls_util_Monitor__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_util_Monitor__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__7::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_Monitor__closure__8>cpls_util_Monitor__closure__8::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Monitor__closure__8::__apply, &cpls_util_Monitor__closure__8::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_Monitor__closure__8::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_util_Monitor__closure__8::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_Monitor__closure__8::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Monitor__closure__8::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Monitor */
/*************************************************/
