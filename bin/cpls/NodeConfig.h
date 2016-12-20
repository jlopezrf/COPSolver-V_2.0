#ifndef __CPLS_NODECONFIG_H
#define __CPLS_NODECONFIG_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class NodeConfig : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(rol);
    
    x10_int FMGL(heuristic);
    
    void _constructor(x10_int rol, x10_int heuristic);
    
    static ::cpls::NodeConfig* _make(x10_int rol, x10_int heuristic);
    
    virtual x10_int getRol();
    virtual ::cpls::NodeConfig* cpls__NodeConfig____this__cpls__NodeConfig(
      );
    virtual void __fieldInitializers_cpls_NodeConfig();
    
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
#endif // CPLS_NODECONFIG_H

namespace cpls { 
class NodeConfig;
} 

#ifndef CPLS_NODECONFIG_H_NODEPS
#define CPLS_NODECONFIG_H_NODEPS
#ifndef CPLS_NODECONFIG_H_GENERICS
#define CPLS_NODECONFIG_H_GENERICS
#endif // CPLS_NODECONFIG_H_GENERICS
#endif // __CPLS_NODECONFIG_H_NODEPS
