#ifndef __CPLS_SOLVER_ADAPTIVESEARCH_H
#define __CPLS_SOLVER_ADAPTIVESEARCH_H

#include <x10rt.h>


#define CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#include <cpls/solver/SingleSolHeuristic.h>
#undef CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace cpls { namespace util { 
class MovePermutation;
} } 
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { 
class CPLSOptionsEnum__HeuristicsSupported;
} 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { 
class ParamManager;
} 
namespace x10 { namespace util { 
class OptionsParser;
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
namespace cpls { namespace util { 
class Utils;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace cpls { namespace measurements { 
class GlobalStats;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class AdaptiveSearch : public ::cpls::solver::SingleSolHeuristic   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_int >* FMGL(mark);
    
    x10_int FMGL(listInb);
    
    x10_int FMGL(listJnb);
    
    ::x10::lang::Rail< ::cpls::util::MovePermutation* >* FMGL(listIJ);
    
    ::x10::lang::Rail< x10_long >* FMGL(listI);
    
    x10_int FMGL(nVarMarked);
    
    x10_int FMGL(nReset);
    
    x10_int FMGL(nSameVar);
    
    x10_int FMGL(nLocalMin);
    
    x10_int FMGL(nResetTot);
    
    x10_int FMGL(nSameVarTot);
    
    x10_int FMGL(nLocalMinTot);
    
    x10_int FMGL(nInPlateau);
    
    x10_int FMGL(nListIJ);
    
    x10_long FMGL(nVarToReset);
    
    x10_int FMGL(resetPercent);
    
    x10_boolean FMGL(exhaustive);
    
    x10_int FMGL(freezeLocMin);
    
    x10_int FMGL(freezeSwap);
    
    x10_int FMGL(resetLimit);
    
    x10_int FMGL(probSelectLocMin);
    
    x10_boolean FMGL(firstBest);
    
    void _constructor();
    
    static ::cpls::solver::AdaptiveSearch* _make();
    
    virtual void configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                 ::cpls::ParamManager* opts);
    virtual void initVar(x10_long tCost, x10_boolean sLow);
    virtual x10_long search();
    virtual void restartVar();
    void doReset(x10_long n);
    void selectVarHighCost(::cpls::util::MovePermutation* move);
    x10_long selectVarMinConflict(::cpls::util::MovePermutation* move);
    x10_long selectVarsToSwap(::cpls::util::MovePermutation* move);
    virtual void reportStats(::cpls::measurements::GlobalStats* c);
    virtual void updateTotStats();
    void onLocMin();
    virtual ::cpls::solver::AdaptiveSearch* cpls__solver__AdaptiveSearch____this__cpls__solver__AdaptiveSearch(
      );
    virtual void __fieldInitializers_cpls_solver_AdaptiveSearch(
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
#endif // CPLS_SOLVER_ADAPTIVESEARCH_H

namespace cpls { namespace solver { 
class AdaptiveSearch;
} } 

#ifndef CPLS_SOLVER_ADAPTIVESEARCH_H_NODEPS
#define CPLS_SOLVER_ADAPTIVESEARCH_H_NODEPS
#ifndef CPLS_SOLVER_ADAPTIVESEARCH_H_GENERICS
#define CPLS_SOLVER_ADAPTIVESEARCH_H_GENERICS
#endif // CPLS_SOLVER_ADAPTIVESEARCH_H_GENERICS
#endif // __CPLS_SOLVER_ADAPTIVESEARCH_H_NODEPS
