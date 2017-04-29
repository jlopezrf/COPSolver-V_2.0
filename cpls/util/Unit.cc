/*************************************************/
/* START of Unit */
#include <cpls/util/Unit.h>

#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
namespace cpls { namespace util { 
class Unit_ibox0 : public ::x10::lang::IBox< ::cpls::util::Unit> {
public:
    static ::x10::lang::Any::itable< Unit_ibox0 > itable;
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
::x10::lang::Any::itable< Unit_ibox0 >  Unit_ibox0::itable(&Unit_ibox0::equals, &Unit_ibox0::hashCode, &Unit_ibox0::toString, &Unit_ibox0::typeName);
} } 
::x10::lang::Any::itable< ::cpls::util::Unit >  cpls::util::Unit::_itable_0(&cpls::util::Unit::equals, &cpls::util::Unit::hashCode, &cpls::util::Unit::toString, &cpls::util::Unit::typeName);
::x10aux::itable_entry cpls::util::Unit::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::util::Unit::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::util::Unit")};
::x10aux::itable_entry cpls::util::Unit::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::util::Unit_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::util::Unit")};

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Unit.x10"
::x10::lang::String* cpls::util::Unit::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::util::Unit::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__37288 = ::x10aux::makeStringLit("struct cpls.util.Unit"); strLit__37288; }));
    
}
x10_boolean cpls::util::Unit::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::util::Unit>(other))) {
        return false;
        
    }
    return (*this)->cpls::util::Unit::equals(::x10aux::class_cast< ::cpls::util::Unit>(other));
    
}
x10_boolean cpls::util::Unit::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::util::Unit>(other))) {
        return false;
        
    }
    return (*this)->cpls::util::Unit::_struct_equals(::x10aux::class_cast< ::cpls::util::Unit>(other));
    
}

void ::cpls::util::Unit::_serialize(::cpls::util::Unit this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::util::Unit::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::util::Unit::rtt;
void cpls::util::Unit::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.util.Unit",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Unit */
/*************************************************/
