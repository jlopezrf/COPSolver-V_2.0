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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10:92";
    }

};

#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__1_CLOSURE

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
void cpls::problem::ProblemGenericModel::setInPathVectorSol(::x10::lang::String* inPathVectorSol) {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathVectorSol) = inPathVectorSol;
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setSeed(x10_long seed) {
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inSeed) = seed;
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::getSize() {
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(size);
    
}

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOnVariable(x10_long i) {
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25575 = ::x10aux::makeStringLit("Error bad costOnVariable"); strLit__25575; }))));
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costIfSwap(x10_long current_cost,
                                                        x10_long i1, x10_long i2) {
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25576 = ::x10aux::makeStringLit("Error costIfSwap"); strLit__25576; }))));
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::executedSwap(x10_long i1, x10_long i2,
                                                      ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25577 = ::x10aux::makeStringLit("Error no executedSwap implementation"); strLit__25577; }))));
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_boolean shouldBeRecorded,
                                                            ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25578 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__25578; }))));
    
    //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(::x10::lang::Rail< x10_int >* solution) {
    
    //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25579 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__25579; }))));
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::show(::x10::lang::String* s,
                                              ::x10::lang::Rail< x10_int >* d) {
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(s, (__extension__ ({ static ::x10::lang::String* strLit__25580 = ::x10aux::makeStringLit(" = "); strLit__25580; }))));
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__22869 = d;
    x10_long i__22803min__22870 = ((x10_long)0ll);
    x10_long i__22803max__22871 = (x10_long)(::x10aux::nullCheck(rail__22869)->FMGL(size));
    {
        x10_long i__22872;
        for (i__22872 = i__22803min__22870; ((i__22872) < (i__22803max__22871));
             i__22872 = ((i__22872) + (((x10_long)1ll)))) {
            x10_long p__22873 = i__22872;
            
            //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25581 = ::x10aux::makeStringLit(" "); strLit__25581; })), ::x10aux::nullCheck(d)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                      p__22873)));
        }
    }
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25583 = ::x10aux::makeStringLit(""); strLit__25583; }))));
}

