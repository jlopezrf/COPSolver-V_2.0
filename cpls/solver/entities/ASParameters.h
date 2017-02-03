#ifndef __CPLS_SOLVER_ENTITIES_ASPARAMETERS_H
#define __CPLS_SOLVER_ENTITIES_ASPARAMETERS_H

#include <x10rt.h>


#define CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
#include <cpls/solver/entities/HeuristicParameters.h>
#undef CPLS_SOLVER_ENTITIES_HEURISTICPARAMETERS_H_NODEPS
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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { namespace entities { 

class ASParameters : public ::cpls::solver::entities::HeuristicParameters
  {
    public:
    RTT_H_DECLS_CLASS
    
    using ::cpls::solver::entities::HeuristicParameters::setParameters;
    
    x10_long FMGL(nVarToReset);
    
    x10_int FMGL(resetPercent);
    
    x10_boolean FMGL(exhaustive);
    
    x10_int FMGL(freezeLocMin);
    
    x10_int FMGL(freezeSwap);
    
    x10_int FMGL(resetLimit);
    
    x10_int FMGL(probSelectLocMin);
    
    x10_boolean FMGL(firstBest);
    
    void _constructor();
    
    static ::cpls::solver::entities::ASParameters* _make();
    
    void _constructor(x10_long nVarToReset, x10_int resetPercent, x10_boolean exhaustive,
                      x10_int freezeLocMin, x10_int freezeSwap, x10_int resetLimit,
                      x10_int probSelectLocMin, x10_boolean firstBest);
    
    static ::cpls::solver::entities::ASParameters* _make(
             x10_long nVarToReset, x10_int resetPercent, x10_boolean exhaustive,
             x10_int freezeLocMin, x10_int freezeSwap, x10_int resetLimit,
             x10_int probSelectLocMin, x10_boolean firstBest);
    
    virtual x10_long getNVarToReset();
    virtual x10_int getResetPercent();
    virtual x10_boolean getExhaustive();
    virtual x10_int getFreezeLocMin();
    virtual x10_int getFreezeSwap();
    virtual x10_int getResetLimit();
    virtual x10_int getProbSelectLocMin();
    virtual x10_boolean getFirstBest();
    virtual void setParameters(::cpls::solver::entities::ASParameters* parameters);
    virtual ::cpls::solver::entities::ASParameters* cpls__solver__entities__ASParameters____this__cpls__solver__entities__ASParameters(
      );
    virtual void __fieldInitializers_cpls_solver_entities_ASParameters(
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
#endif // CPLS_SOLVER_ENTITIES_ASPARAMETERS_H

namespace cpls { namespace solver { namespace entities { 
class ASParameters;
} } } 

#ifndef CPLS_SOLVER_ENTITIES_ASPARAMETERS_H_NODEPS
#define CPLS_SOLVER_ENTITIES_ASPARAMETERS_H_NODEPS
#ifndef CPLS_SOLVER_ENTITIES_ASPARAMETERS_H_GENERICS
#define CPLS_SOLVER_ENTITIES_ASPARAMETERS_H_GENERICS
#endif // CPLS_SOLVER_ENTITIES_ASPARAMETERS_H_GENERICS
#endif // __CPLS_SOLVER_ENTITIES_ASPARAMETERS_H_NODEPS
