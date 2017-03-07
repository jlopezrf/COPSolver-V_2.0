#ifndef __CPLS_HEURISTICFACTORY_H
#define __CPLS_HEURISTICFACTORY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { 
class CPLSOptionsEnum__HeuristicsSupported;
} 
namespace cpls { namespace solver { 
class AdaptiveSearch;
} } 
namespace cpls { namespace solver { 
class EOSearch;
} } 
namespace cpls { namespace solver { 
class RoTSearch;
} } 
namespace cpls { namespace solver { 
class GeneticAlgorithm;
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
namespace cpls { 

class HeuristicFactory   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::HeuristicFactory* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::HeuristicFactory > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::HeuristicFactory _alloc(){::cpls::HeuristicFactory t; return t; }
    
    static ::cpls::solver::HeuristicSolver* make(x10_int kind);
    static ::x10::lang::String* getHeuristicName(x10_int kind);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::HeuristicFactory other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::HeuristicFactory other) {
        return true;
        
    }
    ::cpls::HeuristicFactory cpls__HeuristicFactory____this__cpls__HeuristicFactory(
      ) {
        return (*this);
        
    }
    void _constructor() {
        (*this)->cpls::HeuristicFactory::__fieldInitializers_cpls_HeuristicFactory();
    }
    static ::cpls::HeuristicFactory _make() {
        ::cpls::HeuristicFactory this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_HeuristicFactory() {
     
    }
    
    static void _serialize(::cpls::HeuristicFactory this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::HeuristicFactory _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::HeuristicFactory this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_HEURISTICFACTORY_H

namespace cpls { 
class HeuristicFactory;
} 

#ifndef CPLS_HEURISTICFACTORY_H_NODEPS
#define CPLS_HEURISTICFACTORY_H_NODEPS
#ifndef CPLS_HEURISTICFACTORY_H_GENERICS
#define CPLS_HEURISTICFACTORY_H_GENERICS
#endif // CPLS_HEURISTICFACTORY_H_GENERICS
#endif // __CPLS_HEURISTICFACTORY_H_NODEPS
