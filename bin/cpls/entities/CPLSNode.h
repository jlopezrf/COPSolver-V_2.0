#ifndef __CPLS_ENTITIES_CPLSNODE_H
#define __CPLS_ENTITIES_CPLSNODE_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace entities { 

class CPLSNode : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(nodeRole);
    
    x10_int FMGL(nodeConfig);
    
    ::cpls::solver::HeuristicSolver* FMGL(heuristicSolver);
    
    ::cpls::problem::ProblemGenericModel* FMGL(problemModel);
    
    void _constructor(x10_int nodeRole);
    
    static ::cpls::entities::CPLSNode* _make(x10_int nodeRole);
    
    virtual void initialize();
    virtual void setHeuristicSolver(::cpls::solver::HeuristicSolver* hs);
    virtual void setProblemModel(::cpls::problem::ProblemGenericModel* pm);
    virtual ::cpls::entities::CPLSNode* cpls__entities__CPLSNode____this__cpls__entities__CPLSNode(
      );
    virtual void __fieldInitializers_cpls_entities_CPLSNode();
    
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
#endif // CPLS_ENTITIES_CPLSNODE_H

namespace cpls { namespace entities { 
class CPLSNode;
} } 

#ifndef CPLS_ENTITIES_CPLSNODE_H_NODEPS
#define CPLS_ENTITIES_CPLSNODE_H_NODEPS
#ifndef CPLS_ENTITIES_CPLSNODE_H_GENERICS
#define CPLS_ENTITIES_CPLSNODE_H_GENERICS
#endif // CPLS_ENTITIES_CPLSNODE_H_GENERICS
#endif // __CPLS_ENTITIES_CPLSNODE_H_NODEPS
