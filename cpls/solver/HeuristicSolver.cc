/*************************************************/
/* START of HeuristicSolver */
#include <cpls/solver/HeuristicSolver.h>

#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <cpls/util/MovePermutation.h>
#include <x10/util/Random.h>
#include <cpls/ParamManager.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/String.h>
#include <x10/compiler/Synthetic.h>

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::_constructor() {
    
    //#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver();
}


//#line 24 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::configHeuristic(x10_long sizeProblem,
                                                    ::cpls::ParamManager* opts) {
    
    //#line 25 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(problemSize) = sizeProblem;
}

//#line 31 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
x10_long cpls::solver::HeuristicSolver::search(::cpls::problem::ProblemGenericModel* problemModel,
                                               x10_long currentCost,
                                               x10_long bestCost,
                                               x10_int nIter) {
    
    //#line 33 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    x10_long sz = ::x10aux::nullCheck(problemModel)->getSize();
    
    //#line 34 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setFirst(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                 sz));
    
    //#line 35 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(move)->setSecond(::x10aux::nullCheck(this->FMGL(random))->nextLong(
                                  sz));
    
    //#line 37 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(problemModel)->swapVariables(this->FMGL(move)->getFirst(),
                                                     this->FMGL(move)->getSecond());
    
    //#line 38 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((this->FMGL(nSwap)) + (((x10_int)1)));
    
    //#line 40 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    ::x10aux::nullCheck(problemModel)->executedSwap(this->FMGL(move)->getFirst(),
                                                    this->FMGL(move)->getSecond());
    
    //#line 41 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    x10_long costo = ::x10aux::nullCheck(problemModel)->costOfSolution(
                       true);
    
    //#line 42 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    if (((costo) < (currentCost))) {
        
        //#line 43 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__2979 = ::x10aux::makeStringLit("Costo (RandomSearch): "); strLit__2979; })), costo), (__extension__ ({ static ::x10::lang::String* strLit__2980 = ::x10aux::makeStringLit(". Con variables: "); strLit__2980; }))));
        
        //#line 44 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
        ::x10::io::Console::FMGL(OUT__get)()->print((__extension__ ({ static ::x10::lang::String* strLit__2981 = ::x10aux::makeStringLit("\n"); strLit__2981; })));
    }
    
    //#line 46 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    return costo;
    
}

//#line 49 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::initVar() {
    
    //#line 50 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
}

//#line 53 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::clearNSwap() {
    
    //#line 54 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(nSwap) = ((x10_int)0);
}

//#line 57 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
x10_int cpls::solver::HeuristicSolver::getNSwap() {
    
    //#line 58 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    return this->FMGL(nSwap);
    
}

//#line 61 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSeed(x10_long inSeed) {
    
    //#line 62 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(random) = (__extension__ ({
        ::x10::util::Random* alloc__182 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        (alloc__182)->::x10::util::Random::_constructor(inSeed);
        alloc__182;
    }))
    ;
}

//#line 65 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
void cpls::solver::HeuristicSolver::setSolverType(x10_int mySolverType) {
    
    //#line 66 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
    this->FMGL(mySolverType) = mySolverType;
}

//#line 13 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
::cpls::solver::HeuristicSolver* cpls::solver::HeuristicSolver::cpls__solver__HeuristicSolver____this__cpls__solver__HeuristicSolver(
  ) {
    return this;
    
}
void cpls::solver::HeuristicSolver::__fieldInitializers_cpls_solver_HeuristicSolver(
  ) {
    this->FMGL(move) = (__extension__ ({
        
        //#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/solver/HeuristicSolver.x10"
        ::cpls::util::MovePermutation* alloc__183 =  (new (::x10aux::alloc_z< ::cpls::util::MovePermutation>()) ::cpls::util::MovePermutation());
        
        //#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
        x10_long f__2977 = ((x10_long)(((x10_int)-1)));
        x10_long s__2978 = ((x10_long)(((x10_int)-1)));
        
        //#line 11 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
        alloc__183->FMGL(first) = ((x10_long)-1ll);
        alloc__183->FMGL(second) = ((x10_long)-1ll);
        
        //#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
        alloc__183->FMGL(first) = f__2977;
        
        //#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/MovePermutation.x10"
        alloc__183->FMGL(second) = s__2978;
        alloc__183;
    }))
    ;
    this->FMGL(random) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(nSwap) = ((x10_int)0);
    this->FMGL(problemSize) = ((x10_long)0ll);
    this->FMGL(mySolverType) = ((x10_int)0);
}
void cpls::solver::HeuristicSolver::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(move));
    buf.write(this->FMGL(random));
    buf.write(this->FMGL(nSwap));
    buf.write(this->FMGL(problemSize));
    buf.write(this->FMGL(mySolverType));
    
}

void cpls::solver::HeuristicSolver::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(move) = buf.read< ::cpls::util::MovePermutation*>();
    FMGL(random) = buf.read< ::x10::util::Random*>();
    FMGL(nSwap) = buf.read<x10_int>();
    FMGL(problemSize) = buf.read<x10_long>();
    FMGL(mySolverType) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::solver::HeuristicSolver::rtt;
void cpls::solver::HeuristicSolver::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.HeuristicSolver",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of HeuristicSolver */
/*************************************************/
