/*************************************************/
/* START of GAPopulation */
#include <cpls/solver/GAPopulation.h>

#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <cpls/solver/GAIndividual.h>
#include <cpls/util/Monitor.h>
#include <x10/array/Array_2.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/util/Random.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/lang/Runtime.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/Math.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
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
        
        //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10:213";
    }

};

#endif // CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::initialize(x10_long populationSize, x10_long size,
                                            ::cpls::problem::ProblemGenericModel* problemModel,
                                            x10_long seed) {
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(population) = ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(populationSize);
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(size) = size;
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(populationSize) = populationSize;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::util::Random* random =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    (random)->::x10::util::Random::_constructor(seed);
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(distanceMatrix) = (__extension__ ({
        ::x10::array::Array_2<x10_double>* alloc__2180 = 
        (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_double> >()) ::x10::array::Array_2<x10_double>());
        (alloc__2180)->::x10::array::Array_2<x10_double>::_constructor(
          populationSize, populationSize, ((x10_double) (((x10_int)0))));
        alloc__2180;
    }))
    ;
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long newCost;
            
            //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long indivCost;
            
            //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long seed1 = random->nextLong();
            
            //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
              ((x10_long)(k)), (__extension__ ({
                  ::cpls::solver::GAIndividual* alloc__2181 =
                     (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
                  (alloc__2181)->::cpls::solver::GAIndividual::_constructor(
                    size, seed1);
                  alloc__2181;
              }))
              );
            
            //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->initialize();
            
            //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              ::x10aux::nullCheck(problemModel)->costOfSolution(
                size, ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(k))))->getGenes()));
        }
    }
    
}

//#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::applyLS(x10_long size, ::cpls::solver::HeuristicSolver* heuristicSolverAux,
                                         x10_int indexIni) {
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long indivCost;
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long newCost;
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = indexIni; ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->clearProblemModel();
            
            //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->setVariables(
              size, ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(k))))->getGenes());
            
            //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            indivCost = ::x10aux::nullCheck(heuristicSolverAux)->costOfSolution();
            
            //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            newCost = indivCost;
            
            //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::lang::Rail< x10_int >* bestConf = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                           ((x10_long)(k))))->getGenes();
            
            //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)1000ll)));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    newCost = ::x10aux::nullCheck(heuristicSolverAux)->search(
                                newCost, (x10_long)0x7fffffffffffffffLL,
                                i);
                    
                    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if (((newCost) < (indivCost))) {
                        
                        //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::lang::Rail< void >::copy< x10_int >(
                          ::x10aux::nullCheck(heuristicSolverAux)->getVariables(),
                          bestConf);
                        
                        //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        indivCost = newCost;
                    }
                    
                    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    ::x10::lang::Runtime::probe();
                    
                    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if (this->FMGL(kill)) {
                        
                        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              indivCost);
            
            //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setGenes(
              bestConf);
            
            //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::lang::Runtime::probe();
            
            //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            if (this->FMGL(kill)) {
                
                //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                break;
            }
            
        }
    }
    
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__13020 = ::x10aux::makeStringLit("  "); strLit__13020; }))));
        }
    }
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__13021 = ::x10aux::makeStringLit("\n"); strLit__13021; })));
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printPopulation() {
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(populationSize)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            this->printVector(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                    ((x10_long)(i))))->getGenes());
        }
    }
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
::cpls::solver::GAIndividual* cpls::solver::GAPopulation::getIndividual(
  x10_long index) {
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
             index);
    
}

//#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setIndividual(x10_long index,
                                               ::cpls::solver::GAIndividual* individual) {
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      index, individual);
}

//#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setKill(x10_boolean value) {
    
    //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(kill) = value;
}

