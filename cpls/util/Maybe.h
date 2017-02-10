#ifndef __CPLS_UTIL_MAYBE_H
#define __CPLS_UTIL_MAYBE_H

#include <x10rt.h>


namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace util { 

template<class TPMGL(T)> class Maybe;
template <> class Maybe<void>;
template<class TPMGL(T)> class Maybe : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    TPMGL(T) FMGL(data);
    
    void _constructor(TPMGL(T) t);
    
    static ::cpls::util::Maybe<TPMGL(T)>* _make(TPMGL(T) t);
    
    virtual TPMGL(T) __apply();
    virtual ::cpls::util::Maybe<TPMGL(T)>* cpls__util__Maybe____this__cpls__util__Maybe(
      );
    virtual void __fieldInitializers_cpls_util_Maybe();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType cpls::util::Maybe<TPMGL(T)>::rtt;
template<class TPMGL(T)> void cpls::util::Maybe<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::cpls::util::Maybe<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "cpls.util.Maybe";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Maybe<void> : public ::x10::lang::X10Class {
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } 
#endif // CPLS_UTIL_MAYBE_H

namespace cpls { namespace util { 
template<class TPMGL(T)> class Maybe;
} } 

#ifndef CPLS_UTIL_MAYBE_H_NODEPS
#define CPLS_UTIL_MAYBE_H_NODEPS
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_UTIL_MAYBE_H_GENERICS
#define CPLS_UTIL_MAYBE_H_GENERICS
#endif // CPLS_UTIL_MAYBE_H_GENERICS
#ifndef CPLS_UTIL_MAYBE_H_IMPLEMENTATION
#define CPLS_UTIL_MAYBE_H_IMPLEMENTATION
#include <cpls/util/Maybe.h>


//#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Maybe.x10"

//#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Maybe.x10"
template<class TPMGL(T)> void cpls::util::Maybe<TPMGL(T)>::_constructor(TPMGL(T) t) {
    
    //#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Maybe.x10"
    this->cpls::util::template Maybe<TPMGL(T)>::__fieldInitializers_cpls_util_Maybe();
    
    //#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Maybe.x10"
    this->FMGL(data) = t;
}
template<class TPMGL(T)> ::cpls::util::Maybe<TPMGL(T)>* cpls::util::Maybe<TPMGL(T)>::_make(
                           TPMGL(T) t) {
    ::cpls::util::Maybe<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::cpls::util::Maybe<TPMGL(T)> >()) ::cpls::util::Maybe<TPMGL(T)>();
    this_->_constructor(t);
    return this_;
}



//#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Maybe.x10"
template<class TPMGL(T)> TPMGL(T) cpls::util::Maybe<TPMGL(T)>::__apply(
  ) {
    return this->FMGL(data);
    
}

//#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/src/cpls/util/Maybe.x10"
template<class TPMGL(T)> ::cpls::util::Maybe<TPMGL(T)>* cpls::util::Maybe<TPMGL(T)>::cpls__util__Maybe____this__cpls__util__Maybe(
  ) {
    return this;
    
}
template<class TPMGL(T)> void cpls::util::Maybe<TPMGL(T)>::__fieldInitializers_cpls_util_Maybe(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t cpls::util::Maybe<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::Maybe<TPMGL(T)>::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void cpls::util::Maybe<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(data));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::cpls::util::Maybe<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::Maybe<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::cpls::util::Maybe<TPMGL(T)> >()) ::cpls::util::Maybe<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void cpls::util::Maybe<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(data) = buf.read<TPMGL(T)>();
}

#endif // CPLS_UTIL_MAYBE_H_IMPLEMENTATION
#endif // __CPLS_UTIL_MAYBE_H_NODEPS
