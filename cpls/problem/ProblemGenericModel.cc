/*************************************************/
/* START of ProblemGenericModel */
#include <cpls/problem/ProblemGenericModel.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/util/Random.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/lang/Char.h>
#include <cpls/util/Utils.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__1_CLOSURE
#define CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_problem_ProblemGenericModel__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_problem_ProblemGenericModel__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        return ((x10_int) (i));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_problem_ProblemGenericModel__closure__1* storage = ::x10aux::alloc_z<cpls_problem_ProblemGenericModel__closure__1>();
        buf.record_reference(storage);
        cpls_problem_ProblemGenericModel__closure__1* this_ = new (storage) cpls_problem_ProblemGenericModel__closure__1();
        return this_;
    }
    
    cpls_problem_ProblemGenericModel__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10:105";
    }

};

#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__1_CLOSURE
#ifndef CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__2_CLOSURE
#define CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_problem_ProblemGenericModel__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_problem_ProblemGenericModel__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        return ((x10_int) (i));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_problem_ProblemGenericModel__closure__2* storage = ::x10aux::alloc_z<cpls_problem_ProblemGenericModel__closure__2>();
        buf.record_reference(storage);
        cpls_problem_ProblemGenericModel__closure__2* this_ = new (storage) cpls_problem_ProblemGenericModel__closure__2();
        return this_;
    }
    
    cpls_problem_ProblemGenericModel__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10:204";
    }

};

#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__2_CLOSURE

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::_constructor(x10_long sizeProblem) {
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    FMGL(size) = sizeProblem;
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel();
    
    //#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(r) = ::x10::util::Random::_make();
}
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::_make(
  x10_long sizeProblem) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    this_->_constructor(sizeProblem);
    return this_;
}



//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setBaseValue(x10_int baseValue) {
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(baseValue) = baseValue;
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPathDataProblem(::x10::lang::String* inPathDataProblem) {
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathDataProblem) = inPathDataProblem;
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::x10::lang::String* cpls::problem::ProblemGenericModel::getInPathVectorSol(
  ) {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(inPathVectorSol);
    
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_int cpls::problem::ProblemGenericModel::getBaseValue() {
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(baseValue);
    
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::x10::lang::String* cpls::problem::ProblemGenericModel::getInPathDataProblem(
  ) {
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(inPathDataProblem);
    
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPathVectorSol(::x10::lang::String* inPathVectorSol) {
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathVectorSol) = inPathVectorSol;
}

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setSeed(x10_long seed) {
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inSeed) = seed;
}

//#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::getSize() {
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(size);
    
}

//#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOnVariable(x10_long i) {
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42703 = ::x10aux::makeStringLit("Error bad costOnVariable"); strLit__42703; }))));
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costIfSwap(x10_long current_cost,
                                                        x10_long i1, x10_long i2) {
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42704 = ::x10aux::makeStringLit("Error costIfSwap"); strLit__42704; }))));
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::executedSwap(x10_long sz, x10_long i1,
                                                      x10_long i2, ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42705 = ::x10aux::makeStringLit("Error no executedSwap implementation"); strLit__42705; }))));
}

//#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_long sz, x10_boolean shouldBeRecorded,
                                                            ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42706 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__42706; }))));
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_long sz,
                                                            ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42707 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__42707; }))));
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::show(::x10::lang::String* s,
                                              ::x10::lang::Rail< x10_int >* d) {
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(s, (__extension__ ({ static ::x10::lang::String* strLit__42708 = ::x10aux::makeStringLit(" = "); strLit__42708; }))));
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__36634 = d;
    x10_long i__36551min__36635 = ((x10_long)0ll);
    x10_long i__36551max__36636 = (x10_long)(::x10aux::nullCheck(rail__36634)->FMGL(size));
    {
        x10_long i__36637;
        for (i__36637 = i__36551min__36635; ((i__36637) < (i__36551max__36636));
             i__36637 = ((i__36637) + (((x10_long)1ll)))) {
            x10_long p__36638 = i__36637;
            
            //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42709 = ::x10aux::makeStringLit(" "); strLit__42709; })), ::x10aux::nullCheck(d)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                      p__36638)));
        }
    }
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42711 = ::x10aux::makeStringLit(""); strLit__42711; }))));
}

