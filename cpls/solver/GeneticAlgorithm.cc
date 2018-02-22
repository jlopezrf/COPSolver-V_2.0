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
#include <x10/lang/Any.h>
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
        
        //#line 150 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
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
        return "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10:150";
    }

};

#endif // CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE

//#line 20 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 21 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 22 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 23 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 24 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 25 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 27 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 28 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 29 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 30 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 31 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 34 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::_constructor(x10_long sz) {
    
    //#line 35 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    (this)->::cpls::solver::PopulBasedHeuristic::_constructor(sz);
    
    //#line 34 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    
    //#line 18 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm();
    
    //#line 36 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->::cpls::solver::PopulBasedHeuristic::FMGL(mySolverType) = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)();
}
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::_make(x10_long sz)
{
    ::cpls::solver::GeneticAlgorithm* this_ = new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm();
    this_->_constructor(sz);
    return this_;
}



//#line 39 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                     ::cpls::ParamManager* opts) {
    
    //#line 40 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::PopulBasedHeuristic::configHeuristic(
      problemModel, opts);
    
    //#line 42 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(populationSize) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__44130 = ::x10aux::makeStringLit("-GA_pz"); strLit__44130; })),
                                   ((((x10_int)2)) * (((x10_int) (((x10_long)::x10aux::num_hosts))))));
    
    //#line 48 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(heuristicSolverAux) = ::cpls::HeuristicFactory::make(
                                       ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(EO_SOL__get)(),
                                       this->FMGL(sz));
    
    //#line 52 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(rate) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                         (__extension__ ({ static ::x10::lang::String* strLit__44131 = ::x10aux::makeStringLit("-GA_r"); strLit__44131; })),
                         0.4f);
    
    //#line 53 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(crossingOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__44132 = ::x10aux::makeStringLit("-GA_co"); strLit__44132; })),
                                     ((x10_int)0));
    
    //#line 54 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(valueForRenewPopulation) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                            (__extension__ ({ static ::x10::lang::String* strLit__44133 = ::x10aux::makeStringLit("-GA_rpv"); strLit__44133; })),
                                            0.3f);
    
    //#line 55 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(divOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                (__extension__ ({ static ::x10::lang::String* strLit__44134 = ::x10aux::makeStringLit("-GA_do"); strLit__44134; })),
                                ((x10_int)0));
    
    //#line 56 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 57 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(eachIterMigration) = ::x10::lang::FloatNatives::toInt(((((x10_float) (this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)))) * (this->FMGL(rate))));
    }
    
    //#line 59 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->configHeuristic(
      problemModel, opts);
    
    //#line 60 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->initVar();
    
    //#line 61 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolverAux))->setSeed(
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
}

//#line 64 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::initVariables() {
    
    //#line 66 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->initialize(
      ((x10_long)(this->FMGL(populationSize))), this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->::cpls::solver::PopulBasedHeuristic::FMGL(problemModel),
      ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 67 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 92 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::search(x10_long currentCost,
                                                x10_long bestCost,
                                                x10_int nIter) {
    
    //#line 94 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                        ((x10_long)(this->FMGL(populationSize))));
    
    //#line 95 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 96 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 97 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                   ((x10_long)(this->FMGL(populationSize))));
    } while ((::x10aux::struct_equals(index2, index1)));
    
    //#line 108 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index1);
    
    //#line 109 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index2);
    
    //#line 110 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->crossing(indiv1, indiv2);
    
    //#line 119 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons;
    
    //#line 120 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)1)))) {
        
        //#line 121 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        if ((::x10aux::struct_equals(((nIter) % ::x10aux::zeroCheck(this->FMGL(eachIterMigration))),
                                     ((x10_int)0)))) {
            
            //#line 122 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            mutatedSons = this->migrate(sons);
        } else {
            
            //#line 124 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i;
                for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
                     i = ((i) + (((x10_int)1)))) {
                    
                    //#line 125 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                          ((x10_long)(i))))->setCost(
                      ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                        this->FMGL(sz), (__extension__ ({
                            ::x10::lang::Rail< x10_int >* t__41883 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                    ((x10_long)(i))))->getGenes();
                            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41883)->FMGL(size)),
                                                           ::x10aux::nullCheck(this)->FMGL(sz)))))
                            {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44140 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44140; })))));
                            }
                            t__41883;
                        }))
                        ));
                }
            }
            
            //#line 128 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            mutatedSons = sons;
        }
        
    } else 
    //#line 130 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(divOperator),
                                 ((x10_int)0)))) {
        
        //#line 131 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->mutate(sons);
    } else {
        
        //#line 133 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        mutatedSons = this->applyLSToSons(sons);
    }
    
    //#line 139 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->refreshPopulation(
      mutatedSons, index1, index2, this->::cpls::solver::PopulBasedHeuristic::FMGL(random));
    
    //#line 140 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
    
    //#line 142 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(currentCostGA) = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                      ((x10_long)0ll)))->getCost();
    
    //#line 143 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if (((this->FMGL(currentCostGA)) < (this->FMGL(bestCostGA))))
    {
        
        //#line 144 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(bestCostGA) = this->FMGL(currentCostGA);
        
        //#line 145 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__41891 =
                                                         ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                               ((x10_long)0ll)))->getGenes();
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41891)->FMGL(size)),
                                                                                      ::x10aux::nullCheck(this)->FMGL(sz)))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44141 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44141; })))));
                                                       }
                                                       t__41891;
                                                   }))
                                                   , this->::cpls::solver::PopulBasedHeuristic::FMGL(variables));
    }
    
    //#line 147 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return this->FMGL(currentCostGA);
    
}

