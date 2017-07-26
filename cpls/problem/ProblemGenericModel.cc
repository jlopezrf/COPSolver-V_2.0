/*************************************************/
/* START of ProblemGenericModel */
#include <cpls/problem/ProblemGenericModel.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/util/Random.h>
#include <x10/lang/String.h>
#include <x10/util/Timer.h>
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
        return "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10:105";
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
        return "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10:200";
    }

};

#endif // CPLS_PROBLEM_PROBLEMGENERICMODEL__CLOSURE__2_CLOSURE

//#line 9 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 12 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 13 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 14 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 15 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 16 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"

//#line 18 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::_constructor(x10_long sizeProblem) {
    
    //#line 19 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    FMGL(size) = sizeProblem;
    
    //#line 9 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::cpls::problem::ProblemGenericModel* this__3712 = this;
    ::x10aux::nullCheck(this__3712)->FMGL(baseValue) = ((x10_int)0);
    ::x10aux::nullCheck(this__3712)->FMGL(inSeed) = ((x10_long)0ll);
    ::x10aux::nullCheck(this__3712)->FMGL(r) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__3712)->FMGL(inPathDataProblem) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__3712)->FMGL(inPathVectorSol) = (::x10aux::class_cast_unchecked< ::x10::lang::String*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 20 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(r) = (__extension__ ({
        ::x10::util::Random* alloc__1057 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        
        //#line 32 "/home/danny/Apps/x10-SF_RELEASE_2_4_2_3/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
        (alloc__1057)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
        alloc__1057;
    }))
    ;
}
::cpls::problem::ProblemGenericModel* cpls::problem::ProblemGenericModel::_make(
  x10_long sizeProblem) {
    ::cpls::problem::ProblemGenericModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::ProblemGenericModel>()) ::cpls::problem::ProblemGenericModel();
    this_->_constructor(sizeProblem);
    return this_;
}



//#line 24 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setBaseValue(x10_int baseValue) {
    
    //#line 25 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(baseValue) = baseValue;
}

//#line 28 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPathDataProblem(::x10::lang::String* inPathDataProblem) {
    
    //#line 29 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathDataProblem) = inPathDataProblem;
}

//#line 32 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
::x10::lang::String* cpls::problem::ProblemGenericModel::getInPathVectorSol(
  ) {
    
    //#line 33 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(inPathVectorSol);
    
}

//#line 36 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_int cpls::problem::ProblemGenericModel::getBaseValue() {
    
    //#line 37 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(baseValue);
    
}

//#line 40 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
::x10::lang::String* cpls::problem::ProblemGenericModel::getInPathDataProblem(
  ) {
    
    //#line 41 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(inPathDataProblem);
    
}

//#line 44 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setInPathVectorSol(::x10::lang::String* inPathVectorSol) {
    
    //#line 45 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inPathVectorSol) = inPathVectorSol;
}

//#line 49 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::setSeed(x10_long seed) {
    
    //#line 50 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    this->FMGL(inSeed) = seed;
}

//#line 53 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::getSize() {
    
    //#line 54 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return this->FMGL(size);
    
}

//#line 60 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOnVariable(x10_long i) {
    
    //#line 61 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3738 = ::x10aux::makeStringLit("Error bad costOnVariable"); strLit__3738; }))));
    
    //#line 62 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 68 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costIfSwap(x10_long current_cost,
                                                        x10_long i1, x10_long i2) {
    
    //#line 69 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3739 = ::x10aux::makeStringLit("Error costIfSwap"); strLit__3739; }))));
    
    //#line 70 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 77 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::executedSwap(x10_long sz, x10_long i1,
                                                      x10_long i2, ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 78 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3740 = ::x10aux::makeStringLit("Error no executedSwap implementation"); strLit__3740; }))));
}

//#line 87 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_long sz, x10_boolean shouldBeRecorded,
                                                            ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 88 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3741 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__3741; }))));
    
    //#line 89 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 92 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::costOfSolution(x10_long sz,
                                                            ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 93 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3742 = ::x10aux::makeStringLit("Error costOfSolution"); strLit__3742; }))));
    
    //#line 94 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((x10_long)0ll);
    
}

//#line 97 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::show(::x10::lang::String* s,
                                              ::x10::lang::Rail< x10_int >* d) {
    
    //#line 98 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(s, (__extension__ ({ static ::x10::lang::String* strLit__3743 = ::x10aux::makeStringLit(" = "); strLit__3743; }))));
    
    //#line 99 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__3713 = d;
    x10_long i__1097max__3714 = (x10_long)(::x10aux::nullCheck(rail__3713)->FMGL(size));
    {
        x10_long i__3715;
        for (i__3715 = ((x10_long)0ll); ((i__3715) < (i__1097max__3714));
             i__3715 = ((i__3715) + (((x10_long)1ll)))) {
            x10_long p__3716 = i__3715;
            
            //#line 100 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3744 = ::x10aux::makeStringLit(" "); strLit__3744; })), ::x10aux::nullCheck(d)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                    p__3716)));
        }
    }
    
    //#line 101 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3746 = ::x10aux::makeStringLit(""); strLit__3746; }))));
}