//#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::initialize(
  x10_long inSeed) {
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* variables = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                  reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_problem_ProblemGenericModel__closure__1)))cpls_problem_ProblemGenericModel__closure__1())));
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this->FMGL(r))->x10::util::Random::setSeed(
      inSeed);
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    if (!(::x10aux::nullCheck(this->FMGL(inPathVectorSol))->x10::lang::String::equalsIgnoreCase(
            (__extension__ ({ static ::x10::lang::String* strLit__42712 = ::x10aux::makeStringLit("."); strLit__42712; })))))
    {
        
        //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::io::FileReader* fileIn = ::x10::io::FileReader::_make(::x10::io::File::_make(this->FMGL(inPathVectorSol)));
        
        //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* line = fileIn->readLine();
        
        //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_int i;
        
        //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__42713 = ::x10aux::makeStringLit(""); strLit__42713; }));
        
        //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        {
            for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                if (((::x10aux::struct_equals((line)->charAt(i),
                                              ((x10_char)' '))) ||
                    (::x10aux::struct_equals((line)->charAt(i),
                                             ((x10_char)'\n')))))
                {
                    
                    //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                      (__extension__ ({
                          x10_long pre__36333 = j;
                          j = ((j) + (((x10_long)1ll)));
                          pre__36333;
                      }))
                      , ::x10::lang::IntNatives::parseInt(buffer));
                    
                    //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    buffer = (__extension__ ({ static ::x10::lang::String* strLit__42714 = ::x10aux::makeStringLit(""); strLit__42714; }));
                } else {
                    
                    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
                }
                
            }
        }
        
        //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__42715 = ::x10aux::makeStringLit(""); strLit__42715; })))))
        {
            
            //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              (__extension__ ({
                  x10_long pre__36349 = j;
                  j = ((j) + (((x10_long)1ll)));
                  pre__36349;
              }))
              , ::x10::lang::IntNatives::parseInt(buffer));
        }
        
        //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        if (((j) < (this->FMGL(size)))) {
            
            //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42716 = ::x10aux::makeStringLit("ModelAS ERROR: The input vector is shorter than the variables array. Valor j: "); strLit__42716; })), j)));
        }
        
        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                    ((x10_int)0));
        
        //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__36643 = variables;
        x10_long i__36568min__36644 = ((x10_long)0ll);
        x10_long i__36568max__36645 = (x10_long)(::x10aux::nullCheck(rail__36643)->FMGL(size));
        {
            x10_long i__36646;
            for (i__36646 = i__36568min__36644; ((i__36646) < (i__36568max__36645));
                 i__36646 = ((i__36646) + (((x10_long)1ll))))
            {
                x10_long mi__36647 = i__36646;
                
                //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_int value__36642 = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                         mi__36647);
                
                //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10::lang::Rail< x10_int >* a__36639 = permutV;
                x10_long i__36640 = ((((x10_long)(value__36642))) - (((x10_long)1ll)));
                x10_int r__36641 = ((a__36639->x10::lang::Rail< x10_int >::__apply(
                                       i__36640)) + (((x10_int)1)));
                a__36639->x10::lang::Rail< x10_int >::__set(
                  i__36640, r__36641);
                
                //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                    ((((x10_long)(value__36642))) - (((x10_long)1ll))))))) > (((x10_long)1ll))))
                {
                    
                    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42720 = ::x10aux::makeStringLit("ERROR: Not valid permutation, value "); strLit__42720; })), value__36642), (__extension__ ({ static ::x10::lang::String* strLit__42721 = ::x10aux::makeStringLit(" is repeted "); strLit__42721; }))), mi__36647)));
                }
                
            }
        }
        
        //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__42722 = ::x10aux::makeStringLit("after ini"); strLit__42722; })),
                                  variables);
    } else {
        
        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__36648 = variables;
        x10_long i__36585min__36649 = ((x10_long)0ll);
        x10_long i__36585max__36650 = (x10_long)(::x10aux::nullCheck(rail__36648)->FMGL(size));
        {
            x10_long i__36651;
            for (i__36651 = i__36585min__36649; ((i__36651) < (i__36585max__36650));
                 i__36651 = ((i__36651) + (((x10_long)1ll))))
            {
                x10_long k__36652 = i__36651;
                
                //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  k__36652, ((this->FMGL(baseValue)) + (((x10_int) (k__36652)))));
            }
        }
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        {
            x10_long i;
            for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
                 ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
            {
                
                //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                               ((i) + (((x10_long)1ll))));
                
                //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_int x = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                              i);
                
                //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  i, ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                       j));
                
                //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  j, x);
            }
        }
        
    }
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* t__36653 = variables;
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36653)->FMGL(size)),
                                   ::x10aux::nullCheck(this)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__42725 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.problem.ProblemGenericModel).size}"); strLit__42725; })))));
    }
    return t__36653;
    
}

//#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::clearProblemModel(
  ) {
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42726 = ::x10aux::makeStringLit("Error. clearProblemModel invoke in HeuristicSolver"); strLit__42726; }))));
}

//#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::displaySolution(
  x10_long sz, ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__42727 = ::x10aux::makeStringLit("Solution"); strLit__42727; })),
                              conf);
}

