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

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::cpls::solver::HeuristicSolver* cpls::HeuristicFactory::make(x10_int kind) {
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)2): ;
        {
            {
                ::cpls::solver::AdaptiveSearch* alloc__26 =  (new (::x10aux::alloc_z< ::cpls::solver::AdaptiveSearch>()) ::cpls::solver::AdaptiveSearch());
                (alloc__26)->::cpls::solver::AdaptiveSearch::_constructor();
                return alloc__26;
                
            }
        }
        //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)3): ;
        {
            {
                ::cpls::solver::EOSearch* alloc__27 =  (new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch());
                (alloc__27)->::cpls::solver::EOSearch::_constructor();
                return alloc__27;
                
            }
        }
        //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)4): ;
        {
            {
                ::cpls::solver::RoTSearch* alloc__28 =  (new (::x10aux::alloc_z< ::cpls::solver::RoTSearch>()) ::cpls::solver::RoTSearch());
                (alloc__28)->::cpls::solver::RoTSearch::_constructor();
                return alloc__28;
                
            }
        }
        //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)1): ;
        {
            {
                ::cpls::solver::RandomSearch* alloc__29 =  (new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch());
                (alloc__29)->::cpls::solver::RandomSearch::_constructor();
                return alloc__29;
                
            }
        }
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        default: ;
        {
            {
                ::cpls::solver::RandomSearch* alloc__30 =  (new (::x10aux::alloc_z< ::cpls::solver::RandomSearch>()) ::cpls::solver::RandomSearch());
                (alloc__30)->::cpls::solver::RandomSearch::_constructor();
                return alloc__30;
                
            }
        }
    }
}

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::x10::lang::String* cpls::HeuristicFactory::getHeuristicName(x10_int kind) {
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)2): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__561 = ::x10aux::makeStringLit("AS_SOL"); strLit__561; }));
            
        }
        //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)3): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__562 = ::x10aux::makeStringLit("EO_SOL"); strLit__562; }));
            
        }
        //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)4): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__563 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__563; }));
            
        }
        //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        case ((x10_int)1): ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__564 = ::x10aux::makeStringLit("RS_SOL"); strLit__564; }));
            
        }
        //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
        default: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__565 = ::x10aux::makeStringLit("Default"); strLit__565; }));
            
        }
    }
}

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/HeuristicFactory.x10"
::x10::lang::String* cpls::HeuristicFactory::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::HeuristicFactory::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__566 = ::x10aux::makeStringLit("struct cpls.HeuristicFactory"); strLit__566; }));
    
}
x10_boolean cpls::HeuristicFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::HeuristicFactory>(other))) {
        return false;
        
    }
    ::cpls::HeuristicFactory this__550 = (*this);
    ::cpls::HeuristicFactory other__551 = ::x10aux::class_cast< ::cpls::HeuristicFactory>(other);
    return true;
    
}
x10_boolean cpls::HeuristicFactory::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::HeuristicFactory>(other))) {
        return false;
        
    }
    ::cpls::HeuristicFactory this__552 = (*this);
    ::cpls::HeuristicFactory other__553 = ::x10aux::class_cast< ::cpls::HeuristicFactory>(other);
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
