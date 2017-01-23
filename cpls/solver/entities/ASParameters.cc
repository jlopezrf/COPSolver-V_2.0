/*************************************************/
/* START of ASParameters */
#include <cpls/solver/entities/ASParameters.h>

#include <cpls/solver/entities/HeuristicParameters.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Synthetic.h>

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
void cpls::solver::entities::ASParameters::_constructor() {
    ::cpls::solver::entities::HeuristicParameters* this__10 = this;
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->cpls::solver::entities::ASParameters::__fieldInitializers_cpls_solver_entities_ASParameters();
}
::cpls::solver::entities::ASParameters* cpls::solver::entities::ASParameters::_make(
  ) {
    ::cpls::solver::entities::ASParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::ASParameters>()) ::cpls::solver::entities::ASParameters();
    this_->_constructor();
    return this_;
}



//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
void cpls::solver::entities::ASParameters::_constructor(x10_long nVarToReset,
                                                        x10_int resetPercent,
                                                        x10_boolean exhaustive,
                                                        x10_int freezeLocMin,
                                                        x10_int freezeSwap,
                                                        x10_int resetLimit,
                                                        x10_int probSelectLocMin,
                                                        x10_boolean firstBest) {
    ::cpls::solver::entities::HeuristicParameters* this__11 =
      this;
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->cpls::solver::entities::ASParameters::__fieldInitializers_cpls_solver_entities_ASParameters();
    
    //#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(nVarToReset) = nVarToReset;
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(resetPercent) = resetPercent;
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(exhaustive) = exhaustive;
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(freezeLocMin) = freezeLocMin;
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(freezeSwap) = freezeSwap;
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(resetLimit) = resetLimit;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(probSelectLocMin) = probSelectLocMin;
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    this->FMGL(firstBest) = firstBest;
}
::cpls::solver::entities::ASParameters* cpls::solver::entities::ASParameters::_make(
  x10_long nVarToReset, x10_int resetPercent, x10_boolean exhaustive,
  x10_int freezeLocMin, x10_int freezeSwap, x10_int resetLimit,
  x10_int probSelectLocMin, x10_boolean firstBest) {
    ::cpls::solver::entities::ASParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::ASParameters>()) ::cpls::solver::entities::ASParameters();
    this_->_constructor(nVarToReset, resetPercent, exhaustive,
    freezeLocMin, freezeSwap, resetLimit, probSelectLocMin,
    firstBest);
    return this_;
}



//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_long cpls::solver::entities::ASParameters::getNVarToReset(
  ) {
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(nVarToReset);
    
}

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_int cpls::solver::entities::ASParameters::getResetPercent(
  ) {
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(resetPercent);
    
}

//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_boolean cpls::solver::entities::ASParameters::getExhaustive(
  ) {
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(exhaustive);
    
}

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_int cpls::solver::entities::ASParameters::getFreezeLocMin(
  ) {
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(freezeLocMin);
    
}

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_int cpls::solver::entities::ASParameters::getFreezeSwap(
  ) {
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(freezeSwap);
    
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_int cpls::solver::entities::ASParameters::getResetLimit(
  ) {
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(resetLimit);
    
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_int cpls::solver::entities::ASParameters::getProbSelectLocMin(
  ) {
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(probSelectLocMin);
    
}

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
x10_boolean cpls::solver::entities::ASParameters::getFirstBest(
  ) {
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
    return this->FMGL(firstBest);
    
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/entities/ASParameters.x10"
::cpls::solver::entities::ASParameters* cpls::solver::entities::ASParameters::cpls__solver__entities__ASParameters____this__cpls__solver__entities__ASParameters(
  ) {
    return this;
    
}
void cpls::solver::entities::ASParameters::__fieldInitializers_cpls_solver_entities_ASParameters(
  ) {
    this->FMGL(nVarToReset) = ((x10_long)0ll);
    this->FMGL(resetPercent) = ((x10_int)0);
    this->FMGL(exhaustive) = false;
    this->FMGL(freezeLocMin) = ((x10_int)0);
    this->FMGL(freezeSwap) = ((x10_int)0);
    this->FMGL(resetLimit) = ((x10_int)0);
    this->FMGL(probSelectLocMin) = ((x10_int)0);
    this->FMGL(firstBest) = false;
}
const ::x10aux::serialization_id_t cpls::solver::entities::ASParameters::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::entities::ASParameters::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::entities::ASParameters::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::entities::HeuristicParameters::_serialize_body(buf);
    buf.write(this->FMGL(nVarToReset));
    buf.write(this->FMGL(resetPercent));
    buf.write(this->FMGL(exhaustive));
    buf.write(this->FMGL(freezeLocMin));
    buf.write(this->FMGL(freezeSwap));
    buf.write(this->FMGL(resetLimit));
    buf.write(this->FMGL(probSelectLocMin));
    buf.write(this->FMGL(firstBest));
    
}

::x10::lang::Reference* ::cpls::solver::entities::ASParameters::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::entities::ASParameters* this_ = new (::x10aux::alloc_z< ::cpls::solver::entities::ASParameters>()) ::cpls::solver::entities::ASParameters();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::entities::ASParameters::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::entities::HeuristicParameters::_deserialize_body(buf);
    FMGL(nVarToReset) = buf.read<x10_long>();
    FMGL(resetPercent) = buf.read<x10_int>();
    FMGL(exhaustive) = buf.read<x10_boolean>();
    FMGL(freezeLocMin) = buf.read<x10_int>();
    FMGL(freezeSwap) = buf.read<x10_int>();
    FMGL(resetLimit) = buf.read<x10_int>();
    FMGL(probSelectLocMin) = buf.read<x10_int>();
    FMGL(firstBest) = buf.read<x10_boolean>();
}

::x10aux::RuntimeType cpls::solver::entities::ASParameters::rtt;
void cpls::solver::entities::ASParameters::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::entities::HeuristicParameters>()};
    rtt.initStageTwo("cpls.solver.entities.ASParameters",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of ASParameters */
/*************************************************/
