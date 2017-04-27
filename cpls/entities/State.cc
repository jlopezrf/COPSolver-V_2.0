/*************************************************/
/* START of State */
#include <cpls/entities/State.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/State.x10"

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/State.x10"
namespace cpls { namespace entities { 
class State_ibox0 : public ::x10::lang::IBox< ::cpls::entities::State> {
public:
    static ::x10::lang::Any::itable< State_ibox0 > itable;
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
::x10::lang::Any::itable< State_ibox0 >  State_ibox0::itable(&State_ibox0::equals, &State_ibox0::hashCode, &State_ibox0::toString, &State_ibox0::typeName);
} } 
::x10::lang::Any::itable< ::cpls::entities::State >  cpls::entities::State::_itable_0(&cpls::entities::State::equals, &cpls::entities::State::hashCode, &cpls::entities::State::toString, &cpls::entities::State::typeName);
::x10aux::itable_entry cpls::entities::State::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::entities::State::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::entities::State")};
::x10aux::itable_entry cpls::entities::State::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::entities::State_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::entities::State")};
::x10::lang::String* cpls::entities::State::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::entities::State::toString() {
    return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39586 = ::x10aux::makeStringLit("struct cpls.entities.State:"); strLit__39586; })), (__extension__ ({ static ::x10::lang::String* strLit__39587 = ::x10aux::makeStringLit(" sz="); strLit__39587; }))), (*this)->FMGL(sz)), (__extension__ ({ static ::x10::lang::String* strLit__39588 = ::x10aux::makeStringLit(" cost="); strLit__39588; }))), (*this)->FMGL(cost)), (__extension__ ({ static ::x10::lang::String* strLit__39589 = ::x10aux::makeStringLit(" vector="); strLit__39589; }))), (*this)->FMGL(vector)), (__extension__ ({ static ::x10::lang::String* strLit__39590 = ::x10aux::makeStringLit(" place="); strLit__39590; }))), (*this)->FMGL(place)), (__extension__ ({ static ::x10::lang::String* strLit__39591 = ::x10aux::makeStringLit(" solverState="); strLit__39591; }))), (*this)->FMGL(solverState));
    
}
x10_int cpls::entities::State::hashCode() {
    x10_int result = ((x10_int)1);
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(sz))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(cost))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(vector))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(place))));
    result = ((((((x10_int)8191)) * (result))) + (::x10aux::hash_code((*this)->FMGL(solverState))));
    return result;
    
}
x10_boolean cpls::entities::State::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::entities::State>(other))) {
        return false;
        
    }
    return (*this)->cpls::entities::State::equals(::x10aux::class_cast< ::cpls::entities::State>(other));
    
}
x10_boolean cpls::entities::State::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::entities::State>(other))) {
        return false;
        
    }
    return (*this)->cpls::entities::State::_struct_equals(::x10aux::class_cast< ::cpls::entities::State>(other));
    
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/State.x10"

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/State.x10"
void cpls::entities::State::_constructor(x10_long sz, x10_long cost, ::x10::lang::Rail< x10_int >* vector,
                                         x10_int place, ::x10::lang::Rail< x10_int >* solverState) {
    FMGL(sz) = sz;
    FMGL(cost) = cost;
    FMGL(vector) = vector;
    FMGL(place) = place;
    FMGL(solverState) = solverState;
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/State.x10"
    (*this)->cpls::entities::State::__fieldInitializers_cpls_entities_State();
}
::cpls::entities::State cpls::entities::State::_make(x10_long sz,
                                                     x10_long cost,
                                                     ::x10::lang::Rail< x10_int >* vector,
                                                     x10_int place,
                                                     ::x10::lang::Rail< x10_int >* solverState)
{
    ::cpls::entities::State this_; 
    this_->_constructor(sz, cost, vector, place, solverState);
    return this_;
}



//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/entities/State.x10"
void ::cpls::entities::State::_serialize(::cpls::entities::State this_, ::x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(sz));
    buf.write(this_->FMGL(cost));
    buf.write(this_->FMGL(vector));
    buf.write(this_->FMGL(place));
    buf.write(this_->FMGL(solverState));
    
}

void ::cpls::entities::State::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(sz) = buf.read<x10_long>();
    FMGL(cost) = buf.read<x10_long>();
    FMGL(vector) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(place) = buf.read<x10_int>();
    FMGL(solverState) = buf.read< ::x10::lang::Rail< x10_int >*>();
}


::x10aux::RuntimeType cpls::entities::State::rtt;
void cpls::entities::State::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.entities.State",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
}

/* END of State */
/*************************************************/
