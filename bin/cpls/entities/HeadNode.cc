/*************************************************/
/* START of HeadNode */
#include <cpls/entities/HeadNode.h>

#include <cpls/entities/CPLSNode.h>
#include <x10/lang/Int.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/HeadNode.x10"
void cpls::entities::HeadNode::_constructor(x10_int size) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/HeadNode.x10"
    (this)->::cpls::entities::CPLSNode::_constructor(size);
    
    //#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/HeadNode.x10"
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/HeadNode.x10"
    this->cpls::entities::HeadNode::__fieldInitializers_cpls_entities_HeadNode();
}
::cpls::entities::HeadNode* cpls::entities::HeadNode::_make(x10_int size)
{
    ::cpls::entities::HeadNode* this_ = new (::x10aux::alloc_z< ::cpls::entities::HeadNode>()) ::cpls::entities::HeadNode();
    this_->_constructor(size);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/entities/HeadNode.x10"
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
