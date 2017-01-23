/*************************************************/
/* START of MasterNode */
#include <cpls/entities/MasterNode.h>

#include <cpls/entities/CPLSNode.h>
#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
void cpls::entities::MasterNode::_constructor(x10_int size) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
    ::cpls::entities::CPLSNode* this__367 = this;
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    x10_int nodeRole__368 = size;
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    ::x10aux::nullCheck(this__367)->FMGL(nodeRole) = nodeRole__368;
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/CPLSNode.x10"
    ::x10aux::nullCheck(this__367)->FMGL(nodeConfig) = ::x10aux::nullCheck(this__367)->FMGL(nodeRole);
    ::x10aux::nullCheck(this__367)->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__367)->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
    ::cpls::entities::MasterNode* this__366 = this;
    
}
::cpls::entities::MasterNode* cpls::entities::MasterNode::_make(x10_int size)
{
    ::cpls::entities::MasterNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::MasterNode>()) ::cpls::entities::MasterNode();
    this_->_constructor(size);
    return this_;
}



//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
void cpls::entities::MasterNode::initialize(x10_int idNode) {
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__369 = ::x10aux::makeStringLit("Master Inicializado en nodo: "); strLit__369; })), idNode)));
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/MasterNode.x10"
::cpls::entities::MasterNode* cpls::entities::MasterNode::cpls__entities__MasterNode____this__cpls__entities__MasterNode(
  ) {
    return this;
    
}
void cpls::entities::MasterNode::__fieldInitializers_cpls_entities_MasterNode(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::entities::MasterNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::MasterNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::MasterNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::entities::CPLSNode::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::entities::MasterNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::MasterNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::MasterNode>()) ::cpls::entities::MasterNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::MasterNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::CPLSNode::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::entities::MasterNode::rtt;
void cpls::entities::MasterNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::entities::CPLSNode>()};
    rtt.initStageTwo("cpls.entities.MasterNode",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of MasterNode */
/*************************************************/
