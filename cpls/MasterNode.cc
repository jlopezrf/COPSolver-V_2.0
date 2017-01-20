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

//#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
void cpls::MasterNode::_constructor() {
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    (this)->::cpls::CPLSNode::_constructor();
    
    //#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    
    //#line 8 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::cpls::MasterNode* this__3145 = this;
    ::x10aux::nullCheck(this__3145)->FMGL(cplsPool) = (::x10aux::class_cast_unchecked< ::cpls::SmartPool*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
::cpls::MasterNode* cpls::MasterNode::_make() {
    ::cpls::MasterNode* this_ = new (::x10aux::alloc_z< ::cpls::MasterNode>()) ::cpls::MasterNode();
    this_->_constructor();
    return this_;
}



//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
void cpls::MasterNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                  ::cpls::entities::PoolConfig* cplsPoolConfig) {
    
    //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    this->::cpls::CPLSNode::FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                                      ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    this->FMGL(cplsPool) = (__extension__ ({
        ::cpls::SmartPool* alloc__314 =  (new (::x10aux::alloc_z< ::cpls::SmartPool>()) ::cpls::SmartPool());
        (alloc__314)->::cpls::SmartPool::_constructor(::x10aux::nullCheck(cplsPoolConfig)->getProblemSize(),
                                                      ::x10aux::nullCheck(cplsPoolConfig)->getPoolSize(),
                                                      ((x10_long)(::x10aux::nullCheck(cplsPoolConfig)->getPoolMode())),
                                                      ::x10aux::nullCheck(cplsPoolConfig)->getMinDist());
        alloc__314;
    }))
    ;
    
    //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3146 = ::x10aux::makeStringLit("Master Inicializado en lo nodo: "); strLit__3146; })), idPlace), (__extension__ ({ static ::x10::lang::String* strLit__3147 = ::x10aux::makeStringLit(", con la heuristica: "); strLit__3147; }))), (__extension__ ({
          
          //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
          x10_int kind__2896 = ::x10aux::nullCheck(config)->getHeuristic();
          ::x10::lang::String* ret__2897;
          goto __ret__2898; __ret__2898: {
          {
              
              //#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
              switch (kind__2896) {
                  
                  //#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)2): ;
                  {
                      ret__2897 = (__extension__ ({ static ::x10::lang::String* strLit__3148 = ::x10aux::makeStringLit("AS_SOL"); strLit__3148; }));
                      goto __ret__2898_end_;
                  }
                  //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)3): ;
                  {
                      ret__2897 = (__extension__ ({ static ::x10::lang::String* strLit__3149 = ::x10aux::makeStringLit("EO_SOL"); strLit__3149; }));
                      goto __ret__2898_end_;
                  }
                  //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)4): ;
                  {
                      ret__2897 = (__extension__ ({ static ::x10::lang::String* strLit__3150 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__3150; }));
                      goto __ret__2898_end_;
                  }
                  //#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  case ((x10_int)1): ;
                  {
                      ret__2897 = (__extension__ ({ static ::x10::lang::String* strLit__3151 = ::x10aux::makeStringLit("RS_SOL"); strLit__3151; }));
                      goto __ret__2898_end_;
                  }
                  //#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
                  default: ;
                  {
                      ret__2897 = (__extension__ ({ static ::x10::lang::String* strLit__3152 = ::x10aux::makeStringLit("Default"); strLit__3152; }));
                      goto __ret__2898_end_;
                  }
              }
          }goto __ret__2898_end_; __ret__2898_end_: ;
          }
          ret__2897;
          }))
          )));
    }
    

//#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
void cpls::MasterNode::start() {
    
    //#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3153 = ::x10aux::makeStringLit("Se env\355a la se\361al de start en el Master"); strLit__3153; }))));
    
    //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
    ::x10aux::nullCheck(this->::cpls::CPLSNode::FMGL(heuristicSolver))->solve();
}

//#line 8 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/MasterNode.x10"
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
