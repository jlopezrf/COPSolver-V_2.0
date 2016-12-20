/*************************************************/
/* START of NodeConfig */
#include <cpls/NodeConfig.h>

#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
void cpls::NodeConfig::_constructor(x10_int rol, x10_int heuristic) {
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
    ::cpls::NodeConfig* this__5 = this;
    ::x10aux::nullCheck(this__5)->FMGL(rol) = ((x10_int)0);
    ::x10aux::nullCheck(this__5)->FMGL(heuristic) = ((x10_int)0);
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
    this->FMGL(rol) = rol;
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
}
::cpls::NodeConfig* cpls::NodeConfig::_make(x10_int rol, x10_int heuristic)
{
    ::cpls::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::NodeConfig>()) ::cpls::NodeConfig();
    this_->_constructor(rol, heuristic);
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
x10_int cpls::NodeConfig::getRol() {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
    return this->FMGL(rol);
    
}

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/NodeConfig.x10"
::cpls::NodeConfig* cpls::NodeConfig::cpls__NodeConfig____this__cpls__NodeConfig(
  ) {
    return this;
    
}
void cpls::NodeConfig::__fieldInitializers_cpls_NodeConfig() {
    this->FMGL(rol) = ((x10_int)0);
    this->FMGL(heuristic) = ((x10_int)0);
}
const ::x10aux::serialization_id_t cpls::NodeConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::NodeConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::NodeConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(rol));
    buf.write(this->FMGL(heuristic));
    
}

::x10::lang::Reference* ::cpls::NodeConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::NodeConfig>()) ::cpls::NodeConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::NodeConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(rol) = buf.read<x10_int>();
    FMGL(heuristic) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::NodeConfig::rtt;
void cpls::NodeConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.NodeConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of NodeConfig */
/*************************************************/
