#ifndef __CPLS_SOLVER_GAPOPULATION_H
#define __CPLS_SOLVER_GAPOPULATION_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
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
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class GAPopulation : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* FMGL(population);
    
    x10_long FMGL(populationSize);
    
    ::cpls::util::Monitor* FMGL(monitor);
    
    ::x10::array::Array_2<x10_double>* FMGL(distanceMatrix);
    
    ::cpls::problem::ProblemGenericModel* FMGL(problemModel);
    
    x10_boolean FMGL(kill);
    
    x10_long FMGL(size);
    
    virtual void initialize(x10_long populationSize, x10_long size, ::cpls::problem::ProblemGenericModel* problemModel,
                            x10_long seed);
    virtual void applyLS(x10_long size, ::cpls::solver::HeuristicSolver* heuristicSolverAux,
                         x10_int indexIni);
    virtual void printVector(::x10::lang::Rail< x10_int >* vector);
    virtual void printPopulation();
    virtual ::cpls::solver::GAIndividual* getIndividual(x10_long index);
    virtual void setIndividual(x10_long index, ::cpls::solver::GAIndividual* individual);
    virtual void setKill(x10_boolean value);
    virtual void refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                   x10_long index1, x10_long index2,
                                   ::x10::util::Random* random);
    virtual void renewPopulation(x10_int indexIni);
    virtual x10_double calculateMidDistance();
    virtual x10_double entropyOfPopulation();
    virtual void printMatrix(x10_int size, ::x10::array::Array_2<x10_double>* matrix);
    virtual x10_double calculateStandardDesviation(x10_double media);
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