//#line 150 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 152 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::sortPopulation() {
    
    //#line 153 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 156 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::displayInfo(::x10::lang::String* stringMsg) {
 
}

//#line 170 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 171 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 172 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__44146 = ::x10aux::makeStringLit("  "); strLit__44146; }))));
        }
    }
    
    //#line 174 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__44147 = ::x10aux::makeStringLit("\n"); strLit__44147; })));
}

//#line 177 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::crossing(
  ::cpls::solver::GAIndividual* i1, ::cpls::solver::GAIndividual* i2) {
    
    //#line 178 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::cpls::solver::GAIndividual::_make(i1,
                                                                               ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 179 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::cpls::solver::GAIndividual::_make(i2,
                                                                               ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 180 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 181 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)0)))) {
        
        //#line 182 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->uniformCrossover(indiv2);
    } else 
    //#line 183 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)1)))) {
        
        //#line 184 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->partiallyMatchedCrossover(indiv2);
    } else {
        
        //#line 186 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->insertPathCrossover(indiv2);
    }
    
    //#line 188 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 191 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::applyLS() {
    
    //#line 192 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->applyLS(
      this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->FMGL(heuristicSolverAux), ((x10_int)0));
}

//#line 195 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::launchEventForStagnation(
  ) {
    
    //#line 196 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double entropy = ::x10aux::nullCheck(this->FMGL(population))->entropyOfPopulation();
    
    //#line 197 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__44148 = ::x10aux::makeStringLit("Entropia de la poblacion antes del launchEventForStagnation: "); strLit__44148; })), entropy)));
    
    //#line 198 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if (((entropy) < (((x10_double) (this->FMGL(valueForRenewPopulation))))))
    {
        
        //#line 199 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        x10_int indexIni = ::x10::lang::FloatNatives::toInt(((this->FMGL(rate)) * (((x10_float) (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize())))));
        
        //#line 200 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->renewPopulation(
          indexIni);
        
        //#line 202 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< x10_int >* genes = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                    ((x10_long)0ll)))->getGenes();
        
        //#line 203 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::lang::Rail< void >::copy< x10_int >((__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__41929 =
                                                         genes;
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41929)->FMGL(size)),
                                                                                      ::x10aux::nullCheck(this)->FMGL(sz)))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44149 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44149; })))));
                                                       }
                                                       t__41929;
                                                   }))
                                                   , (__extension__ ({
                                                       ::x10::lang::Rail< x10_int >* t__41931 =
                                                         this->::cpls::solver::PopulBasedHeuristic::FMGL(variables);
                                                       if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41931)->FMGL(size)),
                                                                                      ::x10aux::nullCheck(this)->FMGL(sz)))))
                                                       {
                                                           ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44150 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44150; })))));
                                                       }
                                                       t__41931;
                                                   }))
                                                   );
        
        //#line 204 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__44151 = ::x10aux::makeStringLit("Entropia de la poblacion despues del launchEventForStagnation: "); strLit__44151; })), ::x10aux::nullCheck(this->FMGL(population))->entropyOfPopulation())));
        
        //#line 205 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return true;
        
    } else {
        
        //#line 207 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__44152 = ::x10aux::makeStringLit("No se renewPopulation porque la entropia no es baja"); strLit__44152; }))));
        
        //#line 208 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return false;
        
    }
    
}

