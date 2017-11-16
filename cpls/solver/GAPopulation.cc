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
#include <x10/lang/FailedDynamicCheckException.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/lang/Runtime.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Math.h>
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
        
        //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10:171";
    }

};

#endif // CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::initialize(x10_long populationSize, x10_long size,
                                            ::cpls::problem::ProblemGenericModel* problemModel,
                                            x10_long seed) {
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(population) = ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(populationSize);
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(size) = size;
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(populationSize) = populationSize;
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::util::Random* random = ::x10::util::Random::_make(seed);
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(distanceMatrix) = ::x10::array::Array_2<x10_double>::_make(populationSize,
                                                                          populationSize,
                                                                          ((x10_double) (((x10_int)0))));
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            x10_long newCost;
            
            //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            x10_long indivCost;
            
            //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            x10_long seed1 = random->nextLong();
            
            //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
              ((x10_long)(k)), ::cpls::solver::GAIndividual::_make(size,
                                                                   seed1));
            
            //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->initialize();
            
            //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              ::x10aux::nullCheck(problemModel)->costOfSolution(
                size, (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__40869 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(k))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__40869)->FMGL(size)),
                                                   size))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43387 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__43387; })))));
                    }
                    t__40869;
                }))
                ));
        }
    }
    
}

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::applyLS(x10_long size, ::cpls::solver::HeuristicSolver* heuristicSolverAux,
                                         x10_int indexIni) {
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long indivCost;
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long newCost;
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = indexIni; ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->clearProblemModel();
            
            //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->setVariables(
              size, (__extension__ ({
                  ::x10::lang::Rail< x10_int >* t__40883 =
                    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(k))))->getGenes();
                  if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__40883)->FMGL(size)),
                                                 size))))
                  {
                      ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43389 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__43389; })))));
                  }
                  t__40883;
              }))
              );
            
            //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            indivCost = ::x10aux::nullCheck(heuristicSolverAux)->costOfSolution();
            
            //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            newCost = indivCost;
            
            //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::lang::Rail< x10_int >* bestConf = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                           ((x10_long)(k))))->getGenes();
            
            //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)1000ll)));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    newCost = ::x10aux::nullCheck(heuristicSolverAux)->search(
                                newCost, (x10_long)0x7fffffffffffffffLL,
                                i);
                    
                    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if (((newCost) < (indivCost))) {
                        
                        //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10::lang::Rail< void >::copy< x10_int >(
                          (__extension__ ({
                              ::x10::lang::Rail< x10_int >* t__40903 =
                                ::x10aux::nullCheck(heuristicSolverAux)->getVariables();
                              if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__40903)->FMGL(size)),
                                                             size))))
                              {
                                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43391 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__43391; })))));
                              }
                              t__40903;
                          }))
                          , (__extension__ ({
                              ::x10::lang::Rail< x10_int >* t__40905 =
                                bestConf;
                              if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__40905)->FMGL(size)),
                                                             size))))
                              {
                                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43392 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__43392; })))));
                              }
                              t__40905;
                          }))
                          );
                        
                        //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        indivCost = newCost;
                    }
                    
                    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    ::x10::lang::Runtime::probe();
                    
                    //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if (this->FMGL(kill)) {
                        
                        //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              indivCost);
            
            //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setGenes(
              bestConf);
            
            //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::lang::Runtime::probe();
            
            //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            if (this->FMGL(kill)) {
                
                //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                break;
            }
            
        }
    }
    
}

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__43396 = ::x10aux::makeStringLit("  "); strLit__43396; }))));
        }
    }
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__43397 = ::x10aux::makeStringLit("\n"); strLit__43397; })));
}

//#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
::cpls::solver::GAIndividual* cpls::solver::GAPopulation::getIndividual(
  x10_long index) {
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
             index);
    
}

//#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setIndividual(x10_long index,
                                               ::cpls::solver::GAIndividual* individual) {
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      index, individual);
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setKill(x10_boolean value) {
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(kill) = value;
}

