#ifndef __CPLS_CPLSOPTIONSENUM_H
#define __CPLS_CPLSOPTIONSENUM_H

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

class CPLSOptionsEnum   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::CPLSOptionsEnum* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::CPLSOptionsEnum > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::CPLSOptionsEnum _alloc(){::cpls::CPLSOptionsEnum t; return t; }
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::CPLSOptionsEnum other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::CPLSOptionsEnum other) {
        return true;
        
    }
    ::cpls::CPLSOptionsEnum cpls__CPLSOptionsEnum____this__cpls__CPLSOptionsEnum(
      ) {
        return (*this);
        
    }
    void _constructor() {
        (*this)->cpls::CPLSOptionsEnum::__fieldInitializers_cpls_CPLSOptionsEnum();
    }
    static ::cpls::CPLSOptionsEnum _make() {
        ::cpls::CPLSOptionsEnum this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_CPLSOptionsEnum() {
     
    }
    
    static void _serialize(::cpls::CPLSOptionsEnum this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::CPLSOptionsEnum _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::CPLSOptionsEnum this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSOPTIONSENUM_H

namespace cpls { 
class CPLSOptionsEnum;
} 

#ifndef CPLS_CPLSOPTIONSENUM_H_NODEPS
#define CPLS_CPLSOPTIONSENUM_H_NODEPS
#ifndef CPLS_CPLSOPTIONSENUM_H_GENERICS
#define CPLS_CPLSOPTIONSENUM_H_GENERICS
#endif // CPLS_CPLSOPTIONSENUM_H_GENERICS
#endif // __CPLS_CPLSOPTIONSENUM_H_NODEPS
