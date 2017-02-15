#ifndef __CPLS_ENTITIES_CPLSCONFIG_H
#define __CPLS_ENTITIES_CPLSCONFIG_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
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
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace cpls { namespace entities { 
class NodeConfig;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { namespace entities { 
class PoolConfig;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class CPLSConfig : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_boolean FMGL(isThereAMasterNode);
    
    ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* FMGL(configNodes);
    
    ::cpls::problem::ProblemGenericModel* FMGL(problemModel);
    
    ::cpls::entities::PoolConfig* FMGL(cplsPoolConfig);
    
    ::cpls::entities::PoolConfig* FMGL(teamsPoolConfig);
    
    x10_long FMGL(seed);
    
    x10_long FMGL(targetCost);
    
    x10_boolean FMGL(strictLow);
    
    x10_long FMGL(timesPerInstance);
    
    x10_double FMGL(minDistance);
    
    x10_boolean FMGL(verify);
    
    virtual ::cpls::problem::ProblemGenericModel* getProblemModel();
    virtual x10_boolean getIsThereAMasterNode();
    virtual ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* getConfigNodes(
      );
    virtual ::cpls::entities::PoolConfig* getCPLSPoolConfig();
    virtual ::cpls::entities::PoolConfig* getTeamsPoolConfig();
    virtual x10_double getMinDistance();
    virtual x10_long getSeed();
    virtual x10_long getTargetCost();
    virtual x10_boolean getStrictLow();
    virtual x10_long getTimesPerInstance();
    virtual x10_boolean getVerify();
    virtual void setProblemModel(::cpls::problem::ProblemGenericModel* problemModel);
    virtual void setConfigNodes(::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes);
    virtual void setCPLSPoolConfig(::cpls::entities::PoolConfig* cplsPoolConfig);
    virtual void setTeamsPoolConfig(::cpls::entities::PoolConfig* teamsPoolConfig);
    virtual void setIsThereAMasterNode(x10_boolean isThereAMasterNode);
    virtual void setMinDistance(x10_double minDistance);
    virtual void setStrictLow(x10_boolean strictLow);
    virtual void setTargetCost(x10_long targetCost);
    virtual void setTimesPerInstance(x10_long timesPerInstance);
    virtual void setSeed(x10_long seed);
    virtual void setVerify(x10_boolean verify);
    virtual ::cpls::entities::CPLSConfig* cpls__entities__CPLSConfig____this__cpls__entities__CPLSConfig(
      );
    void _constructor();
    
    static ::cpls::entities::CPLSConfig* _make();
    
    virtual void __fieldInitializers_cpls_entities_CPLSConfig(
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
#endif // CPLS_ENTITIES_CPLSCONFIG_H

namespace cpls { namespace entities { 
class CPLSConfig;
} } 

#ifndef CPLS_ENTITIES_CPLSCONFIG_H_NODEPS
#define CPLS_ENTITIES_CPLSCONFIG_H_NODEPS
#ifndef CPLS_ENTITIES_CPLSCONFIG_H_GENERICS
#define CPLS_ENTITIES_CPLSCONFIG_H_GENERICS
#endif // CPLS_ENTITIES_CPLSCONFIG_H_GENERICS
#endif // __CPLS_ENTITIES_CPLSCONFIG_H_NODEPS
