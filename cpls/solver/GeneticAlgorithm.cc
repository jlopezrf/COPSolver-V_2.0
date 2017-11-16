/*************************************************/
/* START of GeneticAlgorithm */
#include <cpls/solver/GeneticAlgorithm.h>

#include <cpls/solver/PopulBasedHeuristic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Float.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <cpls/solver/GAPopulation.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Place.h>
#include <cpls/HeuristicFactory.h>
#include <x10/util/Random.h>
#include <cpls/solver/GAIndividual.h>
#include <x10/lang/Rail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Double.h>
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
        
        //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10:148";
    }

};

#endif // CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::_constructor(x10_long sz) {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    (this)->::cpls::solver::PopulBasedHeuristic::_constructor(sz);
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->::cpls::solver::PopulBasedHeuristic::FMGL(mySolverType) = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)();
}
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::_make(x10_long sz)
{
    ::cpls::solver::GeneticAlgorithm* this_ = new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm();
    this_->_constructor(sz);
    return this_;
}



//#line 38 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                     ::cpls::ParamManager* opts) {
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::PopulBasedHeuristic::configHeuristic(
      problemModel, opts);
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(populationSize) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__43415 = ::x10aux::makeStringLit("-GA_pz"); strLit__43415; })),
                                   ((((x10_int)2)) * (((x10_int) (((x10_long)::x10aux::num_hosts))))));
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(heuristicSolverAux) = ::cpls::HeuristicFactory::make(
                                       ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)(),
                                       this->FMGL(sz));
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(rate) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__43416 = ::x10aux::makeStringLit("-GA_r"); strLit__43416; })),
                         0.4f);
    
    //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(crossingOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__43417 = ::x10aux::makeStringLit("-GA_co"); strLit__43417; })),
                                     ((x10_int)0));
    
    //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(divOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__43418 = ::x10aux::makeStringLit("-GA_do"); strLit__43418; })),
                                ((x10_int)0));
    
    //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(eachIterMigration) = ::x10::lang::FloatNatives::toInt(((((x10_float) (this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)))) * (this->FMGL(rate))));
    }
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->configHeuristic(
      problemModel, opts);
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->initVar();
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->setSeed(
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
}

//#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::initVariables() {
    
    //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->initialize(
      ((x10_long)(this->FMGL(populationSize))), this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->::cpls::solver::PopulBasedHeuristic::FMGL(problemModel),
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::search(x10_long currentCost,
                                                x10_long bestCost,
                                                x10_int nIter) {
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                        ((x10_long)(this->FMGL(populationSize))));
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                   ((x10_long)(this->FMGL(populationSize))));
    } while ((::x10aux::struct_equals(index2, index1)));
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index1);
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index2);
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->crossing(indiv1, indiv2);
    
    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons;
    
    //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        if ((::x10aux::struct_equals(((nIter) % ::x10aux::zeroCheck(this->FMGL(eachIterMigration))),
                                     ((x10_int)0)))) {
            
            //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            mutatedSons = this->migrate(sons);
        } else {
            
            //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(i))))->setCost(
                      ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                        this->FMGL(sz), (__extension__ ({
                            ::x10::lang::Rail< x10_int >* t__41200 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                    ((x10_long)(i))))->getGenes();
                            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41200)->FMGL(size)),
                                                           ::x10aux::nullCheck(this)->FMGL(sz)))))
                            {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43424 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43424; })))));
                            }
                            t__41200;
                        }))
                        ));
                }
            }
            
            //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            mutatedSons = sons;
        }
        
    } else 
    //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)0)))) {
        
        //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->mutate(sons);
    } else {
        
        //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->applyLSToSons(sons);
    }
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->refreshPopulation(
      mutatedSons, index1, index2, this->::cpls::solver::PopulBasedHeuristic::FMGL(random));
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
    
    //#line 140 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(currentCostGA) = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                      ((x10_long)0ll)))->getCost();
    
    //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if (((this->FMGL(currentCostGA)) < (this->FMGL(bestCostGA))))
    {
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(bestCostGA) = this->FMGL(currentCostGA);
        
        //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__41208 =
                                                         ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                               ((x10_long)0ll)))->getGenes();
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41208)->FMGL(size)),
                                                                                      ::x10aux::nullCheck(this)->FMGL(sz)))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43425 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43425; })))));
                                                       }
                                                       t__41208;
                                                   }))
                                                   , this->::cpls::solver::PopulBasedHeuristic::FMGL(variables));
    }
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return this->FMGL(currentCostGA);
    
}

//#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::sortPopulation() {
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::displayInfo(::x10::lang::String* stringMsg) {
 
}

//#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__43430 = ::x10aux::makeStringLit("  "); strLit__43430; }))));
        }
    }
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__43431 = ::x10aux::makeStringLit("\n"); strLit__43431; })));
}

