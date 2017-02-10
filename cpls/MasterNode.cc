/*************************************************/
/* START of MasterNode */
#include <cpls/MasterNode.h>

#include <cpls/CPLSNode.h>
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
#include <x10/compiler/Synthetic.h>

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
void cpls::MasterNode::_constructor() {
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    (this)->::cpls::CPLSNode::_constructor();
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    this->cpls::MasterNode::__fieldInitializers_cpls_MasterNode();
}
::cpls::MasterNode* cpls::MasterNode::_make() {
    ::cpls::MasterNode* this_ = new (::x10aux::alloc_z< ::cpls::MasterNode>()) ::cpls::MasterNode();
    this_->_constructor();
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
void cpls::MasterNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                  ::cpls::entities::PoolConfig* cplsPoolConfig,
                                  x10_long problemSize, x10_long inSeed,
                                  x10_long maxIters) {
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    ::cpls::CPLSNode::initialize(config, idPlace, cplsPoolConfig,
                                 problemSize, inSeed, maxIters);
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    this->FMGL(cplsPool) = ::cpls::SmartPool::_make(::x10aux::nullCheck(cplsPoolConfig)->getProblemSize(),
                                                    ::x10aux::nullCheck(cplsPoolConfig)->getPoolSize(),
                                                    ((x10_long)(::x10aux::nullCheck(cplsPoolConfig)->getPoolMode())),
                                                    ::x10aux::nullCheck(cplsPoolConfig)->getMinDist());
}

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
void cpls::MasterNode::start() {
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__26249 = ::x10aux::makeStringLit("Se env\355a la se\361al de start en el Master"); strLit__26249; }))));
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
    ::x10aux::nullCheck(this->::cpls::CPLSNode::FMGL(heuristicSolver))->solve();
}

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/MasterNode.x10"
::cpls::MasterNode* cpls::MasterNode::cpls__MasterNode____this__cpls__MasterNode(
  ) {
    return this;
    
}
void cpls::MasterNode::__fieldInitializers_cpls_MasterNode(
  ) {
    this->FMGL(cplsPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::MasterNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::MasterNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::MasterNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::CPLSNode::_serialize_body(buf);
    buf.write(this->FMGL(cplsPool));
    
}

::x10::lang::Reference* ::cpls::MasterNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::MasterNode* this_ = new (::x10aux::alloc_z< ::cpls::MasterNode>()) ::cpls::MasterNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::MasterNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::CPLSNode::_deserialize_body(buf);
    FMGL(cplsPool) = buf.read< ::cpls::SmartPool*>();
}

::x10aux::RuntimeType cpls::MasterNode::rtt;
void cpls::MasterNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::CPLSNode>()};
    rtt.initStageTwo("cpls.MasterNode",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of MasterNode */
/*************************************************/
