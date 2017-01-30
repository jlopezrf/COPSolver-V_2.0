#ifndef __CPLS_MAIN_H
#define __CPLS_MAIN_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace cpls { 
class ParamManager;
} 
namespace cpls { namespace entities { 
class CPLSConfig;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { 
class Main__COPProblemModelFactory;
} 
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace cpls { namespace entities { 
class NodeConfig;
} } 
namespace cpls { namespace entities { 
class PoolConfig;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace cpls { namespace solver { namespace entities { 
class ASParameters;
} } } 
namespace cpls { namespace solver { namespace entities { 
class EOParameters;
} } } 
namespace cpls { namespace solver { namespace entities { 
class RoTSParameters;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace cpls { namespace solver { namespace entities { 
class HeuristicParameters;
} } } 
namespace cpls { 
class NodeInstancer;
} 
namespace cpls { namespace util { 
class Logger;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
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
namespace cpls { namespace entities { 
class ExplorerConfig;
} } 
namespace cpls { namespace entities { 
class MasterConfig;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace cpls { namespace entities { 
class HeadConfig;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class Main : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    static x10_int problemDetect(::x10::lang::String* problem);
    static ::x10::array::Array_2< ::cpls::entities::NodeConfig*>* heuristicsAndRolesDefinition(
      ::x10::lang::String* solverIn, x10_int numberOfTeams, x10_int nodesPerTeam,
      x10_boolean whitMasterNode);
    static ::cpls::solver::entities::HeuristicParameters*
      whichHeuristicParam(::x10::lang::String* solverIn);
    static x10_int whichHeuristicInt(::x10::lang::String* solverIn);
    virtual ::cpls::Main* cpls__Main____this__cpls__Main(
      );
    void _constructor();
    
    static ::cpls::Main* _make();
    
    virtual void __fieldInitializers_cpls_Main();
    
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
#endif // CPLS_MAIN_H

namespace cpls { 
class Main;
} 

#ifndef CPLS_MAIN_H_NODEPS
#define CPLS_MAIN_H_NODEPS
#ifndef CPLS_MAIN_H_GENERICS
#define CPLS_MAIN_H_GENERICS
#endif // CPLS_MAIN_H_GENERICS
#endif // __CPLS_MAIN_H_NODEPS