//#line 213 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::mutate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 214 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int posChanged = ::x10::lang::FloatNatives::toInt(((((x10_float) (((this->::cpls::solver::PopulBasedHeuristic::FMGL(sz)) / ::x10aux::zeroCheck(((x10_long)2ll)))))) * (this->FMGL(rate))));
    
    //#line 215 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1;
    
    //#line 216 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 218 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__42157 =
      sons;
    x10_long size__42158 = (x10_long)(::x10aux::nullCheck(rail__42157)->FMGL(size));
    {
        x10_long idx__42159;
        for (idx__42159 = ((x10_long)0ll); ((idx__42159) < (size__42158));
             idx__42159 = ((idx__42159) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__42160 = ::x10aux::nullCheck(rail__42157)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__42159);
            
            //#line 220 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_int i__42156;
                for (i__42156 = ((x10_int)0); ((i__42156) < (posChanged));
                     i__42156 = ((i__42156) + (((x10_int)1))))
                {
                    
                    //#line 222 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                               ::x10aux::nullCheck(son__42160)->getSize());
                    
                    //#line 223 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    do {
                        
                        //#line 224 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ::x10aux::nullCheck(son__42160)->getSize());
                        
                        //#line 225 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                        if (this->FMGL(kill)) {
                            
                            //#line 227 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                            break;
                        }
                        
                    } while ((::x10aux::struct_equals(index2,
                                                      index1)));
                    
                    //#line 234 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(son__42160)->swap(
                      ((x10_int) (index1)), ((x10_int) (index2)));
                    
                    //#line 239 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    if (this->FMGL(kill)) {
                        
                        //#line 240 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                        break;
                    }
                    
                }
            }
            
            //#line 243 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if (this->FMGL(kill)) {
                
                //#line 244 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                break;
            }
            
        }
    }
    
    //#line 247 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 248 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__41974 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__41974)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44156 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44156; })))));
                    }
                    t__41974;
                }))
                ));
        }
    }
    
    //#line 256 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 262 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::migrate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 263 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< x10_int >* variab;
    
    //#line 265 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int l;
        for (l = ((x10_int)0); ((((x10_long)(l))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             l = ((l) + (((x10_int)1)))) {
            
            //#line 266 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            variab = ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                           ((x10_long)(l))))->getGenes();
            
            //#line 270 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            {
                x10_long i;
                for (i = ((this->FMGL(sz)) - (((x10_long)1ll)));
                     ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
                {
                    
                    //#line 271 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    x10_long j = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                                   ((i) + (((x10_long)1ll))));
                    
                    //#line 272 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    x10_int x = ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                                  i);
                    
                    //#line 273 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      i, ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__apply(
                           j));
                    
                    //#line 274 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    ::x10aux::nullCheck(variab)->x10::lang::Rail< x10_int >::__set(
                      j, x);
                }
            }
            
            //#line 276 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(l))))->setGenes(
              variab);
        }
    }
    
    //#line 280 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 281 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__42024 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42024)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44163 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44163; })))));
                    }
                    t__42024;
                }))
                ));
        }
    }
    
    //#line 284 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 287 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::setKill(x10_boolean value) {
    
    //#line 288 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setKill(
      value);
    
    //#line 289 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(kill) = value;
}

