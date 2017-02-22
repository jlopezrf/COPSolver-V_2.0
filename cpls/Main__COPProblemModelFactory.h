#ifndef __CPLS_MAIN__COPPROBLEMMODELFACTORY_H
#define __CPLS_MAIN__COPPROBLEMMODELFACTORY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace cpls { 
class ParamManager;
} 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace cpls { namespace problem { 
class MSPModel;
} } 
namespace cpls { namespace problem { 
class CAPModel;
} } 
namespace cpls { namespace problem { 
class AIPModel;
} } 
namespace cpls { namespace problem { 
class LNPModel;
} } 
namespace cpls { namespace problem { 
class SMTIModel;
} } 
namespace cpls { namespace util { 
class CPLSFileReader;
} } 
namespace cpls { namespace problem { 
class QAPModel;
} } 
namespace cpls { namespace problem { 
class PNPModel;
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

class Main__COPProblemModelFactory   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::Main__COPProblemModelFactory* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::Main__COPProblemModelFactory > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::Main__COPProblemModelFactory _alloc(){::cpls::Main__COPProblemModelFactory t; return t; }
    
    static ::cpls::problem::ProblemGenericModel* make(::cpls::ParamManager* opts,
                                                      x10_int problem,
                                                      ::x10::lang::Rail< x10_long >* problemParams);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::Main__COPProblemModelFactory other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::Main__COPProblemModelFactory other) {
        return true;
        
    }
    ::cpls::Main__COPProblemModelFactory cpls__Main__COPProblemModelFactory____this__cpls__Main__COPProblemModelFactory(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::cpls::Main__COPProblemModelFactory this__24084 =
          (*this);
        
    }
    static ::cpls::Main__COPProblemModelFactory _make() {
        ::cpls::Main__COPProblemModelFactory this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_Main_COPProblemModelFactory(
      ) {
     
    }
    
    static void _serialize(::cpls::Main__COPProblemModelFactory this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::Main__COPProblemModelFactory _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::Main__COPProblemModelFactory this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_MAIN__COPPROBLEMMODELFACTORY_H

namespace cpls { 
class Main__COPProblemModelFactory;
} 

#ifndef CPLS_MAIN__COPPROBLEMMODELFACTORY_H_NODEPS
#define CPLS_MAIN__COPPROBLEMMODELFACTORY_H_NODEPS
#ifndef CPLS_MAIN__COPPROBLEMMODELFACTORY_H_GENERICS
#define CPLS_MAIN__COPPROBLEMMODELFACTORY_H_GENERICS
#endif // CPLS_MAIN__COPPROBLEMMODELFACTORY_H_GENERICS
#endif // __CPLS_MAIN__COPPROBLEMMODELFACTORY_H_NODEPS
