#ifndef __CPLS_UTIL_MOVEPERMUTATION_H
#define __CPLS_UTIL_MOVEPERMUTATION_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

class MovePermutation : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(first);
    
    x10_long FMGL(second);
    
    void _constructor(x10_long f, x10_long s);
    
    static ::cpls::util::MovePermutation* _make(x10_long f, x10_long s);
    
    virtual x10_long getFirst();
    virtual x10_long getSecond();
    virtual void setFirst(x10_long f);
    virtual void setSecond(x10_long s);
    virtual ::cpls::util::MovePermutation* cpls__util__MovePermutation____this__cpls__util__MovePermutation(
      );
    virtual void __fieldInitializers_cpls_util_MovePermutation();
    
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
#endif // CPLS_UTIL_MOVEPERMUTATION_H

namespace cpls { namespace util { 
class MovePermutation;
} } 

#ifndef CPLS_UTIL_MOVEPERMUTATION_H_NODEPS
#define CPLS_UTIL_MOVEPERMUTATION_H_NODEPS
#ifndef CPLS_UTIL_MOVEPERMUTATION_H_GENERICS
#define CPLS_UTIL_MOVEPERMUTATION_H_GENERICS
#endif // CPLS_UTIL_MOVEPERMUTATION_H_GENERICS
#endif // __CPLS_UTIL_MOVEPERMUTATION_H_NODEPS
