/*************************************************/
/* START of ConfigSol */
#include <cpls/entities/ConfigSol.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Synthetic.h>

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
void cpls::entities::ConfigSol::_constructor() {
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    ::cpls::entities::ConfigSol* this__10 = this;
    ::x10aux::nullCheck(this__10)->FMGL(variables) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__10)->FMGL(cost) = ((x10_long)0ll);
}
::cpls::entities::ConfigSol* cpls::entities::ConfigSol::_make() {
    ::cpls::entities::ConfigSol* this_ = new (::x10aux::alloc_z< ::cpls::entities::ConfigSol>()) ::cpls::entities::ConfigSol();
    this_->_constructor();
    return this_;
}



//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
void cpls::entities::ConfigSol::_constructor(::x10::lang::Rail< x10_int >* variables,
                                             x10_long cost) {
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    ::cpls::entities::ConfigSol* this__11 = this;
    ::x10aux::nullCheck(this__11)->FMGL(variables) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__11)->FMGL(cost) = ((x10_long)0ll);
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    this->FMGL(variables) = variables;
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    this->FMGL(cost) = cost;
}
::cpls::entities::ConfigSol* cpls::entities::ConfigSol::_make(::x10::lang::Rail< x10_int >* variables,
                                                              x10_long cost)
{
    ::cpls::entities::ConfigSol* this_ = new (::x10aux::alloc_z< ::cpls::entities::ConfigSol>()) ::cpls::entities::ConfigSol();
    this_->_constructor(variables, cost);
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
x10_long cpls::entities::ConfigSol::getCost() {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    return this->FMGL(cost);
    
}

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
void cpls::entities::ConfigSol::setCost(x10_long cost) {
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    this->FMGL(cost) = cost;
}

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
::x10::lang::Rail< x10_int >* cpls::entities::ConfigSol::getVariables(
  ) {
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    return this->FMGL(variables);
    
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
void cpls::entities::ConfigSol::setVariables(::x10::lang::Rail< x10_int >* variables) {
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
    this->FMGL(variables) = variables;
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/ConfigSol.x10"
::cpls::entities::ConfigSol* cpls::entities::ConfigSol::cpls__entities__ConfigSol____this__cpls__entities__ConfigSol(
  ) {
    return this;
    
}
void cpls::entities::ConfigSol::__fieldInitializers_cpls_entities_ConfigSol(
  ) {
    this->FMGL(variables) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cost) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t cpls::entities::ConfigSol::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::ConfigSol::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::ConfigSol::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(variables));
    buf.write(this->FMGL(cost));
    
}

::x10::lang::Reference* ::cpls::entities::ConfigSol::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::ConfigSol* this_ = new (::x10aux::alloc_z< ::cpls::entities::ConfigSol>()) ::cpls::entities::ConfigSol();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::ConfigSol::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(variables) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(cost) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::entities::ConfigSol::rtt;
void cpls::entities::ConfigSol::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.ConfigSol",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ConfigSol */
/*************************************************/
