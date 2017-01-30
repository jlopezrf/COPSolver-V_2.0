/*************************************************/
/* START of PNPModel */
#include <cpls/problem/PNPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/PNPModel.x10"
void cpls::problem::PNPModel::_constructor(x10_long sz) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/PNPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(sz);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/PNPModel.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/PNPModel.x10"
    ::cpls::problem::PNPModel* this__1002 = this;
    
}
::cpls::problem::PNPModel* cpls::problem::PNPModel::_make(x10_long sz) {
    ::cpls::problem::PNPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::PNPModel>()) ::cpls::problem::PNPModel();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/PNPModel.x10"
::cpls::problem::PNPModel* cpls::problem::PNPModel::cpls__problem__PNPModel____this__cpls__problem__PNPModel(
  ) {
    return this;
    
}
void cpls::problem::PNPModel::__fieldInitializers_cpls_problem_PNPModel(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::problem::PNPModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::PNPModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::PNPModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::problem::PNPModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::PNPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::PNPModel>()) ::cpls::problem::PNPModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::PNPModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::problem::PNPModel::rtt;
void cpls::problem::PNPModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.PNPModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of PNPModel */
/*************************************************/
