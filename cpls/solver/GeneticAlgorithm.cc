/*************************************************/
/* START of GeneticAlgorithm */
#include <cpls/solver/GeneticAlgorithm.h>

#include <cpls/solver/PopulBasedHeuristic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Float.h>
#include <x10/lang/Long.h>
#include <cpls/solver/GAPopulation.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Place.h>
#include <x10/util/Random.h>
#include <cpls/solver/GAIndividual.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/String.h>
#include <x10/lang/Double.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/ArrayList.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE
#define CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class cpls_solver_GeneticAlgorithm__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>::itable<cpls_solver_GeneticAlgorithm__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(::cpls::solver::GAIndividual* a, ::cpls::solver::GAIndividual* b) {
        
        //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        return ((x10_int) (((::x10aux::nullCheck(a)->getCost()) - (::x10aux::nullCheck(b)->getCost()))));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_solver_GeneticAlgorithm__closure__1* storage = ::x10aux::alloc_z<cpls_solver_GeneticAlgorithm__closure__1>();
        buf.record_reference(storage);
        cpls_solver_GeneticAlgorithm__closure__1* this_ = new (storage) cpls_solver_GeneticAlgorithm__closure__1();
        return this_;
    }
    
    cpls_solver_GeneticAlgorithm__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10:110";
    }

};

#endif // CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::_constructor(x10_long sz) {
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    (this)->::cpls::solver::PopulBasedHeuristic::_constructor(sz);
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm();
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->::cpls::solver::PopulBasedHeuristic::FMGL(mySolverType) = ((x10_int)5);
}
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::_make(x10_long sz)
{
    ::cpls::solver::GeneticAlgorithm* this_ = new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm();
    this_->_constructor(sz);
    return this_;
}



//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                     ::cpls::ParamManager* opts) {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::PopulBasedHeuristic::configHeuristic(
      problemModel, opts);
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(populationSize) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__15344 = ::x10aux::makeStringLit("-GA_pz"); strLit__15344; })),
                                   ((((x10_int)2)) * (((x10_int) (((x10_long)::x10aux::num_hosts))))));
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(rate) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__15345 = ::x10aux::makeStringLit("-GA_r"); strLit__15345; })),
                         0.4f);
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(crossingOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__15346 = ::x10aux::makeStringLit("-GA_co"); strLit__15346; })),
                                     ((x10_int)0));
    
    //#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(divOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__15347 = ::x10aux::makeStringLit("-GA_do"); strLit__15347; })),
                                ((x10_int)0));
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(eachIterMigration) = ::x10::lang::FloatNatives::toInt(((((x10_float) (this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)))) * (this->FMGL(rate))));
    }
    
}

//#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::initVariables() {
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->initialize(
      ((x10_long)(this->FMGL(populationSize))), this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->::cpls::solver::PopulBasedHeuristic::FMGL(problemModel),
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::search(x10_long currentCost,
                                                x10_long bestCost,
                                                x10_int nIter) {
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                        ((x10_long)(this->FMGL(populationSize))));
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                   ((x10_long)(this->FMGL(populationSize))));
    } while ((::x10aux::struct_equals(index2, index1)));
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index1);
    
    //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index2);
    
    //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->crossing(indiv1, indiv2);
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons;
    
    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        if ((::x10aux::struct_equals(((nIter) % ::x10aux::zeroCheck(this->FMGL(eachIterMigration))),
                                     ((x10_int)0)))) {
            
            //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            mutatedSons = this->migrate(sons);
        } else {
            
            //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(i))))->setCost(
                      ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                        this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                              ((x10_long)(i))))->getGenes()));
                }
            }
            
            //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            mutatedSons = sons;
        }
        
    } else {
        
        //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->mutate(sons);
    }
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->refreshPopulation(
      mutatedSons, index1, index2, this->::cpls::solver::PopulBasedHeuristic::FMGL(random));
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
    
    //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(currentCostGA) = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                      ((x10_long)0ll)))->getCost();
    
    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if (((this->FMGL(currentCostGA)) < (this->FMGL(bestCostGA))))
    {
        
        //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(bestCostGA) = this->FMGL(currentCostGA);
        
        //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< void >::copy< x10_int >(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                         ((x10_long)0ll)))->getGenes(),
                                                   this->::cpls::solver::PopulBasedHeuristic::FMGL(variables));
    }
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return this->FMGL(currentCostGA);
    
}

//#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::sortPopulation() {
    
    //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::displayInfo(::x10::lang::String* stringMsg) {
    
    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double media = ::x10aux::nullCheck(this->FMGL(population))->calculateMidDistance();
    
    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(stringMsg, media)));
}

