#ifndef __CPLS_HEADNODE_H
#define __CPLS_HEADNODE_H

#include <x10rt.h>


#define CPLS_CPLSNODE_H_NODEPS
#include <cpls/CPLSNode.h>
#undef CPLS_CPLSNODE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace cpls { 
class SmartPool;
} 
namespace cpls { namespace entities { 
class NodeConfig;
} } 
namespace cpls { namespace entities { 
class PoolConfig;
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
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { namespace util { 
template<class TPMGL(T)> class Maybe;
} } 
namespace cpls { namespace entities { 
class State;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class HeadNode : public ::cpls::CPLSNode   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::cpls::CPLSNode::start;
    
    ::cpls::SmartPool* FMGL(teamPool);
    
    x10_boolean FMGL(isThereAMasterNode);
    
    void _constructor();
    
    static ::cpls::HeadNode* _make();
    
    virtual void initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                            ::cpls::entities::PoolConfig* teamPoolConfig,
                            x10_long problemSize, x10_long inSeed,
                            x10_long maxIter);
    virtual void setMasterNodeIndicator(x10_boolean isThereAMasterNode);
    virtual void start();
    virtual void getBestConf();
    virtual ::cpls::HeadNode* cpls__HeadNode____this__cpls__HeadNode(
      );
    virtual void __fieldInitializers_cpls_HeadNode();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_HEADNODE_H

namespace cpls { 
class HeadNode;
} 

#ifndef CPLS_HEADNODE_H_NODEPS
#define CPLS_HEADNODE_H_NODEPS
#ifndef CPLS_HEADNODE_H_GENERICS
#define CPLS_HEADNODE_H_GENERICS
#endif // CPLS_HEADNODE_H_GENERICS
#endif // __CPLS_HEADNODE_H_NODEPS
