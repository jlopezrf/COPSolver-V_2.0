/*************************************************/
/* START of ExplorerNode */
#include <cpls/ExplorerNode.h>

#include <cpls/CPLSNode.h>
#include <cpls/entities/NodeConfig.h>
#include <x10/lang/Int.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/HeuristicFactory.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
void cpls::ExplorerNode::_constructor() {
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    (this)->::cpls::CPLSNode::_constructor();
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    
    //#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    ::cpls::ExplorerNode* this__2052 = this;
    
}
::cpls::ExplorerNode* cpls::ExplorerNode::_make() {
    ::cpls::ExplorerNode* this_ = new (::x10aux::alloc_z< ::cpls::ExplorerNode>()) ::cpls::ExplorerNode();
    this_->_constructor();
    return this_;
}



//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
void cpls::ExplorerNode::initialize(::cpls::entities::NodeConfig* config,
                                    x10_int idPlace, ::cpls::entities::PoolConfig* configPool) {
    
    //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    this->::cpls::CPLSNode::FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                                      ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__2053 = ::x10aux::makeStringLit("Explorer Inicializado en lo nodo: "); strLit__2053; })), idPlace), (__extension__ ({ static ::x10::lang::String* strLit__2054 = ::x10aux::makeStringLit(", con la heuristica: "); strLit__2054; }))), (__extension__ ({
          
          //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
          x10_int kind__1033 = ::x10aux::nullCheck(config)->getHeuristic();
          ::x10::lang::String* ret__1034;
          goto __ret__1035; __ret__1035: {
          {
              
              //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
              switch (kind__1033) {
                  
                  //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)2): ;
                  {
                      ret__1034 = (__extension__ ({ static ::x10::lang::String* strLit__2055 = ::x10aux::makeStringLit("AS_SOL"); strLit__2055; }));
                      goto __ret__1035_end_;
                  }
                  //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)3): ;
                  {
                      ret__1034 = (__extension__ ({ static ::x10::lang::String* strLit__2056 = ::x10aux::makeStringLit("EO_SOL"); strLit__2056; }));
                      goto __ret__1035_end_;
                  }
                  //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)4): ;
                  {
                      ret__1034 = (__extension__ ({ static ::x10::lang::String* strLit__2057 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__2057; }));
                      goto __ret__1035_end_;
                  }
                  //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)1): ;
                  {
                      ret__1034 = (__extension__ ({ static ::x10::lang::String* strLit__2058 = ::x10aux::makeStringLit("RS_SOL"); strLit__2058; }));
                      goto __ret__1035_end_;
                  }
                  //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  default: ;
                  {
                      ret__1034 = (__extension__ ({ static ::x10::lang::String* strLit__2059 = ::x10aux::makeStringLit("Default"); strLit__2059; }));
                      goto __ret__1035_end_;
                  }
              }
          }goto __ret__1035_end_; __ret__1035_end_: ;
          }
          ret__1034;
          }))
          )));
    }
    

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
void cpls::ExplorerNode::start() {
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__2060 = ::x10aux::makeStringLit("Se env\355a la se\361al de start en el Explorer"); strLit__2060; }))));
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
    ::x10aux::nullCheck(this->::cpls::CPLSNode::FMGL(heuristicSolver))->solve();
}

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/ExplorerNode.x10"
::cpls::ExplorerNode* cpls::ExplorerNode::cpls__ExplorerNode____this__cpls__ExplorerNode(
  ) {
    return this;
    
}
void cpls::ExplorerNode::__fieldInitializers_cpls_ExplorerNode(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::ExplorerNode::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::ExplorerNode::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::ExplorerNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::CPLSNode::_serialize_body(buf);
    
}

::x10::lang::Reference* ::cpls::ExplorerNode::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::ExplorerNode* this_ = new (::x10aux::alloc_z< ::cpls::ExplorerNode>()) ::cpls::ExplorerNode();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::ExplorerNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::CPLSNode::_deserialize_body(buf);
    
}

::x10aux::RuntimeType cpls::ExplorerNode::rtt;
void cpls::ExplorerNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::CPLSNode>()};
    rtt.initStageTwo("cpls.ExplorerNode",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of ExplorerNode */
/*************************************************/
