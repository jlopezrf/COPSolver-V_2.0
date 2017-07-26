/*************************************************/
/* START of CAPModel */
#include <cpls/problem/CAPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/CAPModel.x10"
void cpls::problem::CAPModel::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/CAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/CAPModel.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/CAPModel.x10"
    this->cpls::problem::CAPModel::__fieldInitializers_cpls_problem_CAPModel();
}
::cpls::problem::CAPModel* cpls::problem::CAPModel::_make(x10_long sz) {
    ::cpls::problem::CAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::CAPModel>()) ::cpls::problem::CAPModel();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/CAPModel.x10"
::cpls::problem::CAPModel* cpls::problem::CAPModel::cpls__problem__CAPModel____this__cpls__problem__CAPModel(
  ) {
    return this;
    
}
void cpls::problem::CAPModel::__fieldInitializers_cpls_problem_CAPModel(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::problem::CAPModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::CAPModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::CAPModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::problem::CAPModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::CAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::CAPModel>()) ::cpls::problem::CAPModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::CAPModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::problem::CAPModel::rtt;
void cpls::problem::CAPModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.CAPModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of CAPModel */
/*************************************************/