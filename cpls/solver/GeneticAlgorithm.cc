/*************************************************/
/* START of GeneticAlgorithm */
#include <cpls/solver/GeneticAlgorithm.h>

#include <cpls/solver/PopulBasedHeuristic.h>
#include <x10/lang/Int.h>
#include <x10/lang/Float.h>
#include <x10/lang/Long.h>
#include <cpls/solver/GAPopulation.h>
#include <cpls/solver/HeuristicSolver.h>
#include <cpls/CPLSOptionsEnum__HeuristicsSupported.h>
#include <x10/util/Random.h>
#include <cpls/solver/GAIndividual.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Fun_0_2.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <cpls/ParamManager.h>
#include <x10/util/OptionsParser.h>
#include <x10/lang/Place.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/lang/Runtime.h>
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
        
        //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10:68";
    }

};

#endif // CPLS_SOLVER_GENETICALGORITHM__CLOSURE__1_CLOSURE

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::_constructor(x10_long sz) {
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    (this)->::cpls::solver::PopulBasedHeuristic::_constructor(sz);
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm();
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->::cpls::solver::PopulBasedHeuristic::FMGL(mySolverType) = ::cpls::CPLSOptionsEnum__HeuristicsSupported::FMGL(GA_SOL__get)();
}
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::_make(x10_long sz)
{
    ::cpls::solver::GeneticAlgorithm* this_ = new (::x10aux::alloc_z< ::cpls::solver::GeneticAlgorithm>()) ::cpls::solver::GeneticAlgorithm();
    this_->_constructor(sz);
    return this_;
}



//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_long cpls::solver::GeneticAlgorithm::search(x10_long currentCost,
                                                x10_long bestCost,
                                                x10_int nIter) {
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                        ((x10_long)(this->FMGL(populationSize))));
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                   ((x10_long)(this->FMGL(populationSize))));
    } while ((::x10aux::struct_equals(index2, index1)));
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index1);
    
    //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                             index2);
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons =
      this->crossing(indiv1, indiv2);
    
    //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* mutatedSons =
      this->mutate(sons);
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->refreshPopulation(
      mutatedSons, index1, index2);
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
    
    //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(currentCostGA) = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                      ((x10_long)0ll)))->getCost();
    
    //#line 61 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if (((this->FMGL(currentCostGA)) < (this->FMGL(bestCostGA))))
    {
        
        //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        this->FMGL(bestCostGA) = this->FMGL(currentCostGA);
        
        //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        this->::cpls::solver::PopulBasedHeuristic::FMGL(variables) =
          (__extension__ ({
            ::x10::lang::Rail< x10_int >* t__36948 = ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                           ((x10_long)0ll)))->getGenes();
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__36948)->FMGL(size)),
                                           ::x10aux::nullCheck(this)->FMGL(sz)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39101 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__39101; })))));
            }
            t__36948;
        }))
        ;
    }
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return this->FMGL(currentCostGA);
    
}

//#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"

//#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::sortPopulation() {
    
    //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel,
                                                     ::cpls::ParamManager* opts) {
    
    //#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::PopulBasedHeuristic::configHeuristic(
      problemModel, opts);
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(populationSize) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                   (__extension__ ({ static ::x10::lang::String* strLit__39105 = ::x10aux::makeStringLit("-GA_pz"); strLit__39105; })),
                                   ((((x10_int)2)) * (((x10_int) (((x10_long)::x10aux::num_hosts))))));
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(mutationRate) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                 (__extension__ ({ static ::x10::lang::String* strLit__39106 = ::x10aux::makeStringLit("-GA_mr"); strLit__39106; })),
                                 0.4f);
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    this->FMGL(crossingOperator) = ::x10aux::nullCheck(opts)->cpls::ParamManager::__apply(
                                     (__extension__ ({ static ::x10::lang::String* strLit__39107 = ::x10aux::makeStringLit("-GA_co"); strLit__39107; })),
                                     ((x10_int)0));
}

//#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::initVariables() {
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->initialize(
      ((x10_long)(this->FMGL(populationSize))), this->::cpls::solver::PopulBasedHeuristic::FMGL(sz),
      this->::cpls::solver::PopulBasedHeuristic::FMGL(problemModel));
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->sort();
}

//#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::printPopulation() {
    
    //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39108 = ::x10aux::makeStringLit("MsgType_0."); strLit__39108; })), (__extension__ ({ static ::x10::lang::String* strLit__39109 = ::x10aux::makeStringLit("Nodo: "); strLit__39109; }))), ::x10::lang::Place::_make(::x10aux::here)), (__extension__ ({ static ::x10::lang::String* strLit__39110 = ::x10aux::makeStringLit(". Costo: "); strLit__39110; }))), ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_long)(i))))->getCost()), (__extension__ ({ static ::x10::lang::String* strLit__39111 = ::x10aux::makeStringLit(". Variables: "); strLit__39111; }))));
            
            //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::cpls::solver::GeneticAlgorithm::printVector(
              ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                    ((x10_long)(i))))->getGenes());
        }
    }
    
}