//#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::crossing(
  ::cpls::solver::GAIndividual* i1, ::cpls::solver::GAIndividual* i2) {
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::cpls::solver::GAIndividual::_make(i1,
                                                                               ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::cpls::solver::GAIndividual::_make(i2,
                                                                               ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)0)))) {
        
        //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->uniformCrossover(indiv2);
    } else 
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)1)))) {
        
        //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->partiallyMatchedCrossover(indiv2);
    } else {
        
        //#line 184 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->insertPathCrossover(indiv2);
    }
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::applyLS() {
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->applyLS(
      this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->FMGL(heuristicSolverAux), ((x10_int)0));
}

//#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::launchEventForStagnation(
  ) {
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if (((::x10aux::nullCheck(this->FMGL(population))->calculateMidDistance()) < (0.7)))
    {
        
        //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        x10_int indexIni = ::x10::lang::FloatNatives::toInt(((this->FMGL(rate)) * (((x10_float) (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize())))));
        
        //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->renewPopulation(
          indexIni);
        
        //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< x10_int >* genes = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                    ((x10_long)0ll)))->getGenes();
        
        //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__41241 =
                                                         genes;
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41241)->FMGL(size)),
                                                                                      ::x10aux::nullCheck(this)->FMGL(sz)))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43432 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43432; })))));
                                                       }
                                                       t__41241;
                                                   }))
                                                   , (__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__41243 =
                                                         this->::cpls::solver::PopulBasedHeuristic::FMGL(variables);
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41243)->FMGL(size)),
                                                                                      ::x10aux::nullCheck(this)->FMGL(sz)))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43433 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43433; })))));
                                                       }
                                                       t__41243;
                                                   }))
                                                   );
        
        //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return true;
        
    } else {
        
        //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return false;
        
    }
    
}

//#line 207 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::mutate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int posChanged = ::x10::lang::FloatNatives::toInt(((((x10_float) (((this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)) / ::x10aux::zeroCheck(((x10_long)2ll)))))) * (this->FMGL(rate))));
    
    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1;
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__41464 =
      sons;
    x10_long size__41465 = (x10_long)(::x10aux::nullCheck(rail__41464)->FMGL(size));
    {
        x10_long idx__41466;
        for (idx__41466 = ((x10_long)0ll); ((idx__41466) < (size__41465));
             idx__41466 = ((idx__41466) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__41467 = ::x10aux::nullCheck(rail__41464)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__41466);
            
            //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i__41463;
                for (i__41463 = ((x10_int)0); ((i__41463) < (posChanged));
                     i__41463 = ((i__41463) + (((x10_int)1))))
                {
                    
                    //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                               ::x10aux::nullCheck(son__41467)->getSize());
                    
                    //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    do {
                        
                        //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ::x10aux::nullCheck(son__41467)->getSize());
                        
                        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                        if (this->FMGL(kill)) {
                            
                            //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                            break;
                        }
                        
                    } while ((::x10aux::struct_equals(index2,
                                                      index1)));
                    
                    //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(son__41467)->swap(
                      ((x10_int) (index1)), ((x10_int) (index2)));
                    
                    //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    if (this->FMGL(kill)) {
                        
                        //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if (this->FMGL(kill)) {
                
                //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                break;
            }
            
        }
    }
    
    //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__41281 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41281)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43437 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43437; })))));
                    }
                    t__41281;
                }))
                ));
        }
    }
    
    //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::migrate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< x10_int >* variab;
    
    //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int l;
        for (l = ((x10_int)0); ((((x10_long)(l))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             l = ((l) + (((x10_int)1)))) {
            
            //#line 260 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            variab = ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                           ((x10_long)(l))))->getGenes();
            
            //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_long i;
                for (i = ((this->FMGL(sz)) - (((x10_long)1ll)));
                     ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
                {
                    
                    //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    x10_long j = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ((i) + (((x10_long)1ll))));
                    
                    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    x10_int x = ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                                  i);
                    
                    //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      i, ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                           j));
                    
                    //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      j, x);
                }
            }
            
            //#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(l))))->setGenes(
              variab);
        }
    }
    
    //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__41331 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41331)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43444 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43444; })))));
                    }
                    t__41331;
                }))
                ));
        }
    }
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::setKill(x10_boolean value) {
    
    //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setKill(
      value);
    
    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(kill) = value;
}

