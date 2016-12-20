/*************************************************/
/* START of CPLSNode */
#include <cpls/entities/CPLSNode.h>

#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/compiler/Synthetic.h>

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::_constructor(x10_int nodeRole) {
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
    FMGL(nodeRole) = nodeRole;
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
    this->cpls::entities::CPLSNode::__fieldInitializers_cpls_entities_CPLSNode();
}
::cpls::entities::CPLSNode* cpls::entities::CPLSNode::_make(x10_int nodeRole)
{
    ::cpls::entities::CPLSNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::CPLSNode>()) ::cpls::entities::CPLSNode();
    this_->_constructor(nodeRole);
    return this_;
}



//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::initialize() {
 
}

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::setHeuristicSolver(::cpls::solver::HeuristicSolver* hs) {
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
    this->FMGL(heuristicSolver) = hs;
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::setProblemModel(::cpls::problem::ProblemGenericModel* pm) {
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
    this->FMGL(problemModel) = pm;
}

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/CPLSNode.x10"
::cpls::entities::CPLSNode* cpls::entities::CPLSNode::cpls__entities__CPLSNode____this__cpls__entities__CPLSNode(
  ) {
    return this;
    
}
void cpls::entities::CPLSNode::__fieldInitializers_cpls_entities_CPLSNode(
  ) {
    this->FMGL(nodeConfig) = this->FMGL(nodeRole);
    this->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::entities::CPLSNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::CPLSNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::CPLSNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nodeConfig));
    buf.write(this->FMGL(heuristicSolver));
    buf.write(this->FMGL(problemModel));
    buf.write(this->FMGL(nodeRole));
    
}

::x10::lang::Reference* ::cpls::entities::CPLSNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::CPLSNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::CPLSNode>()) ::cpls::entities::CPLSNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::CPLSNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nodeConfig) = buf.read<x10_int>();
    FMGL(heuristicSolver) = buf.read< ::cpls::solver::HeuristicSolver*>();
    FMGL(problemModel) = buf.read< ::cpls::problem::ProblemGenericModel*>();
    FMGL(nodeRole) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::entities::CPLSNode::rtt;
void cpls::entities::CPLSNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.CPLSNode",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CPLSNode */
/*************************************************/
