/*************************************************/
/* START of HeadConfig */
#include <cpls/entities/HeadConfig.h>

#include <cpls/entities/NodeConfig.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/HeadConfig.x10"
::cpls::entities::HeadConfig* cpls::entities::HeadConfig::cpls__entities__HeadConfig____this__cpls__entities__HeadConfig(
  ) {
    return this;
    
}
void cpls::entities::HeadConfig::_constructor() {
    (this)->::cpls::entities::NodeConfig::_constructor();
    this->cpls::entities::HeadConfig::__fieldInitializers_cpls_entities_HeadConfig();
}
::cpls::entities::HeadConfig* cpls::entities::HeadConfig::_make()
{
    ::cpls::entities::HeadConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::HeadConfig>()) ::cpls::entities::HeadConfig();
    this_->_constructor();
    return this_;
}


void cpls::entities::HeadConfig::__fieldInitializers_cpls_entities_HeadConfig(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::entities::HeadConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::HeadConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::HeadConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::entities::NodeConfig::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::entities::HeadConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::HeadConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::HeadConfig>()) ::cpls::entities::HeadConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::HeadConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::NodeConfig::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::entities::HeadConfig::rtt;
void cpls::entities::HeadConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::entities::NodeConfig>()};
    rtt.initStageTwo("cpls.entities.HeadConfig",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of HeadConfig */
/*************************************************/