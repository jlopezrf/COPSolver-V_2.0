#ifndef __CPLS_SMARTPOOL_H
#define __CPLS_SMARTPOOL_H

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
namespace cpls { namespace entities { 
class PoolConfig;
} } 
namespace cpls { namespace util { 
class Unit;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace cpls { 
class CPLSOptionsEnum__PoolModes;
} 
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { 
class CPLSOptionsEnum__PoolLevels;
} 
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
namespace cpls { 

class SmartPool : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(sz);
    
    x10_int FMGL(poolSize);
    
    ::x10::lang::Rail< x10_int >* FMGL(nbEntries);
    
    ::x10::lang::Rail< ::x10::lang::Rail< ::cpls::entities::State >* >* FMGL(pool);
    
    x10_long FMGL(poolMode);
    
    ::x10::util::Random* FMGL(random);
    
    ::cpls::util::Monitor* FMGL(monitor);
    
    x10_double FMGL(distance);
    
    void _constructor(::cpls::entities::PoolConfig* poolConfig);
    
    static ::cpls::SmartPool* _make(::cpls::entities::PoolConfig* poolConfig);
    
    void _constructor(x10_long sz, x10_int pSize, x10_long pMode, x10_double minDist);
    
    static ::cpls::SmartPool* _make(x10_long sz, x10_int pSize, x10_long pMode,
                                    x10_double minDist);
    
    virtual void setSeed(x10_long seed);
    virtual void tryInsertConf(::cpls::entities::State info);
    virtual ::cpls::util::Unit tryInsertConf0(::cpls::entities::State info);
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
    virtual ::cpls::SmartPool* cpls__SmartPool____this__cpls__SmartPool();
    virtual void __fieldInitializers_cpls_SmartPool();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_SMARTPOOL_H

namespace cpls { 
class SmartPool;
} 

#ifndef CPLS_SMARTPOOL_H_NODEPS
#define CPLS_SMARTPOOL_H_NODEPS
#ifndef CPLS_SMARTPOOL_H_GENERICS
#define CPLS_SMARTPOOL_H_GENERICS
#endif // CPLS_SMARTPOOL_H_GENERICS
#endif // __CPLS_SMARTPOOL_H_NODEPS
