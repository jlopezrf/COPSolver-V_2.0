#ifndef __CPLS_CPLSOPTIONSENUM__POOLLEVELS_H
#define __CPLS_CPLSOPTIONSENUM__POOLLEVELS_H

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

class CPLSOptionsEnum__PoolLevels   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::CPLSOptionsEnum__PoolLevels* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__PoolLevels > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::CPLSOptionsEnum__PoolLevels _alloc(){::cpls::CPLSOptionsEnum__PoolLevels t; return t; }
    
    static x10_int FMGL(HIGH);
    static void FMGL(HIGH__do_init)();
    static void FMGL(HIGH__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(HIGH__status);
    static ::x10::lang::CheckedThrowable* FMGL(HIGH__exception);
    static x10_int FMGL(HIGH__get)();
    
    static x10_int FMGL(MEDIUM);
    static void FMGL(MEDIUM__do_init)();
    static void FMGL(MEDIUM__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(MEDIUM__status);
    static ::x10::lang::CheckedThrowable* FMGL(MEDIUM__exception);
    static x10_int FMGL(MEDIUM__get)();
    
    static x10_int FMGL(LOW);
    static void FMGL(LOW__do_init)();
    static void FMGL(LOW__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(LOW__status);
    static ::x10::lang::CheckedThrowable* FMGL(LOW__exception);
    static x10_int FMGL(LOW__get)();
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::CPLSOptionsEnum__PoolLevels other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::CPLSOptionsEnum__PoolLevels other) {
        return true;
        
    }
    ::cpls::CPLSOptionsEnum__PoolLevels cpls__CPLSOptionsEnum__PoolLevels____this__cpls__CPLSOptionsEnum__PoolLevels(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::cpls::CPLSOptionsEnum__PoolLevels this__214 = (*this);
        
    }
    static ::cpls::CPLSOptionsEnum__PoolLevels _make() {
        ::cpls::CPLSOptionsEnum__PoolLevels this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_CPLSOptionsEnum_PoolLevels() {
     
    }
    
    static void _serialize(::cpls::CPLSOptionsEnum__PoolLevels this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::CPLSOptionsEnum__PoolLevels _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::CPLSOptionsEnum__PoolLevels this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSOPTIONSENUM__POOLLEVELS_H

namespace cpls { 
class CPLSOptionsEnum__PoolLevels;
} 

#ifndef CPLS_CPLSOPTIONSENUM__POOLLEVELS_H_NODEPS
#define CPLS_CPLSOPTIONSENUM__POOLLEVELS_H_NODEPS
#ifndef CPLS_CPLSOPTIONSENUM__POOLLEVELS_H_GENERICS
#define CPLS_CPLSOPTIONSENUM__POOLLEVELS_H_GENERICS
inline x10_int cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH__get)() {
    if (FMGL(HIGH__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(HIGH__init)();
    }
    return cpls::CPLSOptionsEnum__PoolLevels::FMGL(HIGH);
}

inline x10_int cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM__get)() {
    if (FMGL(MEDIUM__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(MEDIUM__init)();
    }
    return cpls::CPLSOptionsEnum__PoolLevels::FMGL(MEDIUM);
}

inline x10_int cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW__get)() {
    if (FMGL(LOW__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(LOW__init)();
    }
    return cpls::CPLSOptionsEnum__PoolLevels::FMGL(LOW);
}

#endif // CPLS_CPLSOPTIONSENUM__POOLLEVELS_H_GENERICS
#endif // __CPLS_CPLSOPTIONSENUM__POOLLEVELS_H_NODEPS
