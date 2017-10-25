/*************************************************/
/* START of AIPModel */
#include <cpls/problem/AIPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/AIPModel.x10"
void cpls::problem::AIPModel::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/AIPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/AIPModel.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/AIPModel.x10"
    ::cpls::problem::AIPModel* this__1116 = this;
    
}
::cpls::problem::AIPModel* cpls::problem::AIPModel::_make(x10_long sz) {
    ::cpls::problem::AIPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::AIPModel>()) ::cpls::problem::AIPModel();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/AIPModel.x10"
::cpls::problem::AIPModel* cpls::problem::AIPModel::cpls__problem__AIPModel____this__cpls__problem__AIPModel(
  ) {
    return this;
    
}
void cpls::problem::AIPModel::__fieldInitializers_cpls_problem_AIPModel(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::problem::AIPModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::AIPModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::AIPModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::problem::AIPModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::AIPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::AIPModel>()) ::cpls::problem::AIPModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::AIPModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::problem::AIPModel::rtt;
void cpls::problem::AIPModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.AIPModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of AIPModel */
/*************************************************/
