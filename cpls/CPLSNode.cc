/*************************************************/
/* START of CPLSNode */
#include <cpls/CPLSNode.h>

#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <cpls/entities/NodeConfig.h>
#include <cpls/solver/HeuristicSolver.h>
#include <x10/util/ArrayList.h>
#include <cpls/measurements/GlobalStats.h>
#include <x10/util/concurrent/AtomicBoolean.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <cpls/entities/PoolConfig.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <cpls/HeuristicFactory.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/util/Random.h>
#include <x10/lang/System.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Double.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_CPLSNODE__CLOSURE__1_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_CPLSNode__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<cpls_CPLSNode__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply() {
        try {
            return saved_this->announceWinner(home);
            
        }
        catch (::x10::lang::CheckedThrowable* __exc295) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc295);
                {
                    x10_boolean __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_boolean>(::x10::lang::Runtime::wrapAtChecked< x10_boolean >(
                                                                                                    __lowerer__var__0__));
                    return __lowerer__var__1__;
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long home;
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->home);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__1* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__1>();
        buf.record_reference(storage);
        x10_long that_home = buf.read<x10_long>();
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__1* this_ = new (storage) cpls_CPLSNode__closure__1(that_home, that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__1(x10_long home, ::cpls::CPLSNode* saved_this) : home(home), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10:114";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__1_CLOSURE
#ifndef CPLS_CPLSNODE__CLOSURE__2_CLOSURE
#define CPLS_CPLSNODE__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class cpls_CPLSNode__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        try {
            
            //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
            saved_this->setStats(c);
        }
        catch (::x10::lang::CheckedThrowable* __exc297) {
            if (true) {
                ::x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast< ::x10::lang::CheckedThrowable*>(__exc297);
                {
                    x10_int __lowerer__var__1__ = ::x10aux::class_cast_unchecked<x10_int>(::x10::lang::Runtime::wrapAtChecked< x10_int >(
                                                                                            __lowerer__var__0__));
                    
                }
            } else
            throw;
        }
    }
    
    // captured environment
    ::cpls::measurements::GlobalStats* c;
    ::cpls::CPLSNode* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->c);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_CPLSNode__closure__2* storage = ::x10aux::alloc_z<cpls_CPLSNode__closure__2>();
        buf.record_reference(storage);
        ::cpls::measurements::GlobalStats* that_c = buf.read< ::cpls::measurements::GlobalStats*>();
        ::cpls::CPLSNode* that_saved_this = buf.read< ::cpls::CPLSNode*>();
        cpls_CPLSNode__closure__2* this_ = new (storage) cpls_CPLSNode__closure__2(that_c, that_saved_this);
        return this_;
    }
    
    cpls_CPLSNode__closure__2(::cpls::measurements::GlobalStats* c, ::cpls::CPLSNode* saved_this) : c(c), saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10:154";
    }

};

#endif // CPLS_CPLSNODE__CLOSURE__2_CLOSURE

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
/*********Variables para el reporte de estadísticas*********/

//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
/*********Variables la comunicación entre los nodos*********/

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
/***********************************************************/

//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"

//#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::_constructor() {
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->cpls::CPLSNode::__fieldInitializers_cpls_CPLSNode();
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(pointersComunication) = ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >::_make();
}


//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                                ::cpls::entities::PoolConfig* poolConfig) {
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23919 = ::x10aux::makeStringLit("Se inicializa con la heurisica"); strLit__23919; })), ::cpls::HeuristicFactory::getHeuristicName(
                                                                                                                                                                                                                      ::x10aux::nullCheck(config)->getHeuristic()))));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(heuristicSolver) = ::cpls::HeuristicFactory::make(
                                    ::x10aux::nullCheck(config)->getHeuristic());
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(bestSolHere) = ::x10::lang::Rail< x10_int >::_make(::x10aux::nullCheck(this->FMGL(heuristicSolver))->getSizeProblem(),
                                                                  ((x10_int)0));
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23920 = ::x10aux::makeStringLit("Nodo inicializado en el proceso"); strLit__23920; })), idPlace)));
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setHeuristicSolver(::cpls::solver::HeuristicSolver* hs) {
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(heuristicSolver) = hs;
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setPlaceId(x10_int placeId) {
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(myPlaceId) = placeId;
}

//#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setPointersCommunication(::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >* pointersComunication) {
    
    //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(pointersComunication) = pointersComunication;
}

//#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::addPointerComm(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> pointerToPlaces) {
    
    //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(pointersComunication))->add(
      pointerToPlaces);
}

//#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::configHeuristic(::cpls::problem::ProblemGenericModel* problemModel) {
    
    //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setProblemModel(
      problemModel);
}

//#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::sendkill() {
    
    //#line 73 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->kill();
}

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::start() {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23925 = ::x10aux::makeStringLit("Se invoca metodo start"); strLit__23925; }))));
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->solve();
}

