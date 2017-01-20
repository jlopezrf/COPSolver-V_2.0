#ifndef __CPLS_UTIL_RANDOMTOOLS_H
#define __CPLS_UTIL_RANDOMTOOLS_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

class RandomTools : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(seed);
    
    ::x10::util::Random* FMGL(r);
    
    void _constructor(x10_long seedIn);
    
    static ::cpls::util::RandomTools* _make(x10_long seedIn);
    
    virtual void setSeed(x10_long s);
    virtual ::x10::lang::Rail< x10_int >* randomPermut(x10_long sz, x10_int baseValue);
    virtual ::x10::lang::Rail< x10_int >* randomArrayPermut(::x10::lang::Rail< x10_int >* vec);
    virtual x10_int randomInterval(x10_int low, x10_int up);
    virtual x10_int randomInt(x10_long limit);
    virtual x10_long randomLong();
    virtual x10_double randomDouble();
    static x10_long getRandomSeed();
    virtual ::cpls::util::RandomTools* cpls__util__RandomTools____this__cpls__util__RandomTools(
      );
    virtual void __fieldInitializers_cpls_util_RandomTools();
    
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
#endif // CPLS_UTIL_RANDOMTOOLS_H

namespace cpls { namespace util { 
class RandomTools;
} } 

#ifndef CPLS_UTIL_RANDOMTOOLS_H_NODEPS
#define CPLS_UTIL_RANDOMTOOLS_H_NODEPS
#ifndef CPLS_UTIL_RANDOMTOOLS_H_GENERICS
#define CPLS_UTIL_RANDOMTOOLS_H_GENERICS
#endif // CPLS_UTIL_RANDOMTOOLS_H_GENERICS
#endif // __CPLS_UTIL_RANDOMTOOLS_H_NODEPS