//#line 104 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::initialize(
  x10_long inSeed) {
    
    //#line 105 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* variables = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                  reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_problem_ProblemGenericModel__closure__1)))cpls_problem_ProblemGenericModel__closure__1())));
    
    //#line 106 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::util::Random* this__3729 = this->FMGL(r);
    
    //#line 40 "/home/danny/Apps/x10-SF_RELEASE_2_4_2_3/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    x10_long seed__3730 = inSeed;
    
    //#line 41 "/home/danny/Apps/x10-SF_RELEASE_2_4_2_3/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    ::x10aux::nullCheck(this__3729)->x10::util::Random::init(
      seed__3730);
    
    //#line 107 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    if (!(::x10aux::nullCheck(this->FMGL(inPathVectorSol))->x10::lang::String::equalsIgnoreCase(
            (__extension__ ({ static ::x10::lang::String* strLit__3747 = ::x10aux::makeStringLit("."); strLit__3747; })))))
    {
        
        //#line 109 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::io::FileReader* fileIn =  (new (::x10aux::alloc_z< ::x10::io::FileReader>()) ::x10::io::FileReader());
        (fileIn)->::x10::io::FileReader::_constructor((__extension__ ({
                                                          ::x10::io::File* alloc__1058 =
                                                            
                                                          (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
                                                          (alloc__1058)->::x10::io::File::_constructor(
                                                            this->FMGL(inPathVectorSol));
                                                          alloc__1058;
                                                      }))
                                                      );
        
        //#line 110 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* line = fileIn->readLine();
        
        //#line 111 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        x10_int i;
        
        //#line 112 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        x10_long j = ((x10_long)0ll);
        
        //#line 113 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__3748 = ::x10aux::makeStringLit(""); strLit__3748; }));
        
        //#line 114 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        {
            for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 115 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                if (((::x10aux::struct_equals((line)->charAt(i),
                                              ((x10_char)' '))) ||
                    (::x10aux::struct_equals((line)->charAt(i),
                                             ((x10_char)'\n')))))
                {
                    
                    //#line 116 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                      (__extension__ ({
                          x10_long pre__822 = j;
                          j = ((j) + (((x10_long)1ll)));
                          pre__822;
                      }))
                      , ::x10::lang::IntNatives::parseInt(buffer));
                    
                    //#line 118 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    buffer = (__extension__ ({ static ::x10::lang::String* strLit__3749 = ::x10aux::makeStringLit(""); strLit__3749; }));
                } else {
                    
                    //#line 120 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
                }
                
            }
        }
        
        //#line 123 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__3750 = ::x10aux::makeStringLit(""); strLit__3750; })))))
        {
            
            //#line 124 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              (__extension__ ({
                  x10_long pre__839 = j;
                  j = ((j) + (((x10_long)1ll)));
                  pre__839;
              }))
              , ::x10::lang::IntNatives::parseInt(buffer));
        }
        
        //#line 127 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        if (((j) < (this->FMGL(size)))) {
            
            //#line 128 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3751 = ::x10aux::makeStringLit("ModelAS ERROR: The input vector is shorter than the variables array. Valor j: "); strLit__3751; })), j)));
        }
        
        //#line 130 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                    ((x10_int)0));
        
        //#line 131 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__3721 = variables;
        x10_long i__1116max__3722 = (x10_long)(::x10aux::nullCheck(rail__3721)->FMGL(size));
        {
            x10_long i__3723;
            for (i__3723 = ((x10_long)0ll); ((i__3723) < (i__1116max__3722));
                 i__3723 = ((i__3723) + (((x10_long)1ll))))
            {
                x10_long mi__3724 = i__3723;
                
                //#line 132 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                x10_int value__3720 = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                        mi__3724);
                
                //#line 133 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                ::x10::lang::Rail< x10_int >* a__3717 = permutV;
                x10_long i__3718 = ((((x10_long)(value__3720))) - (((x10_long)1ll)));
                x10_int r__3719 = ((a__3717->x10::lang::Rail< x10_int >::__apply(
                                      i__3718)) + (((x10_int)1)));
                a__3717->x10::lang::Rail< x10_int >::__set(
                  i__3718, r__3719);
                
                //#line 134 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                    ((((x10_long)(value__3720))) - (((x10_long)1ll))))))) > (((x10_long)1ll))))
                {
                    
                    //#line 135 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3755 = ::x10aux::makeStringLit("ERROR: Not valid permutation, value "); strLit__3755; })), value__3720), (__extension__ ({ static ::x10::lang::String* strLit__3756 = ::x10aux::makeStringLit(" is repeted "); strLit__3756; }))), mi__3724)));
                }
                
            }
        }
        
        //#line 138 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__3757 = ::x10aux::makeStringLit("after ini"); strLit__3757; })),
                                  variables);
    } else {
        
        //#line 140 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        ::x10::lang::Rail< x10_int >* rail__3725 = variables;
        x10_long i__1135max__3726 = (x10_long)(::x10aux::nullCheck(rail__3725)->FMGL(size));
        {
            x10_long i__3727;
            for (i__3727 = ((x10_long)0ll); ((i__3727) < (i__1135max__3726));
                 i__3727 = ((i__3727) + (((x10_long)1ll))))
            {
                x10_long k__3728 = i__3727;
                
                //#line 141 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  k__3728, ((this->FMGL(baseValue)) + (((x10_int) (k__3728)))));
            }
        }
        
        //#line 144 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        {
            x10_long i;
            for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
                 ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
            {
                
                //#line 145 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                               ((i) + (((x10_long)1ll))));
                
                //#line 146 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                x10_int x = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                              i);
                
                //#line 147 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  i, ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                       j));
                
                //#line 148 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
                ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
                  j, x);
            }
        }
        
    }
    
    //#line 151 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return variables;
    
}

