#ifndef __CPLS_ENTITIES_MASTERNODE_H
#define __CPLS_ENTITIES_MASTERNODE_H

#include <x10rt.h>


#define CPLS_ENTITIES_CPLSNODE_H_NODEPS
#include <cpls/entities/CPLSNode.h>
#undef CPLS_ENTITIES_CPLSNODE_H_NODEPS
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
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
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class MasterNode : public ::cpls::entities::CPLSNode   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_int size);
    
    static ::cpls::entities::MasterNode* _make(x10_int size);
    
    virtual void initialize(x10_int idNode);
    virtual ::cpls::entities::MasterNode* cpls__entities__MasterNode____this__cpls__entities__MasterNode(
      );
    virtual void __fieldInitializers_cpls_entities_MasterNode();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // CPLS_ENTITIES_MASTERNODE_H

namespace cpls { namespace entities { 
class MasterNode;
} } 

#ifndef CPLS_ENTITIES_MASTERNODE_H_NODEPS
#define CPLS_ENTITIES_MASTERNODE_H_NODEPS
#ifndef CPLS_ENTITIES_MASTERNODE_H_GENERICS
#define CPLS_ENTITIES_MASTERNODE_H_GENERICS
#endif // CPLS_ENTITIES_MASTERNODE_H_GENERICS
#endif // __CPLS_ENTITIES_MASTERNODE_H_NODEPS
