/*************************************************/
/* START of CPLSConfig */
#include <cpls/entities/CPLSConfig.h>

#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/compiler/Synthetic.h>

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setProblemModel(::cpls::problem::ProblemGenericModel* problemModel) {
    this->FMGL(problemModel) = problemModel;
}

//#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::problem::ProblemGenericModel* cpls::entities::CPLSConfig::getPoblemModel(
  ) {
    return this->FMGL(problemModel);
    
}

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setConfigNodes(::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes) {
    this->FMGL(configNodes) = configNodes;
}

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setCPLSPoolConfig(::cpls::entities::PoolConfig* cplsPoolConfig) {
    this->FMGL(cplsPoolConfig) = cplsPoolConfig;
}

//#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setTeamsPoolConfig(::cpls::entities::PoolConfig* teamsPoolConfig) {
    this->FMGL(teamsPoolConfig) = teamsPoolConfig;
}

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setIsThereAMasterNode(x10_boolean isThereAMasterNode) {
    this->FMGL(isThereAMasterNode) = isThereAMasterNode;
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getIsThereAMasterNode() {
    return this->FMGL(isThereAMasterNode);
    
}

//#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::entities::CPLSConfig::getConfigNodes(
  ) {
    return this->FMGL(configNodes);
    
}

//#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::CPLSConfig::getCPLSPoolConfig(
  ) {
    return this->FMGL(cplsPoolConfig);
    
}

//#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::CPLSConfig::getTeamsPoolConfig(
  ) {
    return this->FMGL(teamsPoolConfig);
    
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setOutTeamTime(x10_long outTeamTime) {
    this->FMGL(outTeamTime) = outTeamTime;
}

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getOutTeamTime() {
    return this->FMGL(outTeamTime);
    
}

//#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMinDistance(x10_double minDistance) {
    this->FMGL(minDistance) = minDistance;
}

//#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_double cpls::entities::CPLSConfig::getMinDistance() {
    return this->FMGL(minDistance);
    
}

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setIniDelay(x10_long iniDelay) {
    this->FMGL(iniDelay) = iniDelay;
}

//#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getIniDelay() {
    return this->FMGL(iniDelay);
    
}

//#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setAffectedPer(x10_double affectedPer) {
    this->FMGL(affectedPer) = affectedPer;
}

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_double cpls::entities::CPLSConfig::getAffectedPer() {
    return this->FMGL(affectedPer);
    
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getMaxTime() {
    return this->FMGL(maxTime);
    
}

//#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getPMaxIters() {
    return this->FMGL(pmaxIters);
    
}

//#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getMaxRestarts() {
    return this->FMGL(maxRestarts);
    
}

//#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getReportPart() {
    return this->FMGL(reportPart);
    
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getModParams() {
    return this->FMGL(modParams);
    
}

//#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getChangeOnDiver() {
    return this->FMGL(changeOnDiver);
    
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getVerify() {
    return this->FMGL(verify);
    
}

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getReport() {
    return this->FMGL(report);
    
}

//#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getUpdate() {
    return this->FMGL(update);
    
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMaxTime(x10_long maxTime) {
    this->FMGL(maxTime) = maxTime;
}

//#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setPMaxIters(x10_long pmaxIters) {
    this->FMGL(pmaxIters) = pmaxIters;
}

//#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMaxRestarts(x10_int maxRestarts) {
    this->FMGL(maxRestarts) = maxRestarts;
}

//#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setReportPart(x10_boolean reportPart) {
    this->FMGL(reportPart) = reportPart;
}

//#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setModParams(x10_int modParams) {
    this->FMGL(modParams) = modParams;
}

//#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setChangeOnDiver(x10_int changeOnDiver) {
    this->FMGL(changeOnDiver) = changeOnDiver;
}

//#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setVerify(x10_boolean verify) {
    this->FMGL(verify) = verify;
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setReport(x10_long report) {
    this->FMGL(report) = report;
}

//#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setUpdate(x10_long update) {
    this->FMGL(update) = update;
}

//#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setSeed(x10_long seed) {
    this->FMGL(seed) = seed;
}

//#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getSeed() {
    return this->FMGL(seed);
    
}

//#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setTargetCost(x10_long targetCost) {
    this->FMGL(targetCost) = targetCost;
}

//#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getTargetCost() {
    return this->FMGL(targetCost);
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setStrictLow(x10_boolean strictLow) {
    this->FMGL(strictLow) = strictLow;
}

