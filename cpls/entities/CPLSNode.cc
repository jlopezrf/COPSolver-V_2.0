/*************************************************/
/* START of CPLSNode */
#include <cpls/entities/CPLSNode.h>

#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"

//#line 8 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"

//#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::_constructor(x10_int nodeRole) {
    
    //#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    FMGL(nodeRole) = nodeRole;
    
    //#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    ::cpls::entities::CPLSNode* this__349 = this;
    ::x10aux::nullCheck(this__349)->FMGL(nodeConfig) = ::x10aux::nullCheck(this__349)->FMGL(nodeRole);
    ::x10aux::nullCheck(this__349)->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__349)->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::cpls::entities::CPLSNode* cpls::entities::CPLSNode::_make(x10_int nodeRole)
{
    ::cpls::entities::CPLSNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::CPLSNode>()) ::cpls::entities::CPLSNode();
    this_->_constructor(nodeRole);
    return this_;
}



//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::initialize(x10_int idNode) {
    
    //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__350 = ::x10aux::makeStringLit("Nodo inicializado en el proceso"); strLit__350; })), idNode)));
}

//#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::setHeuristicSolver(::cpls::solver::HeuristicSolver* hs) {
    
    //#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    this->FMGL(heuristicSolver) = hs;
}

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
void cpls::entities::CPLSNode::setProblemModel(::cpls::problem::ProblemGenericModel* pm) {
    
    //#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    this->FMGL(problemModel) = pm;
}

//#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
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
