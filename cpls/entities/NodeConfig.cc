/*************************************************/
/* START of NodeConfig */
#include <cpls/entities/NodeConfig.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor() {
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
}
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::_make() {
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    this_->_constructor();
    return this_;
}



//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor(x10_int heuristic, x10_int rol) {
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
    this->FMGL(rol) = rol;
}
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::_make(x10_int heuristic,
                                                                x10_int rol)
{
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    this_->_constructor(heuristic, rol);
    return this_;
}



//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristic(x10_int heuristic) {
    this->FMGL(heuristic) = heuristic;
}

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setNumberOfTeams(x10_int numberOfTeams) {
    this->FMGL(numberOfTeams) = numberOfTeams;
}

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setNodesPerTeam(x10_int nodesPerTeam) {
    this->FMGL(nodesPerTeam) = nodesPerTeam;
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setTeamId(x10_int teamId) {
    this->FMGL(teamId) = teamId;
}

//#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setRol(x10_int rol) {
    this->FMGL(rol) = rol;
}

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setInterTeamCommTime(x10_long interTeamCommTime) {
    this->FMGL(interTeamCommTime) = interTeamCommTime;
}

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setAffectedPer(x10_double affectedPer) {
    this->FMGL(affectedPer) = affectedPer;
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setIniDelay(x10_long iniDelay) {
    this->FMGL(iniDelay) = iniDelay;
}

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setVerify(x10_boolean verify) {
    this->FMGL(verify) = verify;
}

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setChangeProb(x10_int changeProb) {
    this->FMGL(changeProb) = changeProb;
}

//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setDiversificationOption(x10_int divOption) {
    this->FMGL(diversificationOption) = this->FMGL(diversificationOption);
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setMaxTime(x10_long maxTime) {
    this->FMGL(maxTime) = maxTime;
}

//#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setMaxIters(x10_long maxIters) {
    this->FMGL(maxIters) = maxIters;
}

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setMaxRestarts(x10_int maxRestarts) {
    this->FMGL(maxRestarts) = maxRestarts;
}

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setReportPart(x10_boolean reportPart) {
    this->FMGL(reportPart) = reportPart;
}

//#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setModParams(x10_int modParams) {
    this->FMGL(modParams) = modParams;
}

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setChangeOnDiver(x10_int changeOnDiver) {
    this->FMGL(changeOnDiver) = changeOnDiver;
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setReportI(x10_int reportI) {
    this->FMGL(reportI) = reportI;
}

//#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setUpdateI(x10_int updateI) {
    this->FMGL(updateI) = updateI;
}

//#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setMaxUpdateI(x10_int maxUpdateI) {
    this->FMGL(maxUpdateI) = maxUpdateI;
}

//#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setAdaptiveComm(x10_boolean adaptiveComm) {
    this->FMGL(adaptiveComm) = adaptiveComm;
}

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getHeuristic() {
    return this->FMGL(heuristic);
    
}

//#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getNumberOfTeams() {
    return this->FMGL(numberOfTeams);
    
}

//#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getNodesPerTeam() {
    return this->FMGL(nodesPerTeam);
    
}

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getTeamId() {
    return this->FMGL(teamId);
    
}

//#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getRol() {
    return this->FMGL(rol);
    
}

//#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getInterTeamCommTime() {
    return this->FMGL(interTeamCommTime);
    
}

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_double cpls::entities::NodeConfig::getAffectedPer() {
    return this->FMGL(affectedPer);
    
}

//#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getIniDelay() {
    return this->FMGL(iniDelay);
    
}

//#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_boolean cpls::entities::NodeConfig::getVerify() {
    return this->FMGL(verify);
    
}

//#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getChangeProb() {
    return this->FMGL(changeProb);
    
}

//#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getDiversificationOption() {
    return this->FMGL(diversificationOption);
    
}

//#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getMaxTime() {
    return this->FMGL(maxTime);
    
}

//#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getMaxIters() {
    return this->FMGL(maxIters);
    
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getMaxRestarts() {
    return this->FMGL(maxRestarts);
    
}

//#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_boolean cpls::entities::NodeConfig::getReportPart() {
    return this->FMGL(reportPart);
    
}

//#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getModParams() {
    return this->FMGL(modParams);
    
}

//#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getChangeOnDiver() {
    return this->FMGL(changeOnDiver);
    
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getReportI() {
    return this->FMGL(reportI);
    
}

