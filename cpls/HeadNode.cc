/*************************************************/
/* START of HeadNode */
#include <cpls/HeadNode.h>

#include <cpls/CPLSNode.h>
#include <x10/lang/Boolean.h>
#include <cpls/SmartPool.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/lang/Int.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/util/Maybe.h>
#include <cpls/entities/State.h>
#include <x10/compiler/Synthetic.h>

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
void cpls::HeadNode::_constructor() {
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    (this)->::cpls::CPLSNode::_constructor();
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    this->cpls::HeadNode::__fieldInitializers_cpls_HeadNode();
}
::cpls::HeadNode* cpls::HeadNode::_make() {
    ::cpls::HeadNode* this_ = new (::x10aux::alloc_z< ::cpls::HeadNode>()) ::cpls::HeadNode();
    this_->_constructor();
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
void cpls::HeadNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                ::cpls::entities::PoolConfig* teamPoolConfig,
                                x10_long problemSize, x10_long inSeed,
                                x10_long maxIter) {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    ::cpls::CPLSNode::initialize(config, idPlace, teamPoolConfig,
                                 problemSize, inSeed, maxIter);
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    this->FMGL(teamPool) = ::cpls::SmartPool::_make(::x10aux::nullCheck(teamPoolConfig)->getProblemSize(),
                                                    ::x10aux::nullCheck(teamPoolConfig)->getPoolSize(),
                                                    ((x10_long)(::x10aux::nullCheck(teamPoolConfig)->getPoolMode())),
                                                    ::x10aux::nullCheck(teamPoolConfig)->getMinDist());
}

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
void cpls::HeadNode::setMasterNodeIndicator(x10_boolean isThereAMasterNode) {
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    this->FMGL(isThereAMasterNode) = isThereAMasterNode;
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
void cpls::HeadNode::start() {
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26296 = ::x10aux::makeStringLit("Se env\355a la se\361al de start en el Head"); strLit__26296; }))));
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    ::x10aux::nullCheck(this->::cpls::CPLSNode::FMGL(heuristicSolver))->solve();
}

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
void cpls::HeadNode::getBestConf() {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
    ::x10aux::nullCheck(this->FMGL(teamPool))->getBestConf();
}

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeadNode.x10"
::cpls::HeadNode* cpls::HeadNode::cpls__HeadNode____this__cpls__HeadNode(
  ) {
    return this;
    
}
void cpls::HeadNode::__fieldInitializers_cpls_HeadNode() {
    this->FMGL(teamPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(isThereAMasterNode) = false;
}
const ::x10aux::serialization_id_t cpls::HeadNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::HeadNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::HeadNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::CPLSNode::_serialize_body(buf);
    buf.write(this->FMGL(teamPool));
    buf.write(this->FMGL(isThereAMasterNode));
    
}

::x10::lang::Reference* ::cpls::HeadNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::HeadNode* this_ = new (::x10aux::alloc_z< ::cpls::HeadNode>()) ::cpls::HeadNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::HeadNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::CPLSNode::_deserialize_body(buf);
    FMGL(teamPool) = buf.read< ::cpls::SmartPool*>();
    FMGL(isThereAMasterNode) = buf.read<x10_boolean>();
}

::x10aux::RuntimeType cpls::HeadNode::rtt;
void cpls::HeadNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::CPLSNode>()};
    rtt.initStageTwo("cpls.HeadNode",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of HeadNode */
/*************************************************/