//#line 292 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::applyLSToSons(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 293 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__42161 =
      sons;
    x10_long size__42162 = (x10_long)(::x10aux::nullCheck(rail__42161)->FMGL(size));
    {
        x10_long idx__42163;
        for (idx__42163 = ((x10_long)0ll); ((idx__42163) < (size__42162));
             idx__42163 = ((idx__42163) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__42164 = ::x10aux::nullCheck(rail__42161)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__42163);
            
            //#line 294 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(son__42164)->applyLS(this->FMGL(heuristicSolverAux));
        }
    }
    
    //#line 296 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 299 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::transformIndiv(
  ::cpls::solver::GAIndividual* indiv) {
    
    //#line 302 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* newIndiv = ::cpls::solver::GAIndividual::_make(this->createNewSol(),
                                                                                 ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong());
    
    //#line 303 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 304 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    sons = ::x10aux::nullCheck(indiv)->insertPathCrossover(
             newIndiv);
    
    //#line 305 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 306 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__42038 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42038)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44167 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44167; })))));
                    }
                    t__42038;
                }))
                ));
        }
    }
    
    //#line 316 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 320 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::tryInsertIndividual(
  ::x10::lang::Rail< x10_int >* varables, x10_long sze) {
    
    //#line 323 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double minDistance = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 324 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double distance = ((x10_double) (((x10_int)0)));
    
    //#line 325 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 326 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            distance = this->distance((__extension__ ({
                                          ::x10::lang::Rail< x10_int >* t__42052 =
                                            varables;
                                          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42052)->FMGL(size)),
                                                                         ::x10aux::nullCheck(this)->FMGL(sz)))))
                                          {
                                              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44170 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44170; })))));
                                          }
                                          t__42052;
                                      }))
                                      , (__extension__ ({
                                          ::x10::lang::Rail< x10_int >* t__42054 =
                                            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                  ((x10_long)(i))))->getGenes();
                                          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42054)->FMGL(size)),
                                                                         ::x10aux::nullCheck(this)->FMGL(sz)))))
                                          {
                                              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44171 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44171; })))));
                                          }
                                          t__42054;
                                      }))
                                      );
            
            //#line 327 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if (((distance) < (minDistance))) {
                
                //#line 328 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                minDistance = distance;
            }
            
        }
    }
    
    //#line 332 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((!::x10aux::struct_equals(minDistance, 0.0))) {
        
        //#line 333 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                          this->FMGL(populationSize));
        
        //#line 334 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
          ((x10_long)(index)), ::cpls::solver::GAIndividual::_make(varables,
                                                                   ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong()));
        
        //#line 335 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setCost(
          ((x10_long)(index)), ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                 this->FMGL(sz), (__extension__ ({
                                     ::x10::lang::Rail< x10_int >* t__42062 =
                                       varables;
                                     if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__42062)->FMGL(size)),
                                                                    ::x10aux::nullCheck(this)->FMGL(sz)))))
                                     {
                                         ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__44172 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__44172; })))));
                                     }
                                     t__42062;
                                 }))
                                 ));
        
        //#line 337 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return true;
        
    } else {
        
        //#line 341 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        return false;
        
    }
    
}

//#line 345 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::getWorstCost() {
    
    //#line 346 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                 ((((x10_long)(this->FMGL(populationSize)))) - (((x10_long)1ll)))))->getCost();
    
}

//#line 350 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GeneticAlgorithm::getConfigForPop(
  x10_boolean replace) {
    
    //#line 351 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                      this->FMGL(populationSize));
    
    //#line 353 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                            ((x10_long)0ll));
    
    //#line 354 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->transformIndiv(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                             ((x10_long)0ll)));
    
    //#line 355 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
      ((x10_long)0ll), ::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                         ((x10_long)0ll)));
    
    //#line 358 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(indiv)->getGenes();
    
}

//#line 361 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_double cpls::solver::GeneticAlgorithm::distance(::x10::lang::Rail< x10_int >* conf1,
                                                    ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 362 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int count = ((x10_int)0);
    
    //#line 363 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int i__42141min__42165 = ((x10_int)0);
    x10_int i__42141max__42166 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__42167;
        for (i__42167 = i__42141min__42165; ((i__42167) <= (i__42141max__42166));
             i__42167 = ((i__42167) + (((x10_int)1)))) {
            x10_int i__42168 = i__42167;
            
            //#line 365 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__42168))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__42168))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 367 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 369 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return dist;
    
}

//#line 18 "/home/jason/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
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
    this->FMGL(valueForRenewPopulation) = 0.0f;
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
    buf.write(this->FMGL(valueForRenewPopulation));
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
    FMGL(valueForRenewPopulation) = buf.read<x10_float>();
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
