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
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
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
namespace cpls { namespace solver { namespace entities { 
class ASParameters;
} } } 
namespace cpls { namespace solver { namespace entities { 
class EOParameters;
} } } 
namespace cpls { namespace solver { namespace entities { 
class RoTSParameters;
} } } 
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
    
    x10_long FMGL(maxTime);
    
    x10_long FMGL(pmaxIters);
    
    x10_int FMGL(maxRestarts);
    
    x10_boolean FMGL(reportPart);
    
    x10_int FMGL(modParams);
    
    x10_int FMGL(changeOnDiver);
    
    x10_boolean FMGL(verify);
    
    x10_long FMGL(report);
    
    x10_long FMGL(update);
    
    ::cpls::solver::entities::ASParameters* FMGL(asParam);
    
    ::cpls::solver::entities::EOParameters* FMGL(eoParam);
    
    ::cpls::solver::entities::RoTSParameters* FMGL(roTSParam);
    
    x10_long FMGL(outTeamTime);
    
    virtual void setProblemModel(::cpls::problem::ProblemGenericModel* problemModel);
    virtual ::cpls::problem::ProblemGenericModel* getPoblemModel();
    virtual void setConfigNodes(::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes);
    virtual void setCPLSPoolConfig(::cpls::entities::PoolConfig* cplsPoolConfig);
    virtual void setTeamsPoolConfig(::cpls::entities::PoolConfig* teamsPoolConfig);
    virtual void setIsThereAMasterNode(x10_boolean isThereAMasterNode);
    virtual x10_boolean getIsThereAMasterNode();
    virtual ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* getConfigNodes(
      );
    virtual ::cpls::entities::PoolConfig* getCPLSPoolConfig();
    virtual ::cpls::entities::PoolConfig* getTeamsPoolConfig();
    virtual void setOutTeamTime(x10_long outTeamTime);
    virtual x10_long getOutTeamTime();
    virtual void setASParameters(::cpls::solver::entities::ASParameters* asParam);
    virtual ::cpls::solver::entities::ASParameters* getASParameters(
      );
    virtual void setEOParameters(::cpls::solver::entities::EOParameters* eoParam);
    virtual ::cpls::solver::entities::EOParameters* getEOParameters(
      );
    virtual void setRoTSParameters(::cpls::solver::entities::RoTSParameters* roTSParam);
    virtual ::cpls::solver::entities::RoTSParameters* getRoTSParameters(
      );
    virtual x10_long getMaxTime();
    virtual x10_long getPMaxIters();
    virtual x10_int getMaxRestarts();
    virtual x10_boolean getReportPart();
    virtual x10_int getModParams();
    virtual x10_int getChangeOnDiver();
    virtual x10_boolean getVerify();
    virtual x10_long getReport();
    virtual x10_long getUpdate();
    virtual void setMaxTime(x10_long maxTime);
    virtual void setPMaxIters(x10_long pmaxIters);
    virtual void setMaxRestarts(x10_int maxRestarts);
    virtual void setReportPart(x10_boolean reportPart);
    virtual void setModParams(x10_int modParams);
    virtual void setChangeOnDiver(x10_int changeOnDiver);
    virtual void setVerify(x10_boolean verify);
    virtual void setReport(x10_long report);
    virtual void setUpdate(x10_long update);
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
