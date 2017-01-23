/*************************************************/
/* START of MasterNode */
#include <cpls/MasterNode.h>

#include <cpls/CPLSNode.h>
#include <cpls/SmartPool.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/lang/Int.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/HeuristicFactory.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
void cpls::MasterNode::_constructor() {
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    (this)->::cpls::CPLSNode::_constructor();
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::cpls::MasterNode* this__4312 = this;
    ::x10aux::nullCheck(this__4312)->FMGL(cplsPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::cpls::MasterNode* cpls::MasterNode::_make() {
    ::cpls::MasterNode* this_ = new (::x10aux::alloc_z< ::cpls::MasterNode>()) ::cpls::MasterNode();
    this_->_constructor();
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
void cpls::MasterNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                  ::cpls::entities::PoolConfig* cplsPoolConfig) {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    this->::cpls::CPLSNode::FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                                      ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    this->FMGL(cplsPool) = (__extension__ ({
        ::cpls::SmartPool* alloc__398 =  (new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool());
        (alloc__398)->::cpls::SmartPool::_constructor(::x10aux::nullCheck(cplsPoolConfig)->getProblemSize(),
                                                      ::x10aux::nullCheck(cplsPoolConfig)->getPoolSize(),
                                                      ((x10_long)(::x10aux::nullCheck(cplsPoolConfig)->getPoolMode())),
                                                      ::x10aux::nullCheck(cplsPoolConfig)->getMinDist());
        alloc__398;
    }))
    ;
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__4313 = ::x10aux::makeStringLit("Master Inicializado en lo nodo: "); strLit__4313; })), idPlace), (__extension__ ({ static ::x10::lang::String* strLit__4314 = ::x10aux::makeStringLit(", con la heuristica: "); strLit__4314; }))), (__extension__ ({
          
          //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
          x10_int kind__3486 = ::x10aux::nullCheck(config)->getHeuristic();
          ::x10::lang::String* ret__3487;
          goto __ret__3488; __ret__3488: {
          {
              
              //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
              switch (kind__3486) {
                  
                  //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)2): ;
                  {
                      ret__3487 = (__extension__ ({ static ::x10::lang::String* strLit__4315 = ::x10aux::makeStringLit("AS_SOL"); strLit__4315; }));
                      goto __ret__3488_end_;
                  }
                  //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)3): ;
                  {
                      ret__3487 = (__extension__ ({ static ::x10::lang::String* strLit__4316 = ::x10aux::makeStringLit("EO_SOL"); strLit__4316; }));
                      goto __ret__3488_end_;
                  }
                  //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)4): ;
                  {
                      ret__3487 = (__extension__ ({ static ::x10::lang::String* strLit__4317 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__4317; }));
                      goto __ret__3488_end_;
                  }
                  //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)1): ;
                  {
                      ret__3487 = (__extension__ ({ static ::x10::lang::String* strLit__4318 = ::x10aux::makeStringLit("RS_SOL"); strLit__4318; }));
                      goto __ret__3488_end_;
                  }
                  //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  default: ;
                  {
                      ret__3487 = (__extension__ ({ static ::x10::lang::String* strLit__4319 = ::x10aux::makeStringLit("Default"); strLit__4319; }));
                      goto __ret__3488_end_;
                  }
              }
          }goto __ret__3488_end_; __ret__3488_end_: ;
          }
          ret__3487;
          }))
          )));
    }
    

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
void cpls::MasterNode::start() {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__4320 = ::x10aux::makeStringLit("Se env\355a la se\361al de start en el Master"); strLit__4320; }))));
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::x10aux::nullCheck(this->::cpls::CPLSNode::FMGL(heuristicSolver))->solve();
}

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/MasterNode.x10"
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
