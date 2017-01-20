#ifndef __CPLS_UTIL_CPLSFILEREADER_H
#define __CPLS_UTIL_CPLSFILEREADER_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

class CPLSFileReader : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual ::cpls::util::CPLSFileReader* cpls__util__CPLSFileReader____this__cpls__util__CPLSFileReader(
      );
    void _constructor();
    
    static ::cpls::util::CPLSFileReader* _make();
    
    virtual void __fieldInitializers_cpls_util_CPLSFileReader();
    
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
#endif // CPLS_UTIL_CPLSFILEREADER_H

namespace cpls { namespace util { 
class CPLSFileReader;
} } 

#ifndef CPLS_UTIL_CPLSFILEREADER_H_NODEPS
#define CPLS_UTIL_CPLSFILEREADER_H_NODEPS
#ifndef CPLS_UTIL_CPLSFILEREADER_H_GENERICS
#define CPLS_UTIL_CPLSFILEREADER_H_GENERICS
#endif // CPLS_UTIL_CPLSFILEREADER_H_GENERICS
#endif // __CPLS_UTIL_CPLSFILEREADER_H_NODEPS
