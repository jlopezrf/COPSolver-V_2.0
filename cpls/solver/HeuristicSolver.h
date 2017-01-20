#ifndef __CPLS_SOLVER_HEURISTICSOLVER_H
#define __CPLS_SOLVER_HEURISTICSOLVER_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace cpls { namespace problem { 
class ProblemGenericModel;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { 

class HeuristicSolver : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::cpls::problem::ProblemGenericModel* FMGL(problemModel);
    
    x10_boolean FMGL(kill);
    
    x10_long FMGL(seed);
    
    void _constructor();
    
    virtual void setProblemModel(::cpls::problem::ProblemGenericModel* problemModel);
    virtual void solve();
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
