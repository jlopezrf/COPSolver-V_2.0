/*************************************************/
/* START of EOSearch */
#include <cpls/solver/EOSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::_constructor() {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    this->cpls::solver::EOSearch::__fieldInitializers_cpls_solver_EOSearch();
}
::cpls::solver::EOSearch* cpls::solver::EOSearch::_make() {
    ::cpls::solver::EOSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch();
    this_->_constructor();
    return this_;
}



//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
void cpls::solver::EOSearch::solve() {
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__24113 = ::x10aux::makeStringLit("Heuristic Solve invocado desde EO"); strLit__24113; }))));
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/EOSearch.x10"
::cpls::solver::EOSearch* cpls::solver::EOSearch::cpls__solver__EOSearch____this__cpls__solver__EOSearch(
  ) {
    return this;
    
}
void cpls::solver::EOSearch::__fieldInitializers_cpls_solver_EOSearch(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::solver::EOSearch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::EOSearch::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::EOSearch::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::solver::EOSearch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::EOSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::EOSearch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::solver::EOSearch::rtt;
void cpls::solver::EOSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.EOSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of EOSearch */
/*************************************************/