//#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::applyLSToSons(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__41468 =
      sons;
    x10_long size__41469 = (x10_long)(::x10aux::nullCheck(rail__41468)->FMGL(size));
    {
        x10_long idx__41470;
        for (idx__41470 = ((x10_long)0ll); ((idx__41470) < (size__41469));
             idx__41470 = ((idx__41470) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__41471 = ::x10aux::nullCheck(rail__41468)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__41470);
            
            //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(son__41471)->applyLS(this->FMGL(heuristicSolverAux));
        }
    }
    
    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::transformIndiv(
  ::cpls::solver::GAIndividual* indiv) {
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* newIndiv = ::cpls::solver::GAIndividual::_make(this->createNewSol(),
                                                                                 ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    sons = ::x10aux::nullCheck(indiv)->insertPathCrossover(
             newIndiv);
    
    //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__41345 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41345)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43448 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43448; })))));
                    }
                    t__41345;
                }))
                ));
        }
    }
    
    //#line 310 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 314 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::tryInsertIndividual(
  ::x10::lang::Rail< x10_int >* varables, x10_long sze) {
    
    //#line 317 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double minDistance = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 318 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double distance = ((x10_double) (((x10_int)0)));
    
    //#line 319 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 320 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            distance = this->distance((__extension__ ({
                                          ::x10::lang::Rail< x10_int >* t__41359 =
                                            varables;
                                          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41359)->FMGL(size)),
                                                                         ::x10aux::nullCheck(this)->FMGL(sz)))))
                                          {
                                              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43451 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43451; })))));
                                          }
                                          t__41359;
                                      }))
                                      , (__extension__ ({
                                          ::x10::lang::Rail< x10_int >* t__41361 =
                                            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                  ((x10_long)(i))))->getGenes();
                                          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41361)->FMGL(size)),
                                                                         ::x10aux::nullCheck(this)->FMGL(sz)))))
                                          {
                                              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43452 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43452; })))));
                                          }
                                          t__41361;
                                      }))
                                      );
            
            //#line 321 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if (((distance) < (minDistance))) {
                
                //#line 322 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                minDistance = distance;
            }
            
        }
    }
    
    //#line 326 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((!::x10aux::struct_equals(minDistance, 0.0))) {
        
        //#line 327 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                          this->FMGL(populationSize));
        
        //#line 328 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
          ((x10_long)(index)), ::cpls::solver::GAIndividual::_make(varables,
                                                                   ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong()));
        
        //#line 329 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setCost(
          ((x10_long)(index)), ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                 this->FMGL(sz), (__extension__ ({
                                     ::x10::lang::Rail< x10_int >* t__41369 =
                                       varables;
                                     if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41369)->FMGL(size)),
                                                                    ::x10aux::nullCheck(this)->FMGL(sz)))))
                                     {
                                         ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__43453 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__43453; })))));
                                     }
                                     t__41369;
                                 }))
                                 ));
        
        //#line 331 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return true;
        
    } else {
        
        //#line 335 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return false;
        
    }
    
}

//#line 339 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::getWorstCost() {
    
    //#line 340 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                 ((((x10_long)(this->FMGL(populationSize)))) - (((x10_long)1ll)))))->getCost();
    
}

//#line 344 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GeneticAlgorithm::getConfigForPop(
  x10_boolean replace) {
    
    //#line 345 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                      this->FMGL(populationSize));
    
    //#line 347 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                            ((x10_long)0ll));
    
    //#line 348 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->transformIndiv(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                             ((x10_long)0ll)));
    
    //#line 349 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
      ((x10_long)0ll), ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                         ((x10_long)0ll)));
    
    //#line 352 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(indiv)->getGenes();
    
}

//#line 355 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_double cpls::solver::GeneticAlgorithm::distance(::x10::lang::Rail< x10_int >* conf1,
                                                    ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 356 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int count = ((x10_int)0);
    
    //#line 357 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int i__41448min__41472 = ((x10_int)0);
    x10_int i__41448max__41473 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__41474;
        for (i__41474 = i__41448min__41472; ((i__41474) <= (i__41448max__41473));
             i__41474 = ((i__41474) + (((x10_int)1)))) {
            x10_int i__41475 = i__41474;
            
            //#line 359 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__41475))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__41475))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 361 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 363 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return dist;
    
}

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::cpls__solver__GeneticAlgorithm____this__cpls__solver__GeneticAlgorithm(
  ) {
    return this;
    
}
void cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm(
  ) {
    this->FMGL(population) = ::cpls::solver::GAPopulation::_make();
    this->FMGL(populationSize) = ((x10_int)0);
    this->FMGL(rate) = 0.0f;
    this->FMGL(crossingOperator) = ((x10_int)0);
    this->FMGL(divOperator) = ((x10_int)0);
    this->FMGL(bestCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(currentCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(eachIterMigration) = ((x10_int)0x7fffffff);
    this->FMGL(heuristicSolverAux) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(kill) = false;
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
    buf.write(this->FMGL(kill));
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
    FMGL(kill) = buf.read<x10_boolean>();
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
