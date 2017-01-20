#ifndef __CPLS_CPLSOPTIONSENUM__NODEROLES_H
#define __CPLS_CPLSOPTIONSENUM__NODEROLES_H

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

class CPLSOptionsEnum__NodeRoles   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::CPLSOptionsEnum__NodeRoles* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum__NodeRoles > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::CPLSOptionsEnum__NodeRoles _alloc(){::cpls::CPLSOptionsEnum__NodeRoles t; return t; }
    
    static x10_int FMGL(EXPLORER_NODE);
    static void FMGL(EXPLORER_NODE__do_init)();
    static void FMGL(EXPLORER_NODE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(EXPLORER_NODE__status);
    static ::x10::lang::CheckedThrowable* FMGL(EXPLORER_NODE__exception);
    static x10_int FMGL(EXPLORER_NODE__get)();
    
    static x10_int FMGL(HEAD_NODE);
    static void FMGL(HEAD_NODE__do_init)();
    static void FMGL(HEAD_NODE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(HEAD_NODE__status);
    static ::x10::lang::CheckedThrowable* FMGL(HEAD_NODE__exception);
    static x10_int FMGL(HEAD_NODE__get)();
    
    static x10_int FMGL(MASTER_NODE);
    static void FMGL(MASTER_NODE__do_init)();
    static void FMGL(MASTER_NODE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(MASTER_NODE__status);
    static ::x10::lang::CheckedThrowable* FMGL(MASTER_NODE__exception);
    static x10_int FMGL(MASTER_NODE__get)();
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::CPLSOptionsEnum__NodeRoles other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::CPLSOptionsEnum__NodeRoles other) {
        return true;
        
    }
    ::cpls::CPLSOptionsEnum__NodeRoles cpls__CPLSOptionsEnum__NodeRoles____this__cpls__CPLSOptionsEnum__NodeRoles(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::cpls::CPLSOptionsEnum__NodeRoles this__209 = (*this);
        
    }
    static ::cpls::CPLSOptionsEnum__NodeRoles _make() {
        ::cpls::CPLSOptionsEnum__NodeRoles this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_CPLSOptionsEnum_NodeRoles() {
     
    }
    
    static void _serialize(::cpls::CPLSOptionsEnum__NodeRoles this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::CPLSOptionsEnum__NodeRoles _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::CPLSOptionsEnum__NodeRoles this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSOPTIONSENUM__NODEROLES_H

namespace cpls { 
class CPLSOptionsEnum__NodeRoles;
} 

#ifndef CPLS_CPLSOPTIONSENUM__NODEROLES_H_NODEPS
#define CPLS_CPLSOPTIONSENUM__NODEROLES_H_NODEPS
#ifndef CPLS_CPLSOPTIONSENUM__NODEROLES_H_GENERICS
#define CPLS_CPLSOPTIONSENUM__NODEROLES_H_GENERICS
inline x10_int cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE__get)() {
    if (FMGL(EXPLORER_NODE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(EXPLORER_NODE__init)();
    }
    return cpls::CPLSOptionsEnum__NodeRoles::FMGL(EXPLORER_NODE);
}

inline x10_int cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE__get)() {
    if (FMGL(HEAD_NODE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(HEAD_NODE__init)();
    }
    return cpls::CPLSOptionsEnum__NodeRoles::FMGL(HEAD_NODE);
}

inline x10_int cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE__get)() {
    if (FMGL(MASTER_NODE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(MASTER_NODE__init)();
    }
    return cpls::CPLSOptionsEnum__NodeRoles::FMGL(MASTER_NODE);
}

#endif // CPLS_CPLSOPTIONSENUM__NODEROLES_H_GENERICS
#endif // __CPLS_CPLSOPTIONSENUM__NODEROLES_H_NODEPS