//#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                                   x10_long index1,
                                                   x10_long index2,
                                                   ::x10::util::Random* random) {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* a__12953 =
      mutatedSons;
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>* cmp__12954 =
      this->FMGL(cmp);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< ::cpls::solver::GAIndividual* >(
      a__12953, ((x10_long)0ll), (((x10_long)(::x10aux::nullCheck(a__12953)->FMGL(size))) - (((x10_long)1ll))),
      cmp__12954);
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double dist = 0.0;
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double meanDist = 0.0;
    
    //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__12955 =
      mutatedSons;
    x10_long size__12956 = (x10_long)(::x10aux::nullCheck(rail__12955)->FMGL(size));
    {
        x10_long idx__12957;
        for (idx__12957 = ((x10_long)0ll); ((idx__12957) < (size__12956));
             idx__12957 = ((idx__12957) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* mutSon__12958 =
              ::x10aux::nullCheck(rail__12955)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                idx__12957);
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int i__12952;
                for (i__12952 = ((x10_int)0); ((((x10_long)(i__12952))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     i__12952 = ((i__12952) + (((x10_int)1))))
                {
                    
                    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    dist = this->distance(::x10aux::nullCheck(mutSon__12958)->getGenes(),
                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                ((x10_long)(i__12952))))->getGenes());
                    
                    //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(dist, 0.0)))
                    {
                        
                        //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        meanDist = 0.0;
                        
                        //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    meanDist = ((meanDist) + (dist));
                }
            }
            
            //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            meanDist = ((meanDist) / (((x10_double) (this->FMGL(populationSize)))));
            
            //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            if (((meanDist) > (0.0))) {
                
                //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
                  ((this->FMGL(populationSize)) - (((((x10_long)2ll)) - (((x10_long)(count)))))),
                  mutSon__12958);
            }
            
            //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            count = ((count) + (((x10_int)1)));
            
            //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            meanDist = 0.0;
        }
    }
    
}

//#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::renewPopulation(x10_int indexIni) {
    
    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long sz = this->FMGL(size);
    
    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = indexIni; ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->initialize();
            
            //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                sz, ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->sort();
}

//#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateMidDistance(
  ) {
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double dist = ((x10_double) (((x10_int)0)));
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double media = 0.0;
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = i; ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(i, j))) {
                        
                        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::array::Array_2<x10_double>* this__12961 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12962 = ((x10_long)(i));
                        x10_long j__12963 = ((x10_long)(j));
                        x10_double ret__12964;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__12961)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12959 = i__12962;
                            x10_long j__12960 = j__12963;
                            ((j__12960) + (((i__12959) * (::x10aux::nullCheck(this__12961)->FMGL(numElems_2)))));
                        }))
                        , 0.0);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12964 = 0.0;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12964;
                    } else {
                        
                        //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        dist = this->distance(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(i))))->getGenes(),
                                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(j))))->getGenes());
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::array::Array_2<x10_double>* this__12969 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12970 = ((x10_long)(i));
                        x10_long j__12971 = ((x10_long)(j));
                        x10_double v__12972 = dist;
                        x10_double ret__12973;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__12969)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12965 = i__12970;
                            x10_long j__12966 = j__12971;
                            ((j__12966) + (((i__12965) * (::x10aux::nullCheck(this__12969)->FMGL(numElems_2)))));
                        }))
                        , v__12972);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12973 = v__12972;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12973;
                        
                        //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::array::Array_2<x10_double>* this__12974 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12975 = ((x10_long)(j));
                        x10_long j__12976 = ((x10_long)(i));
                        x10_double v__12977 = dist;
                        x10_double ret__12978;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__12974)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12967 = i__12975;
                            x10_long j__12968 = j__12976;
                            ((j__12968) + (((i__12967) * (::x10aux::nullCheck(this__12974)->FMGL(numElems_2)))));
                        }))
                        , v__12977);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12978 = v__12977;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12978;
                        
                        //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        media = ((media) + (((((x10_double) (((x10_long)2ll)))) * (dist))));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    media = ((media) / (((x10_double) ((((((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))) - (((x10_long)1ll)))) * ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))))))));
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return media;
    
}

