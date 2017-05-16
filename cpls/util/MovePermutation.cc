/*************************************************/
/* START of MovePermutation */
#include <cpls/util/MovePermutation.h>

#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
void cpls::util::MovePermutation::_constructor(x10_long f, x10_long s) {
    
    //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    ::cpls::util::MovePermutation* this__5 = this;
    ::x10aux::nullCheck(this__5)->FMGL(first) = ((x10_long)-1ll);
    ::x10aux::nullCheck(this__5)->FMGL(second) = ((x10_long)-1ll);
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    this->FMGL(first) = f;
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    this->FMGL(second) = s;
}
::cpls::util::MovePermutation* cpls::util::MovePermutation::_make(x10_long f,
                                                                  x10_long s)
{
    ::cpls::util::MovePermutation* this_ = new (::x10aux::alloc_z< ::cpls::util::MovePermutation>()) ::cpls::util::MovePermutation();
    this_->_constructor(f, s);
    return this_;
}



//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
x10_long cpls::util::MovePermutation::getFirst() {
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    return this->FMGL(first);
    
}

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
x10_long cpls::util::MovePermutation::getSecond() {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    return this->FMGL(second);
    
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
void cpls::util::MovePermutation::setFirst(x10_long f) {
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    this->FMGL(first) = f;
}

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
void cpls::util::MovePermutation::setSecond(x10_long s) {
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
    this->FMGL(second) = s;
}

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
::cpls::util::MovePermutation* cpls::util::MovePermutation::cpls__util__MovePermutation____this__cpls__util__MovePermutation(
  ) {
    return this;
    
}
void cpls::util::MovePermutation::__fieldInitializers_cpls_util_MovePermutation(
  ) {
    this->FMGL(first) = ((x10_long)-1ll);
    this->FMGL(second) = ((x10_long)-1ll);
}
const ::x10aux::serialization_id_t cpls::util::MovePermutation::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::MovePermutation::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::util::MovePermutation::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(first));
    buf.write(this->FMGL(second));
    
}

::x10::lang::Reference* ::cpls::util::MovePermutation::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::MovePermutation* this_ = new (::x10aux::alloc_z< ::cpls::util::MovePermutation>()) ::cpls::util::MovePermutation();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::util::MovePermutation::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(first) = buf.read<x10_long>();
    FMGL(second) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::util::MovePermutation::rtt;
void cpls::util::MovePermutation::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.util.MovePermutation",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of MovePermutation */
/*************************************************/
