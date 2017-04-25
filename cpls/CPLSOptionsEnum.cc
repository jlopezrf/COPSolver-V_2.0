/*************************************************/
/* START of CPLSOptionsEnum */
#include <cpls/CPLSOptionsEnum.h>

#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class CPLSOptionsEnum_ibox0 : public ::x10::lang::IBox< ::cpls::CPLSOptionsEnum> {
public:
    static ::x10::lang::Any::itable< CPLSOptionsEnum_ibox0 > itable;
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
::x10::lang::Any::itable< CPLSOptionsEnum_ibox0 >  CPLSOptionsEnum_ibox0::itable(&CPLSOptionsEnum_ibox0::equals, &CPLSOptionsEnum_ibox0::hashCode, &CPLSOptionsEnum_ibox0::toString, &CPLSOptionsEnum_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum >  cpls::CPLSOptionsEnum::_itable_0(&cpls::CPLSOptionsEnum::equals, &cpls::CPLSOptionsEnum::hashCode, &cpls::CPLSOptionsEnum::toString, &cpls::CPLSOptionsEnum::typeName);
::x10aux::itable_entry cpls::CPLSOptionsEnum::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum")};
::x10aux::itable_entry cpls::CPLSOptionsEnum::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum")};

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
::x10::lang::String* cpls::CPLSOptionsEnum::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::CPLSOptionsEnum::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__38286 = ::x10aux::makeStringLit("struct cpls.CPLSOptionsEnum"); strLit__38286; }));
    
}
x10_boolean cpls::CPLSOptionsEnum::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum>(other))) {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum::equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum>(other));
    
}
x10_boolean cpls::CPLSOptionsEnum::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum>(other))) {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum::_struct_equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum>(other));
    
}

