#ifndef __CPLS_PROBLEM_QAPMODEL_H
#define __CPLS_PROBLEM_QAPMODEL_H

#include <x10rt.h>


#define CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
#include <cpls/problem/ProblemGenericModel.h>
#undef CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace io { 
class File;
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
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace io { 
class InputStreamReader;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace problem { 

class QAPModel : public ::cpls::problem::ProblemGenericModel   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* FMGL(flow);
    
    ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* FMGL(dist);
    
    ::x10::array::Array_2<x10_long>* FMGL(delta);
    
    x10_int FMGL(opt);
    
    x10_int FMGL(bound);
    
    x10_int FMGL(bks);
    
    void _constructor(x10_long size);
    
    static ::cpls::problem::QAPModel* _make(x10_long size);
    
    void _constructor(x10_long size, ::x10::lang::String* inPathDataProblem,
                      ::x10::lang::String* inPathVectorSol, x10_int baseValue,
                      x10_long inSeed);
    
    static ::cpls::problem::QAPModel* _make(x10_long size, ::x10::lang::String* inPathDataProblem,
                                            ::x10::lang::String* inPathVectorSol,
                                            x10_int baseValue,
                                            x10_long inSeed);
    
    void _constructor(x10_long size, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
                      ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md);
    
    static ::cpls::problem::QAPModel* _make(x10_long size,
                                            ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
                                            ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md);
    
    virtual x10_long computeDelta(x10_long i, x10_long j);
    virtual x10_long computeDeltaPart(x10_long i, x10_long j,
                                      x10_long r, x10_long s);
    virtual x10_long costOfSolution(x10_boolean shouldBeRecorded);
    virtual x10_long costIfSwap(x10_long currentCost, x10_long i1,
                                x10_long i2);
    virtual void executedSwap(x10_long i1, x10_long i2);
    virtual x10_long costOnVariable(x10_long i);
    virtual x10_boolean loadData(::x10::lang::String* filePath);
    static ::x10::lang::Rail< x10_int >* readParameters(::x10::lang::String* line);
    void readMatrix(::x10::io::FileReader* fr, x10_int sizeF);
    virtual x10_boolean verify(::x10::lang::Rail< x10_int >* match);
    void printMatrices();
    virtual ::cpls::problem::QAPModel* cpls__problem__QAPModel____this__cpls__problem__QAPModel(
      );
    virtual void __fieldInitializers_cpls_problem_QAPModel(
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
#endif // CPLS_PROBLEM_QAPMODEL_H

namespace cpls { namespace problem { 
class QAPModel;
} } 

#ifndef CPLS_PROBLEM_QAPMODEL_H_NODEPS
#define CPLS_PROBLEM_QAPMODEL_H_NODEPS
#ifndef CPLS_PROBLEM_QAPMODEL_H_GENERICS
#define CPLS_PROBLEM_QAPMODEL_H_GENERICS
#endif // CPLS_PROBLEM_QAPMODEL_H_GENERICS
#endif // __CPLS_PROBLEM_QAPMODEL_H_NODEPS