//#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::entropyOfPopulation(
  ) {
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::array::Array_2<x10_double>* countsOfTimesForSite =
       (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_double> >()) ::x10::array::Array_2<x10_double>());
    (countsOfTimesForSite)->::x10::array::Array_2<x10_double>::_constructor(
      this->FMGL(size), this->FMGL(size), ((x10_double) (((x10_int)0))));
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double entropyRow = 0.0;
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double entropyTotal = 0.0;
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((((x10_long)(j))) < (this->FMGL(populationSize)));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    ::x10::array::Array_2<x10_double>* a__12987 =
                      countsOfTimesForSite;
                    x10_long i__12988 = ((x10_long)(i));
                    x10_long i__12989 = ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                                              ((x10_long)(j))))->getGenes())->x10::lang::Rail< x10_int >::__apply(
                                                      ((x10_long)(i)))));
                    x10_double r__12990 = (((__extension__ ({
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12991 = i__12988;
                        x10_long j__12992 = i__12989;
                        x10_double ret__12993;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12993 = (::x10aux::nullCheck(a__12987)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12979 = i__12991;
                            x10_long j__12980 = j__12992;
                            ((j__12980) + (((i__12979) * (::x10aux::nullCheck(a__12987)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12993;
                    }))
                    ) + (1.0));
                    
                    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    x10_long i__12983 = i__12988;
                    x10_long j__12984 = i__12989;
                    x10_double v__12985 = r__12990;
                    x10_double ret__12986;
                    
                    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    (::x10aux::nullCheck(a__12987)->FMGL(raw))->unchecked_set((__extension__ ({
                        
                        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12981 = i__12983;
                        x10_long j__12982 = j__12984;
                        ((j__12982) + (((i__12981) * (::x10aux::nullCheck(a__12987)->FMGL(numElems_2)))));
                    }))
                    , v__12985);
                    
                    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__12986 = v__12985;
                    
                    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                    ret__12986;
                }
            }
            
            //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int k;
                for (k = ((x10_int)0); ((((x10_long)(k))) < (this->FMGL(size)));
                     k = ((k) + (((x10_int)1)))) {
                    
                    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if ((!::x10aux::struct_equals((__extension__ ({
                                                      
                                                      //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                      x10_long i__11125 =
                                                        ((x10_long)(i));
                                                      x10_long j__11126 =
                                                        ((x10_long)(k));
                                                      x10_double ret__11127;
                                                      
                                                      //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                      ret__11127 =
                                                        (::x10aux::nullCheck(countsOfTimesForSite)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                          
                                                          //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                          x10_long i__12994 =
                                                            i__11125;
                                                          x10_long j__12995 =
                                                            j__11126;
                                                          ((j__12995) + (((i__12994) * (::x10aux::nullCheck(countsOfTimesForSite)->FMGL(numElems_2)))));
                                                      }))
                                                      );
                                                      ret__11127;
                                                  }))
                                                  , 0.0)))
                    {
                        
                        //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        entropyRow = ((entropyRow) + (((((((((x10_double) (((x10_long)-1ll)))) * ((__extension__ ({
                            
                            //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11131 = ((x10_long)(i));
                            x10_long j__11132 = ((x10_long)(k));
                            x10_double ret__11133;
                            
                            //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__11133 = (::x10aux::nullCheck(countsOfTimesForSite)->FMGL(raw))->unchecked_apply((__extension__ ({
                                
                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__12996 = i__11131;
                                x10_long j__12997 = j__11132;
                                ((j__12997) + (((i__12996) * (::x10aux::nullCheck(countsOfTimesForSite)->FMGL(numElems_2)))));
                            }))
                            );
                            ret__11133;
                        }))
                        ))) / (((x10_double) (this->FMGL(populationSize)))))) * (::x10::lang::MathNatives::log10((((__extension__ ({
                            
                            //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__11137 = ((x10_long)(i));
                            x10_long j__11138 = ((x10_long)(k));
                            x10_double ret__11139;
                            
                            //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            ret__11139 = (::x10aux::nullCheck(countsOfTimesForSite)->FMGL(raw))->unchecked_apply((__extension__ ({
                                
                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                x10_long i__12998 = i__11137;
                                x10_long j__12999 = j__11138;
                                ((j__12999) + (((i__12998) * (::x10aux::nullCheck(countsOfTimesForSite)->FMGL(numElems_2)))));
                            }))
                            );
                            ret__11139;
                        }))
                        ) / (((x10_double) (this->FMGL(populationSize))))))))));
                    }
                    
                }
            }
            
            //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            entropyTotal = ((entropyTotal) + (entropyRow));
            
            //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            entropyRow = 0.0;
        }
    }
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    entropyTotal = ((entropyTotal) / (((((x10_double) (this->FMGL(size)))) * (::x10::lang::MathNatives::log10(((x10_double) (this->FMGL(size))))))));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return entropyTotal;
    
}

//#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printMatrix(x10_int size,
                                             ::x10::array::Array_2<x10_double>* matrix) {
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__13033 = ::x10aux::makeStringLit("*******"); strLit__13033; }))));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (size)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((j) < (size)); j =
                                                         ((j) + (((x10_int)1))))
                {
                    
                    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus((__extension__ ({
                          
                          //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          x10_long i__12512 = ((x10_long)(i));
                          x10_long j__12513 = ((x10_long)(j));
                          x10_double ret__12514;
                          
                          //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                          ret__12514 = (::x10aux::nullCheck(matrix)->FMGL(raw))->unchecked_apply((__extension__ ({
                              
                              //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                              x10_long i__13000 = i__12512;
                              x10_long j__13001 = j__12513;
                              ((j__13001) + (((i__13000) * (::x10aux::nullCheck(matrix)->FMGL(numElems_2)))));
                          }))
                          );
                          ret__12514;
                      }))
                      , (__extension__ ({ static ::x10::lang::String* strLit__13034 = ::x10aux::makeStringLit(" "); strLit__13034; }))));
                }
            }
            
            //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__13035 = ::x10aux::makeStringLit(""); strLit__13035; }))));
        }
    }
    
}