//#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::start(x10_long seedIn, x10_long targetCost,
                           x10_boolean strictLow) {
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23926 = ::x10aux::makeStringLit("Se ingresa al start en "); strLit__23926; })), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id))));
    
    //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(stats)->setTarget(targetCost);
    
    //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(sampleAccStats)->setTarget(targetCost);
    
    //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(genAccStats)->setTarget(targetCost);
    
    //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10::util::Random* random = ::x10::util::Random::_make(seedIn);
    
    //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    x10_long cost = (x10_long)0x7fffffffffffffffLL;
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->setSeed(
      random->nextLong());
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(time) = (-(::x10::lang::System::nanoTime()));
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    cost = ::x10aux::nullCheck(this->FMGL(heuristicSolver))->solve(
             targetCost, strictLow);
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(time) = ((this->FMGL(time)) + (::x10::lang::System::nanoTime()));
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(interTeamKill) = true;
    
    //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    if (((strictLow && ((cost) < (targetCost))) || (!(strictLow) &&
        ((cost) <= (targetCost))))) {
        
        //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        x10_long home = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
        
        //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        x10_boolean winner = ::x10::lang::Runtime::evalAt< x10_boolean >(
                               ::x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                               reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(cpls_CPLSNode__closure__1)))cpls_CPLSNode__closure__1(home, this))),
                               ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        this->FMGL(bcost) = cost;
        
        //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        if (winner) {
            
            //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
            this->setStats_();
            
            //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
            if (this->FMGL(verify)) {
                
                //#line 121 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
                ::x10aux::nullCheck(this->FMGL(heuristicSolver))->displaySolution();
                
                //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23927 = ::x10aux::makeStringLit(", Solution is "); strLit__23927; })), ::x10aux::nullCheck(this->FMGL(heuristicSolver))->verify()
                    ? ((__extension__ ({ static ::x10::lang::String* strLit__23928 = ::x10aux::makeStringLit("perfect !!!"); strLit__23928; })))
                    : ((__extension__ ({ static ::x10::lang::String* strLit__23929 = ::x10aux::makeStringLit("not perfect "); strLit__23929; }))))));
            }
            
        }
        
    } else {
        
        //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        this->FMGL(solString) = ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__23930 = ::x10aux::makeStringLit("Solution "); strLit__23930; })), ::x10::lang::Place::_make(::x10aux::here)), (__extension__ ({ static ::x10::lang::String* strLit__23931 = ::x10aux::makeStringLit(" is "); strLit__23931; }))), ::x10aux::nullCheck(this->FMGL(heuristicSolver))->verify()
          ? ((__extension__ ({ static ::x10::lang::String* strLit__23932 = ::x10aux::makeStringLit("perfect !!!"); strLit__23932; })))
          : ((__extension__ ({ static ::x10::lang::String* strLit__23933 = ::x10aux::makeStringLit("not perfect, maybe wrong ..."); strLit__23933; }))));
        
        //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        x10_long sz = ::x10aux::nullCheck(this->FMGL(heuristicSolver))->getSizeProblem();
        
        //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        ::x10::lang::Rail< x10_int >* src__19771 = ::x10aux::nullCheck(this->FMGL(heuristicSolver))->getBestConfiguration();
        ::x10::lang::Rail< x10_int >* dst__19772 = (__extension__ ({
            ::x10::lang::Rail< x10_int >* t__19773 = this->FMGL(bestSolHere);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__19773)->FMGL(size)),
                                           sz)))) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__23934 = ::x10aux::makeStringLit("x10.lang.Rail[x10.lang.Int]{self.size==sz}"); strLit__23934; })))));
            }
            t__19773;
        }))
        ;
        if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(src__19771)->FMGL(size)),
                                       (x10_long)(::x10aux::nullCheck(dst__19772)->FMGL(size))))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((__extension__ ({ static ::x10::lang::String* strLit__23935 = ::x10aux::makeStringLit("!(src$19756.size == dst$19757.size)"); strLit__23935; })))));
        }
        ::x10::lang::Rail< void >::copy< x10_int >(src__19771,
                                                   dst__19772);
    }
    
}

//#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setStats_() {
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    x10_long winPlace = ::x10::lang::Place::_make(::x10aux::here)->FMGL(id);
    
    //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    x10_double time = ((((x10_double) (this->FMGL(time)))) / (1.0E9));
    
    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::cpls::measurements::GlobalStats* c = ::cpls::measurements::GlobalStats::_make();
    
    //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    ::x10aux::nullCheck(this->FMGL(heuristicSolver))->reportStats(
      c);
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    c->setTime(time);
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    c->setTeam(((x10_int) (winPlace)));
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    c->setExplorer(((x10_int)0));
    {
        
        //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        ::x10::lang::Runtime::runAt(::x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                    reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(cpls_CPLSNode__closure__2)))cpls_CPLSNode__closure__2(c, this))),
                                    ::x10aux::class_cast_unchecked< ::x10::lang::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::setStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(stats)->setStats(c);
    
    //#line 161 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->accStats(this->FMGL(stats));
}

