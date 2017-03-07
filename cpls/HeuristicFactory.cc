/*************************************************/
/* START of HeuristicFactory */
#include <cpls/HeuristicFactory.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <cpls/solver/AdaptiveSearch.h>
#include <cpls/solver/EOSearch.h>
#include <cpls/solver/RoTSearch.h>
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

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
::cpls::solver::HeuristicSolver* cpls::HeuristicFactory::make(x10_int kind) {
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 2/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)()*/: ;
        {
            return ::cpls::solver::AdaptiveSearch::_make();
            
        }
        //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 3/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)()*/: ;
        {
            return ::cpls::solver::EOSearch::_make();
            
        }
        //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 4/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)()*/: ;
        {
            return ::cpls::solver::RoTSearch::_make();
            
        }
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 1/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__get)()*/: ;
        {
            return ::cpls::solver::HeuristicSolver::_make();
            
        }
        //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 5/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)()*/: ;
        {
            return ::cpls::solver::GeneticAlgorithm::_make();
            
        }
        //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        default: ;
        {
            return ::cpls::solver::HeuristicSolver::_make();
            
        }
    }
}

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
::x10::lang::String* cpls::HeuristicFactory::getHeuristicName(x10_int kind) {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
    switch (kind) {
        
        //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 2/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)()*/: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__32775 = ::x10aux::makeStringLit("AS_SOL"); strLit__32775; }));
            
        }
        //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 3/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)()*/: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__32776 = ::x10aux::makeStringLit("EO_SOL"); strLit__32776; }));
            
        }
        //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 4/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)()*/: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__32777 = ::x10aux::makeStringLit("RoTS_SOL"); strLit__32777; }));
            
        }
        //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 1/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__get)()*/: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__32778 = ::x10aux::makeStringLit("RS_SOL"); strLit__32778; }));
            
        }
        //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        case 5/*::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)()*/: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__32779 = ::x10aux::makeStringLit("GA_SOL"); strLit__32779; }));
            
        }
        //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
        default: ;
        {
            return (__extension__ ({ static ::x10::lang::String* strLit__32780 = ::x10aux::makeStringLit("Default"); strLit__32780; }));
            
        }
    }
}

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/HeuristicFactory.x10"
::x10::lang::String* cpls::HeuristicFactory::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::HeuristicFactory::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__32781 = ::x10aux::makeStringLit("struct cpls.HeuristicFactory"); strLit__32781; }));
    
}
x10_boolean cpls::HeuristicFactory::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::HeuristicFactory>(other))) {
        return false;
        
    }
    return (*this)->cpls::HeuristicFactory::equals(::x10aux::class_cast< ::cpls::HeuristicFactory>(other));
    
}
x10_boolean cpls::HeuristicFactory::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::HeuristicFactory>(other))) {
        return false;
        
    }
    return (*this)->cpls::HeuristicFactory::_struct_equals(::x10aux::class_cast< ::cpls::HeuristicFactory>(other));
    
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
