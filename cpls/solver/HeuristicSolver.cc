/*************************************************/
/* START of HeuristicSolver */
#include <cpls/solver/HeuristicSolver.h>

#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::_constructor(x10_long sz) {
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    FMGL(sz) = sz;
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::cpls::solver::HeuristicSolver* this__5 = this;
    ::x10aux::nullCheck(this__5)->FMGL(size) = ::x10aux::nullCheck(this__5)->FMGL(sz);
}
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::_make(x10_long sz)
{
    ::cpls::solver::HeuristicSolver* this_ = new (::x10aux::alloc_z< ::cpls::solver::HeuristicSolver>()) ::cpls::solver::HeuristicSolver();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::cpls__solver__HeuristicSolver____this__cpls__solver__HeuristicSolver(
  ) {
    return this;
    
}
void cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver(
  ) {
    this->FMGL(size) = this->FMGL(sz);
}
const ::x10aux::serialization_id_t cpls::solver::HeuristicSolver::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::HeuristicSolver::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::HeuristicSolver::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(sz));
    
}

::x10::lang::Reference* ::cpls::solver::HeuristicSolver::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::HeuristicSolver* this_ = new (::x10aux::alloc_z< ::cpls::solver::HeuristicSolver>()) ::cpls::solver::HeuristicSolver();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::HeuristicSolver::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(size) = buf.read<x10_long>();
    FMGL(sz) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::solver::HeuristicSolver::rtt;
void cpls::solver::HeuristicSolver::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.HeuristicSolver",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of HeuristicSolver */
/*************************************************/
