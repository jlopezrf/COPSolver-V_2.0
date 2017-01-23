#ifndef __CPLS_ENTITIES_SMARTPOOL_H
#define __CPLS_ENTITIES_SMARTPOOL_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define CPLS_ENTITIES_STATE_H_NODEPS
#include <cpls/entities/State.h>
#undef CPLS_ENTITIES_STATE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace cpls { namespace util { 
class Monitor;
} } 
namespace cpls { namespace util { 
class Unit;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace cpls { namespace util { 
class Utils;
} } 
namespace cpls { namespace util { 
template<class TPMGL(T)> class Maybe;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace cpls { namespace entities { 

class SmartPool : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(sz);
    
    x10_int FMGL(poolSize);
    
    static x10_int FMGL(HIGH);
    static void FMGL(HIGH__do_init)();
    static void FMGL(HIGH__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(HIGH__status);
    static ::x10::lang::CheckedThrowable* FMGL(HIGH__exception);
    static x10_int FMGL(HIGH__get)();
    
    static x10_int FMGL(MEDIUM);
    static void FMGL(MEDIUM__do_init)();
    static void FMGL(MEDIUM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(MEDIUM__status);
    static ::x10::lang::CheckedThrowable* FMGL(MEDIUM__exception);
    static x10_int FMGL(MEDIUM__get)();
    
    static x10_int FMGL(LOW);
    static void FMGL(LOW__do_init)();
    static void FMGL(LOW__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LOW__status);
    static ::x10::lang::CheckedThrowable* FMGL(LOW__exception);
    static x10_int FMGL(LOW__get)();
    
    static x10_long FMGL(SMART);
    static void FMGL(SMART__do_init)();
    static void FMGL(SMART__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SMART__status);
    static ::x10::lang::CheckedThrowable* FMGL(SMART__exception);
    static x10_long FMGL(SMART__get)();
    
    ::x10::lang::Rail< x10_int >* FMGL(nbEntries);
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >* FMGL(pool);
    
    x10_long FMGL(poolMode);
    
    ::x10::util::Random* FMGL(random);
    
    ::cpls::util::Monitor* FMGL(monitor);
    
    x10_double FMGL(distance);
    
    void _constructor(x10_long sz, x10_int pSize, x10_long pMode, x10_double minDist);
    
    static ::cpls::entities::SmartPool* _make(x10_long sz, x10_int pSize,
                                              x10_long pMode, x10_double minDist);
    
    virtual void setSeed(x10_long seed);
    virtual void tryInsertConf(::cpls::entities::State inInfo);
    virtual ::cpls::util::Unit tryInsertConf0(::cpls::entities::State inInfo);
    virtual ::cpls::entities::State insert(x10_int poolType, x10_double dist,
                                           ::cpls::entities::State inInfo);
    virtual ::cpls::util::Unit smartInsert(::cpls::entities::State inInfo);
    virtual ::cpls::util::Unit normalInsert(::cpls::entities::State inInfo);
    virtual x10_double distance(::x10::lang::Rail< x10_int >* conf1, ::x10::lang::Rail< x10_int >* conf2);
    static x10_boolean compareVectors(::x10::lang::Rail< x10_int >* vec1,
                                      ::x10::lang::Rail< x10_int >* vec2);
    virtual void printVectors();
    virtual ::cpls::util::Maybe< ::cpls::entities::State>* getPConf();
    virtual ::cpls::util::Maybe< ::cpls::entities::State>* getBestConf();
    virtual ::x10::lang::String* getCostList();
    virtual void clear();
    virtual ::cpls::entities::SmartPool* cpls__entities__SmartPool____this__cpls__entities__SmartPool(
      );
    virtual void __fieldInitializers_cpls_entities_SmartPool();
    
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
#endif // CPLS_ENTITIES_SMARTPOOL_H

namespace cpls { namespace entities { 
class SmartPool;
} } 

#ifndef CPLS_ENTITIES_SMARTPOOL_H_NODEPS
#define CPLS_ENTITIES_SMARTPOOL_H_NODEPS
#ifndef CPLS_ENTITIES_SMARTPOOL_H_GENERICS
#define CPLS_ENTITIES_SMARTPOOL_H_GENERICS
inline x10_int cpls::entities::SmartPool::FMGL(HIGH__get)() {
    if (FMGL(HIGH__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(HIGH__init)();
    }
    return cpls::entities::SmartPool::FMGL(HIGH);
}

inline x10_int cpls::entities::SmartPool::FMGL(MEDIUM__get)() {
    if (FMGL(MEDIUM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(MEDIUM__init)();
    }
    return cpls::entities::SmartPool::FMGL(MEDIUM);
}

inline x10_int cpls::entities::SmartPool::FMGL(LOW__get)() {
    if (FMGL(LOW__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LOW__init)();
    }
    return cpls::entities::SmartPool::FMGL(LOW);
}

inline x10_long cpls::entities::SmartPool::FMGL(SMART__get)() {
    if (FMGL(SMART__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SMART__init)();
    }
    return cpls::entities::SmartPool::FMGL(SMART);
}

#endif // CPLS_ENTITIES_SMARTPOOL_H_GENERICS
#endif // __CPLS_ENTITIES_SMARTPOOL_H_NODEPS