//#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__15357 = ::x10aux::makeStringLit("  "); strLit__15357; }))));
        }
    }
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__15358 = ::x10aux::makeStringLit("\n"); strLit__15358; })));
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::crossing(
  ::cpls::solver::GAIndividual* i1, ::cpls::solver::GAIndividual* i2) {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 =  (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
    (indiv1)->::cpls::solver::GAIndividual::_constructor(
      i1, ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 =  (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
    (indiv2)->::cpls::solver::GAIndividual::_constructor(
      i2, ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)0)))) {
        
        //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->uniformCrossover(indiv2);
    } else 
    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)1)))) {
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->partiallyMatchedCrossover(indiv2);
    } else {
        
        //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->insertPathCrossover(indiv2);
    }
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::launchEventForStagnation(
  ) {
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->renewPopulation();
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< x10_int >* genes = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                ((x10_long)0ll)))->getGenes();
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(genes, this->::cpls::solver::PopulBasedHeuristic::FMGL(variables));
}

//#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::mutate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int posChanged = ::x10::lang::FloatNatives::toInt(((((x10_float) (((this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)) / ::x10aux::zeroCheck(((x10_long)2ll)))))) * (this->FMGL(rate))));
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1;
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::util::ArrayList<x10_int>* indexBank;
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__15337 =
      sons;
    x10_long size__15338 = (x10_long)(::x10aux::nullCheck(rail__15337)->FMGL(size));
    {
        x10_long idx__15339;
        for (idx__15339 = ((x10_long)0ll); ((idx__15339) < (size__15338));
             idx__15339 = ((idx__15339) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__15340 = ::x10aux::nullCheck(rail__15337)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__15339);
            
            //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            indexBank = (__extension__ ({
                ::x10::util::ArrayList<x10_int>* alloc__15335 =
                   (new (::x10aux::alloc_z< ::x10::util::ArrayList<x10_int> >()) ::x10::util::ArrayList<x10_int>());
                (alloc__15335)->::x10::util::ArrayList<x10_int>::_constructor(
                  ((x10_long)(((posChanged) * (((x10_int)2))))));
                alloc__15335;
            }))
            ;
            
            //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i__15336;
                for (i__15336 = ((x10_int)0); ((i__15336) < (posChanged));
                     i__15336 = ((i__15336) + (((x10_int)1))))
                {
                    
                    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    if (((::x10aux::nullCheck(this->FMGL(random))->nextFloat()) < (this->FMGL(rate))))
                    {
                        
                        //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ::x10aux::nullCheck(son__15340)->getSize());
                        
                        //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        do {
                            
                            //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                            index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                       ::x10aux::nullCheck(son__15340)->getSize());
                        } while (((::x10aux::struct_equals(index2,
                                                           index1)) &&
                                 ((!(::x10aux::nullCheck(indexBank)->contains(
                                       ((x10_int) (index1)))) &&
                                  !(::x10aux::nullCheck(indexBank)->contains(
                                      ((x10_int) (index2))))))));
                        
                        //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        ::x10aux::nullCheck(indexBank)->add(
                          ((x10_int) (index1)));
                        
                        //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        ::x10aux::nullCheck(indexBank)->add(
                          ((x10_int) (index2)));
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        ::x10aux::nullCheck(son__15340)->swap(
                          ((x10_int) (index1)), ((x10_int) (index2)));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                      ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::migrate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< x10_int >* variab;
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int l;
        for (l = ((x10_int)0); ((((x10_long)(l))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             l = ((l) + (((x10_int)1)))) {
            
            //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            variab = ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                           ((x10_long)(l))))->getGenes();
            
            //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_long i;
                for (i = ((this->FMGL(sz)) - (((x10_long)1ll)));
                     ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
                {
                    
                    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    x10_long j = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ((i) + (((x10_long)1ll))));
                    
                    //#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    x10_int x = ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                                  i);
                    
                    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      i, ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                           j));
                    
                    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      j, x);
                }
            }
            
            //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(l))))->setGenes(
              variab);
        }
    }
    
    //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                      ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::transformIndiv(
  ::cpls::solver::GAIndividual* indiv) {
    
    //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* newIndiv =  (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
    (newIndiv)->::cpls::solver::GAIndividual::_constructor(
      this->createNewSol(), ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    sons = ::x10aux::nullCheck(indiv)->insertPathCrossover(
             newIndiv);
    
    //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 229 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                      ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::tryInsertIndividual(
  ::x10::lang::Rail< x10_int >* varables, x10_long sze) {
    
    //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double minDistance = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double distance = ((x10_double) (((x10_int)0)));
    
    //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            distance = this->distance(varables, ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                      ((x10_long)(i))))->getGenes());
            
            //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            if (((distance) < (minDistance))) {
                
                //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                minDistance = distance;
            }
            
        }
    }
    
    //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((!::x10aux::struct_equals(minDistance, 0.0))) {
        
        //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                          this->FMGL(populationSize));
        
        //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
          ((x10_long)(index)), (__extension__ ({
              ::cpls::solver::GAIndividual* alloc__2056 =
                 (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
              (alloc__2056)->::cpls::solver::GAIndividual::_constructor(
                varables, ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
              alloc__2056;
          }))
          );
        
        //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setCost(
          ((x10_long)(index)), ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                 this->FMGL(sz), varables));
    }
    
    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return true;
    
}

