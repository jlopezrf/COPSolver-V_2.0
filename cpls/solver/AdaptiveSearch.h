#ifndef __CPLS_SOLVER_ADAPTIVESEARCH_H
#define __CPLS_SOLVER_ADAPTIVESEARCH_H

#include <x10rt.h>


#define CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#include <cpls/solver/SingleSolHeuristic.h>
#undef CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class AdaptiveSearch : public ::cpls::solver::SingleSolHeuristic   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_long sz);
    
    static ::cpls::solver::AdaptiveSearch* _make(x10_long sz);
    
    virtual ::cpls::solver::AdaptiveSearch* cpls__solver__AdaptiveSearch____this__cpls__solver__AdaptiveSearch(
      );
    virtual void __fieldInitializers_cpls_solver_AdaptiveSearch();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // CPLS_SOLVER_ADAPTIVESEARCH_H

namespace cpls { namespace solver { 
class AdaptiveSearch;
} } 

#ifndef CPLS_SOLVER_ADAPTIVESEARCH_H_NODEPS
#define CPLS_SOLVER_ADAPTIVESEARCH_H_NODEPS
#ifndef CPLS_SOLVER_ADAPTIVESEARCH_H_GENERICS
#define CPLS_SOLVER_ADAPTIVESEARCH_H_GENERICS
#endif // CPLS_SOLVER_ADAPTIVESEARCH_H_GENERICS
#endif // __CPLS_SOLVER_ADAPTIVESEARCH_H_NODEPS
