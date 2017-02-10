#ifndef __CPLS_UTIL_UTILS_H
#define __CPLS_UTIL_UTILS_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

class Utils : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static ::x10::lang::Rail< TPMGL(T) >* copy(::x10::lang::Rail< TPMGL(T) >* a);
    static void show(::x10::lang::String* s, ::x10::lang::Rail< x10_int >* d);
    virtual ::cpls::util::Utils* cpls__util__Utils____this__cpls__util__Utils(
      );
    void _constructor();
    
    static ::cpls::util::Utils* _make();
    
    virtual void __fieldInitializers_cpls_util_Utils();
    
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
#endif // CPLS_UTIL_UTILS_H

namespace cpls { namespace util { 
class Utils;
} } 

#ifndef CPLS_UTIL_UTILS_H_NODEPS
#define CPLS_UTIL_UTILS_H_NODEPS
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Any.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_UTIL_UTILS__CLOSURE__1_CLOSURE
#define CPLS_UTIL_UTILS__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class cpls_util_Utils__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable <cpls_util_Utils__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    TPMGL(T) __apply(x10_long i) {
        return ::x10aux::nullCheck(a)->x10::lang::template Rail< TPMGL(T) >::__apply(
                 i);
        
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* a;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->a);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_Utils__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<cpls_util_Utils__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_a = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        cpls_util_Utils__closure__1<TPMGL(T) >* this_ = new (storage) cpls_util_Utils__closure__1<TPMGL(T) >(that_a);
        return this_;
    }
    
    cpls_util_Utils__closure__1(::x10::lang::Rail< TPMGL(T) >* a) : a(a) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Utils.x10:4";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::template itable <cpls_util_Utils__closure__1<TPMGL(T) > >cpls_util_Utils__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_Utils__closure__1<TPMGL(T) >::__apply, &cpls_util_Utils__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry cpls_util_Utils__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >, &cpls_util_Utils__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t cpls_util_Utils__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_Utils__closure__1<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // CPLS_UTIL_UTILS__CLOSURE__1_CLOSURE
#ifndef CPLS_UTIL_UTILS_H_GENERICS
#define CPLS_UTIL_UTILS_H_GENERICS
#ifndef CPLS_UTIL_UTILS_H_copy_429
#define CPLS_UTIL_UTILS_H_copy_429
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* cpls::util::Utils::copy(
  ::x10::lang::Rail< TPMGL(T) >* a) {
    return ::x10::lang::Rail< TPMGL(T) >::_make((x10_long)(::x10aux::nullCheck(a)->FMGL(size)),
                                                reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)> >(sizeof(cpls_util_Utils__closure__1<TPMGL(T)>)))cpls_util_Utils__closure__1<TPMGL(T)>(a))));
    
}
#endif // CPLS_UTIL_UTILS_H_copy_429
#endif // CPLS_UTIL_UTILS_H_GENERICS
#endif // __CPLS_UTIL_UTILS_H_NODEPS
