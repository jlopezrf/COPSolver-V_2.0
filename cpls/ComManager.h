#ifndef __CPLS_COMMANAGER_H
#define __CPLS_COMMANAGER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class ComManager : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(sz);
    
    x10_long FMGL(size);
    
    virtual ::cpls::ComManager* cpls__ComManager____this__cpls__ComManager(
      );
    void _constructor(x10_long sz);
    
    static ::cpls::ComManager* _make(x10_long sz);
    
    virtual void __fieldInitializers_cpls_ComManager();
    
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
#endif // CPLS_COMMANAGER_H

namespace cpls { 
class ComManager;
} 

#ifndef CPLS_COMMANAGER_H_NODEPS
#define CPLS_COMMANAGER_H_NODEPS
#ifndef CPLS_COMMANAGER_H_GENERICS
#define CPLS_COMMANAGER_H_GENERICS
#endif // CPLS_COMMANAGER_H_GENERICS
#endif // __CPLS_COMMANAGER_H_NODEPS
