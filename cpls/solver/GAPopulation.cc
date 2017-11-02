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
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Runtime.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Float.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
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
        
        //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10:157";
    }

};

#endif // CPLS_SOLVER_GAPOPULATION__CLOSURE__1_CLOSURE

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::initialize(x10_long populationSize, x10_long size,
                                            ::cpls::problem::ProblemGenericModel* problemModel,
                                            x10_long seed) {
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(population) = ::x10::lang::Rail< ::cpls::solver::GAIndividual* >::_make(populationSize);
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(populationSize) = populationSize;
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(problemModel) = problemModel;
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::util::Random* random =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
    (random)->::x10::util::Random::_constructor(seed);
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(distanceMatrix) = (__extension__ ({
        ::x10::array::Array_2<x10_double>* alloc__1524 = 
        (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_double> >()) ::x10::array::Array_2<x10_double>());
        (alloc__1524)->::x10::array::Array_2<x10_double>::_constructor(
          populationSize, populationSize, ((x10_double) (((x10_int)0))));
        alloc__1524;
    }))
    ;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long newCost;
            
            //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long indivCost;
            
            //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            x10_long seed1 = random->nextLong();
            
            //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
              ((x10_long)(k)), (__extension__ ({
                  ::cpls::solver::GAIndividual* alloc__1525 =
                     (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
                  (alloc__1525)->::cpls::solver::GAIndividual::_constructor(
                    size, seed1);
                  alloc__1525;
              }))
              );
            
            //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->initialize();
        }
    }
    
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::applyLS(x10_long size, ::cpls::solver::HeuristicSolver* heuristicSolverAux) {
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long indivCost;
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long newCost;
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int k;
        for (k = ((x10_int)0); ((((x10_long)(k))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             k = ((k) + (((x10_int)1)))) {
            
            //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(heuristicSolverAux)->clearProblemModel();
            
            //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::cpls::solver::HeuristicSolver* t__12283 = heuristicSolverAux;
            ::x10::lang::Rail< x10_int >* variables__12284 =
              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                    ((x10_long)(k))))->getGenes();
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(variables__12284)->FMGL(size)),
                                           ::x10aux::nullCheck(t__12283)->FMGL(sz)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__12324 = ::x10aux::makeStringLit("!(variables$1272.size == t$1271.sz)"); strLit__12324; })))));
            }
            ::x10aux::nullCheck(t__12283)->setVariables(variables__12284);
            
            //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            indivCost = ::x10aux::nullCheck(heuristicSolverAux)->costOfSolution();
            
            //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            newCost = indivCost;
            
            //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::lang::Rail< x10_int >* bestConf = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                           ((x10_long)(k))))->getGenes();
            
            //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)5000ll)));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    newCost = ::x10aux::nullCheck(heuristicSolverAux)->search(
                                newCost, (x10_long)0x7fffffffffffffffLL,
                                i);
                    
                    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if (((newCost) < (indivCost))) {
                        
                        //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::lang::Rail< void >::copy< x10_int >(
                          ::x10aux::nullCheck(heuristicSolverAux)->getVariables(),
                          bestConf);
                        
                        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        indivCost = newCost;
                    }
                    
                }
            }
            
            //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setCost(
              indivCost);
            
            //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(k))))->setGenes(
              bestConf);
            
            //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::lang::Runtime::probe();
            
            //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            if (this->FMGL(kill)) {
                
                //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                break;
            }
            
        }
    }
    
}

//#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__12329 = ::x10aux::makeStringLit("  "); strLit__12329; }))));
        }
    }
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__12330 = ::x10aux::makeStringLit("\n"); strLit__12330; })));
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
::cpls::solver::GAIndividual* cpls::solver::GAPopulation::getIndividual(
  x10_long index) {
    
    //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
             index);
    
}

//#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setIndividual(x10_long index,
                                               ::cpls::solver::GAIndividual* individual) {
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
      index, individual);
}

