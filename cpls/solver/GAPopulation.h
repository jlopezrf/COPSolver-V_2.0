#ifndef __CPLS_SOLVER_GAPOPULATION_H
#define __CPLS_SOLVER_GAPOPULATION_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace cpls { namespace solver { 
class GAIndividual;
} } 
namespace cpls { namespace util { 
class Monitor;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { namespace solver { 

class GAPopulation : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* FMGL(population);
    
    x10_long FMGL(populationSize);
    
    ::cpls::util::Monitor* FMGL(monitor);
    
    virtual void initialize(x10_long populationSize, x10_long size, ::cpls::problem::ProblemGenericModel* problemModel,
                            x10_long seed);
    virtual ::cpls::solver::GAIndividual* getIndividual(x10_long index);
    virtual void setIndividual(x10_long index, ::cpls::solver::GAIndividual* individual);
    virtual void refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                   x10_long index1, x10_long index2,
                                   ::x10::util::Random* random);
    virtual x10_double distance(::x10::lang::Rail< x10_int >* indiv1,
                                ::x10::lang::Rail< x10_int >* indiv2);
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*
      FMGL(cmp);
    
    virtual void sort();
    virtual x10_long getPopulationSize();
    virtual void setCost(x10_long index, x10_long cost);
    virtual ::cpls::solver::GAPopulation* cpls__solver__GAPopulation____this__cpls__solver__GAPopulation(
      );
    void _constructor();
    
    static ::cpls::solver::GAPopulation* _make();
    
    virtual void __fieldInitializers_cpls_solver_GAPopulation(
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
#endif // CPLS_SOLVER_GAPOPULATION_H

namespace cpls { namespace solver { 
class GAPopulation;
} } 

#ifndef CPLS_SOLVER_GAPOPULATION_H_NODEPS
#define CPLS_SOLVER_GAPOPULATION_H_NODEPS
#ifndef CPLS_SOLVER_GAPOPULATION_H_GENERICS
#define CPLS_SOLVER_GAPOPULATION_H_GENERICS
#endif // CPLS_SOLVER_GAPOPULATION_H_GENERICS
#endif // __CPLS_SOLVER_GAPOPULATION_H_NODEPS
