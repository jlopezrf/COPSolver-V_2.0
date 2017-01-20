/*************************************************/
/* START of HeadNode */
#include <cpls/entities/HeadNode.h>

#include <cpls/entities/CPLSNode.h>
#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
void cpls::entities::HeadNode::_constructor(x10_int size) {
    
    //#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
    ::cpls::entities::CPLSNode* this__367 = this;
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    x10_int nodeRole__368 = size;
    
    //#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    ::x10aux::nullCheck(this__367)->FMGL(nodeRole) = nodeRole__368;
    
    //#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    ::x10aux::nullCheck(this__367)->FMGL(nodeConfig) = ::x10aux::nullCheck(this__367)->FMGL(nodeRole);
    ::x10aux::nullCheck(this__367)->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__367)->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
    
    //#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
    ::cpls::entities::HeadNode* this__366 = this;
    
}
::cpls::entities::HeadNode* cpls::entities::HeadNode::_make(x10_int size)
{
    ::cpls::entities::HeadNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::HeadNode>()) ::cpls::entities::HeadNode();
    this_->_constructor(size);
    return this_;
}



//#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
void cpls::entities::HeadNode::initialize(x10_int idNode) {
    
    //#line 8 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__369 = ::x10aux::makeStringLit("Head Inicializado en el nodo: "); strLit__369; })), idNode)));
}

//#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/entities/HeadNode.x10"
::cpls::entities::HeadNode* cpls::entities::HeadNode::cpls__entities__HeadNode____this__cpls__entities__HeadNode(
  ) {
    return this;
    
}
void cpls::entities::HeadNode::__fieldInitializers_cpls_entities_HeadNode(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::entities::HeadNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::HeadNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::HeadNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::entities::CPLSNode::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::entities::HeadNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::HeadNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::HeadNode>()) ::cpls::entities::HeadNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::HeadNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::CPLSNode::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::entities::HeadNode::rtt;
void cpls::entities::HeadNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::entities::CPLSNode>()};
    rtt.initStageTwo("cpls.entities.HeadNode",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of HeadNode */
/*************************************************/
