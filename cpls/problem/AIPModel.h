#ifndef __CPLS_PROBLEM_AIPMODEL_H
#define __CPLS_PROBLEM_AIPMODEL_H

#include <x10rt.h>


#define CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
#include <cpls/problem/ProblemGenericModel.h>
#undef CPLS_PROBLEM_PROBLEMGENERICMODEL_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace problem { 

class AIPModel : public ::cpls::problem::ProblemGenericModel   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_long sz);
    
    static ::cpls::problem::AIPModel* _make(x10_long sz);
    
    virtual ::cpls::problem::AIPModel* cpls__problem__AIPModel____this__cpls__problem__AIPModel(
      );
    virtual void __fieldInitializers_cpls_problem_AIPModel();
    
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
#endif // CPLS_PROBLEM_AIPMODEL_H

namespace cpls { namespace problem { 
class AIPModel;
} } 

#ifndef CPLS_PROBLEM_AIPMODEL_H_NODEPS
#define CPLS_PROBLEM_AIPMODEL_H_NODEPS
#ifndef CPLS_PROBLEM_AIPMODEL_H_GENERICS
#define CPLS_PROBLEM_AIPMODEL_H_GENERICS
#endif // CPLS_PROBLEM_AIPMODEL_H_GENERICS
#endif // __CPLS_PROBLEM_AIPMODEL_H_NODEPS