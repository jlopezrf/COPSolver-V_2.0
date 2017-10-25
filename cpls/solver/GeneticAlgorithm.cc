/*************************************************/
/* START of GeneticAlgorithm */
#include <cpls/solver/GeneticAlgorithm.h>

#include <cpls/solver/PopulBasedHeuristic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Float.h>
#include <x10/lang/Long.h>
#include <cpls/solver/GAPopulation.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/solver/EOSearch.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Place.h>
#include <x10/util/Random.h>
#include <x10/lang/Double.h>
#include <x10/lang/Boolean.h>
#include <cpls/solver/GAIndividual.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/String.h>
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
        
        //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10:135";
    }

};

#endif // CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::_constructor(x10_long sz) {
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    (this)->::cpls::solver::PopulBasedHeuristic::_constructor(sz);
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm();
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->::cpls::solver::PopulBasedHeuristic::FMGL(mySolverType) = ((x10_int)5);
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(heuristicSolverAux) = (::x10aux::class_cast< ::cpls::solver::HeuristicSolver*>((__extension__ ({
                                          ::cpls::solver::EOSearch* alloc__2164 =
                                             (new (::x10aux::alloc_z< ::cpls::solver::EOSearch>()) ::cpls::solver::EOSearch());
                                          (alloc__2164)->::cpls::solver::EOSearch::_constructor(
                                            sz);
                                          alloc__2164;
                                      }))
                                      ));
}
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::_make(
  x10_long sz) {
    ::cpls::solver::GeneticAlgorithm* this_ = new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm();
    this_->_constructor(sz);
    return this_;
}



//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                     ::cpls::ParamManager* opts) {
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::PopulBasedHeuristic::configHeuristic(
      problemModel, opts);
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(populationSize) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__17019 = ::x10aux::makeStringLit("-GA_pz"); strLit__17019; })),
                                   ((((x10_int)2)) * (((x10_int) (((x10_long)::x10aux::num_hosts))))));
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(rate) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__17020 = ::x10aux::makeStringLit("-GA_r"); strLit__17020; })),
                         0.4f);
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(crossingOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__17021 = ::x10aux::makeStringLit("-GA_co"); strLit__17021; })),
                                     ((x10_int)0));
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(divOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__17022 = ::x10aux::makeStringLit("-GA_do"); strLit__17022; })),
                                ((x10_int)0));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(eachIterMigration) = ::x10::lang::FloatNatives::toInt(((((x10_float) (this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)))) * (this->FMGL(rate))));
    }
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->configHeuristic(
      problemModel, opts);
    
    //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->initVar();
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->setSeed(
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
}

//#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::initVariables() {
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->initialize(
      ((x10_long)(this->FMGL(populationSize))), this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->::cpls::solver::PopulBasedHeuristic::FMGL(problemModel),
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->applyLS(
      this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->FMGL(heuristicSolverAux));
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::setValuesToParameters(
  ) {
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(rate) = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextFloat();
    } while ((((0.3) > (((x10_double) (this->FMGL(rate))))) ||
             ((((x10_double) (this->FMGL(rate)))) > (0.9))));
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(crossingOperator) = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                                     ((x10_int)3));
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(divOperator) = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                                ((x10_int)3));
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::search(x10_long currentCost,
                                                x10_long bestCost,
                                                x10_int nIter) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->setValuesToParameters();
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                        ((x10_long)(this->FMGL(populationSize))));
    
    //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                   ((x10_long)(this->FMGL(populationSize))));
    } while ((::x10aux::struct_equals(index2, index1)));
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index1);
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index2);
    
    //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->crossing(indiv1, indiv2);
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons;
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->migrate(sons);
    } else 
    //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)0)))) {
        
        //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->mutate(sons);
    } else {
        
        //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->applyLSToSons(sons);
    }
    
    //#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->refreshPopulation(
      mutatedSons, index1, index2, this->::cpls::solver::PopulBasedHeuristic::FMGL(random));
    
    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
    
    //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(currentCostGA) = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                      ((x10_long)0ll)))->getCost();
    
    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if (((this->FMGL(currentCostGA)) < (this->FMGL(bestCostGA))))
    {
        
        //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(bestCostGA) = this->FMGL(currentCostGA);
        
        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< void >::copy< x10_int >(::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                         ((x10_long)0ll)))->getGenes(),
                                                   this->::cpls::solver::PopulBasedHeuristic::FMGL(variables));
    }
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return this->FMGL(currentCostGA);
    
}

