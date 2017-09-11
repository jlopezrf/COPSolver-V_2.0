#ifndef __CPLS_SOLVER_GAINDIVIDUAL_H
#define __CPLS_SOLVER_GAINDIVIDUAL_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class GAIndividual : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(size);
    
    ::x10::lang::Rail< x10_int >* FMGL(genes);
    
    x10_long FMGL(cost);
    
    ::x10::util::Random* FMGL(randomGenerator);
    
    void _constructor(x10_long individualSize, x10_long seed);
    
    static ::cpls::solver::GAIndividual* _make(x10_long individualSize, x10_long seed);
    
    void _constructor(::x10::lang::Rail< x10_int >* genes, x10_long seed);
    
    static ::cpls::solver::GAIndividual* _make(::x10::lang::Rail< x10_int >* genes,
                                               x10_long seed);
    
    void _constructor(::cpls::solver::GAIndividual* indiv, x10_long seed);
    
    static ::cpls::solver::GAIndividual* _make(::cpls::solver::GAIndividual* indiv,
                                               x10_long seed);
    
    virtual void initialize();
    virtual x10_long getSize();
    virtual ::x10::lang::Rail< x10_int >* getGenes();
    virtual void setGenes(::x10::lang::Rail< x10_int >* genes);
    virtual x10_long getCost();
    virtual void setCost(x10_long cost);
    virtual void swap(x10_int i, x10_int j);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      insertPathCrossover(::cpls::solver::GAIndividual* individual);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      partiallyMatchedCrossover(::cpls::solver::GAIndividual* individual);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      uniformCrossover(::cpls::solver::GAIndividual* individual);
    virtual x10_long findNumberPosition(x10_long number, ::x10::lang::Rail< x10_int >* vector);
    virtual ::cpls::solver::GAIndividual* cpls__solver__GAIndividual____this__cpls__solver__GAIndividual(
      );
    virtual void __fieldInitializers_cpls_solver_GAIndividual(
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
#endif // CPLS_SOLVER_GAINDIVIDUAL_H

namespace cpls { namespace solver { 
class GAIndividual;
} } 

#ifndef CPLS_SOLVER_GAINDIVIDUAL_H_NODEPS
#define CPLS_SOLVER_GAINDIVIDUAL_H_NODEPS
#ifndef CPLS_SOLVER_GAINDIVIDUAL_H_GENERICS
#define CPLS_SOLVER_GAINDIVIDUAL_H_GENERICS
#endif // CPLS_SOLVER_GAINDIVIDUAL_H_GENERICS
#endif // __CPLS_SOLVER_GAINDIVIDUAL_H_NODEPS
