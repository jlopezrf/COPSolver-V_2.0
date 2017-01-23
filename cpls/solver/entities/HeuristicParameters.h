#ifndef __CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H
#define __CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { namespace entities { 

class HeuristicParameters : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::cpls::solver::entities::HeuristicParameters* cpls__solver__entities__HeuristicParameters____this__cpls__solver__entities__HeuristicParameters(
      );
    void _constructor();
    
    virtual void __fieldInitializers_cpls_solver_entities_HeuristicParameters(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H

namespace cpls { namespace solver { namespace entities { 
class HeuristicParameters;
} } } 

#ifndef CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
#define CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
#ifndef CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_GENERICS
#define CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_GENERICS
#endif // CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_GENERICS
#endif // __CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
