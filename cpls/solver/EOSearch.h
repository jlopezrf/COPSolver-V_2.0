#ifndef __CPLS_SOLVER_EOSEARCH_H
#define __CPLS_SOLVER_EOSEARCH_H

#include <x10rt.h>


#define CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#include <cpls/solver/SingleSolHeuristic.h>
#undef CPLS_SOLVER_SINGLESOLHEURISTIC_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class Math;
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
class RailUtils;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class EOSearch : public ::cpls::solver::SingleSolHeuristic   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< x10_double >* FMGL(pdf);
    
    ::x10::lang::Rail< x10_long >* FMGL(fit);
    
    ::x10::lang::Fun_0_2<x10_long, x10_long, x10_int>* FMGL(cmp);
    
    ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>* FMGL(powFnc);
    
    ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>* FMGL(expFnc);
    
    ::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>* FMGL(gammaFnc);
    
    static x10_double gamma(x10_double n);
    x10_double FMGL(tauUserSel);
    
    x10_double FMGL(tau);
    
    x10_int FMGL(pdfUserSel);
    
    x10_int FMGL(pdfS);
    
    x10_int FMGL(selSecond);
    
    x10_double FMGL(expDown);
    
    x10_double FMGL(expUp);
    
    x10_double FMGL(powDown);
    
    x10_double FMGL(powUp);
    
    void _constructor();
    
    static ::cpls::solver::EOSearch* _make();
    
    virtual void configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                 ::cpls::ParamManager* opts);
    virtual void initVar(x10_long tCost, x10_boolean sLow);
    void initPDF(::x10::lang::Fun_0_2<x10_double, x10_long, x10_double>* fnc);
    virtual x10_long search();
    x10_int pdfPick();
    void selFirstVar(::cpls::util::MovePermutation* move);
    x10_long selSecondMinConf(::cpls::util::MovePermutation* move);
    x10_long selSecondRandom(::cpls::util::MovePermutation* move);
    void onLocMin();
    virtual ::x10::lang::Rail< x10_int >* createSolverState();
    virtual void processSolverState(::x10::lang::Rail< x10_int >* state);
    virtual ::cpls::solver::EOSearch* cpls__solver__EOSearch____this__cpls__solver__EOSearch(
      );
    virtual void __fieldInitializers_cpls_solver_EOSearch(
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
#endif // CPLS_SOLVER_EOSEARCH_H

namespace cpls { namespace solver { 
class EOSearch;
} } 

#ifndef CPLS_SOLVER_EOSEARCH_H_NODEPS
#define CPLS_SOLVER_EOSEARCH_H_NODEPS
#ifndef CPLS_SOLVER_EOSEARCH_H_GENERICS
#define CPLS_SOLVER_EOSEARCH_H_GENERICS
#endif // CPLS_SOLVER_EOSEARCH_H_GENERICS
#endif // __CPLS_SOLVER_EOSEARCH_H_NODEPS