//#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::switchKill() {
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->FMGL(kill) = !(this->FMGL(kill));
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::refreshPopulation(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons,
                                                   x10_long index1,
                                                   x10_long index2,
                                                   ::x10::util::Random* random) {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* a__12286 =
      mutatedSons;
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>* cmp__12287 =
      this->FMGL(cmp);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< ::cpls::solver::GAIndividual* >(
      a__12286, ((x10_long)0ll), (((x10_long)(::x10aux::nullCheck(a__12286)->FMGL(size))) - (((x10_long)1ll))),
      cmp__12287);
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double dist = 0.0;
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double meanDist = 0.0;
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__12288 =
      mutatedSons;
    x10_long size__12289 = (x10_long)(::x10aux::nullCheck(rail__12288)->FMGL(size));
    {
        x10_long idx__12290;
        for (idx__12290 = ((x10_long)0ll); ((idx__12290) < (size__12289));
             idx__12290 = ((idx__12290) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* mutSon__12291 =
              ::x10aux::nullCheck(rail__12288)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                idx__12290);
            
            //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int i__12285;
                for (i__12285 = ((x10_int)0); ((((x10_long)(i__12285))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     i__12285 = ((i__12285) + (((x10_int)1))))
                {
                    
                    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    dist = this->distance(::x10aux::nullCheck(mutSon__12291)->getGenes(),
                                          ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                ((x10_long)(i__12285))))->getGenes());
                    
                    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(dist, 0.0)))
                    {
                        
                        //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        meanDist = 0.0;
                        
                        //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        break;
                    }
                    
                    //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    meanDist = ((meanDist) + (dist));
                }
            }
            
            //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            meanDist = ((meanDist) / (((x10_double) (this->FMGL(populationSize)))));
            
            //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            if (((meanDist) > (0.0))) {
                
                //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                ::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__set(
                  ((this->FMGL(populationSize)) - (((((x10_long)2ll)) - (((x10_long)(count)))))),
                  mutSon__12291);
            }
            
            //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            count = ((count) + (((x10_int)1)));
            
            //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            meanDist = 0.0;
        }
    }
    
}

//#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::renewPopulation(x10_float percentaje) {
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ::x10::lang::FloatNatives::toInt(((((x10_float) ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))))) * (percentaje)));
             ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->initialize();
            
            //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              (__extension__ ({
                  ::cpls::problem::ProblemGenericModel* t__1378 =
                    this->FMGL(problemModel);
                  x10_long sz__1379 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                            ((x10_long)(i))))->FMGL(size);
                  ::x10::lang::Rail< x10_int >* solution__1380 =
                    ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(i))))->getGenes();
                  if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(solution__1380)->FMGL(size)),
                                                 sz__1379))))
                  {
                      ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__12338 = ::x10aux::makeStringLit("!(solution$1380.size == sz$1379)"); strLit__12338; })))));
                  }
                  ::x10aux::nullCheck(t__1378)->costOfSolution(
                    sz__1379, solution__1380);
              }))
              );
        }
    }
    
    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    this->sort();
}

