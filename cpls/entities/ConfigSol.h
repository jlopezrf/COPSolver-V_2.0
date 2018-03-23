#ifndef __CPLS_ENTITIES_CONFIGSOL_H
#define __CPLS_ENTITIES_CONFIGSOL_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class ConfigSol : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_int >* FMGL(variables);
    
    x10_long FMGL(cost);
    
    void _constructor();
    
    static ::cpls::entities::ConfigSol* _make();
    
    void _constructor(::x10::lang::Rail< x10_int >* variables, x10_long cost);
    
    static ::cpls::entities::ConfigSol* _make(::x10::lang::Rail< x10_int >* variables,
                                              x10_long cost);
    
    virtual x10_long getCost();
    virtual void setCost(x10_long cost);
    virtual ::x10::lang::Rail< x10_int >* getVariables();
    virtual void setVariables(::x10::lang::Rail< x10_int >* variables);
    virtual ::cpls::entities::ConfigSol* cpls__entities__ConfigSol____this__cpls__entities__ConfigSol(
      );
    virtual void __fieldInitializers_cpls_entities_ConfigSol(
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
#endif // CPLS_ENTITIES_CONFIGSOL_H

namespace cpls { namespace entities { 
class ConfigSol;
} } 

#ifndef CPLS_ENTITIES_CONFIGSOL_H_NODEPS
#define CPLS_ENTITIES_CONFIGSOL_H_NODEPS
#ifndef CPLS_ENTITIES_CONFIGSOL_H_GENERICS
#define CPLS_ENTITIES_CONFIGSOL_H_GENERICS
#endif // CPLS_ENTITIES_CONFIGSOL_H_GENERICS
#endif // __CPLS_ENTITIES_CONFIGSOL_H_NODEPS
