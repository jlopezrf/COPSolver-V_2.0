/*************************************************/
/* START of CPLSNode */
#include <cpls/CPLSNode.h>

#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Int.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/util/ArrayList.h>
#include <cpls/measurements/GlobalStats.h>
#include <cpls/entities/PoolConfig.h>
#include <cpls/HeuristicFactory.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Long.h>
#include <x10/util/Random.h>
#include <x10/compiler/Synthetic.h>

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
/*********Variables para el reporte de estadísticas*********/

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::_constructor() {
    
    //#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->cpls::CPLSNode::__fieldInitializers_cpls_CPLSNode();
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(pointersComunication) = (__extension__ ({
        ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >* alloc__63 =
           (new (::x10aux::alloc_z< ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> > >()) ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >());
        (alloc__63)->::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >::_constructor();
        alloc__63;
    }))
    ;
}


//#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::initialize(::cpls::entities::NodeConfig* config,
                                x10_int idPlace, ::cpls::entities::PoolConfig* poolConfig) {
    
    //#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                    ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__7373 = ::x10aux::makeStringLit("Nodo inicializado en el proceso"); strLit__7373; })), idPlace)));
}

//#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setHeuristicSolver(::cpls::solver::HeuristicSolver* hs) {
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(heuristicSolver) = hs;
}

//#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setPlaceId(x10_int placeId) {
    
    //#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(myPlaceId) = placeId;
}

//#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setPointersCommunication(::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >* pointersComunication) {
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(pointersComunication) = pointersComunication;
}

//#line 45 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::addPointerComm(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> ponterToPlaces) {
    
    //#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(pointersComunication))->add(ponterToPlaces);
}

//#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel) {
    
    //#line 51 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setProblemModel(
      problemModel);
}

//#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::sendkill() {
    
    //#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->kill();
}

//#line 59 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::start() {
    
    //#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__7378 = ::x10aux::makeStringLit("Se invoca metodo start"); strLit__7378; }))));
    
    //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->solve();
}

//#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::start(x10_long seedIn, x10_long targetCost, x10_boolean strictLow) {
    
    //#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(stats)->setTarget(targetCost);
    
    //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(sampleAccStats)->setTarget(targetCost);
    
    //#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(genAccStats)->setTarget(targetCost);
    
    //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::util::Random* random =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    (random)->::x10::util::Random::_constructor(seedIn);
    
    //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    x10_long cost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setSeed(random->nextLong());
}

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
::cpls::CPLSNode* cpls::CPLSNode::cpls__CPLSNode____this__cpls__CPLSNode(
  ) {
    return this;
    
}
void cpls::CPLSNode::__fieldInitializers_cpls_CPLSNode() {
    this->FMGL(nodeConfig) = (::x10aux::class_cast_unchecked< ::cpls::entities::NodeConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(pointersComunication) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(myPlaceId) = ((x10_int)0);
    this->FMGL(stats) = (__extension__ ({
        
        //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
        ::cpls::measurements::GlobalStats* alloc__64 =  (new (::x10aux::alloc_z< ::cpls::measurements::GlobalStats>()) ::cpls::measurements::GlobalStats());
        
        //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        alloc__64->cpls::measurements::GlobalStats::__fieldInitializers_cpls_measurements_GlobalStats();
        alloc__64;
    }))
    ;
    this->FMGL(sampleAccStats) = (__extension__ ({
        
        //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
        ::cpls::measurements::GlobalStats* alloc__65 =  (new (::x10aux::alloc_z< ::cpls::measurements::GlobalStats>()) ::cpls::measurements::GlobalStats());
        
        //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        alloc__65->cpls::measurements::GlobalStats::__fieldInitializers_cpls_measurements_GlobalStats();
        alloc__65;
    }))
    ;
    this->FMGL(genAccStats) = (__extension__ ({
        
        //#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/CPLSNode.x10"
        ::cpls::measurements::GlobalStats* alloc__66 =  (new (::x10aux::alloc_z< ::cpls::measurements::GlobalStats>()) ::cpls::measurements::GlobalStats());
        
        //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/measurements/GlobalStats.x10"
        alloc__66->cpls::measurements::GlobalStats::__fieldInitializers_cpls_measurements_GlobalStats();
        alloc__66;
    }))
    ;
}
void cpls::CPLSNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nodeConfig));
    buf.write(this->FMGL(heuristicSolver));
    buf.write(this->FMGL(pointersComunication));
    buf.write(this->FMGL(myPlaceId));
    buf.write(this->FMGL(stats));
    buf.write(this->FMGL(sampleAccStats));
    buf.write(this->FMGL(genAccStats));
    
}

void cpls::CPLSNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nodeConfig) = buf.read< ::cpls::entities::NodeConfig*>();
    FMGL(heuristicSolver) = buf.read< ::cpls::solver::HeuristicSolver*>();
    FMGL(pointersComunication) = buf.read< ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >*>();
    FMGL(myPlaceId) = buf.read<x10_int>();
    FMGL(stats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(sampleAccStats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(genAccStats) = buf.read< ::cpls::measurements::GlobalStats*>();
}

::x10aux::RuntimeType cpls::CPLSNode::rtt;
void cpls::CPLSNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.CPLSNode",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CPLSNode */
/*************************************************/
