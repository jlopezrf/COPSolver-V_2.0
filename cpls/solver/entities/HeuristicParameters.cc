/*************************************************/
/* START of HeuristicParameters */
#include <cpls/solver/entities/HeuristicParameters.h>

#include <x10/compiler/Synthetic.h>

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/entities/HeuristicParameters.x10"
void cpls::solver::entities::HeuristicParameters::setParameters(::cpls::solver::entities::HeuristicParameters* parameters) {
 
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/entities/HeuristicParameters.x10"
::cpls::solver::entities::HeuristicParameters* cpls::solver::entities::HeuristicParameters::cpls__solver__entities__HeuristicParameters____this__cpls__solver__entities__HeuristicParameters(
  ) {
    return this;
    
}
void cpls::solver::entities::HeuristicParameters::_constructor() {
    this->cpls::solver::entities::HeuristicParameters::__fieldInitializers_cpls_solver_entities_HeuristicParameters();
}

void cpls::solver::entities::HeuristicParameters::__fieldInitializers_cpls_solver_entities_HeuristicParameters(
  ) {
 
}
void cpls::solver::entities::HeuristicParameters::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

void cpls::solver::entities::HeuristicParameters::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType cpls::solver::entities::HeuristicParameters::rtt;
void cpls::solver::entities::HeuristicParameters::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.entities.HeuristicParameters",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of HeuristicParameters */
/*************************************************/
