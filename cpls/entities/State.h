#ifndef __CPLS_ENTITIES_STATE_H
#define __CPLS_ENTITIES_STATE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
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
namespace cpls { namespace entities { 

class State   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::entities::State* operator->() { return this; }
    
    x10_long FMGL(sz);
    
    x10_long FMGL(cost);
    
    ::x10::lang::Rail< x10_int >* FMGL(vector);
    
    x10_int FMGL(place);
    
    ::x10::lang::Rail< x10_int >* FMGL(solverState);
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::entities::State > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::entities::State _alloc(){::cpls::entities::State t; return t; }
    
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::entities::State other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(sz), other->FMGL(sz))) &&
        (::x10aux::struct_equals((*this)->FMGL(cost), other->FMGL(cost)))) &&
        (::x10aux::struct_equals((*this)->FMGL(vector), other->FMGL(vector)))) &&
        (::x10aux::struct_equals((*this)->FMGL(place), other->FMGL(place)))) &&
        (::x10aux::struct_equals((*this)->FMGL(solverState),
                                 other->FMGL(solverState))));
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::entities::State other) {
        return (((((::x10aux::struct_equals((*this)->FMGL(sz),
                                            other->FMGL(sz))) &&
        (::x10aux::struct_equals((*this)->FMGL(cost), other->FMGL(cost)))) &&
        (::x10aux::struct_equals((*this)->FMGL(vector), other->FMGL(vector)))) &&
        (::x10aux::struct_equals((*this)->FMGL(place), other->FMGL(place)))) &&
        (::x10aux::struct_equals((*this)->FMGL(solverState),
                                 other->FMGL(solverState))));
        
    }
    ::cpls::entities::State cpls__entities__State____this__cpls__entities__State(
      ) {
        return (*this);
        
    }
    void _constructor(x10_long sz, x10_long cost, ::x10::lang::Rail< x10_int >* vector,
                      x10_int place, ::x10::lang::Rail< x10_int >* solverState);
    
    static ::cpls::entities::State _make(x10_long sz, x10_long cost,
                                         ::x10::lang::Rail< x10_int >* vector,
                                         x10_int place, ::x10::lang::Rail< x10_int >* solverState);
    
    void __fieldInitializers_cpls_entities_State() {
     
    }
    
    static void _serialize(::cpls::entities::State this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::entities::State _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::entities::State this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // CPLS_ENTITIES_STATE_H

namespace cpls { namespace entities { 
class State;
} } 

#ifndef CPLS_ENTITIES_STATE_H_NODEPS
#define CPLS_ENTITIES_STATE_H_NODEPS
#ifndef CPLS_ENTITIES_STATE_H_GENERICS
#define CPLS_ENTITIES_STATE_H_GENERICS
#endif // CPLS_ENTITIES_STATE_H_GENERICS
#endif // __CPLS_ENTITIES_STATE_H_NODEPS
