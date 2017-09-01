/*************************************************/
/* START of GAIndividual */
#include <cpls/solver/GAIndividual.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/util/Random.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Double.h>
#include <x10/lang/Float.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__1_CLOSURE
#define CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_solver_GAIndividual__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_GAIndividual__closure__1> _itable;
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
        cpls_solver_GAIndividual__closure__1* storage = ::x10aux::alloc_z<cpls_solver_GAIndividual__closure__1>();
        buf.record_reference(storage);
        cpls_solver_GAIndividual__closure__1* this_ = new (storage) cpls_solver_GAIndividual__closure__1();
        return this_;
    }
    
    cpls_solver_GAIndividual__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10:16";
    }

};

#endif // CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__1_CLOSURE
#ifndef CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__2_CLOSURE
#define CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_solver_GAIndividual__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_GAIndividual__closure__2> _itable;
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
        cpls_solver_GAIndividual__closure__2* storage = ::x10aux::alloc_z<cpls_solver_GAIndividual__closure__2>();
        buf.record_reference(storage);
        cpls_solver_GAIndividual__closure__2* this_ = new (storage) cpls_solver_GAIndividual__closure__2();
        return this_;
    }
    
    cpls_solver_GAIndividual__closure__2() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10:25";
    }

};

#endif // CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__2_CLOSURE
#ifndef CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__3_CLOSURE
#define CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_solver_GAIndividual__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_GAIndividual__closure__3> _itable;
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
        cpls_solver_GAIndividual__closure__3* storage = ::x10aux::alloc_z<cpls_solver_GAIndividual__closure__3>();
        buf.record_reference(storage);
        cpls_solver_GAIndividual__closure__3* this_ = new (storage) cpls_solver_GAIndividual__closure__3();
        return this_;
    }
    
    cpls_solver_GAIndividual__closure__3() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10:35";
    }

};

#endif // CPLS_SOLVER_GAINDIVIDUAL__CLOSURE__3_CLOSURE

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::_constructor(x10_long individualSize, x10_long seed) {
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    FMGL(size) = individualSize;
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->cpls::solver::GAIndividual::__fieldInitializers_cpls_solver_GAIndividual();
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(genes) = ::x10::lang::Rail< x10_int >::_make(individualSize,
                                                            reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_solver_GAIndividual__closure__1)))cpls_solver_GAIndividual__closure__1())));
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(randomGenerator) = ::x10::util::Random::_make();
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(this->FMGL(randomGenerator))->x10::util::Random::setSeed(
      seed);
}
::cpls::solver::GAIndividual* cpls::solver::GAIndividual::_make(x10_long individualSize,
                                                                x10_long seed)
{
    ::cpls::solver::GAIndividual* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual();
    this_->_constructor(individualSize, seed);
    return this_;
}



//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::_constructor(::x10::lang::Rail< x10_int >* genes,
                                              x10_long seed) {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    FMGL(size) = (x10_long)(::x10aux::nullCheck(genes)->FMGL(size));
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->cpls::solver::GAIndividual::__fieldInitializers_cpls_solver_GAIndividual();
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(genes) = ::x10::lang::Rail< x10_int >::_make((x10_long)(::x10aux::nullCheck(genes)->FMGL(size)),
                                                            reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_solver_GAIndividual__closure__2)))cpls_solver_GAIndividual__closure__2())));
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(randomGenerator) = ::x10::util::Random::_make();
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(this->FMGL(randomGenerator))->x10::util::Random::setSeed(
      seed);
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                   ::x10::lang::Rail< x10_int >* t__36497 =
                                                     genes;
                                                   if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36497)->FMGL(size)),
                                                                                  ::x10aux::nullCheck(this)->FMGL(size)))))
                                                   {
                                                       ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39635 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GAIndividual).size}"); strLit__39635; })))));
                                                   }
                                                   t__36497;
                                               }))
                                               , (__extension__ ({
                                                   ::x10::lang::Rail< x10_int >* t__36499 =
                                                     this->FMGL(genes);
                                                   if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36499)->FMGL(size)),
                                                                                  ::x10aux::nullCheck(this)->FMGL(size)))))
                                                   {
                                                       ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39636 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GAIndividual).size}"); strLit__39636; })))));
                                                   }
                                                   t__36499;
                                               }))
                                               );
}
::cpls::solver::GAIndividual* cpls::solver::GAIndividual::_make(
  ::x10::lang::Rail< x10_int >* genes, x10_long seed) {
    ::cpls::solver::GAIndividual* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual();
    this_->_constructor(genes, seed);
    return this_;
}