//#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_boolean cpls::problem::ProblemGenericModel::verify(x10_long sz,
                                                       ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42728 = ::x10aux::makeStringLit("Se ingresa al Verify de ProblemGenericModel"); strLit__42728; }))));
    
    //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return true;
    
}

//#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextJ(x10_long i,
                                                   x10_long j,
                                                   x10_boolean exhaustive) {
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_long newj = j;
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    if ((((j) < (((x10_long)0ll))) && exhaustive)) {
        
        //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        newj = i;
    }
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((newj) + (((x10_long)1ll)));
    
}

//#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextI(x10_long i) {
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((i) + (((x10_long)1ll)));
    
}

//#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::createNewSol(
  ) {
    
    //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* variables = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                  reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_problem_ProblemGenericModel__closure__2)))cpls_problem_ProblemGenericModel__closure__2())));
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__36654 = variables;
    x10_long i__36602min__36655 = ((x10_long)0ll);
    x10_long i__36602max__36656 = (x10_long)(::x10aux::nullCheck(rail__36654)->FMGL(size));
    {
        x10_long i__36657;
        for (i__36657 = i__36602min__36655; ((i__36657) < (i__36602max__36656));
             i__36657 = ((i__36657) + (((x10_long)1ll))))
        {
            x10_long k__36658 = i__36657;
            
            //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              k__36658, ((this->FMGL(baseValue)) + (((x10_int) (k__36658)))));
        }
    }
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    {
        x10_long i;
        for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
             ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                           ((i) + (((x10_long)1ll))));
            
            //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            x10_int x = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                          i);
            
            //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              i, ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                   j));
            
            //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              j, x);
        }
    }
    
    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* t__36659 = variables;
    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36659)->FMGL(size)),
                                   ::x10aux::nullCheck(this)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__42731 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.problem.ProblemGenericModel).size}"); strLit__42731; })))));
    }
    return t__36659;
    
}

//#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_double cpls::problem::ProblemGenericModel::distance(x10_long sz,
                                                        ::x10::lang::Rail< x10_int >* conf1,
                                                        ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int count = ((x10_int)0);
    
    //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int i__36619min__36660 = ((x10_int)0);
    x10_int i__36619max__36661 = ((((x10_int) (this->FMGL(size)))) - (((x10_int)1)));
    {
        x10_int i__36662;
        for (i__36662 = i__36619min__36660; ((i__36662) <= (i__36619max__36661));
             i__36662 = ((i__36662) + (((x10_int)1)))) {
            x10_int i__36663 = i__36662;
            
            //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__36663))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__36663))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_double dis = ((((x10_double) (count))) / (((x10_double) (this->FMGL(size)))));
    
    //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return dis;
    
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::cpls__problem__ProblemGenericModel____this__cpls__problem__ProblemGenericModel(
  ) {
    return this;
    
}
void cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel(
  ) {
    this->FMGL(baseValue) = ((x10_int)0);
    this->FMGL(inSeed) = ((x10_long)0ll);
    this->FMGL(r) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(inPathDataProblem) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(inPathVectorSol) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::problem::ProblemGenericModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::ProblemGenericModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::ProblemGenericModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(baseValue));
    buf.write(this->FMGL(inSeed));
    buf.write(this->FMGL(r));
    buf.write(this->FMGL(inPathDataProblem));
    buf.write(this->FMGL(inPathVectorSol));
    buf.write(this->FMGL(size));
    
}

::x10::lang::Reference* ::cpls::problem::ProblemGenericModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::ProblemGenericModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(baseValue) = buf.read<x10_int>();
    FMGL(inSeed) = buf.read<x10_long>();
    FMGL(r) = buf.read< ::x10::util::Random*>();
    FMGL(inPathDataProblem) = buf.read< ::x10::lang::String*>();
    FMGL(inPathVectorSol) = buf.read< ::x10::lang::String*>();
    FMGL(size) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::problem::ProblemGenericModel::rtt;
void cpls::problem::ProblemGenericModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.problem.ProblemGenericModel",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_problem_ProblemGenericModel__closure__1>cpls_problem_ProblemGenericModel__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_problem_ProblemGenericModel__closure__1::__apply, &cpls_problem_ProblemGenericModel__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_problem_ProblemGenericModel__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_problem_ProblemGenericModel__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_problem_ProblemGenericModel__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_problem_ProblemGenericModel__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_problem_ProblemGenericModel__closure__2>cpls_problem_ProblemGenericModel__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_problem_ProblemGenericModel__closure__2::__apply, &cpls_problem_ProblemGenericModel__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_problem_ProblemGenericModel__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_problem_ProblemGenericModel__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_problem_ProblemGenericModel__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_problem_ProblemGenericModel__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of ProblemGenericModel */
/*************************************************/
