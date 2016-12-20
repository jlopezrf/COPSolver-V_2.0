/*************************************************/
/* START of PopulBasedHeuristic */
#include <cpls/solver/PopulBasedHeuristic.h>

#include <cpls/solver/HeuristicSolver.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
void cpls::solver::PopulBasedHeuristic::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
    ::cpls::solver::HeuristicSolver* this__12 = this;
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    x10_long sz__13 = sz;
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this__12)->FMGL(sz) = sz__13;
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this__12)->FMGL(size) = ::x10aux::nullCheck(this__12)->FMGL(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
    ::cpls::solver::PopulBasedHeuristic* this__11 = this;
    
}
::cpls::solver::PopulBasedHeuristic* cpls::solver::PopulBasedHeuristic::_make(
  x10_long sz) {
    ::cpls::solver::PopulBasedHeuristic* this_ = new (::x10aux::alloc_z< ::cpls::solver::PopulBasedHeuristic>()) ::cpls::solver::PopulBasedHeuristic();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/PopulBasedHeuristic.x10"
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