//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::_constructor(::cpls::solver::GAIndividual* indiv,
                                              x10_long seed) {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    FMGL(size) = ::x10aux::nullCheck(indiv)->FMGL(size);
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->cpls::solver::GAIndividual::__fieldInitializers_cpls_solver_GAIndividual();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(genes) = ::x10::lang::Rail< x10_int >::_make((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(indiv)->getGenes())->FMGL(size)),
                                                            reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_solver_GAIndividual__closure__3)))cpls_solver_GAIndividual__closure__3())));
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(randomGenerator) = ::x10::util::Random::_make();
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(this->FMGL(randomGenerator))->x10::util::Random::setSeed(
      seed);
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                   ::x10::lang::Rail< x10_int >* t__36501 =
                                                     ::x10aux::nullCheck(indiv)->getGenes();
                                                   if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36501)->FMGL(size)),
                                                                                  ::x10aux::nullCheck(this)->FMGL(size)))))
                                                   {
                                                       ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39637 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GAIndividual).size}"); strLit__39637; })))));
                                                   }
                                                   t__36501;
                                               }))
                                               , (__extension__ ({
                                                   ::x10::lang::Rail< x10_int >* t__36503 =
                                                     this->FMGL(genes);
                                                   if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36503)->FMGL(size)),
                                                                                  ::x10aux::nullCheck(this)->FMGL(size)))))
                                                   {
                                                       ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39638 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GAIndividual).size}"); strLit__39638; })))));
                                                   }
                                                   t__36503;
                                               }))
                                               );
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(cost) = ::x10aux::nullCheck(indiv)->getCost();
}
::cpls::solver::GAIndividual* cpls::solver::GAIndividual::_make(
  ::cpls::solver::GAIndividual* indiv, x10_long seed) {
    ::cpls::solver::GAIndividual* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual();
    this_->_constructor(indiv, seed);
    return this_;
}



//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::initialize() {
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_int x;
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        x10_long i;
        for (i = ((this->FMGL(size)) - (((x10_long)1ll)));
             ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            x10_long j = ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong(
                           ((i) + (((x10_long)1ll))));
            
            //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            x = ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                  i);
            
            //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__set(
              i, ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                   j));
            
            //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__set(
              j, x);
        }
    }
    
}

//#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
x10_long cpls::solver::GAIndividual::getSize() {
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return (x10_long)(::x10aux::nullCheck(this->FMGL(genes))->FMGL(size));
    
}

//#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GAIndividual::getGenes(
  ) {
    
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return this->FMGL(genes);
    
}

//#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::setGenes(::x10::lang::Rail< x10_int >* genes) {
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                   ::x10::lang::Rail< x10_int >* t__36529 =
                                                     genes;
                                                   if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36529)->FMGL(size)),
                                                                                  ::x10aux::nullCheck(this)->FMGL(size)))))
                                                   {
                                                       ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39641 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GAIndividual).size}"); strLit__39641; })))));
                                                   }
                                                   t__36529;
                                               }))
                                               , (__extension__ ({
                                                   ::x10::lang::Rail< x10_int >* t__36531 =
                                                     this->FMGL(genes);
                                                   if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36531)->FMGL(size)),
                                                                                  ::x10aux::nullCheck(this)->FMGL(size)))))
                                                   {
                                                       ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39642 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GAIndividual).size}"); strLit__39642; })))));
                                                   }
                                                   t__36531;
                                               }))
                                               );
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
x10_long cpls::solver::GAIndividual::getCost() {
    
    //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return this->FMGL(cost);
    
}

//#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::setCost(x10_long cost) {
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    this->FMGL(cost) = cost;
}

//#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
void cpls::solver::GAIndividual::swap(x10_int i, x10_int j) {
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_int aux = ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)(i)));
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__set(
      ((x10_long)(i)), ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                         ((x10_long)(j))));
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__set(
      ((x10_long)(j)), aux);
}