//#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
void cpls::CPLSNode::accStats(::cpls::measurements::GlobalStats* c) {
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(genAccStats)->accStats(c);
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    this->FMGL(sampleAccStats)->accStats(c);
}

//#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
x10_int cpls::CPLSNode::getGroupReset() {
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    return this->FMGL(cGroupReset);
    
}

//#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
x10_boolean cpls::CPLSNode::announceWinner(x10_long p) {
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    x10_boolean result = this->FMGL(winnerLatch)->x10::util::concurrent::AtomicBoolean::compareAndSet(
                           false, true);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    if (result) {
        
        //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Place>* k__19770;
            for (k__19770 = ::x10aux::nullCheck(::x10::lang::Place::places())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(k__19770));
                 ) {
                ::x10::lang::Place k = ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(k__19770));
                
                //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
                if ((!::x10aux::struct_equals(p, k->FMGL(id))))
                {
                    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__23936 = ::x10aux::makeStringLit("Ac\341 debo implementar un Kill"); strLit__23936; }))));
                }
                
            }
        }
        
    }
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
    return result;
    
}

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/CPLSNode.x10"
::cpls::CPLSNode* cpls::CPLSNode::cpls__CPLSNode____this__cpls__CPLSNode(
  ) {
    return this;
    
}
void cpls::CPLSNode::__fieldInitializers_cpls_CPLSNode() {
    this->FMGL(nodeConfig) = (::x10aux::class_cast_unchecked< ::cpls::entities::NodeConfig*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(heuristicSolver) = (::x10aux::class_cast_unchecked< ::cpls::solver::HeuristicSolver*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(pointersComunication) = (::x10aux::class_cast_unchecked< ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(myPlaceId) = ((x10_int)0);
    this->FMGL(stats) = ::cpls::measurements::GlobalStats::_make();
    this->FMGL(sampleAccStats) = ::cpls::measurements::GlobalStats::_make();
    this->FMGL(genAccStats) = ::cpls::measurements::GlobalStats::_make();
    this->FMGL(time) = ((x10_long)0ll);
    this->FMGL(interTeamKill) = false;
    this->FMGL(winnerLatch) = ::x10::util::concurrent::AtomicBoolean::_make(false);
    this->FMGL(bcost) = ((x10_long)0ll);
    this->FMGL(verify) = false;
    this->FMGL(bestSolHere) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(solString) = ::x10::lang::String::_make();
    this->FMGL(cGroupReset) = ((x10_int)0);
}
void cpls::CPLSNode::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nodeConfig));
    buf.write(this->FMGL(heuristicSolver));
    buf.write(this->FMGL(pointersComunication));
    buf.write(this->FMGL(myPlaceId));
    buf.write(this->FMGL(stats));
    buf.write(this->FMGL(sampleAccStats));
    buf.write(this->FMGL(genAccStats));
    buf.write(this->FMGL(time));
    buf.write(this->FMGL(interTeamKill));
    buf.write(this->FMGL(winnerLatch));
    buf.write(this->FMGL(bcost));
    buf.write(this->FMGL(verify));
    buf.write(this->FMGL(bestSolHere));
    buf.write(this->FMGL(solString));
    buf.write(this->FMGL(cGroupReset));
    
}

void cpls::CPLSNode::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nodeConfig) = buf.read< ::cpls::entities::NodeConfig*>();
    FMGL(heuristicSolver) = buf.read< ::cpls::solver::HeuristicSolver*>();
    FMGL(pointersComunication) = buf.read< ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >*>();
    FMGL(myPlaceId) = buf.read<x10_int>();
    FMGL(stats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(sampleAccStats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(genAccStats) = buf.read< ::cpls::measurements::GlobalStats*>();
    FMGL(time) = buf.read<x10_long>();
    FMGL(interTeamKill) = buf.read<x10_boolean>();
    FMGL(winnerLatch) = buf.read< ::x10::util::concurrent::AtomicBoolean*>();
    FMGL(bcost) = buf.read<x10_long>();
    FMGL(verify) = buf.read<x10_boolean>();
    FMGL(bestSolHere) = buf.read< ::x10::lang::Rail< x10_int >*>();
    FMGL(solString) = buf.read< ::x10::lang::String*>();
    FMGL(cGroupReset) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::CPLSNode::rtt;
void cpls::CPLSNode::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.CPLSNode",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0<x10_boolean>::itable<cpls_CPLSNode__closure__1>cpls_CPLSNode__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__1::__apply, &cpls_CPLSNode__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >, &cpls_CPLSNode__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::VoidFun_0_0::itable<cpls_CPLSNode__closure__2>cpls_CPLSNode__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_CPLSNode__closure__2::__apply, &cpls_CPLSNode__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_CPLSNode__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &cpls_CPLSNode__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_CPLSNode__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_CPLSNode__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CPLSNode */
/*************************************************/
