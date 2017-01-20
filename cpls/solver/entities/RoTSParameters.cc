/*************************************************/
/* START of RoTSParameters */
#include <cpls/solver/entities/RoTSParameters.h>

#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"

//#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"

//#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
void cpls::solver::entities::RoTSParameters::_constructor(x10_double tabuDurationFactorUS,
                                                          x10_double aspirationFactorUS) {
    
    //#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    ::cpls::solver::entities::RoTSParameters* this__5 = this;
    ::x10aux::nullCheck(this__5)->FMGL(tabuDurationFactorUS) = 0.0;
    ::x10aux::nullCheck(this__5)->FMGL(aspirationFactorUS) = 0.0;
    
    //#line 8 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    this->FMGL(tabuDurationFactorUS) = tabuDurationFactorUS;
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    this->FMGL(aspirationFactorUS) = aspirationFactorUS;
}
::cpls::solver::entities::RoTSParameters* cpls::solver::entities::RoTSParameters::_make(
  x10_double tabuDurationFactorUS, x10_double aspirationFactorUS)
{
    ::cpls::solver::entities::RoTSParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters();
    this_->_constructor(tabuDurationFactorUS, aspirationFactorUS);
    return this_;
}



//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
x10_double cpls::solver::entities::RoTSParameters::getTabuDurationFactorUS(
  ) {
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    return this->FMGL(tabuDurationFactorUS);
    
}

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
x10_double cpls::solver::entities::RoTSParameters::getAspirationFactorUS(
  ) {
    
    //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
    return this->FMGL(aspirationFactorUS);
    
}

//#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/entities/RoTSParameters.x10"
::cpls::solver::entities::RoTSParameters* cpls::solver::entities::RoTSParameters::cpls__solver__entities__RoTSParameters____this__cpls__solver__entities__RoTSParameters(
  ) {
    return this;
    
}
void cpls::solver::entities::RoTSParameters::__fieldInitializers_cpls_solver_entities_RoTSParameters(
  ) {
    this->FMGL(tabuDurationFactorUS) = 0.0;
    this->FMGL(aspirationFactorUS) = 0.0;
}
const ::x10aux::serialization_id_t cpls::solver::entities::RoTSParameters::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::entities::RoTSParameters::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::entities::RoTSParameters::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(tabuDurationFactorUS));
    buf.write(this->FMGL(aspirationFactorUS));
    
}

::x10::lang::Reference* ::cpls::solver::entities::RoTSParameters::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::entities::RoTSParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::RoTSParameters>()) ::cpls::solver::entities::RoTSParameters();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::entities::RoTSParameters::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(tabuDurationFactorUS) = buf.read<x10_double>();
    FMGL(aspirationFactorUS) = buf.read<x10_double>();
}

::x10aux::RuntimeType cpls::solver::entities::RoTSParameters::rtt;
void cpls::solver::entities::RoTSParameters::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.entities.RoTSParameters",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of RoTSParameters */
/*************************************************/