//#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GAIndividual::insertPathCrossover(
  ::cpls::solver::GAIndividual* individual) {
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* copyMyGenes = ::x10::lang::Rail< x10_int >::_make(this->FMGL(genes));
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* genesOther = ::x10::lang::Rail< x10_int >::_make(::x10aux::nullCheck(individual)->getGenes());
    
    //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* son1 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                             ((x10_int)-1));
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* son2 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                             ((x10_int)-1));
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_int initializedPositions = ((x10_int)0);
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_int insertedinSon1 = ((x10_int)-1);
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_int insertedinSon2 = ((x10_int)-1);
    
    //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long indexIni = ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong(
                          this->FMGL(size));
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long index = ((x10_long)(((x10_int)0)));
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long indexBack = ((x10_long)(((x10_int)0)));
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_boolean insertFlag = false;
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    while (((((x10_long)(initializedPositions))) < (this->FMGL(size))))
    {
        
        //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        index = ((indexIni) % ::x10aux::zeroCheck(this->FMGL(size)));
        
        //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        if (((!::x10aux::struct_equals(::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                                         index), ((x10_int)-1))) &&
            (::x10aux::struct_equals(::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                                       index), ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                                                 index)))))
        {
            
            //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
              index, ::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                       index));
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
              index, ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                       index));
            
            //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__set(
              index, ((x10_int)-1));
            
            //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__set(
              index, ((x10_int)-1));
        } else 
        //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        if (!(insertFlag)) {
            
            //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            insertedinSon1 = ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                               index);
            
            //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            insertedinSon2 = ::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                               index);
            
            //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
              index, insertedinSon1);
            
            //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
              index, insertedinSon2);
            
            //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            insertFlag = true;
        } else {
            
            //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            indexBack = ((indexIni) % ::x10aux::zeroCheck(this->FMGL(size)));
            
            //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            do {
                
                //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                indexBack = ((((indexBack) - (((x10_long)1ll)))) >= (((x10_long)0ll)))
                  ? (((indexBack) - (((x10_long)1ll)))) : (((this->FMGL(size)) - (((x10_long)1ll))));
            } while ((((::x10aux::struct_equals(::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                                                  indexBack),
                                                ((x10_int)-1))) ||
                     (::x10aux::struct_equals(::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                                                indexBack),
                                              ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                                                indexBack)))) ||
                     (insertFlag && (::x10aux::struct_equals(::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                                                               indexBack),
                                                             insertedinSon1)))));
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
              index, ::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                       indexBack));
            
            //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__set(
              indexBack, ((x10_int)-1));
            
            //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            indexBack = ((indexIni) % ::x10aux::zeroCheck(this->FMGL(size)));
            
            //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            do {
                
                //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                indexBack = ((((indexBack) - (((x10_long)1ll)))) >= (((x10_long)0ll)))
                  ? (((indexBack) - (((x10_long)1ll)))) : (((this->FMGL(size)) - (((x10_long)1ll))));
            } while ((((::x10aux::struct_equals(::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                                                  indexBack),
                                                ((x10_int)-1))) ||
                     (::x10aux::struct_equals(::x10aux::nullCheck(copyMyGenes)->x10::lang::Rail< x10_int >::__apply(
                                                indexBack),
                                              ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                                                indexBack)))) ||
                     (insertFlag && (::x10aux::struct_equals(::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                                                               indexBack),
                                                             insertedinSon2)))));
            
            //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
              index, ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__apply(
                       indexBack));
            
            //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(genesOther)->x10::lang::Rail< x10_int >::__set(
              indexBack, ((x10_int)-1));
        }
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        initializedPositions = ((initializedPositions) + (((x10_int)1)));
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        indexIni = ((indexIni) + (((x10_long)1ll)));
    }
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(((x10_long)2ll));
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((x10_long)0ll), ::cpls::solver::GAIndividual::_make(son1,
                                                           ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong()));
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((x10_long)1ll), ::cpls::solver::GAIndividual::_make(son2,
                                                           ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong()));
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return sons;
    
}

