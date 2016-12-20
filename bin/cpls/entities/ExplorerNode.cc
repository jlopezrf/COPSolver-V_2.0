/*************************************************/
/* START of ExplorerNode */
#include <cpls/entities/ExplorerNode.h>

#include <cpls/entities/CPLSNode.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/ExplorerNode.x10"
void cpls::entities::ExplorerNode::_constructor(x10_int size) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/ExplorerNode.x10"
    (this)->::cpls::entities::CPLSNode::_constructor(size);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/ExplorerNode.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/ExplorerNode.x10"
    this->cpls::entities::ExplorerNode::__fieldInitializers_cpls_entities_ExplorerNode();
}
::cpls::entities::ExplorerNode* cpls::entities::ExplorerNode::_make(x10_int size)
{
    ::cpls::entities::ExplorerNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::ExplorerNode>()) ::cpls::entities::ExplorerNode();
    this_->_constructor(size);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/ExplorerNode.x10"
::cpls::entities::ExplorerNode* cpls::entities::ExplorerNode::cpls__entities__ExplorerNode____this__cpls__entities__ExplorerNode(
  ) {
    return this;
    
}
void cpls::entities::ExplorerNode::__fieldInitializers_cpls_entities_ExplorerNode(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::entities::ExplorerNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::ExplorerNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::ExplorerNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::entities::CPLSNode::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::entities::ExplorerNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::ExplorerNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::ExplorerNode>()) ::cpls::entities::ExplorerNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::ExplorerNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::CPLSNode::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::entities::ExplorerNode::rtt;
void cpls::entities::ExplorerNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::entities::CPLSNode>()};
    rtt.initStageTwo("cpls.entities.ExplorerNode",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of ExplorerNode */
/*************************************************/
