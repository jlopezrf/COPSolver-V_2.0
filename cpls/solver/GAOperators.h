#ifndef __CPLS_SOLVER_GAOPERATORS_H
#define __CPLS_SOLVER_GAOPERATORS_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace cpls { namespace solver { 
class GAIndividual;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class GAOperators : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_double FMGL(mutRate);
    
    ::x10::lang::String* FMGL(mask);
    
    x10_int FMGL(longIndiv);
    
    x10_int FMGL(scalingFactor);
    
    ::x10::util::Random* FMGL(randomGenerator);
    
    void _constructor(x10_int longIndv, x10_float mutRate, x10_int scalingFactor);
    
    static ::cpls::solver::GAOperators* _make(x10_int longIndv, x10_float mutRate,
                                              x10_int scalingFactor);
    
    ::x10::lang::String* createMask();
    virtual ::x10::lang::String* getMask();
    virtual void setMutRate(x10_double mutRate);
    virtual ::x10::lang::String* getCrossingMask();
    virtual x10_int mutating(x10_int genes);
    virtual x10_double expectedValue(x10_int sizePopulation);
    virtual x10_double dispersion(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* population);
    virtual x10_int calcScalingFactor();
    virtual void calcFitness();
    virtual ::x10::lang::Rail< x10_int >* selecPopulation(x10_double size);
    x10_double binomial(x10_int n, x10_int k);
    x10_int factorial(x10_int number);
    x10_double power(x10_double number, x10_int n);
    virtual ::cpls::solver::GAOperators* cpls__solver__GAOperators____this__cpls__solver__GAOperators(
      );
    virtual void __fieldInitializers_cpls_solver_GAOperators(
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
#endif // CPLS_SOLVER_GAOPERATORS_H

namespace cpls { namespace solver { 
class GAOperators;
} } 

#ifndef CPLS_SOLVER_GAOPERATORS_H_NODEPS
#define CPLS_SOLVER_GAOPERATORS_H_NODEPS
#ifndef CPLS_SOLVER_GAOPERATORS_H_GENERICS
#define CPLS_SOLVER_GAOPERATORS_H_GENERICS
#endif // CPLS_SOLVER_GAOPERATORS_H_GENERICS
#endif // __CPLS_SOLVER_GAOPERATORS_H_NODEPS
