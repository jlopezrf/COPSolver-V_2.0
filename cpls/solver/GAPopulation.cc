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
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/lang/Runtime.h>
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
        
        //#line 213 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
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
        return "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10:213";
    }

};

#endif // CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE

//#line 13 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 14 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 15 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 16 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 17 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 18 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 19 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 21 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::initialize(x10_long populationSize, x10_long size,
                                            ::cpls::problem::ProblemGenericModel* problemModel,
                                            x10_long seed) {
    
    //#line 22 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(population) = ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(populationSize);
    
    //#line 24 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(size) = size;
    
    //#line 25 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(populationSize) = populationSize;
    
    //#line 26 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 27 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::util::Random* random = ::x10::util::Random::_make(seed);
    
    //#line 28 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(distanceMatrix) = ::x10::array::Array_2<x10_double>::_make(populationSize,
                                                                          populationSize,
                                                                          ((x10_double) (((x10_int)0))));
    
    //#line 29 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 30 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            x10_long newCost;
            
            //#line 31 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            x10_long indivCost;
            
            //#line 32 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            x10_long seed1 = random->nextLong();
            
            //#line 34 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
              ((x10_long)(k)), ::cpls::solver::GAIndividual::_make(size,
                                                                   seed1));
            
            //#line 35 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->initialize();
            
            //#line 36 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              ::x10aux::nullCheck(problemModel)->costOfSolution(
                size, (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__41403 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(k))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41403)->FMGL(size)),
                                                   size))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44085 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__44085; })))));
                    }
                    t__41403;
                }))
                ));
        }
    }
    
    //#line 38 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__44086 = ::x10aux::makeStringLit("Entropia inicial de la poblacion: "); strLit__44086; })), this->entropyOfPopulation())));
}

//#line 41 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::applyLS(x10_long size, ::cpls::solver::HeuristicSolver* heuristicSolverAux,
                                         x10_int indexIni) {
    
    //#line 42 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long indivCost;
    
    //#line 43 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long newCost;
    
    //#line 44 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = indexIni; ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 46 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->clearProblemModel();
            
            //#line 48 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->setVariables(
              size, (__extension__ ({
                  ::x10::lang::Rail< x10_int >* t__41422 =
                    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(k))))->getGenes();
                  if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41422)->FMGL(size)),
                                                 size))))
                  {
                      ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44088 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__44088; })))));
                  }
                  t__41422;
              }))
              );
            
            //#line 49 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            indivCost = ::x10aux::nullCheck(heuristicSolverAux)->costOfSolution();
            
            //#line 50 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            newCost = indivCost;
            
            //#line 53 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::lang::Rail< x10_int >* bestConf = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                           ((x10_long)(k))))->getGenes();
            
            //#line 54 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)1000ll)));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 55 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    newCost = ::x10aux::nullCheck(heuristicSolverAux)->search(
                                newCost, (x10_long)0x7fffffffffffffffLL,
                                i);
                    
                    //#line 57 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if (((newCost) < (indivCost))) {
                        
                        //#line 58 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10::lang::Rail< void >::copy< x10_int >(
                          (__extension__ ({
                              ::x10::lang::Rail< x10_int >* t__41442 =
                                ::x10aux::nullCheck(heuristicSolverAux)->getVariables();
                              if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41442)->FMGL(size)),
                                                             size))))
                              {
                                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44090 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__44090; })))));
                              }
                              t__41442;
                          }))
                          , (__extension__ ({
                              ::x10::lang::Rail< x10_int >* t__41444 =
                                bestConf;
                              if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41444)->FMGL(size)),
                                                             size))))
                              {
                                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44091 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==size}"); strLit__44091; })))));
                              }
                              t__41444;
                          }))
                          );
                        
                        //#line 59 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        indivCost = newCost;
                    }
                    
                    //#line 61 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    ::x10::lang::Runtime::probe();
                    
                    //#line 62 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if (this->FMGL(kill)) {
                        
                        //#line 64 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 67 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              indivCost);
            
            //#line 68 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setGenes(
              bestConf);
            
            //#line 69 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::lang::Runtime::probe();
            
            //#line 70 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            if (this->FMGL(kill)) {
                
                //#line 72 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                break;
            }
            
        }
    }
    
}

//#line 77 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 78 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 79 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__44095 = ::x10aux::makeStringLit("  "); strLit__44095; }))));
        }
    }
    
    //#line 81 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__44096 = ::x10aux::makeStringLit("\n"); strLit__44096; })));
}

//#line 84 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printPopulation() {
    
    //#line 85 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(populationSize)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 86 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            this->printVector(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                    ((x10_long)(i))))->getGenes());
        }
    }
    
}

//#line 90 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
::cpls::solver::GAIndividual* cpls::solver::GAPopulation::getIndividual(
  x10_long index) {
    
    //#line 91 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
             index);
    
}

//#line 94 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setIndividual(x10_long index,
                                               ::cpls::solver::GAIndividual* individual) {
    
    //#line 95 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      index, individual);
}

