#ifndef __CPLS_SOLVER_HEURISTICSOLVER_H
#define __CPLS_SOLVER_HEURISTICSOLVER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class HeuristicSolver : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(sz);
    
    x10_long FMGL(size);
    
    void _constructor(x10_long sz);
    
    static ::cpls::solver::HeuristicSolver* _make(x10_long sz);
    
    virtual ::cpls::solver::HeuristicSolver* cpls__solver__HeuristicSolver____this__cpls__solver__HeuristicSolver(
      );
    virtual void __fieldInitializers_cpls_solver_HeuristicSolver(
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
#endif // CPLS_SOLVER_HEURISTICSOLVER_H

namespace cpls { namespace solver { 
class HeuristicSolver;
} } 

#ifndef CPLS_SOLVER_HEURISTICSOLVER_H_NODEPS
#define CPLS_SOLVER_HEURISTICSOLVER_H_NODEPS
#ifndef CPLS_SOLVER_HEURISTICSOLVER_H_GENERICS
#define CPLS_SOLVER_HEURISTICSOLVER_H_GENERICS
#endif // CPLS_SOLVER_HEURISTICSOLVER_H_GENERICS
#endif // __CPLS_SOLVER_HEURISTICSOLVER_H_NODEPS
