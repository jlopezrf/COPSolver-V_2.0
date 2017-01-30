/*************************************************/
/* START of PopulBasedHeuristic */
#include <cpls/solver/PopulBasedHeuristic.h>

#include <cpls/solver/HeuristicSolver.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
void cpls::solver::PopulBasedHeuristic::_constructor() {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
    ::cpls::solver::HeuristicSolver* this__955 = this;
    
    //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this__955)->cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver();
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
    ::cpls::solver::PopulBasedHeuristic* this__954 = this;
    
}
::cpls::solver::PopulBasedHeuristic* cpls::solver::PopulBasedHeuristic::_make(
  ) {
    ::cpls::solver::PopulBasedHeuristic* this_ = new (::x10aux::alloc_z< ::cpls::solver::PopulBasedHeuristic>()) ::cpls::solver::PopulBasedHeuristic();
    this_->_constructor();
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
::cpls::solver::PopulBasedHeuristic* cpls::solver::PopulBasedHeuristic::cpls__solver__PopulBasedHeuristic____this__cpls__solver__PopulBasedHeuristic(
  ) {
    return this;
    
}
void cpls::solver::PopulBasedHeuristic::__fieldInitializers_cpls_solver_PopulBasedHeuristic(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::solver::PopulBasedHeuristic::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::PopulBasedHeuristic::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::PopulBasedHeuristic::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::HeuristicSolver::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::solver::PopulBasedHeuristic::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::PopulBasedHeuristic* this_ = new (::x10aux::alloc_z< ::cpls::solver::PopulBasedHeuristic>()) ::cpls::solver::PopulBasedHeuristic();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::PopulBasedHeuristic::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::HeuristicSolver::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::solver::PopulBasedHeuristic::rtt;
void cpls::solver::PopulBasedHeuristic::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::HeuristicSolver>()};
    rtt.initStageTwo("cpls.solver.PopulBasedHeuristic",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of PopulBasedHeuristic */
/*************************************************/
