#ifndef __CPLS_SOLVER_HEURISTICSOLVER_H
#define __CPLS_SOLVER_HEURISTICSOLVER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { namespace util { 
class MovePermutation;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
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
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { namespace util { 
class Utils;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace cpls { namespace measurements { 
class GlobalStats;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class HeuristicSolver : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::cpls::problem::ProblemGenericModel* FMGL(problemModel);
    
    x10_long FMGL(size);
    
    ::cpls::util::MovePermutation* FMGL(move);
    
    ::x10::util::Random* FMGL(random);
    
    x10_long FMGL(seed);
    
    x10_long FMGL(target);
    
    x10_boolean FMGL(strictLow);
    
    x10_boolean FMGL(targetSucc);
    
    x10_int FMGL(nRestart);
    
    x10_int FMGL(nIter);
    
    x10_int FMGL(nSwap);
    
    x10_int FMGL(nForceRestart);
    
    x10_int FMGL(nIterTot);
    
    x10_int FMGL(nSwapTot);
    
    ::x10::lang::Rail< x10_int >* FMGL(bestConf);
    
    x10_long FMGL(bestCost);
    
    x10_long FMGL(currentCost);
    
    x10_boolean FMGL(kill);
    
    x10_long FMGL(maxTime);
    
    x10_long FMGL(initialTime);
    
    x10_boolean FMGL(restart);
    
    x10_long FMGL(maxIters);
    
    x10_int FMGL(maxRestarts);
    
    x10_boolean FMGL(forceRestart);
    
    x10_boolean FMGL(forceReset);
    
    x10_boolean FMGL(reportPart);
    
    x10_int FMGL(nChangeV);
    
    x10_boolean FMGL(bestSent);
    
    x10_int FMGL(updateI);
    
    x10_int FMGL(reportI);
    
    x10_boolean FMGL(adaptiveComm);
    
    x10_int FMGL(modParams);
    
    x10_long FMGL(costLR);
    
    x10_int FMGL(maxUpdateI);
    
    x10_int FMGL(changeOnDiver);
    
    void _constructor();
    
    virtual void setProblemModel(::cpls::problem::ProblemGenericModel* problemModel);
    virtual void solve();
    virtual x10_long solve(x10_long tCost, x10_boolean sLow);
    virtual void initVar(x10_long tCost, x10_boolean sLow);
    virtual void updateTotStats();
    virtual void restartVar();
    virtual x10_long search();
    virtual void updateCosts();
    virtual x10_boolean verify();
    virtual x10_long getSizeProblem();
    virtual void reportStats(::cpls::measurements::GlobalStats* c);
    virtual void displaySolution();
    virtual ::x10::lang::Rail< x10_int >* getBestConfiguration();
    virtual ::x10::lang::Rail< x10_int >* createSolverState();
    virtual void kill();
    virtual void setSeed(x10_long inSeed);
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