//#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"

//#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::sortPopulation() {
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::displayInfo(::x10::lang::String* stringMsg) {
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double media = ::x10aux::nullCheck(this->FMGL(population))->calculateMidDistance();
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(stringMsg, media)));
}

//#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__17030 = ::x10aux::makeStringLit("  "); strLit__17030; }))));
        }
    }
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__17031 = ::x10aux::makeStringLit("\n"); strLit__17031; })));
}

//#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::crossing(
  ::cpls::solver::GAIndividual* i1, ::cpls::solver::GAIndividual* i2) {
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 =  (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
    (indiv1)->::cpls::solver::GAIndividual::_constructor(
      i1, ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 =  (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
    (indiv2)->::cpls::solver::GAIndividual::_constructor(
      i2, ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)0)))) {
        
        //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->uniformCrossover(indiv2);
    } else 
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)1)))) {
        
        //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->partiallyMatchedCrossover(indiv2);
    } else {
        
        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->insertPathCrossover(indiv2);
    }
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::launchEventForStagnation(
  ) {
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->renewPopulation(
      ((((x10_float) (((x10_long)1ll)))) - (this->FMGL(rate))));
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->applyLS(
      this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->FMGL(heuristicSolverAux));
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< x10_int >* genes = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                ((x10_long)0ll)))->getGenes();
    
    //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< void >::copy< x10_int >(genes, this->::cpls::solver::PopulBasedHeuristic::FMGL(variables));
}

//#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::mutate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int posChanged = ::x10::lang::FloatNatives::toInt(((((x10_float) (((this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)) / ::x10aux::zeroCheck(((x10_long)2ll)))))) * (this->FMGL(rate))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1;
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::util::ArrayList<x10_int>* indexBank;
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__17008 =
      sons;
    x10_long size__17009 = (x10_long)(::x10aux::nullCheck(rail__17008)->FMGL(size));
    {
        x10_long idx__17010;
        for (idx__17010 = ((x10_long)0ll); ((idx__17010) < (size__17009));
             idx__17010 = ((idx__17010) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__17011 = ::x10aux::nullCheck(rail__17008)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__17010);
            
            //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            indexBank = (__extension__ ({
                ::x10::util::ArrayList<x10_int>* alloc__17006 =
                   (new (::x10aux::alloc_z< ::x10::util::ArrayList<x10_int> >()) ::x10::util::ArrayList<x10_int>());
                (alloc__17006)->::x10::util::ArrayList<x10_int>::_constructor(
                  ((x10_long)(((posChanged) * (((x10_int)2))))));
                alloc__17006;
            }))
            ;
            
            //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i__17007;
                for (i__17007 = ((x10_int)0); ((i__17007) < (posChanged));
                     i__17007 = ((i__17007) + (((x10_int)1))))
                {
                    
                    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    if (((::x10aux::nullCheck(this->FMGL(random))->nextFloat()) < (this->FMGL(rate))))
                    {
                        
                        //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ::x10aux::nullCheck(son__17011)->getSize());
                        
                        //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        do {
                            
                            //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                            index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                       ::x10aux::nullCheck(son__17011)->getSize());
                        } while (((::x10aux::struct_equals(index2,
                                                           index1)) &&
                                 ((!(::x10aux::nullCheck(indexBank)->contains(
                                       ((x10_int) (index1)))) &&
                                  !(::x10aux::nullCheck(indexBank)->contains(
                                      ((x10_int) (index2))))))));
                        
                        //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        ::x10aux::nullCheck(indexBank)->add(
                          ((x10_int) (index1)));
                        
                        //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        ::x10aux::nullCheck(indexBank)->add(
                          ((x10_int) (index2)));
                        
                        //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                        ::x10aux::nullCheck(son__17011)->swap(
                          ((x10_int) (index1)), ((x10_int) (index2)));
                    }
                    
                }
            }
            
        }
    }
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                      ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::migrate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< x10_int >* variab;
    
    //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int l;
        for (l = ((x10_int)0); ((((x10_long)(l))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             l = ((l) + (((x10_int)1)))) {
            
            //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            variab = ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                           ((x10_long)(l))))->getGenes();
            
            //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_long i;
                for (i = ((this->FMGL(sz)) - (((x10_long)1ll)));
                     ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
                {
                    
                    //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    x10_long j = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ((i) + (((x10_long)1ll))));
                    
                    //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    x10_int x = ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                                  i);
                    
                    //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      i, ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                           j));
                    
                    //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      j, x);
                }
            }
            
            //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(l))))->setGenes(
              variab);
        }
    }
    
    //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                      ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::applyLSToSons(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__17012 =
      sons;
    x10_long size__17013 = (x10_long)(::x10aux::nullCheck(rail__17012)->FMGL(size));
    {
        x10_long idx__17014;
        for (idx__17014 = ((x10_long)0ll); ((idx__17014) < (size__17013));
             idx__17014 = ((idx__17014) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__17015 = ::x10aux::nullCheck(rail__17012)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__17014);
            
            //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(son__17015)->applyLS(this->FMGL(heuristicSolverAux));
        }
    }
    
    //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::transformIndiv(
  ::cpls::solver::GAIndividual* indiv) {
    
    //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* newIndiv =  (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
    (newIndiv)->::cpls::solver::GAIndividual::_constructor(
      this->createNewSol(), ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    sons = ::x10aux::nullCheck(indiv)->insertPathCrossover(
             newIndiv);
    
    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                      ((x10_long)(i))))->getGenes()));
        }
    }
    
    //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::tryInsertIndividual(
  ::x10::lang::Rail< x10_int >* varables, x10_long sze) {
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double minDistance = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double distance = ((x10_double) (((x10_int)0)));
    
    //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            distance = this->distance(varables, ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                      ((x10_long)(i))))->getGenes());
            
            //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            if (((distance) < (minDistance))) {
                
                //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
                minDistance = distance;
            }
            
        }
    }
    
    //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    if ((!::x10aux::struct_equals(minDistance, 0.0))) {
        
        //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                          this->FMGL(populationSize));
        
        //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
          ((x10_long)(index)), (__extension__ ({
              ::cpls::solver::GAIndividual* alloc__2166 =
                 (new (::x10aux::alloc_z< ::cpls::solver::GAIndividual>()) ::cpls::solver::GAIndividual());
              (alloc__2166)->::cpls::solver::GAIndividual::_constructor(
                varables, ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
              alloc__2166;
          }))
          );
        
        //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setCost(
          ((x10_long)(index)), ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                 this->FMGL(sz), varables));
    }
    
    //#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return true;
    
}

