#ifndef __CPLS_NODEINSTANCER_H
#define __CPLS_NODEINSTANCER_H

#include <x10rt.h>


namespace cpls { 
class CPLSNode;
} 
namespace cpls { namespace entities { 
class CPLSConfig;
} } 
namespace cpls { 
class ParamManager;
} 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace cpls { namespace entities { 
class NodeConfig;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup__SimplePlaceGroup;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace cpls { namespace entities { 
class PoolConfig;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace cpls { namespace measurements { 
class GlobalStats;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
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
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class NodeInstancer : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::cpls::CPLSNode* FMGL(masterNode);
    
    static void installSolvers(::cpls::entities::CPLSConfig* configCPLS, ::cpls::ParamManager* opts);
    static void verifyWinner(::x10::lang::PlaceLocalHandle< ::cpls::CPLSNode*> refPlaces,
                             x10_boolean verify, x10_long targetCost,
                             x10_int explorerWinner);
    virtual ::cpls::NodeInstancer* cpls__NodeInstancer____this__cpls__NodeInstancer(
      );
    void _constructor();
    
    static ::cpls::NodeInstancer* _make();
    
    virtual void __fieldInitializers_cpls_NodeInstancer();
    
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
#endif // CPLS_NODEINSTANCER_H

namespace cpls { 
class NodeInstancer;
} 

#ifndef CPLS_NODEINSTANCER_H_NODEPS
#define CPLS_NODEINSTANCER_H_NODEPS
#ifndef CPLS_NODEINSTANCER_H_GENERICS
#define CPLS_NODEINSTANCER_H_GENERICS
#endif // CPLS_NODEINSTANCER_H_GENERICS
#endif // __CPLS_NODEINSTANCER_H_NODEPS
