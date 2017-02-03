/*************************************************/
/* START of MasterConfig */
#include <cpls/entities/MasterConfig.h>

#include <cpls/entities/NodeConfig.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/MasterConfig.x10"
::cpls::entities::MasterConfig* cpls::entities::MasterConfig::cpls__entities__MasterConfig____this__cpls__entities__MasterConfig(
  ) {
    return this;
    
}
void cpls::entities::MasterConfig::_constructor() {
    (this)->::cpls::entities::NodeConfig::_constructor();
    this->cpls::entities::MasterConfig::__fieldInitializers_cpls_entities_MasterConfig();
}
::cpls::entities::MasterConfig* cpls::entities::MasterConfig::_make(
  ) {
    ::cpls::entities::MasterConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::MasterConfig>()) ::cpls::entities::MasterConfig();
    this_->_constructor();
    return this_;
}


void cpls::entities::MasterConfig::__fieldInitializers_cpls_entities_MasterConfig(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::entities::MasterConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::MasterConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::MasterConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::entities::NodeConfig::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::entities::MasterConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::MasterConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::MasterConfig>()) ::cpls::entities::MasterConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::MasterConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::NodeConfig::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::entities::MasterConfig::rtt;
void cpls::entities::MasterConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::entities::NodeConfig>()};
    rtt.initStageTwo("cpls.entities.MasterConfig",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of MasterConfig */
/*************************************************/
