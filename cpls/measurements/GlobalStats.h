#ifndef __CPLS_MEASUREMENTS_GLOBALSTATS_H
#define __CPLS_MEASUREMENTS_GLOBALSTATS_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace measurements { 

class GlobalStats : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(dTarget);
    
    x10_long FMGL(cost);
    
    x10_int FMGL(team);
    
    x10_int FMGL(explorer);
    
    x10_double FMGL(time);
    
    x10_long FMGL(iters);
    
    x10_int FMGL(locmin);
    
    x10_long FMGL(swaps);
    
    x10_int FMGL(reset);
    
    x10_long FMGL(same);
    
    x10_int FMGL(restart);
    
    x10_int FMGL(change);
    
    x10_int FMGL(forceRestart);
    
    x10_int FMGL(accPS);
    
    x10_int FMGL(groupR);
    
    x10_boolean FMGL(target);
    
    x10_int FMGL(fftarget);
    
    x10_int FMGL(ntarget);
    
    x10_long FMGL(vectorSize);
    
    x10_int FMGL(bp);
    
    x10_int FMGL(singles);
    
    ::x10::lang::Rail< x10_int >* FMGL(sstate);
    
    virtual void setStats(x10_long co, x10_int p, x10_int e, x10_double t,
                          x10_int it, x10_int loc, x10_int sw, x10_int re,
                          x10_int sa, x10_int rs, x10_int ch, x10_int fr,
                          x10_int gr, x10_boolean target, x10_int fft, x10_long vs,
                          ::x10::lang::Rail< x10_int >* ss);
    virtual void setStats(::cpls::measurements::GlobalStats* c);
    virtual void accStats(::cpls::measurements::GlobalStats* stats);
    virtual void print(x10_int count, x10_int oF, x10_int problem);
    virtual void printAVG(x10_int no, x10_int oF, x10_int problem);
    virtual void clear();
    virtual void setTarget(x10_long target);
    virtual ::cpls::measurements::GlobalStats* cpls__measurements__GlobalStats____this__cpls__measurements__GlobalStats(
      );
    void _constructor();
    
    static ::cpls::measurements::GlobalStats* _make();
    
    virtual void __fieldInitializers_cpls_measurements_GlobalStats(
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


} } 
#endif // CPLS_MEASUREMENTS_GLOBALSTATS_H

namespace cpls { namespace measurements { 
class GlobalStats;
} } 

#ifndef CPLS_MEASUREMENTS_GLOBALSTATS_H_NODEPS
#define CPLS_MEASUREMENTS_GLOBALSTATS_H_NODEPS
#ifndef CPLS_MEASUREMENTS_GLOBALSTATS_H_GENERICS
#define CPLS_MEASUREMENTS_GLOBALSTATS_H_GENERICS
#endif // CPLS_MEASUREMENTS_GLOBALSTATS_H_GENERICS
#endif // __CPLS_MEASUREMENTS_GLOBALSTATS_H_NODEPS
