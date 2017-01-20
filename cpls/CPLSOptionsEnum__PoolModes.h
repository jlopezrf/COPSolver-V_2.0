#ifndef __CPLS_CPLSOPTIONSENUM__POOLMODES_H
#define __CPLS_CPLSOPTIONSENUM__POOLMODES_H

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

class CPLSOptionsEnum__PoolModes   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::CPLSOptionsEnum__PoolModes* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__PoolModes > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::CPLSOptionsEnum__PoolModes _alloc(){::cpls::CPLSOptionsEnum__PoolModes t; return t; }
    
    static x10_long FMGL(SMART);
    static void FMGL(SMART__do_init)();
    static void FMGL(SMART__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(SMART__status);
    static ::x10::lang::CheckedThrowable* FMGL(SMART__exception);
    static x10_long FMGL(SMART__get)();
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::CPLSOptionsEnum__PoolModes other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::CPLSOptionsEnum__PoolModes other) {
        return true;
        
    }
    ::cpls::CPLSOptionsEnum__PoolModes cpls__CPLSOptionsEnum__PoolModes____this__cpls__CPLSOptionsEnum__PoolModes(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::cpls::CPLSOptionsEnum__PoolModes this__219 = (*this);
        
    }
    static ::cpls::CPLSOptionsEnum__PoolModes _make() {
        ::cpls::CPLSOptionsEnum__PoolModes this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_CPLSOptionsEnum_PoolModes() {
     
    }
    
    static void _serialize(::cpls::CPLSOptionsEnum__PoolModes this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::CPLSOptionsEnum__PoolModes _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::CPLSOptionsEnum__PoolModes this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSOPTIONSENUM__POOLMODES_H

namespace cpls { 
class CPLSOptionsEnum__PoolModes;
} 

#ifndef CPLS_CPLSOPTIONSENUM__POOLMODES_H_NODEPS
#define CPLS_CPLSOPTIONSENUM__POOLMODES_H_NODEPS
#ifndef CPLS_CPLSOPTIONSENUM__POOLMODES_H_GENERICS
#define CPLS_CPLSOPTIONSENUM__POOLMODES_H_GENERICS
inline x10_long cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART__get)() {
    if (FMGL(SMART__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(SMART__init)();
    }
    return cpls::CPLSOptionsEnum__PoolModes::FMGL(SMART);
}

#endif // CPLS_CPLSOPTIONSENUM__POOLMODES_H_GENERICS
#endif // __CPLS_CPLSOPTIONSENUM__POOLMODES_H_NODEPS