//#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getUpdateI() {
    return this->FMGL(updateI);
    
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getMaxUpdateI() {
    return this->FMGL(maxUpdateI);
    
}

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_boolean cpls::entities::NodeConfig::getAdaptiveComm() {
    return this->FMGL(adaptiveComm);
    
}

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::cpls__entities__NodeConfig____this__cpls__entities__NodeConfig(
  ) {
    return this;
    
}
void cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig(
  ) {
    this->FMGL(heuristic) = ((x10_int)0);
    this->FMGL(numberOfTeams) = ((x10_int)0);
    this->FMGL(nodesPerTeam) = ((x10_int)0);
    this->FMGL(teamId) = ((x10_int)0);
    this->FMGL(rol) = ((x10_int)0);
    this->FMGL(interTeamCommTime) = ((x10_long)0ll);
    this->FMGL(affectedPer) = 0.0;
    this->FMGL(iniDelay) = ((x10_long)0ll);
    this->FMGL(verify) = false;
    this->FMGL(changeProb) = ((x10_int)0);
    this->FMGL(diversificationOption) = ((x10_int)0);
    this->FMGL(maxTime) = ((x10_long)0ll);
    this->FMGL(maxIters) = ((x10_long)0ll);
    this->FMGL(maxRestarts) = ((x10_int)0);
    this->FMGL(reportPart) = false;
    this->FMGL(modParams) = ((x10_int)0);
    this->FMGL(changeOnDiver) = ((x10_int)0);
    this->FMGL(reportI) = ((x10_int)0);
    this->FMGL(updateI) = ((x10_int)0);
    this->FMGL(maxUpdateI) = ((x10_int)0);
    this->FMGL(adaptiveComm) = false;
}
const ::x10aux::serialization_id_t cpls::entities::NodeConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::NodeConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::NodeConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(heuristic));
    buf.write(this->FMGL(numberOfTeams));
    buf.write(this->FMGL(nodesPerTeam));
    buf.write(this->FMGL(teamId));
    buf.write(this->FMGL(rol));
    buf.write(this->FMGL(interTeamCommTime));
    buf.write(this->FMGL(affectedPer));
    buf.write(this->FMGL(iniDelay));
    buf.write(this->FMGL(verify));
    buf.write(this->FMGL(changeProb));
    buf.write(this->FMGL(diversificationOption));
    buf.write(this->FMGL(maxTime));
    buf.write(this->FMGL(maxIters));
    buf.write(this->FMGL(maxRestarts));
    buf.write(this->FMGL(reportPart));
    buf.write(this->FMGL(modParams));
    buf.write(this->FMGL(changeOnDiver));
    buf.write(this->FMGL(reportI));
    buf.write(this->FMGL(updateI));
    buf.write(this->FMGL(maxUpdateI));
    buf.write(this->FMGL(adaptiveComm));
    
}

::x10::lang::Reference* ::cpls::entities::NodeConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::NodeConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(heuristic) = buf.read<x10_int>();
    FMGL(numberOfTeams) = buf.read<x10_int>();
    FMGL(nodesPerTeam) = buf.read<x10_int>();
    FMGL(teamId) = buf.read<x10_int>();
    FMGL(rol) = buf.read<x10_int>();
    FMGL(interTeamCommTime) = buf.read<x10_long>();
    FMGL(affectedPer) = buf.read<x10_double>();
    FMGL(iniDelay) = buf.read<x10_long>();
    FMGL(verify) = buf.read<x10_boolean>();
    FMGL(changeProb) = buf.read<x10_int>();
    FMGL(diversificationOption) = buf.read<x10_int>();
    FMGL(maxTime) = buf.read<x10_long>();
    FMGL(maxIters) = buf.read<x10_long>();
    FMGL(maxRestarts) = buf.read<x10_int>();
    FMGL(reportPart) = buf.read<x10_boolean>();
    FMGL(modParams) = buf.read<x10_int>();
    FMGL(changeOnDiver) = buf.read<x10_int>();
    FMGL(reportI) = buf.read<x10_int>();
    FMGL(updateI) = buf.read<x10_int>();
    FMGL(maxUpdateI) = buf.read<x10_int>();
    FMGL(adaptiveComm) = buf.read<x10_boolean>();
}

::x10aux::RuntimeType cpls::entities::NodeConfig::rtt;
void cpls::entities::NodeConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.NodeConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of NodeConfig */
/*************************************************/