//#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
void cpls::solver::GeneticAlgorithm::printVector(::x10::lang::Rail< x10_int >* vector) {
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(vector)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10aux::nullCheck(vector)->x10::lang::Rail< x10_int >::__apply(
                                                                                      ((x10_long)(i))), (__extension__ ({ static ::x10::lang::String* strLit__39113 = ::x10aux::makeStringLit("  "); strLit__39113; }))));
        }
    }
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__39114 = ::x10aux::makeStringLit("\n"); strLit__39114; })));
}

//#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::crossing(
  ::cpls::solver::GAIndividual* i1, ::cpls::solver::GAIndividual* i2) {
    
    //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv1 = ::cpls::solver::GAIndividual::_make(i1);
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv2 = ::cpls::solver::GAIndividual::_make(i2);
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons;
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)0)))) {
        
        //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->uniformCrossover(indiv2);
    } else 
    //#line 162 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((::x10aux::struct_equals(this->FMGL(crossingOperator),
                                 ((x10_int)1)))) {
        
        //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->partiallyMatchedCrossover(indiv2);
    } else {
        
        //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        sons = indiv1->insertPathCrossover(indiv2);
    }
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< ::cpls::solver::GAIndividual* >* cpls::solver::GeneticAlgorithm::mutate(
  ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* sons) {
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1;
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10::lang::Rail< ::cpls::solver::GAIndividual* >* rail__37233 =
      sons;
    x10_long size__37234 = (x10_long)(::x10aux::nullCheck(rail__37233)->FMGL(size));
    {
        x10_long idx__37235;
        for (idx__37235 = ((x10_long)0ll); ((idx__37235) < (size__37234));
             idx__37235 = ((idx__37235) + (((x10_long)1ll))))
        {
            ::cpls::solver::GAIndividual* son__37236 = ::x10aux::nullCheck(rail__37233)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                                         idx__37235);
            
            //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if (((::x10aux::nullCheck(this->FMGL(random))->nextFloat()) < (this->FMGL(mutationRate))))
            {
                
                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                           ::x10aux::nullCheck(son__37236)->getSize());
                
                //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                do {
                    
                    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                    index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                               ::x10aux::nullCheck(son__37236)->getSize());
                } while ((::x10aux::struct_equals(index2,
                                                  index1)));
                
                //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                ::x10aux::nullCheck(son__37236)->swap(((x10_int) (index1)),
                                                      ((x10_int) (index2)));
            }
            
        }
    }
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < ((x10_long)(::x10aux::nullCheck(sons)->FMGL(size))));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                  ((x10_long)(i))))->setCost(
              ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                this->FMGL(sz), (__extension__ ({
                    ::x10::lang::Rail< x10_int >* t__37143 =
                      ::x10aux::nullCheck(::x10aux::nullCheck(sons)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::__apply(
                                            ((x10_long)(i))))->getGenes();
                    if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__37143)->FMGL(size)),
                                                   ::x10aux::nullCheck(this)->FMGL(sz)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39118 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__39118; })))));
                    }
                    t__37143;
                }))
                ));
        }
    }
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return sons;
    
}

//#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::cpls::solver::GAIndividual* cpls::solver::GeneticAlgorithm::mutateIndiv(
  ::cpls::solver::GAIndividual* indiv) {
    
    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index1;
    
    //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_long index2;
    
    //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    index1 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
               ::x10aux::nullCheck(indiv)->getSize());
    
    //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    do {
        
        //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        index2 = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextLong(
                   ::x10aux::nullCheck(indiv)->getSize());
    } while ((::x10aux::struct_equals(index2, index1)));
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(indiv)->swap(((x10_int) (index1)),
                                     ((x10_int) (index2)));
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return indiv;
    
}