//#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GAIndividual::partiallyMatchedCrossover(
  ::cpls::solver::GAIndividual* individual) {
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* son1 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                             ((x10_int)-1));
    
    //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* son2 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                             ((x10_int)-1));
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long indexIni = ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong(
                          this->FMGL(size));
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long indexEnd;
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    do {
        
        //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        indexEnd = ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong(
                     this->FMGL(size));
    } while ((::x10aux::struct_equals(indexIni, indexEnd)));
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    if (((indexIni) > (indexEnd))) {
        
        //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        x10_long aux = indexEnd;
        
        //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        indexEnd = indexIni;
        
        //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        indexIni = aux;
    }
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_long >* positionsForSon1 = ::x10::lang::Rail< x10_long >::_make(((((indexEnd) - (indexIni))) + (((x10_long)1ll))),
                                                                                           ((x10_long)(((x10_int)-1))));
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_long >* positionsForSon2 = ::x10::lang::Rail< x10_long >::_make(((((indexEnd) - (indexIni))) + (((x10_long)1ll))),
                                                                                           ((x10_long)(((x10_int)-1))));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long i;
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        for (i = indexIni; ((i) <= (indexEnd)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
              i, ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                   i));
            
            //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
              i, ::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                   i));
        }
    }
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long j;
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long k = ((x10_long)(((x10_int)0)));
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long l = ((x10_long)(((x10_int)0)));
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        for (j = indexIni; ((j) <= (indexEnd)); j = ((j) + (((x10_long)1ll))))
        {
            
            //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            {
                for (i = indexIni; ((i) <= (indexEnd)); i =
                                                          ((i) + (((x10_long)1ll))))
                {
                    
                    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                   j), ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                         i))))
                    {
                        
                        //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                        break;
                    } else 
                    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    if ((::x10aux::struct_equals(i, indexEnd)))
                    {
                        
                        //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                        ::x10aux::nullCheck(positionsForSon1)->x10::lang::Rail< x10_long >::__set(
                          (__extension__ ({
                              x10_long pre__36668 = k;
                              k = ((k) + (((x10_long)1ll)));
                              pre__36668;
                          }))
                          , j);
                    }
                    
                }
            }
            
            //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            {
                for (i = indexIni; ((i) <= (indexEnd)); i =
                                                          ((i) + (((x10_long)1ll))))
                {
                    
                    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    if ((::x10aux::struct_equals(::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                   j), ::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                         i))))
                    {
                        
                        //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                        break;
                    } else 
                    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    if ((::x10aux::struct_equals(i, indexEnd)))
                    {
                        
                        //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                        ::x10aux::nullCheck(positionsForSon2)->x10::lang::Rail< x10_long >::__set(
                          (__extension__ ({
                              x10_long pre__36687 = l;
                              l = ((l) + (((x10_long)1ll)));
                              pre__36687;
                          }))
                          , j);
                    }
                    
                }
            }
            
        }
    }
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    k = ((x10_long)(((x10_int)0)));
    
    //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    l = ((x10_long)(((x10_int)0)));
    
    //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long positionAux;
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    while (((!::x10aux::struct_equals(::x10aux::nullCheck(positionsForSon1)->x10::lang::Rail< x10_long >::__apply(
                                        k), ((x10_long)-1ll))) &&
           ((k) < ((x10_long)(::x10aux::nullCheck(positionsForSon1)->FMGL(size))))))
    {
        
        //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        positionAux = ::x10aux::nullCheck(positionsForSon1)->x10::lang::Rail< x10_long >::__apply(
                        k);
        
        //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        do {
            
            //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            l = ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                              positionAux)));
            
            //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            positionAux = this->findNumberPosition(l, ::x10aux::nullCheck(individual)->FMGL(genes));
        } while ((!::x10aux::struct_equals(::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__apply(
                                             positionAux),
                                           ((x10_int)-1))));
        
        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
          positionAux, ::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                         ::x10aux::nullCheck(positionsForSon1)->x10::lang::Rail< x10_long >::__apply(
                           k)));
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        k = ((k) + (((x10_long)1ll)));
    }
    
    //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    k = ((x10_long)(((x10_int)0)));
    
    //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    l = ((x10_long)(((x10_int)0)));
    
    //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    while (((!::x10aux::struct_equals(::x10aux::nullCheck(positionsForSon2)->x10::lang::Rail< x10_long >::__apply(
                                        k), ((x10_long)-1ll))) &&
           ((k) < ((x10_long)(::x10aux::nullCheck(positionsForSon2)->FMGL(size))))))
    {
        
        //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        positionAux = ::x10aux::nullCheck(positionsForSon2)->x10::lang::Rail< x10_long >::__apply(
                        k);
        
        //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        do {
            
            //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            l = ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                              positionAux)));
            
            //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            positionAux = this->findNumberPosition(l, this->FMGL(genes));
        } while ((!::x10aux::struct_equals(::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__apply(
                                             positionAux),
                                           ((x10_int)-1))));
        
        //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
          positionAux, ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                         ::x10aux::nullCheck(positionsForSon2)->x10::lang::Rail< x10_long >::__apply(
                           k)));
        
        //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
        k = ((k) + (((x10_long)1ll)));
    }
    
    //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        for (i = ((x10_long)(((x10_int)0))); ((i) < ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__apply(
                                           i), ((x10_int)-1))))
            {
                
                //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
                  i, ::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                       i));
            }
            
            //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__apply(
                                           i), ((x10_int)-1))))
            {
                
                //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
                  i, ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                       i));
            }
            
        }
    }
    
    //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(((x10_long)2ll));
    
    //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((x10_long)0ll), ::cpls::solver::GAIndividual::_make(son1,
                                                           ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong()));
    
    //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((x10_long)1ll), ::cpls::solver::GAIndividual::_make(son2,
                                                           ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong()));
    
    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return sons;
    
}