//#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GeneticAlgorithm::getConfigForPop(
  x10_boolean replace) {
    
    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                      this->FMGL(populationSize));
    
    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                            ((x10_long)0ll));
    
    //#line 269 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->transformIndiv(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                             ((x10_long)0ll)));
    
    //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
      ((x10_long)0ll), ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                         ((x10_long)0ll)));
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(indiv)->getGenes();
    
}

//#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
x10_double cpls::solver::GeneticAlgorithm::distance(::x10::lang::Rail< x10_int >* conf1,
                                                    ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int count = ((x10_int)0);
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int i__2118max__15341 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__15342;
        for (i__15342 = ((x10_int)0); ((i__15342) <= (i__2118max__15341));
             i__15342 = ((i__15342) + (((x10_int)1)))) {
            x10_int i__15343 = i__15342;
            
            //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__15343))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__15343))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return dist;
    
}

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::cpls__solver__GeneticAlgorithm____this__cpls__solver__GeneticAlgorithm(
  ) {
    return this;
    
}
void cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm(
  ) {
    this->FMGL(population) = (__extension__ ({
        
        //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::cpls::solver::GAPopulation* alloc__2057 =  (new (::x10aux::alloc_z< ::cpls::solver::GAPopulation>()) ::cpls::solver::GAPopulation());
        
        //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
        alloc__2057->cpls::solver::GAPopulation::__fieldInitializers_cpls_solver_GAPopulation();
        alloc__2057;
    }))
    ;
    this->FMGL(populationSize) = ((x10_int)0);
    this->FMGL(rate) = 0.0f;
    this->FMGL(crossingOperator) = ((x10_int)0);
    this->FMGL(divOperator) = ((x10_int)0);
    this->FMGL(bestCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(currentCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(eachIterMigration) = ((x10_int)0x7fffffff);
    this->FMGL(cmp) = reinterpret_cast< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(sizeof(cpls_solver_GeneticAlgorithm__closure__1)))cpls_solver_GeneticAlgorithm__closure__1()));
}
const ::x10aux::serialization_id_t cpls::solver::GeneticAlgorithm::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::GeneticAlgorithm::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::GeneticAlgorithm::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::PopulBasedHeuristic::_serialize_body(buf);
    buf.write(this->FMGL(population));
    buf.write(this->FMGL(populationSize));
    buf.write(this->FMGL(rate));
    buf.write(this->FMGL(crossingOperator));
    buf.write(this->FMGL(divOperator));
    buf.write(this->FMGL(bestCostGA));
    buf.write(this->FMGL(currentCostGA));
    buf.write(this->FMGL(eachIterMigration));
    buf.write(this->FMGL(cmp));
    
}

::x10::lang::Reference* ::cpls::solver::GeneticAlgorithm::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::GeneticAlgorithm* this_ = new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::GeneticAlgorithm::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::PopulBasedHeuristic::_deserialize_body(buf);
    FMGL(population) = buf.read< ::cpls::solver::GAPopulation*>();
    FMGL(populationSize) = buf.read<x10_int>();
    FMGL(rate) = buf.read<x10_float>();
    FMGL(crossingOperator) = buf.read<x10_int>();
    FMGL(divOperator) = buf.read<x10_int>();
    FMGL(bestCostGA) = buf.read<x10_long>();
    FMGL(currentCostGA) = buf.read<x10_long>();
    FMGL(eachIterMigration) = buf.read<x10_int>();
    FMGL(cmp) = buf.read< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*>();
}

::x10aux::RuntimeType cpls::solver::GeneticAlgorithm::rtt;
void cpls::solver::GeneticAlgorithm::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::solver::PopulBasedHeuristic>()};
    rtt.initStageTwo("cpls.solver.GeneticAlgorithm",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>::itable<cpls_solver_GeneticAlgorithm__closure__1>cpls_solver_GeneticAlgorithm__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_solver_GeneticAlgorithm__closure__1::__apply, &cpls_solver_GeneticAlgorithm__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_solver_GeneticAlgorithm__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >, &cpls_solver_GeneticAlgorithm__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_solver_GeneticAlgorithm__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_solver_GeneticAlgorithm__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of GeneticAlgorithm */
/*************************************************/
