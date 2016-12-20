/*************************************************/
/* START of SingleSolHeuristic */
#include <cpls/solver/SingleSolHeuristic.h>

#include <cpls/solver/HeuristicSolver.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/SingleSolHeuristic.x10"
void cpls::solver::SingleSolHeuristic::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/SingleSolHeuristic.x10"
    ::cpls::solver::HeuristicSolver* this__12 = this;
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    x10_long sz__13 = sz;
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this__12)->FMGL(sz) = sz__13;
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(this__12)->FMGL(size) = ::x10aux::nullCheck(this__12)->FMGL(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/SingleSolHeuristic.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/SingleSolHeuristic.x10"
    ::cpls::solver::SingleSolHeuristic* this__11 = this;
    
}
::cpls::solver::SingleSolHeuristic* cpls::solver::SingleSolHeuristic::_make(
  x10_long sz) {
    ::cpls::solver::SingleSolHeuristic* this_ = new (::x10aux::alloc_z< ::cpls::solver::SingleSolHeuristic>()) ::cpls::solver::SingleSolHeuristic();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/SingleSolHeuristic.x10"
::cpls::solver::SingleSolHeuristic* cpls::solver::SingleSolHeuristic::cpls__solver__SingleSolHeuristic____this__cpls__solver__SingleSolHeuristic(
  ) {
    return this;
    
}
void cpls::solver::SingleSolHeuristic::__fieldInitializers_cpls_solver_SingleSolHeuristic(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::solver::SingleSolHeuristic::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::SingleSolHeuristic::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::SingleSolHeuristic::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::HeuristicSolver::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::solver::SingleSolHeuristic::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic* this_ = new (::x10aux::alloc_z< ::cpls::solver::SingleSolHeuristic>()) ::cpls::solver::SingleSolHeuristic();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::SingleSolHeuristic::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::HeuristicSolver::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::solver::SingleSolHeuristic::rtt;
void cpls::solver::SingleSolHeuristic::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::HeuristicSolver>()};
    rtt.initStageTwo("cpls.solver.SingleSolHeuristic",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of SingleSolHeuristic */
/*************************************************/
