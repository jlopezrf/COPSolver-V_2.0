#ifndef __CPLS_PROBLEM_PROBLEMGENERICMODEL_H
#define __CPLS_PROBLEM_PROBLEMGENERICMODEL_H

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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace lang { 
class String;
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
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace cpls { namespace util { 
class Utils;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace cpls { namespace problem { 

class ProblemGenericModel : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(size);
    
    ::x10::lang::Rail< x10_int >* FMGL(variables);
    
    x10_int FMGL(baseValue);
    
    x10_long FMGL(inSeed);
    
    ::x10::util::Random* FMGL(r);
    
    ::x10::lang::String* FMGL(inPathDataProblem);
    
    ::x10::lang::String* FMGL(inPathVectorSol);
    
    void _constructor(x10_long sizeProblem);
    
    static ::cpls::problem::ProblemGenericModel* _make(x10_long sizeProblem);
    
    virtual void setBaseValue(x10_int baseValue);
    virtual void setInPathDataProblem(::x10::lang::String* inPathDataProblem);
    virtual void setInPathVectorSol(::x10::lang::String* inPathVectorSol);
    virtual void setSeed(x10_long seed);
    virtual x10_long getSize();
    virtual x10_long costOnVariable(x10_long i);
    virtual x10_long costIfSwap(x10_long current_cost, x10_long i1, x10_long i2);
    virtual void executedSwap(x10_long i1, x10_long i2);
    virtual void swapVariables(x10_long i, x10_long j);
    virtual x10_long costOfSolution(x10_boolean shouldBeRecorded);
    virtual x10_long costOfSolution(::x10::lang::Rail< x10_int >* solution);
    static void show(::x10::lang::String* s, ::x10::lang::Rail< x10_int >* d);
    virtual void initialize();
    virtual x10_long reset(x10_long n, x10_long totalCost);
    virtual void setVariables(::x10::lang::Rail< x10_int >* array);
    virtual void displaySolution(::x10::lang::Rail< x10_int >* conf);
    virtual x10_boolean verify(::x10::lang::Rail< x10_int >* conf);
    virtual ::x10::lang::Rail< x10_int >* getVariables();
    virtual x10_long nextJ(x10_long i, x10_long j, x10_boolean exhaustive);
    virtual x10_long nextI(x10_long i);
    virtual x10_double distance(::x10::lang::Rail< x10_int >* conf1, ::x10::lang::Rail< x10_int >* conf2);
    virtual ::cpls::problem::ProblemGenericModel* cpls__problem__ProblemGenericModel____this__cpls__problem__ProblemGenericModel(
      );
    virtual void __fieldInitializers_cpls_problem_ProblemGenericModel(
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
#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL_H

namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 

#ifndef CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
#define CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
#ifndef CPLS_PROBLEM_PROBLEMGENERICMODEL_H_GENERICS
#define CPLS_PROBLEM_PROBLEMGENERICMODEL_H_GENERICS
#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL_H_GENERICS
#endif // __CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
