/*************************************************/
/* START of HeadNode */
#include <cpls/HeadNode.h>

#include <cpls/CPLSNode.h>
#include <x10/lang/Boolean.h>
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
#include <cpls/util/Maybe.h>
#include <cpls/entities/State.h>
#include <x10/compiler/Synthetic.h>

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
void cpls::HeadNode::_constructor() {
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    (this)->::cpls::CPLSNode::_constructor();
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    ::cpls::HeadNode* this__4226 = this;
    ::x10aux::nullCheck(this__4226)->FMGL(teamPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__4226)->FMGL(isThereAMasterNode) = false;
}
::cpls::HeadNode* cpls::HeadNode::_make() {
    ::cpls::HeadNode* this_ = new (::x10aux::alloc_z< ::cpls::HeadNode>()) ::cpls::HeadNode();
    this_->_constructor();
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
void cpls::HeadNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                ::cpls::entities::PoolConfig* teamPoolConfig) {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    this->::cpls::CPLSNode::FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                                      ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    this->FMGL(teamPool) = (__extension__ ({
        ::cpls::SmartPool* alloc__355 =  (new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool());
        (alloc__355)->::cpls::SmartPool::_constructor(::x10aux::nullCheck(teamPoolConfig)->getProblemSize(),
                                                      ::x10aux::nullCheck(teamPoolConfig)->getPoolSize(),
                                                      ((x10_long)(::x10aux::nullCheck(teamPoolConfig)->getPoolMode())),
                                                      ::x10aux::nullCheck(teamPoolConfig)->getMinDist());
        alloc__355;
    }))
    ;
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__4227 = ::x10aux::makeStringLit("Head Inicializado en lo nodo: "); strLit__4227; })), idPlace), (__extension__ ({ static ::x10::lang::String* strLit__4228 = ::x10aux::makeStringLit(", con la heuristica: "); strLit__4228; }))), (__extension__ ({
          
          //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
          x10_int kind__3400 = ::x10aux::nullCheck(config)->getHeuristic();
          ::x10::lang::String* ret__3401;
          goto __ret__3402; __ret__3402: {
          {
              
              //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
              switch (kind__3400) {
                  
                  //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)2): ;
                  {
                      ret__3401 = (__extension__ ({ static ::x10::lang::String* strLit__4229 = ::x10aux::makeStringLit("AS_SOL"); strLit__4229; }));
                      goto __ret__3402_end_;
                  }
                  //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)3): ;
                  {
                      ret__3401 = (__extension__ ({ static ::x10::lang::String* strLit__4230 = ::x10aux::makeStringLit("EO_SOL"); strLit__4230; }));
                      goto __ret__3402_end_;
                  }
                  //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)4): ;
                  {
                      ret__3401 = (__extension__ ({ static ::x10::lang::String* strLit__4231 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__4231; }));
                      goto __ret__3402_end_;
                  }
                  //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)1): ;
                  {
                      ret__3401 = (__extension__ ({ static ::x10::lang::String* strLit__4232 = ::x10aux::makeStringLit("RS_SOL"); strLit__4232; }));
                      goto __ret__3402_end_;
                  }
                  //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  default: ;
                  {
                      ret__3401 = (__extension__ ({ static ::x10::lang::String* strLit__4233 = ::x10aux::makeStringLit("Default"); strLit__4233; }));
                      goto __ret__3402_end_;
                  }
              }
          }goto __ret__3402_end_; __ret__3402_end_: ;
          }
          ret__3401;
          }))
          )));
    }
    

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
void cpls::HeadNode::setMasterNodeIndicator(x10_boolean isThereAMasterNode) {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    this->FMGL(isThereAMasterNode) = isThereAMasterNode;
}

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
void cpls::HeadNode::start() {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__4234 = ::x10aux::makeStringLit("Se env\355a la se\361al de start en el Head"); strLit__4234; }))));
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    ::x10aux::nullCheck(this->::cpls::CPLSNode::FMGL(heuristicSolver))->solve();
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
void cpls::HeadNode::getBestConf() {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
    ::x10aux::nullCheck(this->FMGL(teamPool))->getBestConf();
}

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeadNode.x10"
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