//#line 98 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setKill(x10_boolean value) {
    
    //#line 102 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->FMGL(kill) = value;
}

//#line 105 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                                   x10_long index1,
                                                   x10_long index2,
                                                   ::x10::util::Random* random) {
    
    //#line 106 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::util::RailUtils::sort< ::cpls::solver::GAIndividual* >(
      mutatedSons, this->FMGL(cmp));
    
    //#line 107 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double dist = 0.0;
    
    //#line 108 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double meanDist = 0.0;
    
    //#line 109 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 110 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__41846 =
      mutatedSons;
    x10_long size__41847 = (x10_long)(::x10aux::nullCheck(rail__41846)->FMGL(size));
    {
        x10_long idx__41848;
        for (idx__41848 = ((x10_long)0ll); ((idx__41848) < (size__41847));
             idx__41848 = ((idx__41848) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* mutSon__41849 =
              ::x10aux::nullCheck(rail__41846)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                idx__41848);
            
            //#line 111 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int i__41845;
                for (i__41845 = ((x10_int)0); ((((x10_long)(i__41845))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     i__41845 = ((i__41845) + (((x10_int)1))))
                {
                    
                    //#line 112 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    dist = this->distance(::x10aux::nullCheck(mutSon__41849)->getGenes(),
                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                ((x10_long)(i__41845))))->getGenes());
                    
                    //#line 113 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(dist, 0.0)))
                    {
                        
                        //#line 114 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        meanDist = 0.0;
                        
                        //#line 115 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                    //#line 117 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    meanDist = ((meanDist) + (dist));
                }
            }
            
            //#line 119 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            meanDist = ((meanDist) / (((x10_double) (this->FMGL(populationSize)))));
            
            //#line 120 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            if (((meanDist) > (0.0))) {
                
                //#line 121 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
                  ((this->FMGL(populationSize)) - (((((x10_long)2ll)) - (((x10_long)(count)))))),
                  mutSon__41849);
            }
            
            //#line 123 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            count = ((count) + (((x10_int)1)));
            
            //#line 124 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            meanDist = 0.0;
        }
    }
    
}

//#line 128 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::renewPopulation(x10_int indexIni) {
    
    //#line 129 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long sz = this->FMGL(size);
    
    //#line 130 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = indexIni; ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 131 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->initialize();
            
            //#line 132 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                sz, (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__41537 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41537)->FMGL(size)),
                                                   sz))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44104 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__44104; })))));
                    }
                    t__41537;
                }))
                ));
        }
    }
    
    //#line 134 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    this->sort();
}

//#line 137 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateMidDistance(
  ) {
    
    //#line 138 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double dist = ((x10_double) (((x10_int)0)));
    
    //#line 139 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double media = 0.0;
    
    //#line 140 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 141 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = i; ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 142 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(i, j))) {
                        
                        //#line 143 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__set(
                          ((x10_long)(i)), ((x10_long)(j)),
                          0.0);
                    } else {
                        
                        //#line 145 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        dist = this->distance(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(i))))->getGenes(),
                                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(j))))->getGenes());
                        
                        //#line 147 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__set(
                          ((x10_long)(i)), ((x10_long)(j)),
                          dist);
                        
                        //#line 148 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        ::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__set(
                          ((x10_long)(j)), ((x10_long)(i)),
                          dist);
                        
                        //#line 149 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        media = ((media) + (((((x10_double) (((x10_long)2ll)))) * (dist))));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 153 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    media = ((media) / (((x10_double) ((((((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))) - (((x10_long)1ll)))) * ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))))))));
    
    //#line 154 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return media;
    
}

