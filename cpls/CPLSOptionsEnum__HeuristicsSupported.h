#ifndef __CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H
#define __CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H

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

class CPLSOptionsEnum__HeuristicsSupported   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::CPLSOptionsEnum__HeuristicsSupported* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__HeuristicsSupported > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::CPLSOptionsEnum__HeuristicsSupported _alloc(){::cpls::CPLSOptionsEnum__HeuristicsSupported t; return t; }
    
    static x10_int FMGL(UNKNOWN_SOL);
    static void FMGL(UNKNOWN_SOL__do_init)();
    static void FMGL(UNKNOWN_SOL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(UNKNOWN_SOL__status);
    static ::x10::lang::CheckedThrowable* FMGL(UNKNOWN_SOL__exception);
    static x10_int FMGL(UNKNOWN_SOL__get)();
    
    static x10_int FMGL(RS_SOL);
    static void FMGL(RS_SOL__do_init)();
    static void FMGL(RS_SOL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(RS_SOL__status);
    static ::x10::lang::CheckedThrowable* FMGL(RS_SOL__exception);
    static x10_int FMGL(RS_SOL__get)();
    
    static x10_int FMGL(AS_SOL);
    static void FMGL(AS_SOL__do_init)();
    static void FMGL(AS_SOL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(AS_SOL__status);
    static ::x10::lang::CheckedThrowable* FMGL(AS_SOL__exception);
    static x10_int FMGL(AS_SOL__get)();
    
    static x10_int FMGL(EO_SOL);
    static void FMGL(EO_SOL__do_init)();
    static void FMGL(EO_SOL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(EO_SOL__status);
    static ::x10::lang::CheckedThrowable* FMGL(EO_SOL__exception);
    static x10_int FMGL(EO_SOL__get)();
    
    static x10_int FMGL(RoTS_SOL);
    static void FMGL(RoTS_SOL__do_init)();
    static void FMGL(RoTS_SOL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(RoTS_SOL__status);
    static ::x10::lang::CheckedThrowable* FMGL(RoTS_SOL__exception);
    static x10_int FMGL(RoTS_SOL__get)();
    
    static x10_int FMGL(Hybrid_SOL);
    static void FMGL(Hybrid_SOL__do_init)();
    static void FMGL(Hybrid_SOL__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(Hybrid_SOL__status);
    static ::x10::lang::CheckedThrowable* FMGL(Hybrid_SOL__exception);
    static x10_int FMGL(Hybrid_SOL__get)();
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::CPLSOptionsEnum__HeuristicsSupported other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::CPLSOptionsEnum__HeuristicsSupported other) {
        return true;
        
    }
    ::cpls::CPLSOptionsEnum__HeuristicsSupported cpls__CPLSOptionsEnum__HeuristicsSupported____this__cpls__CPLSOptionsEnum__HeuristicsSupported(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::cpls::CPLSOptionsEnum__HeuristicsSupported this__142 = (*this);
        
    }
    static ::cpls::CPLSOptionsEnum__HeuristicsSupported _make() {
        ::cpls::CPLSOptionsEnum__HeuristicsSupported this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_CPLSOptionsEnum_HeuristicsSupported(
      ) {
     
    }
    
    static void _serialize(::cpls::CPLSOptionsEnum__HeuristicsSupported this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::CPLSOptionsEnum__HeuristicsSupported _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::CPLSOptionsEnum__HeuristicsSupported this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H

namespace cpls { 
class CPLSOptionsEnum__HeuristicsSupported;
} 

#ifndef CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H_NODEPS
#define CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H_NODEPS
#ifndef CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H_GENERICS
#define CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H_GENERICS
inline x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL__get)() {
    if (FMGL(UNKNOWN_SOL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(UNKNOWN_SOL__init)();
    }
    return cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(UNKNOWN_SOL);
}

inline x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL__get)() {
    if (FMGL(RS_SOL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(RS_SOL__init)();
    }
    return cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RS_SOL);
}

inline x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL__get)() {
    if (FMGL(AS_SOL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(AS_SOL__init)();
    }
    return cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(AS_SOL);
}

inline x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)() {
    if (FMGL(EO_SOL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(EO_SOL__init)();
    }
    return cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL);
}

inline x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL__get)() {
    if (FMGL(RoTS_SOL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(RoTS_SOL__init)();
    }
    return cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(RoTS_SOL);
}

inline x10_int cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL__get)() {
    if (FMGL(Hybrid_SOL__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(Hybrid_SOL__init)();
    }
    return cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(Hybrid_SOL);
}

#endif // CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H_GENERICS
#endif // __CPLS_CPLSOPTIONSENUM__HEURISTICSSUPPORTED_H_NODEPS
