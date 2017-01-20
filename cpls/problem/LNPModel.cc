/*************************************************/
/* START of LNPModel */
#include <cpls/problem/LNPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/LNPModel.x10"
void cpls::problem::LNPModel::_constructor(x10_long sz) {
    
    //#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/LNPModel.x10"
    ::cpls::problem::ProblemGenericModel* this__993 = this;
    
    //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_long sizeProblem__994 = sz;
    
    //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this__993)->FMGL(size) = sizeProblem__994;
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this__993)->cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel();
    
    //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/LNPModel.x10"
    
    //#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/LNPModel.x10"
    ::cpls::problem::LNPModel* this__992 = this;
    
}
::cpls::problem::LNPModel* cpls::problem::LNPModel::_make(x10_long sz) {
    ::cpls::problem::LNPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::LNPModel>()) ::cpls::problem::LNPModel();
    this_->_constructor(sz);
    return this_;
}



//#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/LNPModel.x10"
::cpls::problem::LNPModel* cpls::problem::LNPModel::cpls__problem__LNPModel____this__cpls__problem__LNPModel(
  ) {
    return this;
    
}
void cpls::problem::LNPModel::__fieldInitializers_cpls_problem_LNPModel(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::problem::LNPModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::LNPModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::LNPModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::problem::LNPModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::LNPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::LNPModel>()) ::cpls::problem::LNPModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::LNPModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::problem::LNPModel::rtt;
void cpls::problem::LNPModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.LNPModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of LNPModel */
/*************************************************/
