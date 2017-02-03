#ifndef __CPLS_ENTITIES_MASTERCONFIG_H
#define __CPLS_ENTITIES_MASTERCONFIG_H

#include <x10rt.h>


#define CPLS_ENTITIES_NODECONFIG_H_NODEPS
#include <cpls/entities/NodeConfig.h>
#undef CPLS_ENTITIES_NODECONFIG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class MasterConfig : public ::cpls::entities::NodeConfig   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::cpls::entities::MasterConfig* cpls__entities__MasterConfig____this__cpls__entities__MasterConfig(
      );
    void _constructor();
    
    static ::cpls::entities::MasterConfig* _make();
    
    virtual void __fieldInitializers_cpls_entities_MasterConfig();
    
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
#endif // CPLS_ENTITIES_MASTERCONFIG_H

namespace cpls { namespace entities { 
class MasterConfig;
} } 

#ifndef CPLS_ENTITIES_MASTERCONFIG_H_NODEPS
#define CPLS_ENTITIES_MASTERCONFIG_H_NODEPS
#ifndef CPLS_ENTITIES_MASTERCONFIG_H_GENERICS
#define CPLS_ENTITIES_MASTERCONFIG_H_GENERICS
#endif // CPLS_ENTITIES_MASTERCONFIG_H_GENERICS
#endif // __CPLS_ENTITIES_MASTERCONFIG_H_NODEPS
