/*************************************************/
/* START of ProblemGenericModel */
#include <cpls/problem/ProblemGenericModel.h>

#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::cpls__problem__ProblemGenericModel____this__cpls__problem__ProblemGenericModel(
  ) {
    return this;
    
}
void cpls::problem::ProblemGenericModel::_constructor(x10_long sz) {
    FMGL(sz) = sz;
    ::cpls::problem::ProblemGenericModel* this__5 = this;
    ::x10aux::nullCheck(this__5)->FMGL(size) = ::x10aux::nullCheck(this__5)->FMGL(sz);
}
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::_make(
  x10_long sz) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    this_->_constructor(sz);
    return this_;
}


void cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel(
  ) {
    this->FMGL(size) = this->FMGL(sz);
}
const ::x10aux::serialization_id_t cpls::problem::ProblemGenericModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::ProblemGenericModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::ProblemGenericModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(size));
    buf.write(this->FMGL(sz));
    
}

::x10::lang::Reference* ::cpls::problem::ProblemGenericModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::ProblemGenericModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(size) = buf.read<x10_long>();
    FMGL(sz) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::problem::ProblemGenericModel::rtt;
void cpls::problem::ProblemGenericModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.problem.ProblemGenericModel",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of ProblemGenericModel */
/*************************************************/
