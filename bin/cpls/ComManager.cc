/*************************************************/
/* START of ComManager */
#include <cpls/ComManager.h>

#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ComManager.x10"

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ComManager.x10"

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/ComManager.x10"
::cpls::ComManager* cpls::ComManager::cpls__ComManager____this__cpls__ComManager(
  ) {
    return this;
    
}
void cpls::ComManager::_constructor(x10_long sz) {
    FMGL(sz) = sz;
    this->cpls::ComManager::__fieldInitializers_cpls_ComManager();
}
::cpls::ComManager* cpls::ComManager::_make(x10_long sz) {
    ::cpls::ComManager* this_ = new (::x10aux::alloc_z< ::cpls::ComManager>()) ::cpls::ComManager();
    this_->_constructor(sz);
    return this_;
}


void cpls::ComManager::__fieldInitializers_cpls_ComManager() {
    this->FMGL(size) = this->FMGL(sz);
}
const ::x10aux::serialization_id_t cpls::ComManager::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::ComManager::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::ComManager::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(sz));
    
}

::x10::lang::Reference* ::cpls::ComManager::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::ComManager* this_ = new (::x10aux::alloc_z< ::cpls::ComManager>()) ::cpls::ComManager();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::ComManager::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(size) = buf.read<x10_long>();
    FMGL(sz) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::ComManager::rtt;
void cpls::ComManager::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.ComManager",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ComManager */
/*************************************************/
