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
namespace x10 { namespace util { 
class OptionsParser;
} } 
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { 
class Main__COPModelProblemFactory;
} 
namespace cpls { 
class NodeConfig;
} 
namespace cpls { 
class NodeInstancer;
} 
namespace x10 { namespace lang { 
class Place;
} } 
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class Main : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    static x10_int problemDetect(::x10::lang::String* problem);
    static x10_int heuristicDetect(::x10::lang::String* solverIn);
    static ::x10::lang::Rail< ::cpls::NodeConfig* >* buildConfig();
    virtual ::cpls::Main* cpls__Main____this__cpls__Main();
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
