#ifndef __CPLS_CPLSNODE_H
#define __CPLS_CPLSNODE_H

#include <x10rt.h>


#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace cpls { namespace entities { 
class NodeConfig;
} } 
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace cpls { namespace measurements { 
class GlobalStats;
} } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicBoolean;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { namespace entities { 
class PoolConfig;
} } 
namespace cpls { 
class HeuristicFactory;
} 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class CPLSNode : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::cpls::entities::NodeConfig* FMGL(nodeConfig);
    
    ::cpls::solver::HeuristicSolver* FMGL(heuristicSolver);
    
    ::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >*
      FMGL(pointersComunication);
    
    x10_int FMGL(myPlaceId);
    
    ::cpls::measurements::GlobalStats* FMGL(stats);
    
    ::cpls::measurements::GlobalStats* FMGL(sampleAccStats);
    
    ::cpls::measurements::GlobalStats* FMGL(genAccStats);
    
    x10_long FMGL(time);
    
    x10_boolean FMGL(interTeamKill);
    
    ::x10::util::concurrent::AtomicBoolean* FMGL(winnerLatch);
    
    x10_long FMGL(bcost);
    
    x10_boolean FMGL(verify);
    
    ::x10::lang::Rail< x10_int >* FMGL(bestSolHere);
    
    ::x10::lang::String* FMGL(solString);
    
    x10_int FMGL(cGroupReset);
    
    void _constructor();
    
    virtual void initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                            ::cpls::entities::PoolConfig* cplsPoolConfig,
                            x10_long problemSize);
    virtual void setHeuristicSolver(::cpls::solver::HeuristicSolver* hs);
    virtual void setPlaceId(x10_int placeId);
    virtual void setPointersCommunication(::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >* pointersComunication);
    virtual void addPointerComm(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> pointerToPlaces);
    virtual void configHeuristic(::cpls::problem::ProblemGenericModel* problemModel);
    virtual void sendkill();
    virtual void start();
    virtual void start(x10_long seedIn, x10_long targetCost, x10_boolean strictLow,
                       x10_long iterations);
    virtual void setStats_();
    virtual void setStats(::cpls::measurements::GlobalStats* c);
    virtual void accStats(::cpls::measurements::GlobalStats* c);
    virtual x10_int getGroupReset();
    virtual x10_boolean announceWinner(x10_long p);
    virtual ::cpls::CPLSNode* cpls__CPLSNode____this__cpls__CPLSNode(
      );
    virtual void __fieldInitializers_cpls_CPLSNode();
    
    // Serialization
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_CPLSNODE_H

namespace cpls { 
class CPLSNode;
} 

#ifndef CPLS_CPLSNODE_H_NODEPS
#define CPLS_CPLSNODE_H_NODEPS
#ifndef CPLS_CPLSNODE_H_GENERICS
#define CPLS_CPLSNODE_H_GENERICS
#endif // CPLS_CPLSNODE_H_GENERICS
#endif // __CPLS_CPLSNODE_H_NODEPS
