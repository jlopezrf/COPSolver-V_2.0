/*************************************************/
/* START of NodeConfig */
#include <cpls/entities/NodeConfig.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <cpls/solver/entities/HeuristicParameters.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <cpls/solver/entities/ASParameters.h>
#include <cpls/solver/entities/EOParameters.h>
#include <cpls/solver/entities/RoTSParameters.h>
#include <x10/compiler/Synthetic.h>

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor(x10_int heuristic) {
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
}


//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::_constructor() {
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->cpls::entities::NodeConfig::__fieldInitializers_cpls_entities_NodeConfig();
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = ((x10_int)0);
}


//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristic(x10_int heuristic) {
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->FMGL(heuristic) = heuristic;
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    switch (heuristic) {
        
        //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
        case 2/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)()*/: ;
        {
            
            //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            this->FMGL(heuristicParameters) = ::cpls::solver::entities::ASParameters::_make();
            
            //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            break;
        }
        //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
        case 3/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)()*/: ;
        {
            
            //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            this->FMGL(heuristicParameters) = ::cpls::solver::entities::EOParameters::_make();
            
            //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            break;
        }
        //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
        case 4/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)()*/: ;
        {
            
            //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            this->FMGL(heuristicParameters) = ::cpls::solver::entities::RoTSParameters::_make();
            
            //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            break;
        }
    }
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_int cpls::entities::NodeConfig::getHeuristic() {
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    return this->FMGL(heuristic);
    
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setOutTeamTime(x10_long outTeamTime) {
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    this->FMGL(outTeamTime) = outTeamTime;
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
x10_long cpls::entities::NodeConfig::getOutTeamTime() {
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    return this->FMGL(outTeamTime);
    
}

//#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
void cpls::entities::NodeConfig::setHeuristicParameters(::cpls::solver::entities::HeuristicParameters* heuristicParameters) {
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    switch (this->FMGL(heuristic)) {
        
        //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
        case 2/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)()*/: ;
        {
            
            //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            ::x10aux::nullCheck(this->FMGL(heuristicParameters))->setParameters(
              reinterpret_cast< ::cpls::solver::entities::HeuristicParameters*>(::x10aux::class_cast< ::cpls::solver::entities::ASParameters*>(heuristicParameters)));
            
            //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            break;
        }
        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
        case 3/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)()*/: ;
        {
            
            //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            ::x10aux::nullCheck(this->FMGL(heuristicParameters))->setParameters(
              reinterpret_cast< ::cpls::solver::entities::HeuristicParameters*>(::x10aux::class_cast< ::cpls::solver::entities::EOParameters*>(heuristicParameters)));
            
            //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            break;
        }
        //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
        case 4/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)()*/: ;
        {
            
            //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            ::x10aux::nullCheck(this->FMGL(heuristicParameters))->setParameters(
              reinterpret_cast< ::cpls::solver::entities::HeuristicParameters*>(::x10aux::class_cast< ::cpls::solver::entities::RoTSParameters*>(heuristicParameters)));
            
            //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
            break;
        }
    }
}

//#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
::cpls::solver::entities::HeuristicParameters* cpls::entities::NodeConfig::getHeuristicParameters(
  ) {
    
    //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
    return this->FMGL(heuristicParameters);
    
}

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/NodeConfig.x10"
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
