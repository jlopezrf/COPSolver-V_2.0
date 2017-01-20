/*************************************************/
/* START of CPLSConfig */
#include <cpls/entities/CPLSConfig.h>

#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/array/Array_2.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/solver/entities/ASParameters.h>
#include <cpls/solver/entities/EOParameters.h>
#include <cpls/solver/entities/RoTSParameters.h>
#include <x10/compiler/Synthetic.h>

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"

//#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setProblemModel(::cpls::problem::ProblemGenericModel* problemModel) {
    
    //#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(problemModel) = problemModel;
}

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::problem::ProblemGenericModel* cpls::entities::CPLSConfig::getPoblemModel(
  ) {
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(problemModel);
    
}

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setConfigNodes(::x10::array::Array_2< ::cpls::entities::NodeConfig*>* configNodes) {
    
    //#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(configNodes) = configNodes;
}

//#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setCPLSPoolConfig(::cpls::entities::PoolConfig* cplsPoolConfig) {
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(cplsPoolConfig) = cplsPoolConfig;
}

//#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setTeamsPoolConfig(::cpls::entities::PoolConfig* teamsPoolConfig) {
    
    //#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(teamsPoolConfig) = teamsPoolConfig;
}

//#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setIsThereAMasterNode(x10_boolean isThereAMasterNode) {
    
    //#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(isThereAMasterNode) = isThereAMasterNode;
}

//#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getIsThereAMasterNode() {
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(isThereAMasterNode);
    
}

//#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::x10::array::Array_2< ::cpls::entities::NodeConfig*>* cpls::entities::CPLSConfig::getConfigNodes(
  ) {
    
    //#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(configNodes);
    
}

//#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::CPLSConfig::getCPLSPoolConfig(
  ) {
    
    //#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(cplsPoolConfig);
    
}

//#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::CPLSConfig::getTeamsPoolConfig(
  ) {
    
    //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(teamsPoolConfig);
    
}

//#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setOutTeamTime(x10_long outTeamTime) {
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(outTeamTime) = outTeamTime;
}

//#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getOutTeamTime() {
    
    //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(outTeamTime);
    
}

//#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setASParameters(::cpls::solver::entities::ASParameters* asParam) {
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(asParam) = asParam;
}

//#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::solver::entities::ASParameters* cpls::entities::CPLSConfig::getASParameters(
  ) {
    
    //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(asParam);
    
}

//#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setEOParameters(::cpls::solver::entities::EOParameters* eoParam) {
    
    //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(eoParam) = eoParam;
}

//#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::solver::entities::EOParameters* cpls::entities::CPLSConfig::getEOParameters(
  ) {
    
    //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(eoParam);
    
}

//#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setRoTSParameters(::cpls::solver::entities::RoTSParameters* roTSParam) {
    
    //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    this->FMGL(roTSParam) = roTSParam;
}

//#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
::cpls::solver::entities::RoTSParameters* cpls::entities::CPLSConfig::getRoTSParameters(
  ) {
    
    //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
    return this->FMGL(roTSParam);
    
}

//#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getMaxTime() {
    return this->FMGL(maxTime);
    
}

//#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getPMaxIters() {
    return this->FMGL(pmaxIters);
    
}

//#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getMaxRestarts() {
    return this->FMGL(maxRestarts);
    
}

//#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getReportPart() {
    return this->FMGL(reportPart);
    
}

//#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getModParams() {
    return this->FMGL(modParams);
    
}

//#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_int cpls::entities::CPLSConfig::getChangeOnDiver() {
    return this->FMGL(changeOnDiver);
    
}

//#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_boolean cpls::entities::CPLSConfig::getVerify() {
    return this->FMGL(verify);
    
}

//#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getReport() {
    return this->FMGL(report);
    
}

//#line 118 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
x10_long cpls::entities::CPLSConfig::getUpdate() {
    return this->FMGL(update);
    
}

//#line 120 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMaxTime(x10_long maxTime) {
    this->FMGL(maxTime) = maxTime;
}

//#line 121 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setPMaxIters(x10_long pmaxIters) {
    this->FMGL(pmaxIters) = pmaxIters;
}

//#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setMaxRestarts(x10_int maxRestarts) {
    this->FMGL(maxRestarts) = maxRestarts;
}

//#line 123 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setReportPart(x10_boolean reportPart) {
    this->FMGL(reportPart) = reportPart;
}

//#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setModParams(x10_int modParams) {
    this->FMGL(modParams) = modParams;
}

//#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setChangeOnDiver(x10_int changeOnDiver) {
    this->FMGL(changeOnDiver) = changeOnDiver;
}

//#line 126 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setVerify(x10_boolean verify) {
    this->FMGL(verify) = verify;
}

//#line 127 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setReport(x10_long report) {
    this->FMGL(report) = report;
}

//#line 128 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
void cpls::entities::CPLSConfig::setUpdate(x10_long update) {
    this->FMGL(update) = update;
}

//#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSConfig.x10"
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
    this->FMGL(asParam) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::ASParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(eoParam) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::EOParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(roTSParam) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::RoTSParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(outTeamTime) = ((x10_long)0ll);
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
    buf.write(this->FMGL(asParam));
    buf.write(this->FMGL(eoParam));
    buf.write(this->FMGL(roTSParam));
    buf.write(this->FMGL(outTeamTime));
    
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
    FMGL(asParam) = buf.read< ::cpls::solver::entities::ASParameters*>();
    FMGL(eoParam) = buf.read< ::cpls::solver::entities::EOParameters*>();
    FMGL(roTSParam) = buf.read< ::cpls::solver::entities::RoTSParameters*>();
    FMGL(outTeamTime) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::entities::CPLSConfig::rtt;
void cpls::entities::CPLSConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.CPLSConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CPLSConfig */
/*************************************************/
