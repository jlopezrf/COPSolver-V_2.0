#ifndef __CPLS_SOLVER_GENETICALGORITHM_H
#define __CPLS_SOLVER_GENETICALGORITHM_H

#include <x10rt.h>


#define CPLS_SOLVER_POPULBASEDHEURISTIC_H_NODEPS
#include <cpls/solver/PopulBasedHeuristic.h>
#undef CPLS_SOLVER_POPULBASEDHEURISTIC_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_FLOAT_H_NODEPS
#include <x10/lang/Float.h>
#undef X10_LANG_FLOAT_H_NODEPS
#define X10_LANG_FLOAT_H_NODEPS
#include <x10/lang/Float.h>
#undef X10_LANG_FLOAT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace cpls { namespace solver { 
class GAPopulation;
} } 
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { 
class CPLSOptionsEnum__HeuristicsSupported;
} 
namespace x10 { namespace util { 
class Random;
} } 
namespace cpls { namespace solver { 
class GAIndividual;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { 
class ParamManager;
} 
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class GeneticAlgorithm : public ::cpls::solver::PopulBasedHeuristic   {
    public:
    RTT_H_DECLS_CLASS
    
    ::cpls::solver::GAPopulation* FMGL(population);
    
    x10_int FMGL(populationSize);
    
    x10_float FMGL(mutationRate);
    
    x10_int FMGL(crossingOperator);
    
    x10_int FMGL(mutationOperator);
    
    x10_long FMGL(bestCostGA);
    
    x10_long FMGL(currentCostGA);
    
    void _constructor(x10_long sz);
    
    static ::cpls::solver::GeneticAlgorithm* _make(x10_long sz);
    
    virtual x10_long search(x10_long currentCost, x10_long bestCost, x10_int nIter);
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*
      FMGL(cmp);
    
    virtual void sortPopulation();
    virtual void configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                 ::cpls::ParamManager* opts);
    virtual void initVariables();
    virtual void printPopulation();
    static void printVector(::x10::lang::Rail< x10_int >* vector);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      crossing(::cpls::solver::GAIndividual* i1, ::cpls::solver::GAIndividual* i2);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      mutate(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      mutate2(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons);
    virtual ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*
      transformIndiv(::cpls::solver::GAIndividual* indiv);
    virtual x10_boolean tryInsertIndividual(::x10::lang::Rail< x10_int >* varables,
                                            x10_long sze);
    virtual ::x10::lang::Rail< x10_int >* getConfigForPop(
      x10_boolean replace);
    virtual x10_double distance(::x10::lang::Rail< x10_int >* conf1,
                                ::x10::lang::Rail< x10_int >* conf2);
    virtual ::cpls::solver::GeneticAlgorithm* cpls__solver__GeneticAlgorithm____this__cpls__solver__GeneticAlgorithm(
      );
    virtual void __fieldInitializers_cpls_solver_GeneticAlgorithm(
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
#endif // CPLS_SOLVER_GENETICALGORITHM_H

namespace cpls { namespace solver { 
class GeneticAlgorithm;
} } 

#ifndef CPLS_SOLVER_GENETICALGORITHM_H_NODEPS
#define CPLS_SOLVER_GENETICALGORITHM_H_NODEPS
#ifndef CPLS_SOLVER_GENETICALGORITHM_H_GENERICS
#define CPLS_SOLVER_GENETICALGORITHM_H_GENERICS
#endif // CPLS_SOLVER_GENETICALGORITHM_H_GENERICS
#endif // __CPLS_SOLVER_GENETICALGORITHM_H_NODEPS
