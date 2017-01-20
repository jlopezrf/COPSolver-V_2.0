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
        
        //#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
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
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10:11";
    }

};

#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__1_CLOSURE

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 12 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::_constructor(x10_long sizeProblem) {
    
    //#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    FMGL(size) = sizeProblem;
    
    //#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel();
}
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::_make(
  x10_long sizeProblem) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    this_->_constructor(sizeProblem);
    return this_;
}



//#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setBaseValue(x10_int baseValue) {
    
    //#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(baseValue) = baseValue;
}

//#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPath(::x10::lang::String* inPath) {
    
    //#line 26 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPath) = inPath;
}

//#line 29 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setSeed(x10_long seed) {
    
    //#line 30 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inSeed) = seed;
}

//#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::getSize() {
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(size);
    
}

//#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOnVariable(x10_long i) {
    
    //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3118 = ::x10aux::makeStringLit("Error bad costOnVariable"); strLit__3118; }))));
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 48 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costIfSwap(x10_long current_cost,
                                                        x10_long i1, x10_long i2) {
    
    //#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3119 = ::x10aux::makeStringLit("Error costIfSwap"); strLit__3119; }))));
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 56 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::executedSwap(x10_long i1, x10_long i2) {
    
    //#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3120 = ::x10aux::makeStringLit("Error no executedSwap implementation"); strLit__3120; }))));
}

//#line 60 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::swapVariables(x10_long i, x10_long j) {
    
    //#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_int x = this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                  i);
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(i, this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                  j));
    
    //#line 63 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(j, x);
}

//#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_boolean shouldBeRecorded) {
    
    //#line 67 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3123 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__3123; }))));
    
    //#line 68 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 71 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::show(::x10::lang::String* s,
                                              ::x10::lang::Rail< x10_int >* d) {
    
    //#line 72 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(s, (__extension__ ({ static ::x10::lang::String* strLit__3124 = ::x10aux::makeStringLit(" = "); strLit__3124; }))));
    
    //#line 73 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__3099 = d;
    x10_long i__919max__3100 = (x10_long)(::x10aux::nullCheck(rail__3099)->FMGL(size));
    {
        x10_long i__3101;
        for (i__3101 = ((x10_long)0ll); ((i__3101) < (i__919max__3100));
             i__3101 = ((i__3101) + (((x10_long)1ll)))) {
            x10_long p__3102 = i__3101;
            
            //#line 74 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3125 = ::x10aux::makeStringLit(" "); strLit__3125; })), ::x10aux::nullCheck(d)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                    p__3102)));
        }
    }
    
    //#line 75 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3127 = ::x10aux::makeStringLit(""); strLit__3127; }))));
}

//#line 78 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::initialize() {
    
    //#line 79 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    if (!(::x10aux::nullCheck(this->FMGL(inPath))->x10::lang::String::equalsIgnoreCase(
            (__extension__ ({ static ::x10::lang::String* strLit__3128 = ::x10aux::makeStringLit("."); strLit__3128; })))))
    {
        
        //#line 81 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::io::FileReader* fileIn =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
        (fileIn)->::x10::io::FileReader::_constructor((__extension__ ({
                                                          ::x10::io::File* alloc__880 =
                                                            
                                                          (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                          (alloc__880)->::x10::io::File::_constructor(
                                                            this->FMGL(inPath));
                                                          alloc__880;
                                                      }))
                                                      );
        
        //#line 82 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* line = fileIn->readLine();
        
        //#line 83 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        x10_int i;
        
        //#line 84 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 85 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__3129 = ::x10aux::makeStringLit(""); strLit__3129; }));
        
        //#line 86 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        {
            for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 87 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                if (((::x10aux::struct_equals((line)->charAt(i),
                                              ((x10_char)' '))) ||
                    (::x10aux::struct_equals((line)->charAt(i),
                                             ((x10_char)'\n')))))
                {
                    
                    //#line 88 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(
                      (__extension__ ({
                          x10_long pre__695 = j;
                          j = ((j) + (((x10_long)1ll)));
                          pre__695;
                      }))
                      , ::x10::lang::IntNatives::parseInt(buffer));
                    
                    //#line 90 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    buffer = (__extension__ ({ static ::x10::lang::String* strLit__3130 = ::x10aux::makeStringLit(""); strLit__3130; }));
                } else {
                    
                    //#line 92 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
                }
                
            }
        }
        
        //#line 95 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__3131 = ::x10aux::makeStringLit(""); strLit__3131; })))))
        {
            
            //#line 96 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(
              (__extension__ ({
                  x10_long pre__711 = j;
                  j = ((j) + (((x10_long)1ll)));
                  pre__711;
              }))
              , ::x10::lang::IntNatives::parseInt(buffer));
        }
        
        //#line 99 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        if (((j) < (this->FMGL(size)))) {
            
            //#line 100 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3132 = ::x10aux::makeStringLit("ModelAS ERROR: The input vector is shorter than the variables array"); strLit__3132; }))));
        }
        
        //#line 102 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                    ((x10_int)0));
        
        //#line 103 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__3107 = this->FMGL(variables);
        x10_long i__936max__3108 = (x10_long)(::x10aux::nullCheck(rail__3107)->FMGL(size));
        {
            x10_long i__3109;
            for (i__3109 = ((x10_long)0ll); ((i__3109) < (i__936max__3108));
                 i__3109 = ((i__3109) + (((x10_long)1ll))))
            {
                x10_long mi__3110 = i__3109;
                
                //#line 104 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                x10_int value__3106 = this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                        mi__3110);
                
                //#line 105 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                ::x10::lang::Rail< x10_int >* a__3103 = permutV;
                x10_long i__3104 = ((((x10_long)(value__3106))) - (((x10_long)1ll)));
                x10_int r__3105 = ((a__3103->x10::lang::Rail< x10_int >::__apply(
                                      i__3104)) + (((x10_int)1)));
                a__3103->x10::lang::Rail< x10_int >::__set(
                  i__3104, r__3105);
                
                //#line 106 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                    ((((x10_long)(value__3106))) - (((x10_long)1ll))))))) > (((x10_long)1ll))))
                {
                    
                    //#line 107 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3136 = ::x10aux::makeStringLit("ERROR: Not valid permutation, value "); strLit__3136; })), value__3106), (__extension__ ({ static ::x10::lang::String* strLit__3137 = ::x10aux::makeStringLit(" is repeted "); strLit__3137; }))), mi__3110)));
                }
                
            }
        }
        
        //#line 110 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__3138 = ::x10aux::makeStringLit("after ini"); strLit__3138; })),
                                  this->FMGL(variables));
    } else {
        
        //#line 112 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__3111 = this->FMGL(variables);
        x10_long i__953max__3112 = (x10_long)(::x10aux::nullCheck(rail__3111)->FMGL(size));
        {
            x10_long i__3113;
            for (i__3113 = ((x10_long)0ll); ((i__3113) < (i__953max__3112));
                 i__3113 = ((i__3113) + (((x10_long)1ll))))
            {
                x10_long k__3114 = i__3113;
                
                //#line 113 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                this->FMGL(variables)->x10::lang::Rail< x10_int >::__set(
                  k__3114, ((this->FMGL(baseValue)) + (((x10_int) (k__3114)))));
            }
        }
        
        //#line 116 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        {
            x10_long i;
            for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
                 ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
            {
                
                //#line 117 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                               ((i) + (((x10_long)1ll))));
                
                //#line 118 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                this->swapVariables(i, j);
            }
        }
        
    }
    
}