//#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_boolean cpls::solver::GeneticAlgorithm::tryInsertIndividual(
  ::x10::lang::Rail< x10_int >* varables, x10_long sze) {
    
    //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double minDistance = ::x10::lang::DoubleNatives::fromLongBits(0x7fefffffffffffffLL);
    
    //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double distance = ((x10_double) (((x10_int)0)));
    
    //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (::x10aux::nullCheck(this->FMGL(population))->getPopulationSize()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            distance = this->distance((__extension__ ({
                                          ::x10::lang::Rail< x10_int >* t__37157 =
                                            varables;
                                          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__37157)->FMGL(size)),
                                                                         ::x10aux::nullCheck(this)->FMGL(sz)))))
                                          {
                                              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39121 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__39121; })))));
                                          }
                                          t__37157;
                                      }))
                                      , (__extension__ ({
                                          ::x10::lang::Rail< x10_int >* t__37159 =
                                            ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                                                  ((x10_long)(i))))->getGenes();
                                          if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__37159)->FMGL(size)),
                                                                         ::x10aux::nullCheck(this)->FMGL(sz)))))
                                          {
                                              ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39122 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__39122; })))));
                                          }
                                          t__37159;
                                      }))
                                      );
            
            //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if (((distance) < (minDistance))) {
                
                //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
                minDistance = distance;
            }
            
        }
    }
    
    //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    if ((!::x10aux::struct_equals(minDistance, 0.0))) {
        
        //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        x10_int index = ::x10aux::nullCheck(this->::cpls::solver::PopulBasedHeuristic::FMGL(random))->nextInt(
                          this->FMGL(populationSize));
        
        //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
          ((x10_long)(index)), ::cpls::solver::GAIndividual::_make(varables));
        
        //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
        ::x10aux::nullCheck(this->FMGL(population))->setCost(
          ((x10_long)(index)), ::x10aux::nullCheck(this->FMGL(problemModel))->costOfSolution(
                                 this->FMGL(sz), (__extension__ ({
                                     ::x10::lang::Rail< x10_int >* t__37167 =
                                       varables;
                                     if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__37167)->FMGL(size)),
                                                                    ::x10aux::nullCheck(this)->FMGL(sz)))))
                                     {
                                         ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__39123 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==this(:cpls.solver.GeneticAlgorithm).sz}"); strLit__39123; })))));
                                     }
                                     t__37167;
                                 }))
                                 ));
    }
    
    //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return true;
    
}

//#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GeneticAlgorithm::getConfigForPop(
  x10_boolean replace) {
    
    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::cpls::solver::GAIndividual* indiv = ::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                            ((x10_long)0ll));
    
    //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    ::x10aux::nullCheck(this->FMGL(population))->setIndividual(
      ((x10_long)0ll), this->mutateIndiv(::x10aux::nullCheck(this->FMGL(population))->getIndividual(
                                           ((x10_long)0ll))));
    
    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return ::x10aux::nullCheck(indiv)->getGenes();
    
}

//#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
x10_double cpls::solver::GeneticAlgorithm::distance(::x10::lang::Rail< x10_int >* conf1,
                                                    ::x10::lang::Rail< x10_int >* conf2) {
    
    //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int count = ((x10_int)0);
    
    //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_int i__37218min__37237 = ((x10_int)0);
    x10_int i__37218max__37238 = ((((x10_int) (this->FMGL(sz)))) - (((x10_int)1)));
    {
        x10_int i__37239;
        for (i__37239 = i__37218min__37237; ((i__37239) <= (i__37218max__37238));
             i__37239 = ((i__37239) + (((x10_int)1)))) {
            x10_int i__37240 = i__37239;
            
            //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
            if ((!::x10aux::struct_equals(::x10aux::nullCheck(conf1)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__37240))),
                                          ::x10aux::nullCheck(conf2)->x10::lang::Rail< x10_int >::__apply(
                                            ((x10_long)(i__37240))))))
            {
                count = ((count) + (((x10_int)1)));
            }
            
        }
    }
    
    //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    x10_double dist = ((((x10_double) (count))) / (((x10_double) (this->FMGL(sz)))));
    
    //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
    return dist;
    
}

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GeneticAlgorithm.x10"
::cpls::solver::GeneticAlgorithm* cpls::solver::GeneticAlgorithm::cpls__solver__GeneticAlgorithm____this__cpls__solver__GeneticAlgorithm(
  ) {
    return this;
    
}
void cpls::solver::GeneticAlgorithm::__fieldInitializers_cpls_solver_GeneticAlgorithm(
  ) {
    this->FMGL(population) = ::cpls::solver::GAPopulation::_make();
    this->FMGL(populationSize) = ((x10_int)0);
    this->FMGL(mutationRate) = 0.0f;
    this->FMGL(crossingOperator) = ((x10_int)0);
    this->FMGL(bestCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(currentCostGA) = (x10_long)0x7fffffffffffffffLL;
    this->FMGL(cmp) = reinterpret_cast< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2< ::cpls::solver::GAIndividual*, ::cpls::solver::GAIndividual*, x10_int> >(sizeof(cpls_solver_GeneticAlgorithm__closure__1)))cpls_solver_GeneticAlgorithm__closure__1()));
}
const ::x10aux::serialization_id_t cpls::solver::GeneticAlgorithm::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::GeneticAlgorithm::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::GeneticAlgorithm::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::solver::PopulBasedHeuristic::_serialize_body(buf);
    buf.write(this->FMGL(population));
    buf.write(this->FMGL(populationSize));
    buf.write(this->FMGL(mutationRate));
    buf.write(this->FMGL(crossingOperator));
    buf.write(this->FMGL(bestCostGA));
    buf.write(this->FMGL(currentCostGA));
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
    FMGL(mutationRate) = buf.read<x10_float>();
    FMGL(crossingOperator) = buf.read<x10_int>();
    FMGL(bestCostGA) = buf.read<x10_long>();
    FMGL(currentCostGA) = buf.read<x10_long>();
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
