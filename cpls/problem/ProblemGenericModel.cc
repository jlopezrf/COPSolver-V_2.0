/*************************************************/
/* START of ProblemGenericModel */
#include <cpls/problem/ProblemGenericModel.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/util/Random.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Boolean.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/lang/Char.h>
#include <cpls/util/Utils.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Fun_0_1.h>
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
        
        //#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10:11";
    }

};

#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__1_CLOSURE

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::_constructor(x10_long sizeProblem) {
    
    //#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    FMGL(size) = sizeProblem;
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel();
    
    //#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(r) = ::x10::util::Random::_make();
}
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::_make(
  x10_long sizeProblem) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    this_->_constructor(sizeProblem);
    return this_;
}



//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setBaseValue(x10_int baseValue) {
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(baseValue) = baseValue;
}

//#line 28 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPathDataProblem(::x10::lang::String* inPathDataProblem) {
    
    //#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathDataProblem) = inPathDataProblem;
}

//#line 32 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPathVectorSol(::x10::lang::String* inPathVectorSol) {
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathVectorSol) = inPathVectorSol;
}

//#line 36 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setSeed(x10_long seed) {
    
    //#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inSeed) = seed;
}

//#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::getSize() {
    
    //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(size);
    
}

//#line 47 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOnVariable(x10_long i) {
    
    //#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32938 = ::x10aux::makeStringLit("Error bad costOnVariable"); strLit__32938; }))));
    
    //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 55 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costIfSwap(x10_long current_cost,
                                                        x10_long i1, x10_long i2) {
    
    //#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32939 = ::x10aux::makeStringLit("Error costIfSwap"); strLit__32939; }))));
    
    //#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::executedSwap(x10_long i1, x10_long i2) {
    
    //#line 64 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32940 = ::x10aux::makeStringLit("Error no executedSwap implementation"); strLit__32940; }))));
}

//#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::swapVariables(x10_long i, x10_long j) {
    
    //#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int x = this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                  i);
    
    //#line 69 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(i, this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                  j));
    
    //#line 70 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(j, x);
}

//#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_boolean shouldBeRecorded) {
    
    //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32943 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__32943; }))));
    
    //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(::x10::lang::Rail< x10_int >* solution) {
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32944 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__32944; }))));
    
    //#line 80 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::show(::x10::lang::String* s,
                                              ::x10::lang::Rail< x10_int >* d) {
    
    //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(s, (__extension__ ({ static ::x10::lang::String* strLit__32945 = ::x10aux::makeStringLit(" = "); strLit__32945; }))));
    
    //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__27617 = d;
    x10_long i__27551min__27618 = ((x10_long)0ll);
    x10_long i__27551max__27619 = (x10_long)(::x10aux::nullCheck(rail__27617)->FMGL(size));
    {
        x10_long i__27620;
        for (i__27620 = i__27551min__27618; ((i__27620) < (i__27551max__27619));
             i__27620 = ((i__27620) + (((x10_long)1ll)))) {
            x10_long p__27621 = i__27620;
            
            //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32946 = ::x10aux::makeStringLit(" "); strLit__32946; })), ::x10aux::nullCheck(d)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                      p__27621)));
        }
    }
    
    //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32948 = ::x10aux::makeStringLit(""); strLit__32948; }))));
}

//#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::initialize() {
    
    //#line 91 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    if (!(::x10aux::nullCheck(this->FMGL(inPathVectorSol))->x10::lang::String::equalsIgnoreCase(
            (__extension__ ({ static ::x10::lang::String* strLit__32949 = ::x10aux::makeStringLit("."); strLit__32949; })))))
    {
        
        //#line 93 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::io::FileReader* fileIn = ::x10::io::FileReader::_make(::x10::io::File::_make(this->FMGL(inPathVectorSol)));
        
        //#line 94 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* line = fileIn->readLine();
        
        //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_int i;
        
        //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 97 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__32950 = ::x10aux::makeStringLit(""); strLit__32950; }));
        
        //#line 98 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        {
            for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                if (((::x10aux::struct_equals((line)->charAt(i),
                                              ((x10_char)' '))) ||
                    (::x10aux::struct_equals((line)->charAt(i),
                                             ((x10_char)'\n')))))
                {
                    
                    //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(
                      (__extension__ ({
                          x10_long pre__27360 = j;
                          j = ((j) + (((x10_long)1ll)));
                          pre__27360;
                      }))
                      , ::x10::lang::IntNatives::parseInt(buffer));
                    
                    //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    buffer = (__extension__ ({ static ::x10::lang::String* strLit__32951 = ::x10aux::makeStringLit(""); strLit__32951; }));
                } else {
                    
                    //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
                }
                
            }
        }
        
        //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__32952 = ::x10aux::makeStringLit(""); strLit__32952; })))))
        {
            
            //#line 108 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(
              (__extension__ ({
                  x10_long pre__27376 = j;
                  j = ((j) + (((x10_long)1ll)));
                  pre__27376;
              }))
              , ::x10::lang::IntNatives::parseInt(buffer));
        }
        
        //#line 111 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        if (((j) < (this->FMGL(size)))) {
            
            //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32953 = ::x10aux::makeStringLit("ModelAS ERROR: The input vector is shorter than the variables array. Valor j: "); strLit__32953; })), j)));
        }
        
        //#line 114 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                    ((x10_int)0));
        
        //#line 115 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__27626 = this->FMGL(variables);
        x10_long i__27568min__27627 = ((x10_long)0ll);
        x10_long i__27568max__27628 = (x10_long)(::x10aux::nullCheck(rail__27626)->FMGL(size));
        {
            x10_long i__27629;
            for (i__27629 = i__27568min__27627; ((i__27629) < (i__27568max__27628));
                 i__27629 = ((i__27629) + (((x10_long)1ll))))
            {
                x10_long mi__27630 = i__27629;
                
                //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_int value__27625 = this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                         mi__27630);
                
                //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                ::x10::lang::Rail< x10_int >* a__27622 = permutV;
                x10_long i__27623 = ((((x10_long)(value__27625))) - (((x10_long)1ll)));
                x10_int r__27624 = ((a__27622->x10::lang::Rail< x10_int >::__apply(
                                       i__27623)) + (((x10_int)1)));
                a__27622->x10::lang::Rail< x10_int >::__set(
                  i__27623, r__27624);
                
                //#line 118 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                    ((((x10_long)(value__27625))) - (((x10_long)1ll))))))) > (((x10_long)1ll))))
                {
                    
                    //#line 119 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__32957 = ::x10aux::makeStringLit("ERROR: Not valid permutation, value "); strLit__32957; })), value__27625), (__extension__ ({ static ::x10::lang::String* strLit__32958 = ::x10aux::makeStringLit(" is repeted "); strLit__32958; }))), mi__27630)));
                }
                
            }
        }
        
        //#line 122 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__32959 = ::x10aux::makeStringLit("after ini"); strLit__32959; })),
                                  this->FMGL(variables));
    } else {
        
        //#line 124 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__27631 = this->FMGL(variables);
        x10_long i__27585min__27632 = ((x10_long)0ll);
        x10_long i__27585max__27633 = (x10_long)(::x10aux::nullCheck(rail__27631)->FMGL(size));
        {
            x10_long i__27634;
            for (i__27634 = i__27585min__27632; ((i__27634) < (i__27585max__27633));
                 i__27634 = ((i__27634) + (((x10_long)1ll))))
            {
                x10_long k__27635 = i__27634;
                
                //#line 125 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(
                  k__27635, ((this->FMGL(baseValue)) + (((x10_int) (k__27635)))));
            }
        }
        
        //#line 128 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        {
            x10_long i;
            for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
                 ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
            {
                
                //#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                               ((i) + (((x10_long)1ll))));
                
                //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
                this->swapVariables(i, j);
            }
        }
        
    }
    
}

