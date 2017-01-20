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
namespace cpls { namespace entities { 
class PoolConfig;
} } 
namespace cpls { 
class HeuristicFactory;
} 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace util { 
class Random;
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
    
    void _constructor();
    
    virtual void initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                            ::cpls::entities::PoolConfig* poolConfig);
    virtual void setHeuristicSolver(::cpls::solver::HeuristicSolver* hs);
    virtual void setPlaceId(x10_int placeId);
    virtual void setPointersCommunication(::x10::util::ArrayList< ::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> >* pointersComunication);
    virtual void addPointerComm(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> ponterToPlaces);
    virtual void configHeuristic(::cpls::problem::ProblemGenericModel* problemModel);
    virtual void sendkill();
    virtual void start();
    virtual void start(x10_long seedIn, x10_long targetCost, x10_boolean strictLow);
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
