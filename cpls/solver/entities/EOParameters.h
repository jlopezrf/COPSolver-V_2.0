#ifndef __CPLS_SOLVER_ENTITIES_EOPARAMETERS_H
#define __CPLS_SOLVER_ENTITIES_EOPARAMETERS_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace solver { namespace entities { 

class EOParameters : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_double FMGL(tauUserSel);
    
    x10_int FMGL(pdfUserSel);
    
    x10_int FMGL(selSecond);
    
    void _constructor(x10_double tauUserSel, x10_int pdfUserSel, x10_int selSecond);
    
    static ::cpls::solver::entities::EOParameters* _make(x10_double tauUserSel,
                                                         x10_int pdfUserSel,
                                                         x10_int selSecond);
    
    virtual x10_double getTauUserSel();
    virtual x10_int getPdfUserSel();
    virtual x10_int getSelSecond();
    virtual ::cpls::solver::entities::EOParameters* cpls__solver__entities__EOParameters____this__cpls__solver__entities__EOParameters(
      );
    virtual void __fieldInitializers_cpls_solver_entities_EOParameters(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // CPLS_SOLVER_ENTITIES_EOPARAMETERS_H

namespace cpls { namespace solver { namespace entities { 
class EOParameters;
} } } 

#ifndef CPLS_SOLVER_ENTITIES_EOPARAMETERS_H_NODEPS
#define CPLS_SOLVER_ENTITIES_EOPARAMETERS_H_NODEPS
#ifndef CPLS_SOLVER_ENTITIES_EOPARAMETERS_H_GENERICS
#define CPLS_SOLVER_ENTITIES_EOPARAMETERS_H_GENERICS
#endif // CPLS_SOLVER_ENTITIES_EOPARAMETERS_H_GENERICS
#endif // __CPLS_SOLVER_ENTITIES_EOPARAMETERS_H_NODEPS