//#line 157 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::entropyOfPopulation(
  ) {
    
    //#line 160 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::array::Array_2<x10_double>* countsOfTimesForSite =
      ::x10::array::Array_2<x10_double>::_make(this->FMGL(size),
                                               this->FMGL(size),
                                               ((x10_double) (((x10_int)0))));
    
    //#line 161 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double entropyRow = 0.0;
    
    //#line 162 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double entropyTotal = 0.0;
    
    //#line 164 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 165 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((((x10_long)(j))) < (this->FMGL(populationSize)));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 166 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    ::x10::array::Array_2<x10_double>* a__41850 =
                      countsOfTimesForSite;
                    x10_long i__41851 = ((x10_long)(i));
                    x10_long i__41852 = ((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                                              ((x10_long)(j))))->getGenes())->x10::lang::Rail< x10_int >::__apply(
                                                      ((x10_long)(i)))));
                    x10_double r__41853 = ((::x10aux::nullCheck(a__41850)->x10::array::Array_2<x10_double>::__apply(
                                              i__41851, i__41852)) + (1.0));
                    ::x10aux::nullCheck(a__41850)->x10::array::Array_2<x10_double>::__set(
                      i__41851, i__41852, r__41853);
                }
            }
            
            //#line 168 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int k;
                for (k = ((x10_int)0); ((((x10_long)(k))) < (this->FMGL(size)));
                     k = ((k) + (((x10_int)1)))) {
                    
                    //#line 169 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    if ((!::x10aux::struct_equals(::x10aux::nullCheck(countsOfTimesForSite)->x10::array::Array_2<x10_double>::__apply(
                                                    ((x10_long)(i)),
                                                    ((x10_long)(k))),
                                                  0.0))) {
                        
                        //#line 170 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                        entropyRow = ((entropyRow) + (((((((((x10_double) (((x10_long)-1ll)))) * (::x10aux::nullCheck(countsOfTimesForSite)->x10::array::Array_2<x10_double>::__apply(
                                                                                                    ((x10_long)(i)),
                                                                                                    ((x10_long)(k)))))) / (((x10_double) (this->FMGL(populationSize)))))) * (::x10::lang::MathNatives::log10(((::x10aux::nullCheck(countsOfTimesForSite)->x10::array::Array_2<x10_double>::__apply(
                                                                                                                                                                                                                 ((x10_long)(i)),
                                                                                                                                                                                                                 ((x10_long)(k)))) / (((x10_double) (this->FMGL(populationSize))))))))));
                    }
                    
                }
            }
            
            //#line 174 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            entropyTotal = ((entropyTotal) + (entropyRow));
            
            //#line 175 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            entropyRow = 0.0;
        }
    }
    
    //#line 177 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    entropyTotal = ((entropyTotal) / (((((x10_double) (this->FMGL(size)))) * (::x10::lang::MathNatives::log10(((x10_double) (this->FMGL(size))))))));
    
    //#line 178 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return entropyTotal;
    
}

//#line 181 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printMatrix(x10_int size,
                                             ::x10::array::Array_2<x10_double>* matrix) {
    
    //#line 182 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44117 = ::x10aux::makeStringLit("*******"); strLit__44117; }))));
    
    //#line 183 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (size)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 184 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((j) < (size)); j =
                                                         ((j) + (((x10_int)1))))
                {
                    
                    //#line 185 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10aux::nullCheck(matrix)->x10::array::Array_2<x10_double>::__apply(
                                                    ((x10_long)(i)),
                                                    ((x10_long)(j))), (__extension__ ({ static ::x10::lang::String* strLit__44120 = ::x10aux::makeStringLit(" "); strLit__44120; }))));
                }
            }
            
            //#line 187 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44121 = ::x10aux::makeStringLit(""); strLit__44121; }))));
        }
    }
    
}

//#line 191 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateStandardDesviation(
  x10_double media) {
    
    //#line 192 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double standardDesviation = 0.0;
    
    //#line 193 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double counter = 0.0;
    
    //#line 194 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 195 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((i) + (((x10_int)1))); ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 196 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    counter = ((counter) + (1.0));
                    
                    //#line 197 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
                    standardDesviation = ((((::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__apply(
                                               ((x10_long)(i)),
                                               ((x10_long)(j)))) - (media))) * (((::x10aux::nullCheck(this->FMGL(distanceMatrix))->x10::array::Array_2<x10_double>::__apply(
                                                                                    ((x10_long)(i)),
                                                                                    ((x10_long)(j)))) - (media))));
                }
            }
            
        }
    }
    
    //#line 200 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return ::x10::lang::MathNatives::sqrt(((standardDesviation) / (counter)));
    
}

//#line 203 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::distance(::x10::lang::Rail< x10_int >* indiv1,
                                                ::x10::lang::Rail< x10_int >* indiv2) {
    
    //#line 204 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 205 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_long siz = (x10_long)(::x10aux::nullCheck(indiv1)->FMGL(size));
    
    //#line 206 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_int i__41830min__41854 = ((x10_int)0);
    x10_int i__41830max__41855 = ((((x10_int) (siz))) - (((x10_int)1)));
    {
        x10_int i__41856;
        for (i__41856 = i__41830min__41854; ((i__41856) <= (i__41830max__41855));
             i__41856 = ((i__41856) + (((x10_int)1)))) {
            x10_int i__41857 = i__41856;
            
            //#line 207 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(indiv1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__41857))),
                                          ::x10aux::nullCheck(indiv2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__41857))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 209 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (siz))));
    
    //#line 210 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return dist;
    
}

//#line 213 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"

//#line 215 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::sort() {
    
    //#line 216 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10::util::RailUtils::sort< ::cpls::solver::GAIndividual* >(
      this->FMGL(population), this->FMGL(cmp));
}

//#line 219 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
x10_long cpls::solver::GAPopulation::getPopulationSize() {
    
    //#line 220 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    return this->FMGL(populationSize);
    
}

//#line 223 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setCost(x10_long index, x10_long cost) {
    
    //#line 224 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                          index))->setCost(cost);
}

//#line 11 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GAPopulation.x10"
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
    this->FMGL(monitor) = ::cpls::util::Monitor::_make((__extension__ ({ static ::x10::lang::String* strLit__44129 = ::x10aux::makeStringLit("CPLSNode"); strLit__44129; })));
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
