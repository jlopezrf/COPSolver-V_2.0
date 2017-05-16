/*************************************************/
/* START of CPLSConfig */
#include <cpls/entities/CPLSConfig.h>

#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/compiler/Synthetic.h>

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::problem::ProblemGenericModel* cpls::entities::CPLSConfig::getProblemModel(
  ) {
    return this->FMGL(problemModel);
    
}

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getIsThereAMasterNode() {
    return this->FMGL(isThereAMasterNode);
    
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::entities::CPLSConfig::getConfigNodes(
  ) {
    return this->FMGL(configNodes);
    
}

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::CPLSConfig::getCPLSPoolConfig(
  ) {
    return this->FMGL(cplsPoolConfig);
    
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::CPLSConfig::getTeamsPoolConfig(
  ) {
    return this->FMGL(teamsPoolConfig);
    
}

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_double cpls::entities::CPLSConfig::getMinDistance() {
    return this->FMGL(minDistance);
    
}

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getSeed() {
    return this->FMGL(seed);
    
}

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getTargetCost() {
    return this->FMGL(targetCost);
    
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getStrictLow() {
    return this->FMGL(strictLow);
    
}

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getTimesPerInstance(
  ) {
    return this->FMGL(timesPerInstance);
    
}

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getVerify() {
    return this->FMGL(verify);
    
}

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::NodeConfig* cpls::entities::CPLSConfig::getMasterConfig(
  ) {
    return this->FMGL(masterConfig);
    
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getOutFormat() {
    return this->FMGL(outFormat);
    
}

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setProblemModel(::cpls::problem::ProblemGenericModel* problemModel) {
    this->FMGL(problemModel) = problemModel;
}

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setConfigNodes(::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes) {
    this->FMGL(configNodes) = configNodes;
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setCPLSPoolConfig(::cpls::entities::PoolConfig* cplsPoolConfig) {
    this->FMGL(cplsPoolConfig) = cplsPoolConfig;
}

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setTeamsPoolConfig(::cpls::entities::PoolConfig* teamsPoolConfig) {
    this->FMGL(teamsPoolConfig) = teamsPoolConfig;
}

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setIsThereAMasterNode(x10_boolean isThereAMasterNode) {
    this->FMGL(isThereAMasterNode) = isThereAMasterNode;
}

//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMinDistance(x10_double minDistance) {
    this->FMGL(minDistance) = minDistance;
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setStrictLow(x10_boolean strictLow) {
    this->FMGL(strictLow) = strictLow;
}

//#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setTargetCost(x10_long targetCost) {
    this->FMGL(targetCost) = targetCost;
}

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setTimesPerInstance(x10_long timesPerInstance) {
    this->FMGL(timesPerInstance) = timesPerInstance;
}

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setSeed(x10_long seed) {
    this->FMGL(seed) = seed;
}

//#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setVerify(x10_boolean verify) {
    this->FMGL(verify) = verify;
}

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMasterConfig(::cpls::entities::NodeConfig* masterConfig) {
    this->FMGL(masterConfig) = masterConfig;
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setOutFormat(x10_int outFormat) {
    this->FMGL(outFormat) = outFormat;
}

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
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
    this->FMGL(seed) = ((x10_long)0ll);
    this->FMGL(targetCost) = ((x10_long)0ll);
    this->FMGL(strictLow) = false;
    this->FMGL(timesPerInstance) = ((x10_long)0ll);
    this->FMGL(minDistance) = 0.0;
    this->FMGL(verify) = false;
    this->FMGL(masterConfig) = (::x10aux::class_cast_unchecked< ::cpls::entities::NodeConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(outFormat) = ((x10_int)0);
}
const ::x10aux::serialization_id_t cpls::entities::CPLSConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::CPLSConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::CPLSConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(isThereAMasterNode));
    buf.write(this->FMGL(configNodes));
    buf.write(this->FMGL(problemModel));
    buf.write(this->FMGL(cplsPoolConfig));
    buf.write(this->FMGL(teamsPoolConfig));
    buf.write(this->FMGL(seed));
    buf.write(this->FMGL(targetCost));
    buf.write(this->FMGL(strictLow));
    buf.write(this->FMGL(timesPerInstance));
    buf.write(this->FMGL(minDistance));
    buf.write(this->FMGL(verify));
    buf.write(this->FMGL(masterConfig));
    buf.write(this->FMGL(outFormat));
    
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
    FMGL(seed) = buf.read<x10_long>();
    FMGL(targetCost) = buf.read<x10_long>();
    FMGL(strictLow) = buf.read<x10_boolean>();
    FMGL(timesPerInstance) = buf.read<x10_long>();
    FMGL(minDistance) = buf.read<x10_double>();
    FMGL(verify) = buf.read<x10_boolean>();
    FMGL(masterConfig) = buf.read< ::cpls::entities::NodeConfig*>();
    FMGL(outFormat) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::entities::CPLSConfig::rtt;
void cpls::entities::CPLSConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.CPLSConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CPLSConfig */
/*************************************************/