void ::cpls::CPLSOptionsEnum::_serialize(::cpls::CPLSOptionsEnum this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::CPLSOptionsEnum::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::CPLSOptionsEnum::rtt;
void cpls::CPLSOptionsEnum::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSOptionsEnum",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of CPLSOptionsEnum */
/*************************************************/
/*************************************************/
/* START of CPLSOptionsEnum$SupportedProblems */
#include <cpls/CPLSOptionsEnum__SupportedProblems.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class CPLSOptionsEnum__SupportedProblems_ibox0 : public ::x10::lang::IBox< ::cpls::CPLSOptionsEnum__SupportedProblems> {
public:
    static ::x10::lang::Any::itable< CPLSOptionsEnum__SupportedProblems_ibox0 > itable;
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
::x10::lang::Any::itable< CPLSOptionsEnum__SupportedProblems_ibox0 >  CPLSOptionsEnum__SupportedProblems_ibox0::itable(&CPLSOptionsEnum__SupportedProblems_ibox0::equals, &CPLSOptionsEnum__SupportedProblems_ibox0::hashCode, &CPLSOptionsEnum__SupportedProblems_ibox0::toString, &CPLSOptionsEnum__SupportedProblems_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__SupportedProblems >  cpls::CPLSOptionsEnum__SupportedProblems::_itable_0(&cpls::CPLSOptionsEnum__SupportedProblems::equals, &cpls::CPLSOptionsEnum__SupportedProblems::hashCode, &cpls::CPLSOptionsEnum__SupportedProblems::toString, &cpls::CPLSOptionsEnum__SupportedProblems::typeName);
::x10aux::itable_entry cpls::CPLSOptionsEnum__SupportedProblems::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__SupportedProblems::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__SupportedProblems")};
::x10aux::itable_entry cpls::CPLSOptionsEnum__SupportedProblems::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__SupportedProblems_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__SupportedProblems")};

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__do_init)() {
    FMGL(UNKNOWN_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.UNKNOWN_PROBLEM");
    x10_int __var71__ = ((x10_int)0);
    FMGL(UNKNOWN_PROBLEM) = __var71__;
    FMGL(UNKNOWN_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(UNKNOWN_PROBLEM__status), &FMGL(UNKNOWN_PROBLEM__do_init), &FMGL(UNKNOWN_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.UNKNOWN_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__exception);

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__do_init)() {
    FMGL(MAGIC_SQUARE_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.MAGIC_SQUARE_PROBLEM");
    x10_int __var72__ = ((x10_int)1);
    FMGL(MAGIC_SQUARE_PROBLEM) = __var72__;
    FMGL(MAGIC_SQUARE_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(MAGIC_SQUARE_PROBLEM__status), &FMGL(MAGIC_SQUARE_PROBLEM__do_init), &FMGL(MAGIC_SQUARE_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.MAGIC_SQUARE_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__exception);

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__do_init)() {
    FMGL(COSTAS_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.COSTAS_PROBLEM");
    x10_int __var73__ = ((x10_int)2);
    FMGL(COSTAS_PROBLEM) = __var73__;
    FMGL(COSTAS_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(COSTAS_PROBLEM__status), &FMGL(COSTAS_PROBLEM__do_init), &FMGL(COSTAS_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.COSTAS_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__exception);

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__do_init)() {
    FMGL(ALL_INTERVAL_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.ALL_INTERVAL_PROBLEM");
    x10_int __var74__ = ((x10_int)3);
    FMGL(ALL_INTERVAL_PROBLEM) = __var74__;
    FMGL(ALL_INTERVAL_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(ALL_INTERVAL_PROBLEM__status), &FMGL(ALL_INTERVAL_PROBLEM__do_init), &FMGL(ALL_INTERVAL_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.ALL_INTERVAL_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__exception);

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__do_init)() {
    FMGL(LANGFORD_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.LANGFORD_PROBLEM");
    x10_int __var75__ = ((x10_int)4);
    FMGL(LANGFORD_PROBLEM) = __var75__;
    FMGL(LANGFORD_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(LANGFORD_PROBLEM__status), &FMGL(LANGFORD_PROBLEM__do_init), &FMGL(LANGFORD_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.LANGFORD_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__exception);

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__do_init)() {
    FMGL(PARTIT_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.PARTIT_PROBLEM");
    x10_int __var76__ = ((x10_int)5);
    FMGL(PARTIT_PROBLEM) = __var76__;
    FMGL(PARTIT_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(PARTIT_PROBLEM__status), &FMGL(PARTIT_PROBLEM__do_init), &FMGL(PARTIT_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.PARTIT_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__exception);

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__do_init)() {
    FMGL(STABLE_MARRIAGE_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.STABLE_MARRIAGE_PROBLEM");
    x10_int __var77__ = ((x10_int)6);
    FMGL(STABLE_MARRIAGE_PROBLEM) = __var77__;
    FMGL(STABLE_MARRIAGE_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(STABLE_MARRIAGE_PROBLEM__status), &FMGL(STABLE_MARRIAGE_PROBLEM__do_init), &FMGL(STABLE_MARRIAGE_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.STABLE_MARRIAGE_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__exception);

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__do_init)() {
    FMGL(HOSPITAL_RESIDENT_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.HOSPITAL_RESIDENT_PROBLEM");
    x10_int __var78__ = ((x10_int)7);
    FMGL(HOSPITAL_RESIDENT_PROBLEM) = __var78__;
    FMGL(HOSPITAL_RESIDENT_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(HOSPITAL_RESIDENT_PROBLEM__status), &FMGL(HOSPITAL_RESIDENT_PROBLEM__do_init), &FMGL(HOSPITAL_RESIDENT_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.HOSPITAL_RESIDENT_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__exception);

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM);
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__do_init)() {
    FMGL(QA_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__SupportedProblems.QA_PROBLEM");
    x10_int __var79__ = ((x10_int)8);
    FMGL(QA_PROBLEM) = __var79__;
    FMGL(QA_PROBLEM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(QA_PROBLEM__status), &FMGL(QA_PROBLEM__do_init), &FMGL(QA_PROBLEM__exception), "cpls::CPLSOptionsEnum__SupportedProblems.QA_PROBLEM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__exception);

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
::x10::lang::String* cpls::CPLSOptionsEnum__SupportedProblems::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::CPLSOptionsEnum__SupportedProblems::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__38299 = ::x10aux::makeStringLit("struct cpls.CPLSOptionsEnum.SupportedProblems"); strLit__38299; }));
    
}
x10_boolean cpls::CPLSOptionsEnum__SupportedProblems::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__SupportedProblems>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__SupportedProblems::equals(
             ::x10aux::class_cast< ::cpls::CPLSOptionsEnum__SupportedProblems>(other));
    
}
x10_boolean cpls::CPLSOptionsEnum__SupportedProblems::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__SupportedProblems>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__SupportedProblems::_struct_equals(
             ::x10aux::class_cast< ::cpls::CPLSOptionsEnum__SupportedProblems>(other));
    
}

void ::cpls::CPLSOptionsEnum__SupportedProblems::_serialize(::cpls::CPLSOptionsEnum__SupportedProblems this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::CPLSOptionsEnum__SupportedProblems::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::CPLSOptionsEnum__SupportedProblems::rtt;
void cpls::CPLSOptionsEnum__SupportedProblems::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSOptionsEnum.SupportedProblems",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of CPLSOptionsEnum$SupportedProblems */
/*************************************************/
/*************************************************/
/* START of CPLSOptionsEnum$HeuristicsSupported */
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class CPLSOptionsEnum__HeuristicsSupported_ibox0 : public ::x10::lang::IBox< ::cpls::CPLSOptionsEnum__HeuristicsSupported> {
public:
    static ::x10::lang::Any::itable< CPLSOptionsEnum__HeuristicsSupported_ibox0 > itable;
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
::x10::lang::Any::itable< CPLSOptionsEnum__HeuristicsSupported_ibox0 >  CPLSOptionsEnum__HeuristicsSupported_ibox0::itable(&CPLSOptionsEnum__HeuristicsSupported_ibox0::equals, &CPLSOptionsEnum__HeuristicsSupported_ibox0::hashCode, &CPLSOptionsEnum__HeuristicsSupported_ibox0::toString, &CPLSOptionsEnum__HeuristicsSupported_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__HeuristicsSupported >  cpls::CPLSOptionsEnum__HeuristicsSupported::_itable_0(&cpls::CPLSOptionsEnum__HeuristicsSupported::equals, &cpls::CPLSOptionsEnum__HeuristicsSupported::hashCode, &cpls::CPLSOptionsEnum__HeuristicsSupported::toString, &cpls::CPLSOptionsEnum__HeuristicsSupported::typeName);
::x10aux::itable_entry cpls::CPLSOptionsEnum__HeuristicsSupported::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__HeuristicsSupported::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__HeuristicsSupported")};
::x10aux::itable_entry cpls::CPLSOptionsEnum__HeuristicsSupported::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__HeuristicsSupported_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__HeuristicsSupported")};

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__do_init)() {
    FMGL(UNKNOWN_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.UNKNOWN_SOL");
    x10_int __var89__ = ((x10_int)0);
    FMGL(UNKNOWN_SOL) = __var89__;
    FMGL(UNKNOWN_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(UNKNOWN_SOL__status), &FMGL(UNKNOWN_SOL__do_init), &FMGL(UNKNOWN_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.UNKNOWN_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__exception);

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__do_init)() {
    FMGL(RS_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.RS_SOL");
    x10_int __var90__ = ((x10_int)1);
    FMGL(RS_SOL) = __var90__;
    FMGL(RS_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(RS_SOL__status), &FMGL(RS_SOL__do_init), &FMGL(RS_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.RS_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__exception);

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__do_init)() {
    FMGL(AS_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.AS_SOL");
    x10_int __var91__ = ((x10_int)2);
    FMGL(AS_SOL) = __var91__;
    FMGL(AS_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(AS_SOL__status), &FMGL(AS_SOL__do_init), &FMGL(AS_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.AS_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__exception);

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__do_init)() {
    FMGL(EO_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.EO_SOL");
    x10_int __var92__ = ((x10_int)3);
    FMGL(EO_SOL) = __var92__;
    FMGL(EO_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(EO_SOL__status), &FMGL(EO_SOL__do_init), &FMGL(EO_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.EO_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__exception);

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__do_init)() {
    FMGL(RoTS_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.RoTS_SOL");
    x10_int __var93__ = ((x10_int)4);
    FMGL(RoTS_SOL) = __var93__;
    FMGL(RoTS_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(RoTS_SOL__status), &FMGL(RoTS_SOL__do_init), &FMGL(RoTS_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.RoTS_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__exception);

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__do_init)() {
    FMGL(GA_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.GA_SOL");
    x10_int __var94__ = ((x10_int)5);
    FMGL(GA_SOL) = __var94__;
    FMGL(GA_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(GA_SOL__status), &FMGL(GA_SOL__do_init), &FMGL(GA_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.GA_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__exception);

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL);
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__do_init)() {
    FMGL(Hybrid_SOL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__HeuristicsSupported.Hybrid_SOL");
    x10_int __var95__ = ((x10_int)6);
    FMGL(Hybrid_SOL) = __var95__;
    FMGL(Hybrid_SOL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(Hybrid_SOL__status), &FMGL(Hybrid_SOL__do_init), &FMGL(Hybrid_SOL__exception), "cpls::CPLSOptionsEnum__HeuristicsSupported.Hybrid_SOL");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__exception);

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
::x10::lang::String* cpls::CPLSOptionsEnum__HeuristicsSupported::typeName(
  ){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::CPLSOptionsEnum__HeuristicsSupported::toString(
  ) {
    return (__extension__ ({ static ::x10::lang::String* strLit__38312 = ::x10aux::makeStringLit("struct cpls.CPLSOptionsEnum.HeuristicsSupported"); strLit__38312; }));
    
}
x10_boolean cpls::CPLSOptionsEnum__HeuristicsSupported::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__HeuristicsSupported>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__HeuristicsSupported::equals(
             ::x10aux::class_cast< ::cpls::CPLSOptionsEnum__HeuristicsSupported>(other));
    
}
x10_boolean cpls::CPLSOptionsEnum__HeuristicsSupported::_struct_equals(
  ::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__HeuristicsSupported>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__HeuristicsSupported::_struct_equals(
             ::x10aux::class_cast< ::cpls::CPLSOptionsEnum__HeuristicsSupported>(other));
    
}

void ::cpls::CPLSOptionsEnum__HeuristicsSupported::_serialize(::cpls::CPLSOptionsEnum__HeuristicsSupported this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::CPLSOptionsEnum__HeuristicsSupported::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::CPLSOptionsEnum__HeuristicsSupported::rtt;
void cpls::CPLSOptionsEnum__HeuristicsSupported::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSOptionsEnum.HeuristicsSupported",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of CPLSOptionsEnum$HeuristicsSupported */
/*************************************************/
/*************************************************/
/* START of CPLSOptionsEnum$NodeRoles */
#include <cpls/CPLSOptionsEnum__NodeRoles.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class CPLSOptionsEnum__NodeRoles_ibox0 : public ::x10::lang::IBox< ::cpls::CPLSOptionsEnum__NodeRoles> {
public:
    static ::x10::lang::Any::itable< CPLSOptionsEnum__NodeRoles_ibox0 > itable;
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
::x10::lang::Any::itable< CPLSOptionsEnum__NodeRoles_ibox0 >  CPLSOptionsEnum__NodeRoles_ibox0::itable(&CPLSOptionsEnum__NodeRoles_ibox0::equals, &CPLSOptionsEnum__NodeRoles_ibox0::hashCode, &CPLSOptionsEnum__NodeRoles_ibox0::toString, &CPLSOptionsEnum__NodeRoles_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__NodeRoles >  cpls::CPLSOptionsEnum__NodeRoles::_itable_0(&cpls::CPLSOptionsEnum__NodeRoles::equals, &cpls::CPLSOptionsEnum__NodeRoles::hashCode, &cpls::CPLSOptionsEnum__NodeRoles::toString, &cpls::CPLSOptionsEnum__NodeRoles::typeName);
::x10aux::itable_entry cpls::CPLSOptionsEnum__NodeRoles::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__NodeRoles::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__NodeRoles")};
::x10aux::itable_entry cpls::CPLSOptionsEnum__NodeRoles::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__NodeRoles_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__NodeRoles")};

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE);
void cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__do_init)() {
    FMGL(EXPLORER_NODE__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__NodeRoles.EXPLORER_NODE");
    x10_int __var105__ = ((x10_int)0);
    FMGL(EXPLORER_NODE) = __var105__;
    FMGL(EXPLORER_NODE__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(EXPLORER_NODE__status), &FMGL(EXPLORER_NODE__do_init), &FMGL(EXPLORER_NODE__exception), "cpls::CPLSOptionsEnum__NodeRoles.EXPLORER_NODE");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__exception);

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE);
void cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__do_init)() {
    FMGL(HEAD_NODE__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__NodeRoles.HEAD_NODE");
    x10_int __var106__ = ((x10_int)1);
    FMGL(HEAD_NODE) = __var106__;
    FMGL(HEAD_NODE__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(HEAD_NODE__status), &FMGL(HEAD_NODE__do_init), &FMGL(HEAD_NODE__exception), "cpls::CPLSOptionsEnum__NodeRoles.HEAD_NODE");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__exception);

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE);
void cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__do_init)() {
    FMGL(MASTER_NODE__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__NodeRoles.MASTER_NODE");
    x10_int __var107__ = ((x10_int)2);
    FMGL(MASTER_NODE) = __var107__;
    FMGL(MASTER_NODE__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(MASTER_NODE__status), &FMGL(MASTER_NODE__do_init), &FMGL(MASTER_NODE__exception), "cpls::CPLSOptionsEnum__NodeRoles.MASTER_NODE");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__exception);

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
::x10::lang::String* cpls::CPLSOptionsEnum__NodeRoles::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::CPLSOptionsEnum__NodeRoles::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__38325 = ::x10aux::makeStringLit("struct cpls.CPLSOptionsEnum.NodeRoles"); strLit__38325; }));
    
}
x10_boolean cpls::CPLSOptionsEnum__NodeRoles::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__NodeRoles>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__NodeRoles::equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum__NodeRoles>(other));
    
}
x10_boolean cpls::CPLSOptionsEnum__NodeRoles::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__NodeRoles>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__NodeRoles::_struct_equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum__NodeRoles>(other));
    
}

void ::cpls::CPLSOptionsEnum__NodeRoles::_serialize(::cpls::CPLSOptionsEnum__NodeRoles this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::CPLSOptionsEnum__NodeRoles::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::CPLSOptionsEnum__NodeRoles::rtt;
void cpls::CPLSOptionsEnum__NodeRoles::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSOptionsEnum.NodeRoles",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of CPLSOptionsEnum$NodeRoles */
/*************************************************/
/*************************************************/
/* START of CPLSOptionsEnum$PoolLevels */
#include <cpls/CPLSOptionsEnum__PoolLevels.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class CPLSOptionsEnum__PoolLevels_ibox0 : public ::x10::lang::IBox< ::cpls::CPLSOptionsEnum__PoolLevels> {
public:
    static ::x10::lang::Any::itable< CPLSOptionsEnum__PoolLevels_ibox0 > itable;
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
::x10::lang::Any::itable< CPLSOptionsEnum__PoolLevels_ibox0 >  CPLSOptionsEnum__PoolLevels_ibox0::itable(&CPLSOptionsEnum__PoolLevels_ibox0::equals, &CPLSOptionsEnum__PoolLevels_ibox0::hashCode, &CPLSOptionsEnum__PoolLevels_ibox0::toString, &CPLSOptionsEnum__PoolLevels_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__PoolLevels >  cpls::CPLSOptionsEnum__PoolLevels::_itable_0(&cpls::CPLSOptionsEnum__PoolLevels::equals, &cpls::CPLSOptionsEnum__PoolLevels::hashCode, &cpls::CPLSOptionsEnum__PoolLevels::toString, &cpls::CPLSOptionsEnum__PoolLevels::typeName);
::x10aux::itable_entry cpls::CPLSOptionsEnum__PoolLevels::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__PoolLevels::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__PoolLevels")};
::x10aux::itable_entry cpls::CPLSOptionsEnum__PoolLevels::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__PoolLevels_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__PoolLevels")};

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH);
void cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__do_init)() {
    FMGL(HIGH__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__PoolLevels.HIGH");
    x10_int __var117__ = ((x10_int)0);
    FMGL(HIGH) = __var117__;
    FMGL(HIGH__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(HIGH__status), &FMGL(HIGH__do_init), &FMGL(HIGH__exception), "cpls::CPLSOptionsEnum__PoolLevels.HIGH");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__exception);

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM);
void cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__do_init)() {
    FMGL(MEDIUM__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__PoolLevels.MEDIUM");
    x10_int __var118__ = ((x10_int)1);
    FMGL(MEDIUM) = __var118__;
    FMGL(MEDIUM__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(MEDIUM__status), &FMGL(MEDIUM__do_init), &FMGL(MEDIUM__exception), "cpls::CPLSOptionsEnum__PoolLevels.MEDIUM");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__exception);

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_int cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW);
void cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__do_init)() {
    FMGL(LOW__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__PoolLevels.LOW");
    x10_int __var119__ = ((x10_int)2);
    FMGL(LOW) = __var119__;
    FMGL(LOW__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(LOW__status), &FMGL(LOW__do_init), &FMGL(LOW__exception), "cpls::CPLSOptionsEnum__PoolLevels.LOW");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__exception);

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
::x10::lang::String* cpls::CPLSOptionsEnum__PoolLevels::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::CPLSOptionsEnum__PoolLevels::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__38338 = ::x10aux::makeStringLit("struct cpls.CPLSOptionsEnum.PoolLevels"); strLit__38338; }));
    
}
x10_boolean cpls::CPLSOptionsEnum__PoolLevels::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__PoolLevels>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__PoolLevels::equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum__PoolLevels>(other));
    
}
x10_boolean cpls::CPLSOptionsEnum__PoolLevels::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__PoolLevels>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__PoolLevels::_struct_equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum__PoolLevels>(other));
    
}

void ::cpls::CPLSOptionsEnum__PoolLevels::_serialize(::cpls::CPLSOptionsEnum__PoolLevels this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::CPLSOptionsEnum__PoolLevels::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::CPLSOptionsEnum__PoolLevels::rtt;
void cpls::CPLSOptionsEnum__PoolLevels::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSOptionsEnum.PoolLevels",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of CPLSOptionsEnum$PoolLevels */
/*************************************************/
/*************************************************/
/* START of CPLSOptionsEnum$PoolModes */
#include <cpls/CPLSOptionsEnum__PoolModes.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
namespace cpls { 
class CPLSOptionsEnum__PoolModes_ibox0 : public ::x10::lang::IBox< ::cpls::CPLSOptionsEnum__PoolModes> {
public:
    static ::x10::lang::Any::itable< CPLSOptionsEnum__PoolModes_ibox0 > itable;
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
::x10::lang::Any::itable< CPLSOptionsEnum__PoolModes_ibox0 >  CPLSOptionsEnum__PoolModes_ibox0::itable(&CPLSOptionsEnum__PoolModes_ibox0::equals, &CPLSOptionsEnum__PoolModes_ibox0::hashCode, &CPLSOptionsEnum__PoolModes_ibox0::toString, &CPLSOptionsEnum__PoolModes_ibox0::typeName);
} 
::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__PoolModes >  cpls::CPLSOptionsEnum__PoolModes::_itable_0(&cpls::CPLSOptionsEnum__PoolModes::equals, &cpls::CPLSOptionsEnum__PoolModes::hashCode, &cpls::CPLSOptionsEnum__PoolModes::toString, &cpls::CPLSOptionsEnum__PoolModes::typeName);
::x10aux::itable_entry cpls::CPLSOptionsEnum__PoolModes::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__PoolModes::_itable_0), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__PoolModes")};
::x10aux::itable_entry cpls::CPLSOptionsEnum__PoolModes::_iboxitables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &cpls::CPLSOptionsEnum__PoolModes_ibox0::itable), ::x10aux::itable_entry(NULL, (void*)"::cpls::CPLSOptionsEnum__PoolModes")};

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
x10_long cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART);
void cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__do_init)() {
    FMGL(SMART__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::CPLSOptionsEnum__PoolModes.SMART");
    x10_long __var129__ = ((x10_long)1ll);
    FMGL(SMART) = __var129__;
    FMGL(SMART__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(SMART__status), &FMGL(SMART__do_init), &FMGL(SMART__exception), "cpls::CPLSOptionsEnum__PoolModes.SMART");
    
}
volatile ::x10aux::StaticInitController::status cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__status);
::x10::lang::CheckedThrowable* cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__exception);

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/CPLSOptionsEnum.x10"
::x10::lang::String* cpls::CPLSOptionsEnum__PoolModes::typeName(){
    return ::x10aux::type_name((*this));
}
::x10::lang::String* cpls::CPLSOptionsEnum__PoolModes::toString() {
    return (__extension__ ({ static ::x10::lang::String* strLit__38351 = ::x10aux::makeStringLit("struct cpls.CPLSOptionsEnum.PoolModes"); strLit__38351; }));
    
}
x10_boolean cpls::CPLSOptionsEnum__PoolModes::equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__PoolModes>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__PoolModes::equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum__PoolModes>(other));
    
}
x10_boolean cpls::CPLSOptionsEnum__PoolModes::_struct_equals(::x10::lang::Any* other) {
    if (!(::x10aux::instanceof< ::cpls::CPLSOptionsEnum__PoolModes>(other)))
    {
        return false;
        
    }
    return (*this)->cpls::CPLSOptionsEnum__PoolModes::_struct_equals(::x10aux::class_cast< ::cpls::CPLSOptionsEnum__PoolModes>(other));
    
}

void ::cpls::CPLSOptionsEnum__PoolModes::_serialize(::cpls::CPLSOptionsEnum__PoolModes this_, ::x10aux::serialization_buffer& buf) {
    
}

void ::cpls::CPLSOptionsEnum__PoolModes::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}


::x10aux::RuntimeType cpls::CPLSOptionsEnum__PoolModes::rtt;
void cpls::CPLSOptionsEnum__PoolModes::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSOptionsEnum.PoolModes",::x10aux::RuntimeType::struct_kind, 1, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of CPLSOptionsEnum$PoolModes */
/*************************************************/