//#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getStrictLow() {
    return this->FMGL(strictLow);
    
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::CPLSConfig* cpls::entities::CPLSConfig::cpls__entities__CPLSConfig____this__cpls__entities__CPLSConfig(
  ) {
    return this;
    
}
void cpls::entities::CPLSConfig::_constructor() {
    this->cpls::entities::CPLSConfig::__fieldInitializers_cpls_entities_CPLSConfig();
}
::cpls::entities::CPLSConfig* cpls::entities::CPLSConfig::_make(
  ) {
    ::cpls::entities::CPLSConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::CPLSConfig>()) ::cpls::entities::CPLSConfig();
    this_->_constructor();
    return this_;
}


void cpls::entities::CPLSConfig::__fieldInitializers_cpls_entities_CPLSConfig(
  ) {
    this->FMGL(isThereAMasterNode) = false;
    this->FMGL(configNodes) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2< ::cpls::entities::NodeConfig*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cplsPoolConfig) = (::x10aux::class_cast_unchecked< ::cpls::entities::PoolConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(teamsPoolConfig) = (::x10aux::class_cast_unchecked< ::cpls::entities::PoolConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(maxTime) = ((x10_long)0ll);
    this->FMGL(pmaxIters) = ((x10_long)0ll);
    this->FMGL(maxRestarts) = ((x10_int)0);
    this->FMGL(reportPart) = false;
    this->FMGL(modParams) = ((x10_int)0);
    this->FMGL(changeOnDiver) = ((x10_int)0);
    this->FMGL(verify) = false;
    this->FMGL(report) = ((x10_long)0ll);
    this->FMGL(update) = ((x10_long)0ll);
    this->FMGL(seed) = ((x10_long)0ll);
    this->FMGL(targetCost) = ((x10_long)0ll);
    this->FMGL(strictLow) = false;
    this->FMGL(outTeamTime) = ((x10_long)0ll);
    this->FMGL(minDistance) = 0.0;
    this->FMGL(iniDelay) = ((x10_long)0ll);
    this->FMGL(affectedPer) = 0.0;
}
const ::x10aux::serialization_id_t cpls::entities::CPLSConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::CPLSConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::CPLSConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(isThereAMasterNode));
    buf.write(this->FMGL(configNodes));
    buf.write(this->FMGL(problemModel));
    buf.write(this->FMGL(cplsPoolConfig));
    buf.write(this->FMGL(teamsPoolConfig));
    buf.write(this->FMGL(maxTime));
    buf.write(this->FMGL(pmaxIters));
    buf.write(this->FMGL(maxRestarts));
    buf.write(this->FMGL(reportPart));
    buf.write(this->FMGL(modParams));
    buf.write(this->FMGL(changeOnDiver));
    buf.write(this->FMGL(verify));
    buf.write(this->FMGL(report));
    buf.write(this->FMGL(update));
    buf.write(this->FMGL(seed));
    buf.write(this->FMGL(targetCost));
    buf.write(this->FMGL(strictLow));
    buf.write(this->FMGL(outTeamTime));
    buf.write(this->FMGL(minDistance));
    buf.write(this->FMGL(iniDelay));
    buf.write(this->FMGL(affectedPer));
    
}

::x10::lang::Reference* ::cpls::entities::CPLSConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::CPLSConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::CPLSConfig>()) ::cpls::entities::CPLSConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::CPLSConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(isThereAMasterNode) = buf.read<x10_boolean>();
    FMGL(configNodes) = buf.read< ::x10::array::Array_2< ::cpls::entities::NodeConfig*>*>();
    FMGL(problemModel) = buf.read< ::cpls::problem::ProblemGenericModel*>();
    FMGL(cplsPoolConfig) = buf.read< ::cpls::entities::PoolConfig*>();
    FMGL(teamsPoolConfig) = buf.read< ::cpls::entities::PoolConfig*>();
    FMGL(maxTime) = buf.read<x10_long>();
    FMGL(pmaxIters) = buf.read<x10_long>();
    FMGL(maxRestarts) = buf.read<x10_int>();
    FMGL(reportPart) = buf.read<x10_boolean>();
    FMGL(modParams) = buf.read<x10_int>();
    FMGL(changeOnDiver) = buf.read<x10_int>();
    FMGL(verify) = buf.read<x10_boolean>();
    FMGL(report) = buf.read<x10_long>();
    FMGL(update) = buf.read<x10_long>();
    FMGL(seed) = buf.read<x10_long>();
    FMGL(targetCost) = buf.read<x10_long>();
    FMGL(strictLow) = buf.read<x10_boolean>();
    FMGL(outTeamTime) = buf.read<x10_long>();
    FMGL(minDistance) = buf.read<x10_double>();
    FMGL(iniDelay) = buf.read<x10_long>();
    FMGL(affectedPer) = buf.read<x10_double>();
}

::x10aux::RuntimeType cpls::entities::CPLSConfig::rtt;
void cpls::entities::CPLSConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.CPLSConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CPLSConfig */
/*************************************************/
