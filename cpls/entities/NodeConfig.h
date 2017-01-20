#ifndef __CPLS_ENTITIES_NODECONFIG_H
#define __CPLS_ENTITIES_NODECONFIG_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class NodeConfig : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(heuristic);
    
    x10_long FMGL(outTeamTime);
    
    void _constructor(x10_int heuristic);
    
    static ::cpls::entities::NodeConfig* _make(x10_int heuristic);
    
    void _constructor();
    
    static ::cpls::entities::NodeConfig* _make();
    
    virtual void setHeuristic(x10_int heuristic);
    virtual x10_int getHeuristic();
    virtual void setOutTeamTime(x10_long outTeamTime);
    virtual x10_long getOutTeamTime();
    virtual ::cpls::entities::NodeConfig* cpls__entities__NodeConfig____this__cpls__entities__NodeConfig(
      );
    virtual void __fieldInitializers_cpls_entities_NodeConfig();
    
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
#endif // CPLS_ENTITIES_NODECONFIG_H

namespace cpls { namespace entities { 
class NodeConfig;
} } 

#ifndef CPLS_ENTITIES_NODECONFIG_H_NODEPS
#define CPLS_ENTITIES_NODECONFIG_H_NODEPS
#ifndef CPLS_ENTITIES_NODECONFIG_H_GENERICS
#define CPLS_ENTITIES_NODECONFIG_H_GENERICS
#endif // CPLS_ENTITIES_NODECONFIG_H_GENERICS
#endif // __CPLS_ENTITIES_NODECONFIG_H_NODEPS
