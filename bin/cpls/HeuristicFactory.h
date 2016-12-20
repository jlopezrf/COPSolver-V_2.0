#ifndef __CPLS_HEURISTICFACTORY_H
#define __CPLS_HEURISTICFACTORY_H

#include <x10rt.h>


namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { 
class CPLSOptionsEnum__HeuristicsSupported;
} 
namespace cpls { namespace solver { 
class AdaptiveSearch;
} } 
namespace cpls { namespace solver { 
class EOSearch;
} } 
namespace cpls { namespace solver { 
class RoTSearch;
} } 
namespace cpls { namespace solver { 
class RandomSearch;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class HeuristicFactory : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::cpls::solver::HeuristicSolver* make(x10_int kind);
    virtual ::cpls::HeuristicFactory* cpls__HeuristicFactory____this__cpls__HeuristicFactory(
      );
    void _constructor();
    
    static ::cpls::HeuristicFactory* _make();
    
    virtual void __fieldInitializers_cpls_HeuristicFactory();
    
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
#endif // CPLS_HEURISTICFACTORY_H

namespace cpls { 
class HeuristicFactory;
} 

#ifndef CPLS_HEURISTICFACTORY_H_NODEPS
#define CPLS_HEURISTICFACTORY_H_NODEPS
#ifndef CPLS_HEURISTICFACTORY_H_GENERICS
#define CPLS_HEURISTICFACTORY_H_GENERICS
#endif // CPLS_HEURISTICFACTORY_H_GENERICS
#endif // __CPLS_HEURISTICFACTORY_H_NODEPS