//#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GeneticAlgorithm::getConfigForPop(
  x10_boolean replace) {
    
    //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                      this->FMGL(populationSize));
    
    //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                            ((x10_long)0ll));
    
    //#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->transformIndiv(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                             ((x10_long)0ll)));
    
    //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
      ((x10_long)0ll), ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                         ((x10_long)0ll)));
    
    //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(indiv)->getGenes();
    
}

//#line 309 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
x10_double cpls::solver::GeneticAlgorithm::distance(::x10::lang::Rail< x10_int >* conf1,
                                                    ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 310 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int count = ((x10_int)0);
    
    //#line 311 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_int i__2250max__17016 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__17017;
        for (i__17017 = ((x10_int)0); ((i__17017) <= (i__2250max__17016));
             i__17017 = ((i__17017) + (((x10_int)1)))) {
            x10_int i__17018 = i__17017;
            
            //#line 313 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__17018))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__17018))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 315 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 317 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
    return dist;
    
}

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::cpls__solver__GeneticAlgorithm____this__cpls__solver__GeneticAlgorithm(
  ) {
    return this;
    
}
void cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm(
  ) {
    this->FMGL(population) = (__extension__ ({
        
        //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GeneticAlgorithm.x10"
        ::cpls::solver::GAPopulation* alloc__2167 =  (new (::x10aux::alloc_z< ::cpls::solver::GAPopulation>()) ::cpls::solver::GAPopulation());
        
        //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/solver/GAPopulation.x10"
        alloc__2167->cpls::solver::GAPopulation::__fieldInitializers_cpls_solver_GAPopulation();
        alloc__2167;
    }))
    ;
    this->FMGL(populationSize) = ((x10_int)0);
    this->FMGL(rate) = 0.0f;
    this->FMGL(crossingOperator) = ((x10_int)0);
    this->FMGL(divOperator) = ((x10_int)0);
    this->FMGL(bestCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(currentCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(eachIterMigration) = ((x10_int)0x7fffffff);
    this->FMGL(heuristicSolverAux) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
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
    buf.write(this->FMGL(heuristicSolverAux));
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
    FMGL(heuristicSolverAux) = buf.read< ::cpls::solver::HeuristicSolver*>();
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
