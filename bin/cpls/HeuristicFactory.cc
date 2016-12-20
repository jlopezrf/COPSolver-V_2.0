/*************************************************/
/* START of HeuristicFactory */
#include <cpls/HeuristicFactory.h>

#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <cpls/solver/AdaptiveSearch.h>
#include <x10/lang/Long.h>
#include <cpls/solver/EOSearch.h>
#include <cpls/solver/RoTSearch.h>
#include <cpls/solver/RandomSearch.h>
#include <x10/compiler/Synthetic.h>

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
::cpls::solver::HeuristicSolver* cpls::HeuristicFactory::make(x10_int kind) {
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 2/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)()*/: ;
        {
            return ::cpls::solver::AdaptiveSearch::_make(((x10_long)(((x10_int)1))));
            
        }
        //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 3/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)()*/: ;
        {
            return ::cpls::solver::EOSearch::_make(((x10_long)(((x10_int)1))));
            
        }
        //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 4/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)()*/: ;
        {
            return ::cpls::solver::RoTSearch::_make(((x10_long)(((x10_int)1))));
            
        }
        //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 1/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__get)()*/: ;
        {
            return ::cpls::solver::RandomSearch::_make(((x10_long)(((x10_int)1))));
            
        }
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        default: ;
        {
            return ::cpls::solver::RandomSearch::_make(((x10_long)(((x10_int)1))));
            
        }
    }
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
::cpls::HeuristicFactory* cpls::HeuristicFactory::cpls__HeuristicFactory____this__cpls__HeuristicFactory(
  ) {
    return this;
    
}
void cpls::HeuristicFactory::_constructor() {
    this->cpls::HeuristicFactory::__fieldInitializers_cpls_HeuristicFactory();
}
::cpls::HeuristicFactory* cpls::HeuristicFactory::_make() {
    ::cpls::HeuristicFactory* this_ = new (::x10aux::alloc_z< ::cpls::HeuristicFactory>()) ::cpls::HeuristicFactory();
    this_->_constructor();
    return this_;
}


void cpls::HeuristicFactory::__fieldInitializers_cpls_HeuristicFactory(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::HeuristicFactory::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::HeuristicFactory::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::HeuristicFactory::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::cpls::HeuristicFactory::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::HeuristicFactory* this_ = new (::x10aux::alloc_z< ::cpls::HeuristicFactory>()) ::cpls::HeuristicFactory();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::HeuristicFactory::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType cpls::HeuristicFactory::rtt;
void cpls::HeuristicFactory::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.HeuristicFactory",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of HeuristicFactory */
/*************************************************/
