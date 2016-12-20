/*************************************************/
/* START of RoTSearch */
#include <cpls/solver/RoTSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/lang/Long.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
void cpls::solver::RoTSearch::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::cpls::solver::RoTSearch* this__260 = this;
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__261 = ::x10aux::makeStringLit("RoTSearch instanced"); strLit__261; }))));
}
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::_make(x10_long sz) {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/solver/RoTSearch.x10"
::cpls::solver::RoTSearch* cpls::solver::RoTSearch::cpls__solver__RoTSearch____this__cpls__solver__RoTSearch(
  ) {
    return this;
    
}
void cpls::solver::RoTSearch::__fieldInitializers_cpls_solver_RoTSearch(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::solver::RoTSearch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::RoTSearch::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::RoTSearch::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::solver::RoTSearch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::RoTSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::RoTSearch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::solver::RoTSearch::rtt;
void cpls::solver::RoTSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.RoTSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of RoTSearch */
/*************************************************/