//#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                                   x10_long index1,
                                                   x10_long index2,
                                                   ::x10::util::Random* random) {
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::util::RailUtils::sort< ::cpls::solver::GAIndividual* >(
      mutatedSons, this->FMGL(cmp));
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double dist = 0.0;
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double meanDist = 0.0;
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__41167 =
      mutatedSons;
    x10_long size__41168 = (x10_long)(::x10aux::nullCheck(rail__41167)->FMGL(size));
    {
        x10_long idx__41169;
        for (idx__41169 = ((x10_long)0ll); ((idx__41169) < (size__41168));
             idx__41169 = ((idx__41169) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* mutSon__41170 =
              ::x10aux::nullCheck(rail__41167)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                idx__41169);
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int i__41166;
                for (i__41166 = ((x10_int)0); ((((x10_long)(i__41166))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     i__41166 = ((i__41166) + (((x10_int)1))))
                {
                    
                    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    dist = this->distance(::x10aux::nullCheck(mutSon__41170)->getGenes(),
                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                ((x10_long)(i__41166))))->getGenes());
                    
                    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(dist, 0.0)))
                    {
                        
                        //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        meanDist = 0.0;
                        
                        //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                    //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    meanDist = ((meanDist) + (dist));
                }
            }
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            meanDist = ((meanDist) / (((x10_double) (this->FMGL(populationSize)))));
            
            //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            if (((meanDist) > (0.0))) {
                
                //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
                  ((this->FMGL(populationSize)) - (((((x10_long)2ll)) - (((x10_long)(count)))))),
                  mutSon__41170);
            }
            
            //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            count = ((count) + (((x10_int)1)));
            
            //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            meanDist = 0.0;
        }
    }
    
}

//#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::renewPopulation(x10_int indexIni) {
    
    //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long sz = this->FMGL(size);
    
    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = indexIni; ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->initialize();
            
            //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                sz, (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__40986 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__40986)->FMGL(size)),
                                                   sz))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43404 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__43404; })))));
                    }
                    t__40986;
                }))
                ));
        }
    }
    
    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->sort();
}

//#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateMidDistance(
  ) {
    
    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double dist = ((x10_double) (((x10_int)0)));
    
    //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double media = 0.0;
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = i; ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(i, j))) {
                        
                        //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__set(
                          ((x10_long)(i)), ((x10_long)(j)),
                          0.0);
                    } else {
                        
                        //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        dist = this->distance(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(i))))->getGenes(),
                                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(j))))->getGenes());
                        
                        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__set(
                          ((x10_long)(i)), ((x10_long)(j)),
                          dist);
                        
                        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__set(
                          ((x10_long)(j)), ((x10_long)(i)),
                          dist);
                        
                        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        media = ((media) + (((((x10_double) (((x10_long)2ll)))) * (dist))));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    media = ((media) / (((x10_double) ((((((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))) - (((x10_long)1ll)))) * ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))))))));
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return media;
    
}

//#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateStandardDesviation(
  x10_double media) {
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double standardDesviation = 0.0;
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double counter = 0.0;
    
    //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((i) + (((x10_int)1))); ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    counter = ((counter) + (1.0));
                    
                    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    standardDesviation = ((((::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__apply(
                                               ((x10_long)(i)),
                                               ((x10_long)(j)))) - (media))) * (((::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__apply(
                                                                                    ((x10_long)(i)),
                                                                                    ((x10_long)(j)))) - (media))));
                }
            }
            
        }
    }
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return ::x10::lang::MathNatives::sqrt(((standardDesviation) / (counter)));
    
}

//#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::distance(::x10::lang::Rail< x10_int >* indiv1,
                                                ::x10::lang::Rail< x10_int >* indiv2) {
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long siz = (x10_long)(::x10aux::nullCheck(indiv1)->FMGL(size));
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_int i__41151min__41171 = ((x10_int)0);
    x10_int i__41151max__41172 = ((((x10_int) (siz))) - (((x10_int)1)));
    {
        x10_int i__41173;
        for (i__41173 = i__41151min__41171; ((i__41173) <= (i__41151max__41172));
             i__41173 = ((i__41173) + (((x10_int)1)))) {
            x10_int i__41174 = i__41173;
            
            //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(indiv1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__41174))),
                                          ::x10aux::nullCheck(indiv2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__41174))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (siz))));
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return dist;
    
}

//#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::sort() {
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::util::RailUtils::sort< ::cpls::solver::GAIndividual* >(
      this->FMGL(population), this->FMGL(cmp));
}

//#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_long cpls::solver::GAPopulation::getPopulationSize() {
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return this->FMGL(populationSize);
    
}

//#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setCost(x10_long index, x10_long cost) {
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                          index))->setCost(cost);
}

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
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
    this->FMGL(monitor) = ::cpls::util::Monitor::_make((__extension__ ({ static ::x10::lang::String* strLit__43414 = ::x10aux::makeStringLit("CPLSNode"); strLit__43414; })));
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
