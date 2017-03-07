#ifndef __CPLS_SOLVER_ROTSEARCH_H
#define __CPLS_SOLVER_ROTSEARCH_H

#include <x10rt.h>


#define CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#include <cpls/solver/SingleSolHeuristic.h>
#undef CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
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
namespace x10 { namespace util { 
class Random;
} } 
namespace cpls { namespace util { 
class MovePermutation;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class RoTSearch : public ::cpls::solver::SingleSolHeuristic   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::cpls::solver::HeuristicSolver::search;
    
    x10_double FMGL(tabuDurationFactorUS);
    
    x10_double FMGL(aspirationFactorUS);
    
    x10_double FMGL(tabuDurationFactor);
    
    x10_double FMGL(aspirationFactor);
    
    x10_int FMGL(tabuDuration);
    
    x10_int FMGL(aspiration);
    
    x10_boolean FMGL(autorized);
    
    x10_boolean FMGL(aspired);
    
    x10_boolean FMGL(alreadyAspired);
    
    ::x10::array::Array_2<x10_long>* FMGL(tabuList);
    
    x10_double FMGL(tdl);
    
    x10_double FMGL(tdu);
    
    x10_double FMGL(al);
    
    x10_double FMGL(au);
    
    void _constructor();
    
    static ::cpls::solver::RoTSearch* _make();
    
    virtual void configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                 ::cpls::ParamManager* opts);
    x10_int FMGL(tabuDurationLower);
    
    x10_int FMGL(tabuDurationUpper);
    
    virtual void initVar();
    virtual x10_long search(::cpls::problem::ProblemGenericModel* problemModel,
                            x10_long currentCost, x10_long bestCost,
                            x10_int nIter);
    virtual x10_int randomInterval(x10_int low, x10_int up);
    x10_double cube();
    virtual ::x10::lang::Rail< x10_int >* createSolverState();
    virtual void processSolverState(::x10::lang::Rail< x10_int >* state);
    void onLocMin();
    virtual ::cpls::solver::RoTSearch* cpls__solver__RoTSearch____this__cpls__solver__RoTSearch(
      );
    virtual void __fieldInitializers_cpls_solver_RoTSearch(
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
#endif // CPLS_SOLVER_ROTSEARCH_H

namespace cpls { namespace solver { 
class RoTSearch;
} } 

#ifndef CPLS_SOLVER_ROTSEARCH_H_NODEPS
#define CPLS_SOLVER_ROTSEARCH_H_NODEPS
#ifndef CPLS_SOLVER_ROTSEARCH_H_GENERICS
#define CPLS_SOLVER_ROTSEARCH_H_GENERICS
#endif // CPLS_SOLVER_ROTSEARCH_H_GENERICS
#endif // __CPLS_SOLVER_ROTSEARCH_H_NODEPS
