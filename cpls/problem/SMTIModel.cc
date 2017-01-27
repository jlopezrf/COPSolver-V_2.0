/*************************************************/
/* START of SMTIModel */
#include <cpls/problem/SMTIModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/SMTIModel.x10"
void cpls::problem::SMTIModel::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/SMTIModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/SMTIModel.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/SMTIModel.x10"
    this->cpls::problem::SMTIModel::__fieldInitializers_cpls_problem_SMTIModel();
}
::cpls::problem::SMTIModel* cpls::problem::SMTIModel::_make(x10_long sz) {
    ::cpls::problem::SMTIModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/SMTIModel.x10"
::cpls::problem::SMTIModel* cpls::problem::SMTIModel::cpls__problem__SMTIModel____this__cpls__problem__SMTIModel(
  ) {
    return this;
    
}
void cpls::problem::SMTIModel::__fieldInitializers_cpls_problem_SMTIModel(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::problem::SMTIModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::SMTIModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::SMTIModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::problem::SMTIModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::SMTIModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::SMTIModel>()) ::cpls::problem::SMTIModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::SMTIModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::problem::SMTIModel::rtt;
void cpls::problem::SMTIModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.SMTIModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of SMTIModel */
/*************************************************/
