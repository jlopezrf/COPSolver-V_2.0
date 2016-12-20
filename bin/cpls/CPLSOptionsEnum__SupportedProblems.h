#ifndef __CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H
#define __CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class CPLSOptionsEnum__SupportedProblems   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::CPLSOptionsEnum__SupportedProblems* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__SupportedProblems > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::CPLSOptionsEnum__SupportedProblems _alloc(){::cpls::CPLSOptionsEnum__SupportedProblems t; return t; }
    
    static x10_int FMGL(UNKNOWN_PROBLEM);
    static void FMGL(UNKNOWN_PROBLEM__do_init)();
    static void FMGL(UNKNOWN_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(UNKNOWN_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(UNKNOWN_PROBLEM__exception);
    static x10_int FMGL(UNKNOWN_PROBLEM__get)();
    
    static x10_int FMGL(MAGIC_SQUARE_PROBLEM);
    static void FMGL(MAGIC_SQUARE_PROBLEM__do_init)();
    static void FMGL(MAGIC_SQUARE_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(MAGIC_SQUARE_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(MAGIC_SQUARE_PROBLEM__exception);
    static x10_int FMGL(MAGIC_SQUARE_PROBLEM__get)();
    
    static x10_int FMGL(COSTAS_PROBLEM);
    static void FMGL(COSTAS_PROBLEM__do_init)();
    static void FMGL(COSTAS_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(COSTAS_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(COSTAS_PROBLEM__exception);
    static x10_int FMGL(COSTAS_PROBLEM__get)();
    
    static x10_int FMGL(ALL_INTERVAL_PROBLEM);
    static void FMGL(ALL_INTERVAL_PROBLEM__do_init)();
    static void FMGL(ALL_INTERVAL_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(ALL_INTERVAL_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(ALL_INTERVAL_PROBLEM__exception);
    static x10_int FMGL(ALL_INTERVAL_PROBLEM__get)();
    
    static x10_int FMGL(LANGFORD_PROBLEM);
    static void FMGL(LANGFORD_PROBLEM__do_init)();
    static void FMGL(LANGFORD_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LANGFORD_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(LANGFORD_PROBLEM__exception);
    static x10_int FMGL(LANGFORD_PROBLEM__get)();
    
    static x10_int FMGL(PARTIT_PROBLEM);
    static void FMGL(PARTIT_PROBLEM__do_init)();
    static void FMGL(PARTIT_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(PARTIT_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(PARTIT_PROBLEM__exception);
    static x10_int FMGL(PARTIT_PROBLEM__get)();
    
    static x10_int FMGL(STABLE_MARRIAGE_PROBLEM);
    static void FMGL(STABLE_MARRIAGE_PROBLEM__do_init)();
    static void FMGL(STABLE_MARRIAGE_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(STABLE_MARRIAGE_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(STABLE_MARRIAGE_PROBLEM__exception);
    static x10_int FMGL(STABLE_MARRIAGE_PROBLEM__get)();
    
    static x10_int FMGL(HOSPITAL_RESIDENT_PROBLEM);
    static void FMGL(HOSPITAL_RESIDENT_PROBLEM__do_init)();
    static void FMGL(HOSPITAL_RESIDENT_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(HOSPITAL_RESIDENT_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(HOSPITAL_RESIDENT_PROBLEM__exception);
    static x10_int FMGL(HOSPITAL_RESIDENT_PROBLEM__get)();
    
    static x10_int FMGL(QA_PROBLEM);
    static void FMGL(QA_PROBLEM__do_init)();
    static void FMGL(QA_PROBLEM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(QA_PROBLEM__status);
    static ::x10::lang::CheckedThrowable* FMGL(QA_PROBLEM__exception);
    static x10_int FMGL(QA_PROBLEM__get)();
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::CPLSOptionsEnum__SupportedProblems other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::CPLSOptionsEnum__SupportedProblems other) {
        return true;
        
    }
    ::cpls::CPLSOptionsEnum__SupportedProblems cpls__CPLSOptionsEnum__SupportedProblems____this__cpls__CPLSOptionsEnum__SupportedProblems(
      ) {
        return (*this);
        
    }
    void _constructor() {
        (*this)->cpls::CPLSOptionsEnum__SupportedProblems::__fieldInitializers_cpls_CPLSOptionsEnum_SupportedProblems();
    }
    static ::cpls::CPLSOptionsEnum__SupportedProblems _make() {
        ::cpls::CPLSOptionsEnum__SupportedProblems this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_CPLSOptionsEnum_SupportedProblems(
      ) {
     
    }
    
    static void _serialize(::cpls::CPLSOptionsEnum__SupportedProblems this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::CPLSOptionsEnum__SupportedProblems _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::CPLSOptionsEnum__SupportedProblems this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H

namespace cpls { 
class CPLSOptionsEnum__SupportedProblems;
} 

#ifndef CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H_NODEPS
#define CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H_NODEPS
#ifndef CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H_GENERICS
#define CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H_GENERICS
inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM__get)() {
    if (FMGL(UNKNOWN_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(UNKNOWN_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(UNKNOWN_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM__get)() {
    if (FMGL(MAGIC_SQUARE_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAGIC_SQUARE_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(MAGIC_SQUARE_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM__get)() {
    if (FMGL(COSTAS_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(COSTAS_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(COSTAS_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM__get)() {
    if (FMGL(ALL_INTERVAL_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(ALL_INTERVAL_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(ALL_INTERVAL_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM__get)() {
    if (FMGL(LANGFORD_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LANGFORD_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(LANGFORD_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM__get)() {
    if (FMGL(PARTIT_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(PARTIT_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(PARTIT_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM__get)() {
    if (FMGL(STABLE_MARRIAGE_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(STABLE_MARRIAGE_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(STABLE_MARRIAGE_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM__get)() {
    if (FMGL(HOSPITAL_RESIDENT_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(HOSPITAL_RESIDENT_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(HOSPITAL_RESIDENT_PROBLEM);
}

inline x10_int cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM__get)() {
    if (FMGL(QA_PROBLEM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(QA_PROBLEM__init)();
    }
    return cpls::CPLSOptionsEnum__SupportedProblems::FMGL(QA_PROBLEM);
}

#endif // CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H_GENERICS
#endif // __CPLS_CPLSOPTIONSENUM__SUPPORTEDPROBLEMS_H_NODEPS
