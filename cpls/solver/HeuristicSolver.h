#ifndef __CPLS_SOLVER_HEURISTICSOLVER_H
#define __CPLS_SOLVER_HEURISTICSOLVER_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace cpls { namespace util { 
class MovePermutation;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace cpls { 
class ParamManager;
} 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class HeuristicSolver : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::cpls::util::MovePermutation* FMGL(move);
    
    ::x10::util::Random* FMGL(random);
    
    x10_int FMGL(nSwap);
    
    x10_long FMGL(problemSize);
    
    x10_int FMGL(mySolverType);
    
    ::x10::lang::Rail< x10_int >* FMGL(variables);
    
    void _constructor();
    
    virtual void configHeuristic(x10_long sizeProblem, ::cpls::ParamManager* opts);
    virtual x10_long search(::cpls::problem::ProblemGenericModel* problemModel,
                            x10_long currentCost, x10_long bestCost, x10_int nIter);
    virtual void initVar();
    virtual void clearNSwap();
    virtual x10_int getNSwap();
    virtual void setSeed(x10_long inSeed);
    virtual void setSolverType(x10_int mySolverType);
    virtual ::x10::lang::Rail< x10_int >* getVariables();
    virtual void setVariables(::x10::lang::Rail< x10_int >* variables);
    virtual void swapVariables(x10_long i, x10_long j);
    virtual x10_long reset(x10_long n, x10_long totalCost);
    virtual ::cpls::solver::HeuristicSolver* cpls__solver__HeuristicSolver____this__cpls__solver__HeuristicSolver(
      );
    virtual void __fieldInitializers_cpls_solver_HeuristicSolver(
      );
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
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
