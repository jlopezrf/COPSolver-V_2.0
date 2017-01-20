#ifndef __CPLS_ENTITIES_POOLCONFIG_H
#define __CPLS_ENTITIES_POOLCONFIG_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class PoolConfig : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(problemSize);
    
    x10_int FMGL(poolSize);
    
    x10_int FMGL(poolMode);
    
    x10_double FMGL(minDist);
    
    void _constructor(x10_long problemSize, x10_int poolSize, x10_int poolMode,
                      x10_double minDist);
    
    static ::cpls::entities::PoolConfig* _make(x10_long problemSize, x10_int poolSize,
                                               x10_int poolMode, x10_double minDist);
    
    virtual x10_long getProblemSize();
    virtual x10_int getPoolSize();
    virtual x10_int getPoolMode();
    virtual x10_double getMinDist();
    virtual ::cpls::entities::PoolConfig* cpls__entities__PoolConfig____this__cpls__entities__PoolConfig(
      );
    virtual void __fieldInitializers_cpls_entities_PoolConfig(
      );
    
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
#endif // CPLS_ENTITIES_POOLCONFIG_H

namespace cpls { namespace entities { 
class PoolConfig;
} } 

#ifndef CPLS_ENTITIES_POOLCONFIG_H_NODEPS
#define CPLS_ENTITIES_POOLCONFIG_H_NODEPS
#ifndef CPLS_ENTITIES_POOLCONFIG_H_GENERICS
#define CPLS_ENTITIES_POOLCONFIG_H_GENERICS
#endif // CPLS_ENTITIES_POOLCONFIG_H_GENERICS
#endif // __CPLS_ENTITIES_POOLCONFIG_H_NODEPS
