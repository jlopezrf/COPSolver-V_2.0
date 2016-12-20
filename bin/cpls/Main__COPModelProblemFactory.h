#ifndef __CPLS_MAIN__COPMODELPROBLEMFACTORY_H
#define __CPLS_MAIN__COPMODELPROBLEMFACTORY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { 
class CPLSOptionsEnum__SupportedProblems;
} 
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

class Main__COPModelProblemFactory   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::Main__COPModelProblemFactory* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::Main__COPModelProblemFactory > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::Main__COPModelProblemFactory _alloc(){::cpls::Main__COPModelProblemFactory t; return t; }
    
    static ::cpls::problem::ProblemGenericModel* make(x10_int kind, x10_long size);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::Main__COPModelProblemFactory other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::Main__COPModelProblemFactory other) {
        return true;
        
    }
    ::cpls::Main__COPModelProblemFactory cpls__Main__COPModelProblemFactory____this__cpls__Main__COPModelProblemFactory(
      ) {
        return (*this);
        
    }
    void _constructor() {
        (*this)->cpls::Main__COPModelProblemFactory::__fieldInitializers_cpls_Main_COPModelProblemFactory();
    }
    static ::cpls::Main__COPModelProblemFactory _make() {
        ::cpls::Main__COPModelProblemFactory this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_Main_COPModelProblemFactory() {
     
    }
    
    static void _serialize(::cpls::Main__COPModelProblemFactory this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::Main__COPModelProblemFactory _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::Main__COPModelProblemFactory this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_MAIN__COPMODELPROBLEMFACTORY_H

namespace cpls { 
class Main__COPModelProblemFactory;
} 

#ifndef CPLS_MAIN__COPMODELPROBLEMFACTORY_H_NODEPS
#define CPLS_MAIN__COPMODELPROBLEMFACTORY_H_NODEPS
#ifndef CPLS_MAIN__COPMODELPROBLEMFACTORY_H_GENERICS
#define CPLS_MAIN__COPMODELPROBLEMFACTORY_H_GENERICS
#endif // CPLS_MAIN__COPMODELPROBLEMFACTORY_H_GENERICS
#endif // __CPLS_MAIN__COPMODELPROBLEMFACTORY_H_NODEPS