//#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GAIndividual::uniformCrossover(
  ::cpls::solver::GAIndividual* individual) {
    
    //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* son1 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                             ((x10_int)-1));
    
    //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* son2 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                             ((x10_int)-1));
    
    //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* auxVectorSon1 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                      ((x10_int)-1));
    
    //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< x10_int >* auxVectorSon2 = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                      ((x10_int)-1));
    
    //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            if (((((x10_double) (::x10aux::nullCheck(this->FMGL(randomGenerator))->nextFloat()))) > (0.5)))
            {
                
                //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(auxVectorSon1)->x10::lang::Rail< x10_int >::__apply(
                                               ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                             ((x10_long)(i)))))),
                                             ((x10_int)-1))))
                {
                    
                    //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(i)), ::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                         ((x10_long)(i))));
                    
                    //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(auxVectorSon1)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                    ((x10_long)(i))))), ((x10_int)0));
                }
                
                //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(auxVectorSon2)->x10::lang::Rail< x10_int >::__apply(
                                               ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                             ((x10_long)(i)))))),
                                             ((x10_int)-1))))
                {
                    
                    //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(i)), ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                         ((x10_long)(i))));
                    
                    //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(auxVectorSon2)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                    ((x10_long)(i))))), ((x10_int)0));
                }
                
            } else {
                
                //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(auxVectorSon1)->x10::lang::Rail< x10_int >::__apply(
                                               ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                             ((x10_long)(i)))))),
                                             ((x10_int)-1))))
                {
                    
                    //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(i)), ::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                         ((x10_long)(i))));
                    
                    //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(auxVectorSon1)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                    ((x10_long)(i))))), ((x10_int)0));
                }
                
                //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(auxVectorSon2)->x10::lang::Rail< x10_int >::__apply(
                                               ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                                             ((x10_long)(i)))))),
                                             ((x10_int)-1))))
                {
                    
                    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(i)), ::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                         ((x10_long)(i))));
                    
                    //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    ::x10aux::nullCheck(auxVectorSon2)->x10::lang::Rail< x10_int >::__set(
                      ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(individual)->FMGL(genes))->x10::lang::Rail< x10_int >::__apply(
                                    ((x10_long)(i))))), ((x10_int)0));
                }
                
            }
            
        }
    }
    
    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long circularIndex;
    
    //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long posIni;
    
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(genes))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 269 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__apply(
                                           ((x10_long)(i))),
                                         ((x10_int)-1))))
            {
                
                //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                circularIndex = ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong(
                                  this->FMGL(size));
                
                //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                posIni = circularIndex;
                
                //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                do {
                    
                    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    circularIndex = ((circularIndex = ((circularIndex) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(this->FMGL(size)));
                } while (((!::x10aux::struct_equals(::x10aux::nullCheck(auxVectorSon1)->x10::lang::Rail< x10_int >::__apply(
                                                      circularIndex),
                                                    ((x10_int)-1))) &&
                         (!::x10aux::struct_equals(circularIndex,
                                                   posIni))));
                
                //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                ::x10aux::nullCheck(son1)->x10::lang::Rail< x10_int >::__set(
                  ((x10_long)(i)), ((x10_int) (circularIndex)));
                
                //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                ::x10aux::nullCheck(auxVectorSon1)->x10::lang::Rail< x10_int >::__set(
                  circularIndex, ((x10_int)0));
            }
            
            //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__apply(
                                           ((x10_long)(i))),
                                         ((x10_int)-1))))
            {
                
                //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                circularIndex = ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong(
                                  this->FMGL(size));
                
                //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                posIni = circularIndex;
                
                //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                do {
                    
                    //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                    circularIndex = ((circularIndex = ((circularIndex) + (((x10_long)1ll)))) % ::x10aux::zeroCheck(this->FMGL(size)));
                } while (((!::x10aux::struct_equals(::x10aux::nullCheck(auxVectorSon2)->x10::lang::Rail< x10_int >::__apply(
                                                      circularIndex),
                                                    ((x10_int)-1))) &&
                         (!::x10aux::struct_equals(circularIndex,
                                                   posIni))));
                
                //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                ::x10aux::nullCheck(son2)->x10::lang::Rail< x10_int >::__set(
                  ((x10_long)(i)), ((x10_int) (circularIndex)));
                
                //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                ::x10aux::nullCheck(auxVectorSon2)->x10::lang::Rail< x10_int >::__set(
                  circularIndex, ((x10_int)0));
            }
            
        }
    }
    
    //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(((x10_long)2ll));
    
    //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((x10_long)0ll), ::cpls::solver::GAIndividual::_make(son1,
                                                           ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong()));
    
    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((x10_long)1ll), ::cpls::solver::GAIndividual::_make(son2,
                                                           ::x10aux::nullCheck(this->FMGL(randomGenerator))->nextLong()));
    
    //#line 291 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return sons;
    
}