//#line 141 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::reset(x10_long n,
                                                   x10_long totalCost) {
    
    //#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    while ((!::x10aux::struct_equals((__extension__ ({
                                         x10_long pre__27505 =
                                           n;
                                         n = ((n) - (((x10_long)1ll)));
                                         pre__27505;
                                     }))
                                     , ((x10_long)0ll))))
    {
        
        //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_long i = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                       this->FMGL(size));
        
        //#line 144 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                       this->FMGL(size));
        
        //#line 145 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        this->swapVariables(i, j);
    }
    
    //#line 147 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)(((x10_int)-1)));
    
}

//#line 150 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setVariables(::x10::lang::Rail< x10_int >* array) {
    
    //#line 151 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(array, this->FMGL(variables));
}

//#line 154 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::displaySolution(
  ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__32960 = ::x10aux::makeStringLit("Solution"); strLit__32960; })),
                              conf);
}

//#line 159 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_boolean cpls::problem::ProblemGenericModel::verify(::x10::lang::Rail< x10_int >* conf) {
    
    //#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__32961 = ::x10aux::makeStringLit("Se ingresa al Verify de ProblemGenericModel"); strLit__32961; }))));
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return true;
    
}

//#line 164 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::getVariables(
  ) {
    
    //#line 165 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(variables);
    
}

//#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextJ(x10_long i,
                                                   x10_long j,
                                                   x10_boolean exhaustive) {
    
    //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_long newj = j;
    
    //#line 171 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    if ((((j) < (((x10_long)0ll))) && exhaustive)) {
        
        //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
        newj = i;
    }
    
    //#line 173 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((newj) + (((x10_long)1ll)));
    
}

//#line 176 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextI(x10_long i) {
    
    //#line 177 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return ((i) + (((x10_long)1ll)));
    
}

//#line 182 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
x10_double cpls::problem::ProblemGenericModel::distance(::x10::lang::Rail< x10_int >* conf1,
                                                        ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 183 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int count = ((x10_int)0);
    
    //#line 184 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_int i__27602min__27636 = ((x10_int)0);
    x10_int i__27602max__27637 = ((((x10_int) (this->FMGL(size)))) - (((x10_int)1)));
    {
        x10_int i__27638;
        for (i__27638 = i__27602min__27636; ((i__27638) <= (i__27602max__27637));
             i__27638 = ((i__27638) + (((x10_int)1)))) {
            x10_int i__27639 = i__27638;
            
            //#line 186 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__27639))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__27639))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 188 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    x10_double dis = ((((x10_double) (count))) / (((x10_double) (this->FMGL(size)))));
    
    //#line 190 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
    return dis;
    
}

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/problem/ProblemGenericModel.x10"
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::cpls__problem__ProblemGenericModel____this__cpls__problem__ProblemGenericModel(
  ) {
    return this;
    
}
void cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel(
  ) {
    this->FMGL(variables) = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_problem_ProblemGenericModel__closure__1)))cpls_problem_ProblemGenericModel__closure__1())));
    this->FMGL(baseValue) = ((x10_int)0);
    this->FMGL(inSeed) = ((x10_long)0ll);
    this->FMGL(r) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(inPathDataProblem) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(inPathVectorSol) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::problem::ProblemGenericModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::ProblemGenericModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::ProblemGenericModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(variables));
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
    FMGL(variables) = buf.read< ::x10::lang::Rail< x10_int >*>();
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
