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
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class NodeConfig : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(heuristic);
    
    x10_int FMGL(numberOfTeams);
    
    x10_int FMGL(nodesPerTeam);
    
    x10_int FMGL(teamId);
    
    x10_int FMGL(rol);
    
    x10_long FMGL(interTeamCommTime);
    
    x10_double FMGL(affectedPer);
    
    x10_long FMGL(iniDelay);
    
    x10_boolean FMGL(verify);
    
    x10_int FMGL(changeProb);
    
    x10_int FMGL(diversificationOption);
    
    x10_long FMGL(maxTime);
    
    x10_long FMGL(maxIters);
    
    x10_int FMGL(maxRestarts);
    
    x10_boolean FMGL(reportPart);
    
    x10_int FMGL(modParams);
    
    x10_int FMGL(changeOnDiver);
    
    x10_int FMGL(reportI);
    
    x10_int FMGL(updateI);
    
    x10_int FMGL(maxUpdateI);
    
    x10_boolean FMGL(adaptiveComm);
    
    x10_int FMGL(nIntersWhitoutImprovements);
    
    x10_int FMGL(modeIndicator);
    
    void _constructor();
    
    static ::cpls::entities::NodeConfig* _make();
    
    void _constructor(x10_int heuristic, x10_int rol);
    
    static ::cpls::entities::NodeConfig* _make(x10_int heuristic, x10_int rol);
    
    virtual void setHeuristic(x10_int heuristic);
    virtual void setNumberOfTeams(x10_int numberOfTeams);
    virtual void setNodesPerTeam(x10_int nodesPerTeam);
    virtual void setTeamId(x10_int teamId);
    virtual void setRol(x10_int rol);
    virtual void setInterTeamCommTime(x10_long interTeamCommTime);
    virtual void setAffectedPer(x10_double affectedPer);
    virtual void setIniDelay(x10_long iniDelay);
    virtual void setVerify(x10_boolean verify);
    virtual void setChangeProb(x10_int changeProb);
    virtual void setDiversificationOption(x10_int divOption);
    virtual void setMaxTime(x10_long maxTime);
    virtual void setMaxIters(x10_long maxIters);
    virtual void setMaxRestarts(x10_int maxRestarts);
    virtual void setReportPart(x10_boolean reportPart);
    virtual void setModParams(x10_int modParams);
    virtual void setChangeOnDiver(x10_int changeOnDiver);
    virtual void setReportI(x10_int reportI);
    virtual void setUpdateI(x10_int updateI);
    virtual void setMaxUpdateI(x10_int maxUpdateI);
    virtual void setAdaptiveComm(x10_boolean adaptiveComm);
    virtual void setItersWhitoutImprovements(x10_int nIntersWhitoutImprovements);
    virtual void setModeIndicator(x10_int modeIndicator);
    virtual x10_int getHeuristic();
    virtual x10_int getNumberOfTeams();
    virtual x10_int getNodesPerTeam();
    virtual x10_int getTeamId();
    virtual x10_int getRol();
    virtual x10_long getInterTeamCommTime();
    virtual x10_double getAffectedPer();
    virtual x10_long getIniDelay();
    virtual x10_boolean getVerify();
    virtual x10_int getChangeProb();
    virtual x10_int getDiversificationOption();
    virtual x10_long getMaxTime();
    virtual x10_long getMaxIters();
    virtual x10_int getMaxRestarts();
    virtual x10_boolean getReportPart();
    virtual x10_int getModParams();
    virtual x10_int getChangeOnDiver();
    virtual x10_int getReportI();
    virtual x10_int getUpdateI();
    virtual x10_int getMaxUpdateI();
    virtual x10_boolean getAdaptiveComm();
    virtual x10_int getItersWhitoutImprovements();
    virtual x10_int getModeIndicator();
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