//#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateStandardDesviation(
  x10_double media) {
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double standardDesviation = 0.0;
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double counter = 0.0;
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((i) + (((x10_int)1))); ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    counter = ((counter) + (1.0));
                    
                    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    standardDesviation = (((((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__12520 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12518 = ((x10_long)(i));
                        x10_long j__12519 = ((x10_long)(j));
                        x10_double ret__12521;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12521 = (::x10aux::nullCheck(this__12520)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13002 = i__12518;
                            x10_long j__13003 = j__12519;
                            ((j__13003) + (((i__13002) * (::x10aux::nullCheck(this__12520)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12521;
                    }))
                    ) - (media))) * ((((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__12527 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12525 = ((x10_long)(i));
                        x10_long j__12526 = ((x10_long)(j));
                        x10_double ret__12528;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12528 = (::x10aux::nullCheck(this__12527)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__13004 = i__12525;
                            x10_long j__13005 = j__12526;
                            ((j__13005) + (((i__13004) * (::x10aux::nullCheck(this__12527)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__12528;
                    }))
                    ) - (media))));
                }
            }
            
        }
    }
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return ::x10::lang::MathNatives::sqrt(((standardDesviation) / (counter)));
    
}

//#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::distance(::x10::lang::Rail< x10_int >* indiv1,
                                                ::x10::lang::Rail< x10_int >* indiv2) {
    
    //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long siz = (x10_long)(::x10aux::nullCheck(indiv1)->FMGL(size));
    
    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_int i__2243max__13006 = ((((x10_int) (siz))) - (((x10_int)1)));
    {
        x10_int i__13007;
        for (i__13007 = ((x10_int)0); ((i__13007) <= (i__2243max__13006));
             i__13007 = ((i__13007) + (((x10_int)1)))) {
            x10_int i__13008 = i__13007;
            
            //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(indiv1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__13008))),
                                          ::x10aux::nullCheck(indiv2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__13008))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (siz))));
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return dist;
    
}

//#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::sort() {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* a__13009 =
      this->FMGL(population);
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>* cmp__13010 =
      this->FMGL(cmp);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< ::cpls::solver::GAIndividual* >(
      a__13009, ((x10_long)0ll), (((x10_long)(::x10aux::nullCheck(a__13009)->FMGL(size))) - (((x10_long)1ll))),
      cmp__13010);
}

//#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_long cpls::solver::GAPopulation::getPopulationSize() {
    
    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return this->FMGL(populationSize);
    
}

//#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setCost(x10_long index, x10_long cost) {
    
    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                          index))->setCost(cost);
}

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
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
        
        //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
        ::cpls::util::Monitor* alloc__2182 =  (new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor());
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        ::x10::lang::String* n__13011 = (__extension__ ({ static ::x10::lang::String* strLit__13039 = ::x10aux::makeStringLit("CPLSNode"); strLit__13039; }));
        
        //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2182->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__2182->FMGL(name) = n__13011;
        alloc__2182;
    }))
    ;
    this->FMGL(distanceMatrix) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_double>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(kill) = false;
    this->FMGL(size) = ((x10_long)(((x10_int)0)));
    this->FMGL(cmp) = reinterpret_cast< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(sizeof(cpls_solver_GAPopulation__closure__1)))cpls_solver_GAPopulation__closure__1()));
}
const ::x10aux::serialization_id_t cpls::solver::GAPopulation::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::GAPopulation::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::GAPopulation::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(population));
    buf.write(this->FMGL(populationSize));
    buf.write(this->FMGL(monitor));
    buf.write(this->FMGL(distanceMatrix));
    buf.write(this->FMGL(problemModel));
    buf.write(this->FMGL(kill));
    buf.write(this->FMGL(size));
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
    FMGL(distanceMatrix) = buf.read< ::x10::array::Array_2<x10_double>*>();
    FMGL(problemModel) = buf.read< ::cpls::problem::ProblemGenericModel*>();
    FMGL(kill) = buf.read<x10_boolean>();
    FMGL(size) = buf.read<x10_long>();
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
