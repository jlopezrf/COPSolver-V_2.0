/*************************************************/
/* START of ExplorerConfig */
#include <cpls/entities/ExplorerConfig.h>

#include <cpls/entities/NodeConfig.h>
#include <x10/compiler/Synthetic.h>
#include <cpls/solver/entities/HeuristicParameters.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ExplorerConfig.x10"
::cpls::entities::ExplorerConfig* cpls::entities::ExplorerConfig::cpls__entities__ExplorerConfig____this__cpls__entities__ExplorerConfig(
  ) {
    return this;
    
}
void cpls::entities::ExplorerConfig::_constructor() {
    ::cpls::entities::NodeConfig* this__10 = this;
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::x10aux::nullCheck(this__10)->FMGL(heuristic) = ((x10_int)0);
    ::x10aux::nullCheck(this__10)->FMGL(heuristicParameters) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::HeuristicParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__10)->FMGL(outTeamTime) = ((x10_long)0ll);
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::x10aux::nullCheck(this__10)->FMGL(heuristic) = ((x10_int)0);
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ExplorerConfig.x10"
    ::cpls::entities::ExplorerConfig* this__9 = this;
    
}
::cpls::entities::ExplorerConfig* cpls::entities::ExplorerConfig::_make(
  ) {
    ::cpls::entities::ExplorerConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::ExplorerConfig>()) ::cpls::entities::ExplorerConfig();
    this_->_constructor();
    return this_;
}


void cpls::entities::ExplorerConfig::__fieldInitializers_cpls_entities_ExplorerConfig(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::entities::ExplorerConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::ExplorerConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::ExplorerConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::entities::NodeConfig::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::entities::ExplorerConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::ExplorerConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::ExplorerConfig>()) ::cpls::entities::ExplorerConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::ExplorerConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::NodeConfig::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::entities::ExplorerConfig::rtt;
void cpls::entities::ExplorerConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::entities::NodeConfig>()};
    rtt.initStageTwo("cpls.entities.ExplorerConfig",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of ExplorerConfig */
/*************************************************/
