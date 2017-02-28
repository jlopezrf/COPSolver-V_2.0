/*************************************************/
/* START of RandomSearch */
#include <cpls/solver/RandomSearch.h>

#include <cpls/solver/SingleSolHeuristic.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
void cpls::solver::RandomSearch::_constructor() {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
    (this)->::cpls::solver::SingleSolHeuristic::_constructor();
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
    this->cpls::solver::RandomSearch::__fieldInitializers_cpls_solver_RandomSearch();
}
::cpls::solver::RandomSearch* cpls::solver::RandomSearch::_make() {
    ::cpls::solver::RandomSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch();
    this_->_constructor();
    return this_;
}



//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
void cpls::solver::RandomSearch::solve() {
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__33759 = ::x10aux::makeStringLit("Heuristic Solve invocado desde RS"); strLit__33759; }))));
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/RandomSearch.x10"
::cpls::solver::RandomSearch* cpls::solver::RandomSearch::cpls__solver__RandomSearch____this__cpls__solver__RandomSearch(
  ) {
    return this;
    
}
void cpls::solver::RandomSearch::__fieldInitializers_cpls_solver_RandomSearch(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::solver::RandomSearch::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::RandomSearch::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::RandomSearch::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::solver::RandomSearch::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::RandomSearch* this_ = new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::RandomSearch::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::SingleSolHeuristic::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::solver::RandomSearch::rtt;
void cpls::solver::RandomSearch::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::SingleSolHeuristic>()};
    rtt.initStageTwo("cpls.solver.RandomSearch",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of RandomSearch */
/*************************************************/
