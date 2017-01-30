/*************************************************/
/* START of NodeConfig */
#include <cpls/entities/NodeConfig.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <cpls/solver/entities/HeuristicParameters.h>
#include <x10/compiler/Synthetic.h>

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor(x10_int heuristic) {
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::cpls::entities::NodeConfig* this__8 = this;
    ::x10aux::nullCheck(this__8)->FMGL(heuristic) = ((x10_int)0);
    ::x10aux::nullCheck(this__8)->FMGL(heuristicParameters) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::HeuristicParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8)->FMGL(outTeamTime) = ((x10_long)0ll);
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
}


//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor() {
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    ::cpls::entities::NodeConfig* this__9 = this;
    ::x10aux::nullCheck(this__9)->FMGL(heuristic) = ((x10_int)0);
    ::x10aux::nullCheck(this__9)->FMGL(heuristicParameters) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::HeuristicParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__9)->FMGL(outTeamTime) = ((x10_long)0ll);
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = ((x10_int)0);
}


//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristic(x10_int heuristic) {
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getHeuristic() {
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    return this->FMGL(heuristic);
    
}

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setOutTeamTime(x10_long outTeamTime) {
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(outTeamTime) = outTeamTime;
}

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getOutTeamTime() {
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    return this->FMGL(outTeamTime);
    
}

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristicParameters(::cpls::solver::entities::HeuristicParameters* heuristicParameters) {
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristicParameters) = heuristicParameters;
}

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
::cpls::solver::entities::HeuristicParameters* cpls::entities::NodeConfig::getHeuristicParameters(
  ) {
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
    return this->FMGL(heuristicParameters);
    
}

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/NodeConfig.x10"
::cpls::entities::NodeConfig* cpls::entities::NodeConfig::cpls__entities__NodeConfig____this__cpls__entities__NodeConfig(
  ) {
    return this;
    
}
void cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig(
  ) {
    this->FMGL(heuristic) = ((x10_int)0);
    this->FMGL(heuristicParameters) = (::x10aux::class_cast_unchecked< ::cpls::solver::entities::HeuristicParameters*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(outTeamTime) = ((x10_long)0ll);
}
void cpls::entities::NodeConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(heuristic));
    buf.write(this->FMGL(heuristicParameters));
    buf.write(this->FMGL(outTeamTime));
    
}

void cpls::entities::NodeConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(heuristic) = buf.read<x10_int>();
    FMGL(heuristicParameters) = buf.read< ::cpls::solver::entities::HeuristicParameters*>();
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
