#ifndef __CPLS_SOLVER_EOSEARCH_H
#define __CPLS_SOLVER_EOSEARCH_H

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

class EOSearch : public ::cpls::solver::SingleSolHeuristic   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::cpls::solver::HeuristicSolver::solve;
    
    void _constructor();
    
    static ::cpls::solver::EOSearch* _make();
    
    virtual void solve();
    virtual ::cpls::solver::EOSearch* cpls__solver__EOSearch____this__cpls__solver__EOSearch(
      );
    virtual void __fieldInitializers_cpls_solver_EOSearch();
    
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
#endif // CPLS_SOLVER_EOSEARCH_H

namespace cpls { namespace solver { 
class EOSearch;
} } 

#ifndef CPLS_SOLVER_EOSEARCH_H_NODEPS
#define CPLS_SOLVER_EOSEARCH_H_NODEPS
#ifndef CPLS_SOLVER_EOSEARCH_H_GENERICS
#define CPLS_SOLVER_EOSEARCH_H_GENERICS
#endif // CPLS_SOLVER_EOSEARCH_H_GENERICS
#endif // __CPLS_SOLVER_EOSEARCH_H_NODEPS
