#ifndef __CPLS_MASTERNODE_H
#define __CPLS_MASTERNODE_H

#include <x10rt.h>


#define CPLS_CPLSNODE_H_NODEPS
#include <cpls/CPLSNode.h>
#undef CPLS_CPLSNODE_H_NODEPS
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class MasterNode : public ::cpls::CPLSNode   {
    public:
    RTT_H_DECLS_CLASS
    
    using ::cpls::CPLSNode::start;
    
    ::cpls::SmartPool* FMGL(cplsPool);
    
    void _constructor();
    
    static ::cpls::MasterNode* _make();
    
    virtual void initialize(::cpls::entities::NodeConfig* config, x10_int idPlace,
                            ::cpls::entities::PoolConfig* cplsPoolConfig,
                            x10_long problemSize, x10_long inSeed,
                            x10_long maxIters);
    virtual void start();
    virtual ::cpls::MasterNode* cpls__MasterNode____this__cpls__MasterNode(
      );
    virtual void __fieldInitializers_cpls_MasterNode();
    
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
#endif // CPLS_MASTERNODE_H

namespace cpls { 
class MasterNode;
} 

#ifndef CPLS_MASTERNODE_H_NODEPS
#define CPLS_MASTERNODE_H_NODEPS
#ifndef CPLS_MASTERNODE_H_GENERICS
#define CPLS_MASTERNODE_H_GENERICS
#endif // CPLS_MASTERNODE_H_GENERICS
#endif // __CPLS_MASTERNODE_H_NODEPS
