/*************************************************/
/* START of HeuristicFactory */
#include <cpls/HeuristicFactory.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/solver/AdaptiveSearch.h>
#include <cpls/solver/EOSearch.h>
#include <cpls/solver/RoTSearch.h>
#include <cpls/solver/RandomSearch.h>
#include <cpls/solver/GeneticAlgorithm.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class HeuristicFactory_ibox0 : public ::x10::lang::IBox< ::cpls::HeuristicFactory> {
public:
    static ::x10::lang::Any::itable< HeuristicFactory_ibox0 > itable;
    x10_boolean equals(::x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    ::x10::lang::String* toString() {
        return this->value->toString();
    }
    ::x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
::x10::lang::Any::itable< HeuristicFactory_ibox0 >  HeuristicFactory_ibox0::itable(&HeuristicFactory_ibox0::equals, &HeuristicFactory_ibox0::hashCode, &HeuristicFactory_ibox0::toString, &HeuristicFactory_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::HeuristicFactory >  cpls::HeuristicFactory::_itable_0(&cpls::HeuristicFactory::equals, &cpls::HeuristicFactory::hashCode, &cpls::HeuristicFactory::toString, &cpls::HeuristicFactory::typeName);
::x10aux::itable_entry cpls::HeuristicFactory::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::HeuristicFactory::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::HeuristicFactory")};
::x10aux::itable_entry cpls::HeuristicFactory::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::HeuristicFactory_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::HeuristicFactory")};

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::cpls::solver::HeuristicSolver* cpls::HeuristicFactory::make(x10_int kind) {
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::solver::AdaptiveSearch* alloc__30 =  (new (::x10aux::alloc_z< ::cpls::solver::AdaptiveSearch>()) ::cpls::solver::AdaptiveSearch());
                (alloc__30)->::cpls::solver::AdaptiveSearch::_constructor();
                return alloc__30;
                
            }
        }
        //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::solver::EOSearch* alloc__31 =  (new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch());
                (alloc__31)->::cpls::solver::EOSearch::_constructor();
                return alloc__31;
                
            }
        }
        //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::solver::RoTSearch* alloc__32 =  (new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch());
                (alloc__32)->::cpls::solver::RoTSearch::_constructor();
                return alloc__32;
                
            }
        }
        //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)1): ;
        {
            {
                ::cpls::solver::RandomSearch* alloc__33 =  (new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch());
                (alloc__33)->::cpls::solver::RandomSearch::_constructor();
                return alloc__33;
                
            }
        }
        //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)5): ;
        {
            {
                ::cpls::solver::GeneticAlgorithm* alloc__34 =  (new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm());
                (alloc__34)->::cpls::solver::GeneticAlgorithm::_constructor();
                return alloc__34;
                
            }
        }
        //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        default: ;
        {
            {
                ::cpls::solver::RandomSearch* alloc__35 =  (new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch());
                (alloc__35)->::cpls::solver::RandomSearch::_constructor();
                return alloc__35;
                
            }
        }
    }
}

//#line 23 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::x10::lang::String* cpls::HeuristicFactory::getHeuristicName(x10_int kind) {
    
    //#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)2): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__5272 = ::x10aux::makeStringLit("AS_SOL"); strLit__5272; }));
            
        }
        //#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)3): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__5273 = ::x10aux::makeStringLit("EO_SOL"); strLit__5273; }));
            
        }
        //#line 27 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)4): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__5274 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__5274; }));
            
        }
        //#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)1): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__5275 = ::x10aux::makeStringLit("RS_SOL"); strLit__5275; }));
            
        }
        //#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)5): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__5276 = ::x10aux::makeStringLit("GA_SOL"); strLit__5276; }));
            
        }
        //#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        default: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__5277 = ::x10aux::makeStringLit("Default"); strLit__5277; }));
            
        }
    }
}

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::x10::lang::String* cpls::HeuristicFactory::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::HeuristicFactory::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__5278 = ::x10aux::makeStringLit("struct cpls.HeuristicFactory"); strLit__5278; }));
    
}
x10_boolean cpls::HeuristicFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::HeuristicFactory>(other))) {
        return false;
        
    }
    ::cpls::HeuristicFactory this__5261 = (*this);
    ::cpls::HeuristicFactory other__5262 = ::x10aux::class_cast< ::cpls::HeuristicFactory>(other);
    return true;
    
}
x10_boolean cpls::HeuristicFactory::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::HeuristicFactory>(other))) {
        return false;
        
    }
    ::cpls::HeuristicFactory this__5263 = (*this);
    ::cpls::HeuristicFactory other__5264 = ::x10aux::class_cast< ::cpls::HeuristicFactory>(other);
    return true;
    
}

void ::cpls::HeuristicFactory::_serialize(::cpls::HeuristicFactory this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::HeuristicFactory::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::HeuristicFactory::rtt;
void cpls::HeuristicFactory::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.HeuristicFactory",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of HeuristicFactory */
/*************************************************/
