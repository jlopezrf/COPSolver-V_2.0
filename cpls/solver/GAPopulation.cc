/*************************************************/
/* START of GAPopulation */
#include <cpls/solver/GAPopulation.h>

#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <cpls/solver/GAIndividual.h>
#include <cpls/util/Monitor.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/util/Random.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/util/RailUtils.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE
#define CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_solver_GAPopulation__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>::itable<cpls_solver_GAPopulation__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(::cpls::solver::GAIndividual* a, ::cpls::solver::GAIndividual* b) {
        
        //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
        return ((x10_int) (((::x10aux::nullCheck(a)->getCost()) - (::x10aux::nullCheck(b)->getCost()))));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_GAPopulation__closure__1* storage = ::x10aux::alloc_z<cpls_solver_GAPopulation__closure__1>();
        buf.record_reference(storage);
        cpls_solver_GAPopulation__closure__1* this_ = new (storage) cpls_solver_GAPopulation__closure__1();
        return this_;
    }
    
    cpls_solver_GAPopulation__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10:47";
    }

};

#endif // CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::initialize(x10_long populationSize, x10_long size,
                                            ::cpls::problem::ProblemGenericModel* problemModel,
                                            x10_long seed) {
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(population) = ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(populationSize);
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(populationSize) = populationSize;
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::util::Random* random =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    (random)->::x10::util::Random::_constructor(seed);
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long seed1 = random->nextLong();
            
            //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
              ((x10_long)(k)), (__extension__ ({
                  ::cpls::solver::GAIndividual* alloc__481 =
                     (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
                  (alloc__481)->::cpls::solver::GAIndividual::_constructor(
                    size, seed1);
                  alloc__481;
              }))
              );
            
            //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->initialize();
            
            //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              ::x10aux::nullCheck(problemModel)->costOfSolution(
                size, ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(k))))->getGenes()));
        }
    }
    
}

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
::cpls::solver::GAIndividual* cpls::solver::GAPopulation::getIndividual(
  x10_long index) {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
             index);
    
}

//#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setIndividual(x10_long index,
                                               ::cpls::solver::GAIndividual* individual) {
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      index, individual);
}

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                                   x10_long index1,
                                                   x10_long index2,
                                                   ::x10::util::Random* random) {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* a__5864 =
      mutatedSons;
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>* cmp__5865 =
      this->FMGL(cmp);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< ::cpls::solver::GAIndividual* >(
      a__5864, ((x10_long)0ll), (((x10_long)(::x10aux::nullCheck(a__5864)->FMGL(size))) - (((x10_long)1ll))),
      cmp__5865);
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((this->FMGL(populationSize)) - (((x10_long)2ll))),
      ::x10aux::nullCheck(mutatedSons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
        ((x10_long)0ll)));
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      ((this->FMGL(populationSize)) - (((x10_long)1ll))),
      ::x10aux::nullCheck(mutatedSons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
        ((x10_long)1ll)));
}

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::sort() {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* a__5866 =
      this->FMGL(population);
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>* cmp__5867 =
      this->FMGL(cmp);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< ::cpls::solver::GAIndividual* >(
      a__5866, ((x10_long)0ll), (((x10_long)(::x10aux::nullCheck(a__5866)->FMGL(size))) - (((x10_long)1ll))),
      cmp__5867);
}

//#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_long cpls::solver::GAPopulation::getPopulationSize() {
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return this->FMGL(populationSize);
    
}

//#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setCost(x10_long index, x10_long cost) {
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                          index))->setCost(cost);
}

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
::cpls::solver::GAPopulation* cpls::solver::GAPopulation::cpls__solver__GAPopulation____this__cpls__solver__GAPopulation(
  ) {
    return this;
    
}
void cpls::solver::GAPopulation::_constructor() {
    this->cpls::solver::GAPopulation::__fieldInitializers_cpls_solver_GAPopulation();
}
::cpls::solver::GAPopulation* cpls::solver::GAPopulation::_make(
  ) {
    ::cpls::solver::GAPopulation* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAPopulation>()) ::cpls::solver::GAPopulation();
    this_->_constructor();
    return this_;
}


void cpls::solver::GAPopulation::__fieldInitializers_cpls_solver_GAPopulation(
  ) {
    this->FMGL(population) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(populationSize) = ((x10_long)0ll);
    this->FMGL(monitor) = (__extension__ ({
        
        //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
        ::cpls::util::Monitor* alloc__482 =  (new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor());
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        ::x10::lang::String* n__5868 = (__extension__ ({ static ::x10::lang::String* strLit__5876 = ::x10aux::makeStringLit("CPLSNode"); strLit__5876; }));
        
        //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__482->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__482->FMGL(name) = n__5868;
        alloc__482;
    }))
    ;
    this->FMGL(cmp) = reinterpret_cast< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(sizeof(cpls_solver_GAPopulation__closure__1)))cpls_solver_GAPopulation__closure__1()));
}
const ::x10aux::serialization_id_t cpls::solver::GAPopulation::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::GAPopulation::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::GAPopulation::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(population));
    buf.write(this->FMGL(populationSize));
    buf.write(this->FMGL(monitor));
    buf.write(this->FMGL(cmp));
    
}

::x10::lang::Reference* ::cpls::solver::GAPopulation::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::GAPopulation* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAPopulation>()) ::cpls::solver::GAPopulation();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::GAPopulation::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(population) = buf.read< ::x10::lang::Rail< ::cpls::solver::GAIndividual* >*>();
    FMGL(populationSize) = buf.read<x10_long>();
    FMGL(monitor) = buf.read< ::cpls::util::Monitor*>();
    FMGL(cmp) = buf.read< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*>();
}

::x10aux::RuntimeType cpls::solver::GAPopulation::rtt;
void cpls::solver::GAPopulation::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.GAPopulation",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>::itable<cpls_solver_GAPopulation__closure__1>cpls_solver_GAPopulation__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_GAPopulation__closure__1::__apply, &cpls_solver_GAPopulation__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_GAPopulation__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >, &cpls_solver_GAPopulation__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_GAPopulation__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_GAPopulation__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of GAPopulation */
/*************************************************/
