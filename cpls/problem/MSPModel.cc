/*************************************************/
/* START of MSPModel */
#include <cpls/problem/MSPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/MSPModel.x10"
void cpls::problem::MSPModel::_constructor(x10_long sz) {
    
    //#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/MSPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(sz);
    
    //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/MSPModel.x10"
    
    //#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/MSPModel.x10"
    ::cpls::problem::MSPModel* this__1003 = this;
    
}
::cpls::problem::MSPModel* cpls::problem::MSPModel::_make(x10_long sz) {
    ::cpls::problem::MSPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::MSPModel>()) ::cpls::problem::MSPModel();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/MSPModel.x10"
::cpls::problem::MSPModel* cpls::problem::MSPModel::cpls__problem__MSPModel____this__cpls__problem__MSPModel(
  ) {
    return this;
    
}
void cpls::problem::MSPModel::__fieldInitializers_cpls_problem_MSPModel(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::problem::MSPModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::MSPModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::MSPModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::problem::MSPModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::MSPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::MSPModel>()) ::cpls::problem::MSPModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::MSPModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::problem::MSPModel::rtt;
void cpls::problem::MSPModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.MSPModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of MSPModel */
/*************************************************/