//#line 173 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
void cpls::problem::ProblemGenericModel::displaySolution(
  x10_long sz, ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 174 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::cpls::util::Utils::show((__extension__ ({ static ::x10::lang::String* strLit__3760 = ::x10aux::makeStringLit("Solution"); strLit__3760; })),
                              conf);
}

//#line 178 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_boolean cpls::problem::ProblemGenericModel::verify(x10_long sz,
                                                       ::x10::lang::Rail< x10_int >* conf) {
    
    //#line 179 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__3761 = ::x10aux::makeStringLit("Se ingresa al Verify de ProblemGenericModel"); strLit__3761; }))));
    
    //#line 180 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return true;
    
}

//#line 187 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextJ(x10_long i,
                                                   x10_long j,
                                                   x10_boolean exhaustive) {
    
    //#line 189 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_long newj = j;
    
    //#line 190 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    if ((((j) < (((x10_long)0ll))) && exhaustive)) {
        
        //#line 191 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
        newj = i;
    }
    
    //#line 192 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((newj) + (((x10_long)1ll)));
    
}

//#line 195 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_long cpls::problem::ProblemGenericModel::nextI(x10_long i) {
    
    //#line 196 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return ((i) + (((x10_long)1ll)));
    
}

//#line 199 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::ProblemGenericModel::createNewSol(
  ) {
    
    //#line 200 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* variables = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                  reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_problem_ProblemGenericModel__closure__2)))cpls_problem_ProblemGenericModel__closure__2())));
    
    //#line 201 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10::lang::Rail< x10_int >* rail__3731 = variables;
    x10_long i__1154max__3732 = (x10_long)(::x10aux::nullCheck(rail__3731)->FMGL(size));
    {
        x10_long i__3733;
        for (i__3733 = ((x10_long)0ll); ((i__3733) < (i__1154max__3732));
             i__3733 = ((i__3733) + (((x10_long)1ll)))) {
            x10_long k__3734 = i__3733;
            
            //#line 202 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              k__3734, ((this->FMGL(baseValue)) + (((x10_int) (k__3734)))));
        }
    }
    
    //#line 204 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    {
        x10_long i;
        for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
             ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 205 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(r))->nextLong(
                           ((i) + (((x10_long)1ll))));
            
            //#line 206 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            x10_int x = ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                          i);
            
            //#line 207 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              i, ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                   j));
            
            //#line 208 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            ::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__set(
              j, x);
        }
    }
    
    //#line 210 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return variables;
    
}

//#line 215 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
x10_double cpls::problem::ProblemGenericModel::distance(x10_long sz,
                                                        ::x10::lang::Rail< x10_int >* conf1,
                                                        ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 216 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_int count = ((x10_int)0);
    
    //#line 217 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_int i__1173max__3735 = ((((x10_int) (this->FMGL(size)))) - (((x10_int)1)));
    {
        x10_int i__3736;
        for (i__3736 = ((x10_int)0); ((i__3736) <= (i__1173max__3735));
             i__3736 = ((i__3736) + (((x10_int)1)))) {
            x10_int i__3737 = i__3736;
            
            //#line 219 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__3737))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__3737))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 221 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_double dis = ((((x10_double) (count))) / (((x10_double) (this->FMGL(size)))));
    
    //#line 223 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    return dis;
    
}

//#line 9 "/home/danny/Documents/workspace/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
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
