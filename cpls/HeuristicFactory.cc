/*************************************************/
/* START of HeuristicFactory */
#include <cpls/HeuristicFactory.h>

#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/solver/AdaptiveSearch.h>
#include <x10/lang/Long.h>
#include <cpls/solver/EOSearch.h>
#include <cpls/solver/RoTSearch.h>
#include <cpls/solver/RandomSearch.h>
#include <x10/compiler/Synthetic.h>

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::cpls::solver::HeuristicSolver* cpls::HeuristicFactory::make(x10_int kind) {
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::solver::AdaptiveSearch* alloc__22 =  (new (::x10aux::alloc_z< ::cpls::solver::AdaptiveSearch>()) ::cpls::solver::AdaptiveSearch());
                (alloc__22)->::cpls::solver::AdaptiveSearch::_constructor(
                  ((x10_long)(((x10_int)1))));
                return alloc__22;
                
            }
        }
        //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::solver::EOSearch* alloc__23 =  (new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch());
                (alloc__23)->::cpls::solver::EOSearch::_constructor(((x10_long)(((x10_int)1))));
                return alloc__23;
                
            }
        }
        //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::solver::RoTSearch* alloc__24 =  (new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch());
                (alloc__24)->::cpls::solver::RoTSearch::_constructor(((x10_long)(((x10_int)1))));
                return alloc__24;
                
            }
        }
        //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)1): ;
        {
            {
                ::cpls::solver::RandomSearch* alloc__25 =  (new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch());
                (alloc__25)->::cpls::solver::RandomSearch::_constructor(((x10_long)(((x10_int)1))));
                return alloc__25;
                
            }
        }
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        default: ;
        {
            {
                ::cpls::solver::RandomSearch* alloc__26 =  (new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch());
                (alloc__26)->::cpls::solver::RandomSearch::_constructor(((x10_long)(((x10_int)1))));
                return alloc__26;
                
            }
        }
    }
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::cpls::HeuristicFactory* cpls::HeuristicFactory::cpls__HeuristicFactory____this__cpls__HeuristicFactory(
  ) {
    return this;
    
}
void cpls::HeuristicFactory::_constructor() {
    ::cpls::HeuristicFactory* this__51 = this;
    
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
