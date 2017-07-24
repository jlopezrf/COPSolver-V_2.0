#ifndef __CPLS_SOLVER_SINGLESOLHEURISTIC_H
#define __CPLS_SOLVER_SINGLESOLHEURISTIC_H

#include <x10rt.h>


#define CPLS_SOLVER_HEURISTICSOLVER_H_NODEPS
#include <cpls/solver/HeuristicSolver.h>
#undef CPLS_SOLVER_HEURISTICSOLVER_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class SingleSolHeuristic : public ::cpls::solver::HeuristicSolver   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_long sz);
    
    static ::cpls::solver::SingleSolHeuristic* _make(x10_long sz);
    
    virtual ::cpls::solver::SingleSolHeuristic* cpls__solver__SingleSolHeuristic____this__cpls__solver__SingleSolHeuristic(
      );
    virtual void __fieldInitializers_cpls_solver_SingleSolHeuristic(
      );
    
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
#endif // CPLS_SOLVER_SINGLESOLHEURISTIC_H

namespace cpls { namespace solver { 
class SingleSolHeuristic;
} } 

#ifndef CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#define CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#ifndef CPLS_SOLVER_SINGLESOLHEURISTIC_H_GENERICS
#define CPLS_SOLVER_SINGLESOLHEURISTIC_H_GENERICS
#endif // CPLS_SOLVER_SINGLESOLHEURISTIC_H_GENERICS
#endif // __CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
