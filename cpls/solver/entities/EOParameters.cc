/*************************************************/
/* START of EOParameters */
#include <cpls/solver/entities/EOParameters.h>

#include <cpls/solver/entities/HeuristicParameters.h>
#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
void cpls::solver::entities::EOParameters::_constructor() {
    (this)->::cpls::solver::entities::HeuristicParameters::_constructor();
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    this->cpls::solver::entities::EOParameters::__fieldInitializers_cpls_solver_entities_EOParameters();
}
::cpls::solver::entities::EOParameters* cpls::solver::entities::EOParameters::_make(
  ) {
    ::cpls::solver::entities::EOParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::EOParameters>()) ::cpls::solver::entities::EOParameters();
    this_->_constructor();
    return this_;
}



//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
void cpls::solver::entities::EOParameters::_constructor(x10_double tauUserSel,
                                                        x10_int pdfUserSel,
                                                        x10_int selSecond) {
    (this)->::cpls::solver::entities::HeuristicParameters::_constructor();
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    this->cpls::solver::entities::EOParameters::__fieldInitializers_cpls_solver_entities_EOParameters();
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    this->FMGL(tauUserSel) = tauUserSel;
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    this->FMGL(pdfUserSel) = pdfUserSel;
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    this->FMGL(selSecond) = selSecond;
}
::cpls::solver::entities::EOParameters* cpls::solver::entities::EOParameters::_make(
  x10_double tauUserSel, x10_int pdfUserSel, x10_int selSecond)
{
    ::cpls::solver::entities::EOParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::EOParameters>()) ::cpls::solver::entities::EOParameters();
    this_->_constructor(tauUserSel, pdfUserSel, selSecond);
    return this_;
}



//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
x10_double cpls::solver::entities::EOParameters::getTauUserSel(
  ) {
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    return this->FMGL(tauUserSel);
    
}

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
x10_int cpls::solver::entities::EOParameters::getPdfUserSel(
  ) {
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    return this->FMGL(pdfUserSel);
    
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
x10_int cpls::solver::entities::EOParameters::getSelSecond(
  ) {
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
    return this->FMGL(selSecond);
    
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/EOParameters.x10"
::cpls::solver::entities::EOParameters* cpls::solver::entities::EOParameters::cpls__solver__entities__EOParameters____this__cpls__solver__entities__EOParameters(
  ) {
    return this;
    
}
void cpls::solver::entities::EOParameters::__fieldInitializers_cpls_solver_entities_EOParameters(
  ) {
    this->FMGL(tauUserSel) = 0.0;
    this->FMGL(pdfUserSel) = ((x10_int)0);
    this->FMGL(selSecond) = ((x10_int)0);
}
const ::x10aux::serialization_id_t cpls::solver::entities::EOParameters::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::entities::EOParameters::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::entities::EOParameters::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::entities::HeuristicParameters::_serialize_body(buf);
    buf.write(this->FMGL(tauUserSel));
    buf.write(this->FMGL(pdfUserSel));
    buf.write(this->FMGL(selSecond));
    
}

::x10::lang::Reference* ::cpls::solver::entities::EOParameters::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::entities::EOParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::EOParameters>()) ::cpls::solver::entities::EOParameters();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::entities::EOParameters::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::entities::HeuristicParameters::_deserialize_body(buf);
    FMGL(tauUserSel) = buf.read<x10_double>();
    FMGL(pdfUserSel) = buf.read<x10_int>();
    FMGL(selSecond) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::solver::entities::EOParameters::rtt;
void cpls::solver::entities::EOParameters::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::entities::HeuristicParameters>()};
    rtt.initStageTwo("cpls.solver.entities.EOParameters",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of EOParameters */
/*************************************************/
