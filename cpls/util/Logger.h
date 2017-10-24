#ifndef __CPLS_UTIL_LOGGER_H
#define __CPLS_UTIL_LOGGER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

class Logger : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_long FMGL(DEBUG);
    static void FMGL(DEBUG__do_init)();
    static void FMGL(DEBUG__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DEBUG__status);
    static ::x10::lang::CheckedThrowable* FMGL(DEBUG__exception);
    static x10_long FMGL(DEBUG__get)();
    
    static x10_long FMGL(LOG);
    static void FMGL(LOG__do_init)();
    static void FMGL(LOG__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LOG__status);
    static ::x10::lang::CheckedThrowable* FMGL(LOG__exception);
    static x10_long FMGL(LOG__get)();
    
    static x10_long FMGL(INFO);
    static void FMGL(INFO__do_init)();
    static void FMGL(INFO__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(INFO__status);
    static ::x10::lang::CheckedThrowable* FMGL(INFO__exception);
    static x10_long FMGL(INFO__get)();
    
    static x10_long FMGL(LEVEL);
    static void FMGL(LEVEL__do_init)();
    static void FMGL(LEVEL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LEVEL__status);
    static ::x10::lang::CheckedThrowable* FMGL(LEVEL__exception);
    static x10_long FMGL(LEVEL__get)();
    
    static void out(::x10::lang::String* s);
    static void info(::x10::lang::Fun_0_0< ::x10::lang::String*>* s);
    static void info(::x10::lang::String* s);
    template<class TPMGL(T)> static void info(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>* s,
                                              TPMGL(T) t);
    static void log(::x10::lang::Fun_0_0< ::x10::lang::String*>* s);
    static void log(::x10::lang::String* s);
    template<class TPMGL(T)> static void log(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>* s,
                                             TPMGL(T) t);
    static void debug(::x10::lang::Fun_0_0< ::x10::lang::String*>* s);
    template<class TPMGL(T)> static void debug(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>* s,
                                               TPMGL(T) t);
    static void debug(::x10::lang::String* s);
    virtual ::cpls::util::Logger* cpls__util__Logger____this__cpls__util__Logger(
      );
    void _constructor();
    
    static ::cpls::util::Logger* _make();
    
    virtual void __fieldInitializers_cpls_util_Logger();
    
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
#endif // CPLS_UTIL_LOGGER_H

namespace cpls { namespace util { 
class Logger;
} } 

#ifndef CPLS_UTIL_LOGGER_H_NODEPS
#define CPLS_UTIL_LOGGER_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Int.h>
#include <x10/lang/System.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_UTIL_LOGGER_H_GENERICS
#define CPLS_UTIL_LOGGER_H_GENERICS
inline x10_long cpls::util::Logger::FMGL(DEBUG__get)() {
    if (FMGL(DEBUG__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DEBUG__init)();
    }
    return cpls::util::Logger::FMGL(DEBUG);
}

inline x10_long cpls::util::Logger::FMGL(LOG__get)() {
    if (FMGL(LOG__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LOG__init)();
    }
    return cpls::util::Logger::FMGL(LOG);
}

inline x10_long cpls::util::Logger::FMGL(INFO__get)() {
    if (FMGL(INFO__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(INFO__init)();
    }
    return cpls::util::Logger::FMGL(INFO);
}

inline x10_long cpls::util::Logger::FMGL(LEVEL__get)() {
    if (FMGL(LEVEL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LEVEL__init)();
    }
    return cpls::util::Logger::FMGL(LEVEL);
}

#ifndef CPLS_UTIL_LOGGER_H_info_465
#define CPLS_UTIL_LOGGER_H_info_465
template<class TPMGL(T)> void cpls::util::Logger::info(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>* s,
                                                       TPMGL(T) t) {
    if (((::cpls::util::Logger::FMGL(INFO__get)()) >= (::cpls::util::Logger::FMGL(LEVEL__get)())))
    {
        ::cpls::util::Logger::out(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>::__apply(::x10aux::nullCheck(s), 
                                    t));
    }
    
}
#endif // CPLS_UTIL_LOGGER_H_info_465
#ifndef CPLS_UTIL_LOGGER_H_log_468
#define CPLS_UTIL_LOGGER_H_log_468
template<class TPMGL(T)> void cpls::util::Logger::log(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>* s,
                                                      TPMGL(T) t) {
    if (((::cpls::util::Logger::FMGL(LOG__get)()) >= (::cpls::util::Logger::FMGL(LEVEL__get)())))
    {
        ::cpls::util::Logger::out(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>::__apply(::x10aux::nullCheck(s), 
                                    t));
    }
    
}
#endif // CPLS_UTIL_LOGGER_H_log_468
#ifndef CPLS_UTIL_LOGGER_H_debug_470
#define CPLS_UTIL_LOGGER_H_debug_470
template<class TPMGL(T)> void cpls::util::Logger::debug(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>* s,
                                                        TPMGL(T) t) {
    if (((::cpls::util::Logger::FMGL(DEBUG__get)()) >= (::cpls::util::Logger::FMGL(LEVEL__get)())))
    {
        ::cpls::util::Logger::out(::x10::lang::Fun_0_1<TPMGL(T), ::x10::lang::String*>::__apply(::x10aux::nullCheck(s), 
                                    t));
    }
    
}
#endif // CPLS_UTIL_LOGGER_H_debug_470
#endif // CPLS_UTIL_LOGGER_H_GENERICS
#endif // __CPLS_UTIL_LOGGER_H_NODEPS
