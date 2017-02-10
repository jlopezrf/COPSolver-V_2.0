/*************************************************/
/* START of NodeConfig */
#include <cpls/entities/NodeConfig.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor() {
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
}
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::_make() {
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    this_->_constructor();
    return this_;
}



//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor(x10_int heuristic, x10_int rol) {
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
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



//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristic(x10_int heuristic) {
    this->FMGL(heuristic) = heuristic;
}

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setNumberOfTeams(x10_int numberOfTeams) {
    this->FMGL(numberOfTeams) = numberOfTeams;
}

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setNodesPerTeam(x10_int nodesPerTeam) {
    this->FMGL(nodesPerTeam) = nodesPerTeam;
}

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setTeamId(x10_int teamId) {
    this->FMGL(teamId) = teamId;
}

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setRol(x10_int rol) {
    this->FMGL(rol) = rol;
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setInterTeamCommTime(x10_long interTeamCommTime) {
    this->FMGL(interTeamCommTime) = interTeamCommTime;
}

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setAffectedPer(x10_double affectedPer) {
    this->FMGL(affectedPer) = affectedPer;
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setIniDelay(x10_long iniDelay) {
    this->FMGL(iniDelay) = iniDelay;
}

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setVerify(x10_boolean verify) {
    this->FMGL(verify) = verify;
}

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getHeuristic() {
    return this->FMGL(heuristic);
    
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getNumberOfTeams() {
    return this->FMGL(numberOfTeams);
    
}

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getNodesPerTeam() {
    return this->FMGL(nodesPerTeam);
    
}

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getTeamId() {
    return this->FMGL(teamId);
    
}

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getRol() {
    return this->FMGL(rol);
    
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getInterTeamCommTime() {
    return this->FMGL(interTeamCommTime);
    
}

//#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_double cpls::entities::NodeConfig::getAffectedPer() {
    return this->FMGL(affectedPer);
    
}

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getIniDelay() {
    return this->FMGL(iniDelay);
    
}

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_boolean cpls::entities::NodeConfig::getVerify() {
    return this->FMGL(verify);
    
}

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
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
}

::x10aux::RuntimeType cpls::entities::NodeConfig::rtt;
void cpls::entities::NodeConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.NodeConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of NodeConfig */
/*************************************************/