//#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateMidDistance(
  ) {
    
    //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double dist = ((x10_double) (((x10_int)0)));
    
    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double media = 0.0;
    
    //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = i; ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    if ((::x10aux::struct_equals(i, j))) {
                        
                        //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::array::Array_2<x10_double>* this__12294 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12295 = ((x10_long)(i));
                        x10_long j__12296 = ((x10_long)(j));
                        x10_double ret__12297;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__12294)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12292 = i__12295;
                            x10_long j__12293 = j__12296;
                            ((j__12293) + (((i__12292) * (::x10aux::nullCheck(this__12294)->FMGL(numElems_2)))));
                        }))
                        , 0.0);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12297 = 0.0;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12297;
                    } else {
                        
                        //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        dist = this->distance(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(i))))->getGenes(),
                                              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                                    ((x10_long)(j))))->getGenes());
                        
                        //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::array::Array_2<x10_double>* this__12302 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12303 = ((x10_long)(i));
                        x10_long j__12304 = ((x10_long)(j));
                        x10_double v__12305 = dist;
                        x10_double ret__12306;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__12302)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12298 = i__12303;
                            x10_long j__12299 = j__12304;
                            ((j__12299) + (((i__12298) * (::x10aux::nullCheck(this__12302)->FMGL(numElems_2)))));
                        }))
                        , v__12305);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12306 = v__12305;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12306;
                        
                        //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        ::x10::array::Array_2<x10_double>* this__12307 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__12308 = ((x10_long)(j));
                        x10_long j__12309 = ((x10_long)(i));
                        x10_double v__12310 = dist;
                        x10_double ret__12311;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__12307)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12300 = i__12308;
                            x10_long j__12301 = j__12309;
                            ((j__12301) + (((i__12300) * (::x10aux::nullCheck(this__12307)->FMGL(numElems_2)))));
                        }))
                        , v__12310);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12311 = v__12310;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__12311;
                        
                        //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                        media = ((media) + (((((x10_double) (((x10_long)2ll)))) * (dist))));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    media = ((media) / (((x10_double) ((((((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))) - (((x10_long)1ll)))) * ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))))))));
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return media;
    
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::calculateStandardDesviation(
  x10_double media) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double standardDesviation = 0.0;
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double counter = 0.0;
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            {
                x10_int j;
                for (j = ((i) + (((x10_int)1))); ((((x10_long)(j))) < ((x10_long)(::x10aux::nullCheck(this->FMGL(population))->FMGL(size))));
                     j = ((j) + (((x10_int)1)))) {
                    
                    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    counter = ((counter) + (1.0));
                    
                    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
                    standardDesviation = (((((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__10482 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__10480 = ((x10_long)(i));
                        x10_long j__10481 = ((x10_long)(j));
                        x10_double ret__10483;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__10483 = (::x10aux::nullCheck(this__10482)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12312 = i__10480;
                            x10_long j__12313 = j__10481;
                            ((j__12313) + (((i__12312) * (::x10aux::nullCheck(this__10482)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__10483;
                    }))
                    ) - (media))) * ((((__extension__ ({
                        ::x10::array::Array_2<x10_double>* this__10489 =
                          this->FMGL(distanceMatrix);
                        
                        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__10487 = ((x10_long)(i));
                        x10_long j__10488 = ((x10_long)(j));
                        x10_double ret__10490;
                        
                        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__10490 = (::x10aux::nullCheck(this__10489)->FMGL(raw))->unchecked_apply((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__12314 = i__10487;
                            x10_long j__12315 = j__10488;
                            ((j__12315) + (((i__12314) * (::x10aux::nullCheck(this__10489)->FMGL(numElems_2)))));
                        }))
                        );
                        ret__10490;
                    }))
                    ) - (media))));
                }
            }
            
        }
    }
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return ::x10::lang::MathNatives::sqrt(((standardDesviation) / (counter)));
    
}

//#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_double cpls::solver::GAPopulation::distance(::x10::lang::Rail< x10_int >* indiv1,
                                                ::x10::lang::Rail< x10_int >* indiv2) {
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_int count = ((x10_int)0);
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_long siz = (x10_long)(::x10aux::nullCheck(indiv1)->FMGL(size));
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_int i__1587max__12316 = ((((x10_int) (siz))) - (((x10_int)1)));
    {
        x10_int i__12317;
        for (i__12317 = ((x10_int)0); ((i__12317) <= (i__1587max__12316));
             i__12317 = ((i__12317) + (((x10_int)1)))) {
            x10_int i__12318 = i__12317;
            
            //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(indiv1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__12318))),
                                          ::x10aux::nullCheck(indiv2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__12318))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (siz))));
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return dist;
    
}

//#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"

//#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::sort() {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* a__12319 =
      this->FMGL(population);
    ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>* cmp__12320 =
      this->FMGL(cmp);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/RailUtils.x10"
    ::x10::util::RailUtils::qsort< ::cpls::solver::GAIndividual* >(
      a__12319, ((x10_long)0ll), (((x10_long)(::x10aux::nullCheck(a__12319)->FMGL(size))) - (((x10_long)1ll))),
      cmp__12320);
}

//#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
x10_long cpls::solver::GAPopulation::getPopulationSize() {
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
    return this->FMGL(populationSize);
    
}

//#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
void cpls::solver::GAPopulation::setCost(x10_long index, x10_long cost) {
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
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
        ::cpls::util::Monitor* alloc__1526 =  (new (::x10aux::alloc_z< ::cpls::util::Monitor>()) ::cpls::util::Monitor());
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        ::x10::lang::String* n__12321 = (__extension__ ({ static ::x10::lang::String* strLit__12344 = ::x10aux::makeStringLit("CPLSNode"); strLit__12344; }));
        
        //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__1526->cpls::util::Monitor::__fieldInitializers_cpls_util_Monitor();
        
        //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/Monitor.x10"
        alloc__1526->FMGL(name) = n__12321;
        alloc__1526;
    }))
    ;
    this->FMGL(distanceMatrix) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_double>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(problemModel) = (::x10aux::class_cast_unchecked< ::cpls::problem::ProblemGenericModel*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(kill) = false;
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