//#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
x10_long cpls::solver::GAIndividual::findNumberPosition(x10_long number,
                                                        ::x10::lang::Rail< x10_int >* vector) {
    
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    x10_long position = ((x10_long)(((x10_int)0)));
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                           ((x10_long)(i))),
                                         ((x10_int) (number)))))
            {
                
                //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                position = ((x10_long)(i));
                
                //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
                break;
            }
            
        }
    }
    
    //#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
    return position;
    
}

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAIndividual.x10"
::cpls::solver::GAIndividual* cpls::solver::GAIndividual::cpls__solver__GAIndividual____this__cpls__solver__GAIndividual(
  ) {
    return this;
    
}
void cpls::solver::GAIndividual::__fieldInitializers_cpls_solver_GAIndividual(
  ) {
    this->FMGL(genes) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(cost) = ((x10_long)0ll);
    this->FMGL(randomGenerator) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::solver::GAIndividual::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::GAIndividual::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::GAIndividual::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(genes));
    buf.write(this->FMGL(cost));
    buf.write(this->FMGL(randomGenerator));
    buf.write(this->FMGL(size));
    
}

::x10::lang::Reference* ::cpls::solver::GAIndividual::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::GAIndividual* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::GAIndividual::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(genes) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(cost) = buf.read<x10_long>();
    FMGL(randomGenerator) = buf.read< ::x10::util::Random*>();
    FMGL(size) = buf.read<x10_long>();
}

::x10aux::RuntimeType cpls::solver::GAIndividual::rtt;
void cpls::solver::GAIndividual::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.GAIndividual",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_GAIndividual__closure__1>cpls_solver_GAIndividual__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_GAIndividual__closure__1::__apply, &cpls_solver_GAIndividual__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_GAIndividual__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_solver_GAIndividual__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_GAIndividual__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_GAIndividual__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_GAIndividual__closure__2>cpls_solver_GAIndividual__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_GAIndividual__closure__2::__apply, &cpls_solver_GAIndividual__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_GAIndividual__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_solver_GAIndividual__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_GAIndividual__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_GAIndividual__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_solver_GAIndividual__closure__3>cpls_solver_GAIndividual__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_GAIndividual__closure__3::__apply, &cpls_solver_GAIndividual__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_GAIndividual__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_solver_GAIndividual__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_GAIndividual__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_GAIndividual__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of GAIndividual */
/*************************************************/
