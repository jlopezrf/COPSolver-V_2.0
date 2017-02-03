#ifndef __CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H
#define __CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H

#include <x10rt.h>


#define CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
#include <cpls/solver/entities/HeuristicParameters.h>
#undef CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { namespace entities { 

class RoTSParameters : public ::cpls::solver::entities::HeuristicParameters
  {
    public:
    RTT_H_DECLS_CLASS
    
    using ::cpls::solver::entities::HeuristicParameters::setParameters;
    
    x10_double FMGL(tabuDurationFactorUS);
    
    x10_double FMGL(aspirationFactorUS);
    
    void _constructor();
    
    static ::cpls::solver::entities::RoTSParameters* _make();
    
    void _constructor(x10_double tabuDurationFactorUS, x10_double aspirationFactorUS);
    
    static ::cpls::solver::entities::RoTSParameters* _make(x10_double tabuDurationFactorUS,
                                                           x10_double aspirationFactorUS);
    
    virtual x10_double getTabuDurationFactorUS();
    virtual x10_double getAspirationFactorUS();
    virtual void setParameters(::cpls::solver::entities::RoTSParameters* parameters);
    virtual ::cpls::solver::entities::RoTSParameters* cpls__solver__entities__RoTSParameters____this__cpls__solver__entities__RoTSParameters(
      );
    virtual void __fieldInitializers_cpls_solver_entities_RoTSParameters(
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


} } } 
#endif // CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H

namespace cpls { namespace solver { namespace entities { 
class RoTSParameters;
} } } 

#ifndef CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H_NODEPS
#define CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H_NODEPS
#ifndef CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H_GENERICS
#define CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H_GENERICS
#endif // CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H_GENERICS
#endif // __CPLS_SOLVER_ENTITIES_ROTSPARAMETERS_H_NODEPS
