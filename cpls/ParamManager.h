#ifndef __CPLS_PARAMMANAGER_H
#define __CPLS_PARAMMANAGER_H

#include <x10rt.h>


#define X10_UTIL_OPTIONSPARSER_H_NODEPS
#include <x10/util/OptionsParser.h>
#undef X10_UTIL_OPTIONSPARSER_H_NODEPS
#define X10_LANG_CHAR_H_NODEPS
#include <x10/lang/Char.h>
#undef X10_LANG_CHAR_H_NODEPS
#define X10_LANG_CHAR_H_NODEPS
#include <x10/lang/Char.h>
#undef X10_LANG_CHAR_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace util { 
class Option;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace io { 
class IOException;
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
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class ParamManager : public ::x10::util::OptionsParser   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::String* FMGL(paramFileName);
    
    ::x10::io::File* FMGL(paramFile);
    
    x10_char FMGL(SEPARETOR);
    
    void _constructor(::x10::lang::Rail< ::x10::lang::String* >* args);
    
    static ::cpls::ParamManager* _make(::x10::lang::Rail< ::x10::lang::String* >* args);
    
    virtual void parseFile();
    virtual ::x10::lang::Rail< ::x10::lang::String* >* myGet(::x10::lang::String* key);
    virtual void printParameters();
    virtual ::cpls::ParamManager* cpls__ParamManager____this__cpls__ParamManager(
      );
    virtual void __fieldInitializers_cpls_ParamManager();
    
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
#endif // CPLS_PARAMMANAGER_H

namespace cpls { 
class ParamManager;
} 

#ifndef CPLS_PARAMMANAGER_H_NODEPS
#define CPLS_PARAMMANAGER_H_NODEPS
#ifndef CPLS_PARAMMANAGER_H_GENERICS
#define CPLS_PARAMMANAGER_H_GENERICS
#endif // CPLS_PARAMMANAGER_H_GENERICS
#endif // __CPLS_PARAMMANAGER_H_NODEPS
