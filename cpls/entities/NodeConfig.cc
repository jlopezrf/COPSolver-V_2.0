/*************************************************/
/* START of NodeConfig */
#include <cpls/entities/NodeConfig.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor(x10_int heuristic) {
    
    //#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::cpls::entities::NodeConfig* this__8 = this;
    ::x10aux::nullCheck(this__8)->FMGL(heuristic) = ((x10_int)0);
    ::x10aux::nullCheck(this__8)->FMGL(outTeamTime) = ((x10_long)0ll);
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
}
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::_make(x10_int heuristic)
{
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    this_->_constructor(heuristic);
    return this_;
}



//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor() {
    
    //#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::cpls::entities::NodeConfig* this__9 = this;
    ::x10aux::nullCheck(this__9)->FMGL(heuristic) = ((x10_int)0);
    ::x10aux::nullCheck(this__9)->FMGL(outTeamTime) = ((x10_long)0ll);
    
    //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = ((x10_int)0);
}
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::_make()
{
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    this_->_constructor();
    return this_;
}



//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristic(x10_int heuristic) {
    
    //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
}

//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getHeuristic() {
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    return this->FMGL(heuristic);
    
}

//#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setOutTeamTime(x10_long outTeamTime) {
    
    //#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(outTeamTime) = outTeamTime;
}

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getOutTeamTime() {
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    return this->FMGL(outTeamTime);
    
}

//#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::cpls__entities__NodeConfig____this__cpls__entities__NodeConfig(
  ) {
    return this;
    
}
void cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig(
  ) {
    this->FMGL(heuristic) = ((x10_int)0);
    this->FMGL(outTeamTime) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t cpls::entities::NodeConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::NodeConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::NodeConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(heuristic));
    buf.write(this->FMGL(outTeamTime));
    
}

::x10::lang::Reference* ::cpls::entities::NodeConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::NodeConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::NodeConfig>()) ::cpls::entities::NodeConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::NodeConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(heuristic) = buf.read<x10_int>();
    FMGL(outTeamTime) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::entities::NodeConfig::rtt;
void cpls::entities::NodeConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.NodeConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of NodeConfig */
/*************************************************/