//#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::initialize(
  x10_long inSeed) {
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* variables = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                  reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_problem_ProblemGenericModel__closure__1)))cpls_problem_ProblemGenericModel__closure__1())));
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this->FMGL(r))->x10::util::Random::setSeed(
      inSeed);
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    if (!(::x10aux::nullCheck(this->FMGL(inPathVectorSol))->x10::lang::String::equalsIgnoreCase(
            (__extension__ ({ static ::x10::lang::String* strLit__25584 = ::x10aux::makeStringLit("."); strLit__25584; })))))
    {
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::io::FileReader* fileIn = ::x10::io::FileReader::_make(::x10::io::File::_make(this->FMGL(inPathVectorSol)));
        
        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* line = fileIn->readLine();
        
        //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_int i;
        
        //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__25585 = ::x10aux::makeStringLit(""); strLit__25585; }));
        
        //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        {
            for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                if (((::x10aux::struct_equals((line)->charAt(i),
                                              ((x10_char)' '))) ||
                    (::x10aux::struct_equals((line)->charAt(i),
                                             ((x10_char)'\n')))))
                {
                    
                    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                      (__extension__ ({
                          x10_long pre__22619 = j;
                          j = ((j) + (((x10_long)1ll)));
                          pre__22619;
                      }))
                      , ::x10::lang::IntNatives::parseInt(buffer));
                    
                    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    buffer = (__extension__ ({ static ::x10::lang::String* strLit__25586 = ::x10aux::makeStringLit(""); strLit__25586; }));
                } else {
                    
                    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
                }
                
            }
        }
        
        //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__25587 = ::x10aux::makeStringLit(""); strLit__25587; })))))
        {
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              (__extension__ ({
                  x10_long pre__22635 = j;
                  j = ((j) + (((x10_long)1ll)));
                  pre__22635;
              }))
              , ::x10::lang::IntNatives::parseInt(buffer));
        }
        
        //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        if (((j) < (this->FMGL(size)))) {
            
            //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25588 = ::x10aux::makeStringLit("ModelAS ERROR: The input vector is shorter than the variables array. Valor j: "); strLit__25588; })), j)));
        }
        
        //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                    ((x10_int)0));
        
        //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__22878 = variables;
        x10_long i__22820min__22879 = ((x10_long)0ll);
        x10_long i__22820max__22880 = (x10_long)(::x10aux::nullCheck(rail__22878)->FMGL(size));
        {
            x10_long i__22881;
            for (i__22881 = i__22820min__22879; ((i__22881) < (i__22820max__22880));
                 i__22881 = ((i__22881) + (((x10_long)1ll))))
            {
                x10_long mi__22882 = i__22881;
                
                //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_int value__22877 = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                         mi__22882);
                
                //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10::lang::Rail< x10_int >* a__22874 = permutV;
                x10_long i__22875 = ((((x10_long)(value__22877))) - (((x10_long)1ll)));
                x10_int r__22876 = ((a__22874->x10::lang::Rail< x10_int >::__apply(
                                       i__22875)) + (((x10_int)1)));
                a__22874->x10::lang::Rail< x10_int >::__set(
                  i__22875, r__22876);
                
                //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                    ((((x10_long)(value__22877))) - (((x10_long)1ll))))))) > (((x10_long)1ll))))
                {
                    
                    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__25592 = ::x10aux::makeStringLit("ERROR: Not valid permutation, value "); strLit__25592; })), value__22877), (__extension__ ({ static ::x10::lang::String* strLit__25593 = ::x10aux::makeStringLit(" is repeted "); strLit__25593; }))), mi__22882)));
                }
                
            }
        }
        
        //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__25594 = ::x10aux::makeStringLit("after ini"); strLit__25594; })),
                                  variables);
    } else {
        
        //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__22883 = variables;
        x10_long i__22837min__22884 = ((x10_long)0ll);
        x10_long i__22837max__22885 = (x10_long)(::x10aux::nullCheck(rail__22883)->FMGL(size));
        {
            x10_long i__22886;
            for (i__22886 = i__22837min__22884; ((i__22886) < (i__22837max__22885));
                 i__22886 = ((i__22886) + (((x10_long)1ll))))
            {
                x10_long k__22887 = i__22886;
                
                //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  k__22887, ((this->FMGL(baseValue)) + (((x10_int) (k__22887)))));
            }
        }
        
        //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        {
            x10_long i;
            for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
                 ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
            {
                
                //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                               ((i) + (((x10_long)1ll))));
                
                //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_int x = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                              i);
                
                //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  i, ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                       j));
                
                //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  j, x);
            }
        }
        
    }
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return variables;
    
}

//#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::displaySolution(
  ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__25597 = ::x10aux::makeStringLit("Solution"); strLit__25597; })),
                              conf);
}

//#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_boolean cpls::problem::ProblemGenericModel::verify(::x10::lang::Rail< x10_int >* conf) {
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__25598 = ::x10aux::makeStringLit("Se ingresa al Verify de ProblemGenericModel"); strLit__25598; }))));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return true;
    
}

//#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextJ(x10_long i,
                                                   x10_long j,
                                                   x10_boolean exhaustive) {
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_long newj = j;
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    if ((((j) < (((x10_long)0ll))) && exhaustive)) {
        
        //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        newj = i;
    }
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((newj) + (((x10_long)1ll)));
    
}

//#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextI(x10_long i) {
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((i) + (((x10_long)1ll)));
    
}

//#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_double cpls::problem::ProblemGenericModel::distance(::x10::lang::Rail< x10_int >* conf1,
                                                        ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int count = ((x10_int)0);
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int i__22854min__22888 = ((x10_int)0);
    x10_int i__22854max__22889 = ((((x10_int) (this->FMGL(size)))) - (((x10_int)1)));
    {
        x10_int i__22890;
        for (i__22890 = i__22854min__22888; ((i__22890) <= (i__22854max__22889));
             i__22890 = ((i__22890) + (((x10_int)1)))) {
            x10_int i__22891 = i__22890;
            
            //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__22891))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__22891))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_double dis = ((((x10_double) (count))) / (((x10_double) (this->FMGL(size)))));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
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

/* END of ProblemGenericModel */
/*************************************************/
