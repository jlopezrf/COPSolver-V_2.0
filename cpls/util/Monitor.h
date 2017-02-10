#ifndef __CPLS_UTIL_MONITOR_H
#define __CPLS_UTIL_MONITOR_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Runtime__Worker;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace cpls { namespace util { 
class Unit;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

class Monitor : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::util::concurrent::Lock* FMGL(lock);
    
    ::x10::lang::Rail< ::x10::lang::Runtime__Worker* >* FMGL(threads);
    
    x10_int FMGL(size);
    
    ::x10::lang::String* FMGL(name);
    
    void _constructor();
    
    static ::cpls::util::Monitor* _make();
    
    void _constructor(::x10::lang::String* n);
    
    static ::cpls::util::Monitor* _make(::x10::lang::String* n);
    
    virtual void lock();
    virtual void unlock();
    static ::x10::lang::Fun_0_0<x10_boolean>* FMGL(TRUE);
    static void FMGL(TRUE__do_init)();
    static void FMGL(TRUE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(TRUE__status);
    static ::x10::lang::CheckedThrowable* FMGL(TRUE__exception);
    static ::x10::lang::Fun_0_0<x10_boolean>* FMGL(TRUE__get)();
    
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>* FMGL(NOTHING);
    static void FMGL(NOTHING__do_init)();
    static void FMGL(NOTHING__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(NOTHING__status);
    static ::x10::lang::CheckedThrowable* FMGL(NOTHING__exception);
    static ::x10::lang::Fun_0_0< ::cpls::util::Unit>* FMGL(NOTHING__get)();
    
    virtual void awaken();
    virtual void await(::x10::lang::Fun_0_0<x10_boolean>* cond);
    template<class TPMGL(T)> TPMGL(T) atomicBlock(::x10::lang::Fun_0_0<TPMGL(T)>* action);
    template<class TPMGL(T)> TPMGL(T) on(::x10::lang::Fun_0_0<x10_boolean>* cond,
                                         ::x10::lang::Fun_0_0<TPMGL(T)>* action);
    static ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>*
      FMGL(waking);
    static void FMGL(waking__do_init)();
    static void FMGL(waking__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(waking__status);
    static ::x10::lang::CheckedThrowable* FMGL(waking__exception);
    static ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>*
      FMGL(waking__get)();
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(trying);
    static void FMGL(trying__do_init)();
    static void FMGL(trying__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(trying__status);
    static ::x10::lang::CheckedThrowable* FMGL(trying__exception);
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(trying__get)();
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(retrying);
    static void FMGL(retrying__do_init)();
    static void FMGL(retrying__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(retrying__status);
    static ::x10::lang::CheckedThrowable* FMGL(retrying__exception);
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(retrying__get)();
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(suspending);
    static void FMGL(suspending__do_init)();
    static void FMGL(suspending__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(suspending__status);
    static ::x10::lang::CheckedThrowable* FMGL(suspending__exception);
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(suspending__get)();
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(acting);
    static void FMGL(acting__do_init)();
    static void FMGL(acting__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(acting__status);
    static ::x10::lang::CheckedThrowable* FMGL(acting__exception);
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(acting__get)();
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(finished);
    static void FMGL(finished__do_init)();
    static void FMGL(finished__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(finished__status);
    static ::x10::lang::CheckedThrowable* FMGL(finished__exception);
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>* FMGL(finished__get)();
    
    virtual ::x10::lang::String* toString();
    virtual ::cpls::util::Monitor* cpls__util__Monitor____this__cpls__util__Monitor(
      );
    virtual void __fieldInitializers_cpls_util_Monitor();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // CPLS_UTIL_MONITOR_H

namespace cpls { namespace util { 
class Monitor;
} } 

#ifndef CPLS_UTIL_MONITOR_H_NODEPS
#define CPLS_UTIL_MONITOR_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Runtime__Worker.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_0.h>
#include <cpls/util/Unit.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Long.h>
#include <cpls/util/Logger.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_UTIL_MONITOR_H_GENERICS
#define CPLS_UTIL_MONITOR_H_GENERICS
inline ::x10::lang::Fun_0_0<x10_boolean>* cpls::util::Monitor::FMGL(TRUE__get)() {
    if (FMGL(TRUE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(TRUE__init)();
    }
    return cpls::util::Monitor::FMGL(TRUE);
}

inline ::x10::lang::Fun_0_0< ::cpls::util::Unit>* cpls::util::Monitor::FMGL(NOTHING__get)() {
    if (FMGL(NOTHING__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(NOTHING__init)();
    }
    return cpls::util::Monitor::FMGL(NOTHING);
}

#ifndef CPLS_UTIL_MONITOR_H_atomicBlock_392
#define CPLS_UTIL_MONITOR_H_atomicBlock_392
template<class TPMGL(T)> TPMGL(T) cpls::util::Monitor::atomicBlock(::x10::lang::Fun_0_0<TPMGL(T)>* action) {
    return this->template on< TPMGL(T) >(::cpls::util::Monitor::FMGL(TRUE__get)(),
                                         action);
    
}
#endif // CPLS_UTIL_MONITOR_H_atomicBlock_392
#ifndef CPLS_UTIL_MONITOR_H_on_393
#define CPLS_UTIL_MONITOR_H_on_393
template<class TPMGL(T)> TPMGL(T) cpls::util::Monitor::on(::x10::lang::Fun_0_0<x10_boolean>* cond,
                                                          ::x10::lang::Fun_0_0<TPMGL(T)>* action) {
    {
        
        //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
        ::x10::lang::CheckedThrowable* throwable__26221 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            {
                
                //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                this->lock();
                
                //#line 69 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                while (!(::x10::lang::Fun_0_0<x10_boolean>::__apply(::x10aux::nullCheck(cond))))
                {
                    
                    //#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                    ::x10::lang::Runtime__Worker* thisWorker =
                      ::x10::lang::Runtime::worker();
                    
                    //#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                    x10_int s = this->FMGL(size);
                    
                    //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                    this->FMGL(threads)->x10::lang::template Rail< ::x10::lang::Runtime__Worker* >::__set(
                      ((x10_long)(((this->FMGL(size) = ((this->FMGL(size)) + (((x10_int)1)))) - (((x10_int)1))))),
                      thisWorker);
                    
                    //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                    while ((::x10aux::struct_equals(this->FMGL(threads)->x10::lang::template Rail< ::x10::lang::Runtime__Worker* >::__apply(
                                                      ((x10_long)(s))),
                                                    thisWorker)))
                    {
                        
                        //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        ::cpls::util::Logger::log(::cpls::util::Monitor::FMGL(suspending__get)());
                        
                        //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        this->unlock();
                        
                        //#line 76 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        ::x10::lang::Runtime__Worker::park();
                        
                        //#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        this->lock();
                    }
                    
                }
                
                //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                TPMGL(T) result = ::x10::lang::Fun_0_0<TPMGL(T)>::__apply(::x10aux::nullCheck(action));
                
                //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                x10_int m = this->FMGL(size);
                
                //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                {
                    x10_int i;
                    for (i = ((x10_int)0); ((i) < (m)); i =
                                                          ((i) + (((x10_int)1))))
                    {
                        
                        //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        this->FMGL(size) = ((this->FMGL(size)) - (((x10_int)1)));
                        
                        //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        ::x10aux::nullCheck(this->FMGL(threads)->x10::lang::template Rail< ::x10::lang::Runtime__Worker* >::__apply(
                                              ((x10_long)(this->FMGL(size)))))->x10::lang::Runtime__Worker::unpark();
                        
                        //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        this->FMGL(threads)->x10::lang::template Rail< ::x10::lang::Runtime__Worker* >::__set(
                          ((x10_long)(this->FMGL(size))),
                          ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Worker*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                    }
                }
                {
                    
                    //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                    TPMGL(T) t__26220 = result;
                    {
                        
                        //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
                        this->unlock();
                    }
                    return t__26220;
                    
                }
            }
            ::x10::compiler::Finalization::plausibleThrow();
        }
        catch (::x10::lang::CheckedThrowable* __exc394) {
            if (true) {
                ::x10::lang::CheckedThrowable* formal__26222 =
                  static_cast< ::x10::lang::CheckedThrowable*>(__exc394);
                {
                    throwable__26221 = formal__26222;
                }
            } else
            throw;
        }
        if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                      throwable__26221)))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__26221))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__26221));
            }
            
        }
        
        //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
        if (true) {
            
            //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
            this->unlock();
        }
        
        //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Monitor.x10"
        if ((!::x10aux::struct_equals(reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL),
                                      throwable__26221)))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__26221)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__26221));
            }
            
        }
        
    }
}
#endif // CPLS_UTIL_MONITOR_H_on_393
inline ::x10::lang::Fun_0_1< ::x10::lang::String*, ::x10::lang::String*>*
  cpls::util::Monitor::FMGL(waking__get)() {
    if (FMGL(waking__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(waking__init)();
    }
    return cpls::util::Monitor::FMGL(waking);
}

inline ::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(trying__get)() {
    if (FMGL(trying__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(trying__init)();
    }
    return cpls::util::Monitor::FMGL(trying);
}

inline ::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(retrying__get)() {
    if (FMGL(retrying__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(retrying__init)();
    }
    return cpls::util::Monitor::FMGL(retrying);
}

inline ::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(suspending__get)() {
    if (FMGL(suspending__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(suspending__init)();
    }
    return cpls::util::Monitor::FMGL(suspending);
}

inline ::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(acting__get)() {
    if (FMGL(acting__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(acting__init)();
    }
    return cpls::util::Monitor::FMGL(acting);
}

inline ::x10::lang::Fun_0_0< ::x10::lang::String*>* cpls::util::Monitor::FMGL(finished__get)() {
    if (FMGL(finished__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(finished__init)();
    }
    return cpls::util::Monitor::FMGL(finished);
}

#endif // CPLS_UTIL_MONITOR_H_GENERICS
#endif // __CPLS_UTIL_MONITOR_H_NODEPS
