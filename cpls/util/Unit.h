#ifndef __CPLS_UTIL_UNIT_H
#define __CPLS_UTIL_UNIT_H

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
namespace cpls { namespace util { 

class Unit   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::util::Unit* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::util::Unit > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::util::Unit _alloc(){::cpls::util::Unit t; return t; }
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::util::Unit other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::util::Unit other) {
        return true;
        
    }
    ::cpls::util::Unit cpls__util__Unit____this__cpls__util__Unit() {
        return (*this);
        
    }
    void _constructor() {
        (*this)->cpls::util::Unit::__fieldInitializers_cpls_util_Unit();
    }
    static ::cpls::util::Unit _make() {
        ::cpls::util::Unit this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_util_Unit() {
     
    }
    
    static void _serialize(::cpls::util::Unit this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::util::Unit _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::util::Unit this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // CPLS_UTIL_UNIT_H

namespace cpls { namespace util { 
class Unit;
} } 

#ifndef CPLS_UTIL_UNIT_H_NODEPS
#define CPLS_UTIL_UNIT_H_NODEPS
#ifndef CPLS_UTIL_UNIT_H_GENERICS
#define CPLS_UTIL_UNIT_H_GENERICS
#endif // CPLS_UTIL_UNIT_H_GENERICS
#endif // __CPLS_UTIL_UNIT_H_NODEPS