//#line 129 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::reset(x10_long n,
                                                   x10_long totalCost) {
    
    //#line 130 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    while ((!::x10aux::struct_equals((__extension__ ({
                                         x10_long pre__835 =
                                           n;
                                         n = ((n) - (((x10_long)1ll)));
                                         pre__835;
                                     }))
                                     , ((x10_long)0ll))))
    {
        
        //#line 131 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        x10_long i = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                       this->FMGL(size));
        
        //#line 132 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                       this->FMGL(size));
        
        //#line 133 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        this->swapVariables(i, j);
    }
    
    //#line 135 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)(((x10_int)-1)));
    
}

//#line 138 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setVariables(::x10::lang::Rail< x10_int >* array) {
    
    //#line 139 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(array, this->FMGL(variables));
}

//#line 142 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::displaySolution(
  ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 143 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__3139 = ::x10aux::makeStringLit("Solution"); strLit__3139; })),
                              conf);
}

//#line 146 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_boolean cpls::problem::ProblemGenericModel::verify(::x10::lang::Rail< x10_int >* conf) {
    return false;
    
}

//#line 148 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::getVariables(
  ) {
    
    //#line 149 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(variables);
    
}

//#line 152 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextJ(x10_long i,
                                                   x10_long j,
                                                   x10_boolean exhaustive) {
    
    //#line 154 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_long newj = j;
    
    //#line 155 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    if ((((j) < (((x10_long)0ll))) && exhaustive)) {
        
        //#line 156 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        newj = i;
    }
    
    //#line 157 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((newj) + (((x10_long)1ll)));
    
}

//#line 160 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextI(x10_long i) {
    
    //#line 161 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((i) + (((x10_long)1ll)));
    
}

//#line 166 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_double cpls::problem::ProblemGenericModel::distance(::x10::lang::Rail< x10_int >* conf1,
                                                        ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 167 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_int count = ((x10_int)0);
    
    //#line 168 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_int i__970max__3115 = ((((x10_int) (this->FMGL(size)))) - (((x10_int)1)));
    {
        x10_int i__3116;
        for (i__3116 = ((x10_int)0); ((i__3116) <= (i__970max__3115));
             i__3116 = ((i__3116) + (((x10_int)1)))) {
            x10_int i__3117 = i__3116;
            
            //#line 170 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__3117))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__3117))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 172 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_double dis = ((((x10_double) (count))) / (((x10_double) (this->FMGL(size)))));
    
    //#line 174 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return dis;
    
}

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
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
    this->FMGL(inPath) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::problem::ProblemGenericModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::ProblemGenericModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::ProblemGenericModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(variables));
    buf.write(this->FMGL(baseValue));
    buf.write(this->FMGL(inSeed));
    buf.write(this->FMGL(r));
    buf.write(this->FMGL(inPath));
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
    FMGL(inPath) = buf.read< ::x10::lang::String*>();
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
