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
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
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
namespace cpls { 
class CPLSOptionsEnum__SupportedProblems;
} 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { namespace measurements { 

class GlobalStats : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(dTarget);
    
    virtual void setDTarget(x10_long dTarget);
    virtual x10_long getDTarget();
    x10_long FMGL(cost);
    
    virtual void setCost(x10_long cost);
    virtual x10_long getCost();
    x10_int FMGL(team);
    
    virtual void setTeam(x10_int team);
    virtual x10_int getTeam();
    x10_int FMGL(explorer);
    
    virtual void setExplorer(x10_int explorer);
    virtual x10_int getExplorer();
    x10_double FMGL(time);
    
    virtual void setTime(x10_double time);
    virtual x10_double getTime();
    x10_long FMGL(iters);
    
    virtual void setIters(x10_long iters);
    virtual x10_long getIters();
    x10_int FMGL(locmin);
    
    virtual void setLocMin(x10_int locmin);
    virtual x10_int getLocMin();
    x10_long FMGL(swaps);
    
    virtual void setSwaps(x10_long swaps);
    virtual x10_long getSwaps();
    x10_int FMGL(reset);
    
    virtual void setReset(x10_int reset);
    virtual x10_int getReset();
    x10_long FMGL(same);
    
    virtual void setSame(x10_long same);
    virtual x10_long getSame();
    x10_int FMGL(restart);
    
    virtual void setRestart(x10_int restart);
    virtual x10_int getRestart();
    x10_int FMGL(change);
    
    virtual void setChange(x10_int change);
    virtual x10_int getChange();
    x10_int FMGL(forceRestart);
    
    virtual void setForceRestart(x10_int forceRestart);
    virtual x10_int getForceRestart();
    x10_int FMGL(accPS);
    
    virtual void setAccPS(x10_int accPS);
    virtual x10_int getAccPS();
    x10_int FMGL(groupR);
    
    virtual void setGroupR(x10_int groupR);
    virtual x10_int getGroupR();
    x10_boolean FMGL(target);
    
    virtual void setTarget(x10_boolean target);
    virtual x10_boolean getTarget();
    x10_int FMGL(fftarget);
    
    virtual void setFFTarget(x10_int fftarget);
    virtual x10_int getFFTarget();
    x10_int FMGL(ntarget);
    
    virtual void setNTarget(x10_int ntarget);
    virtual x10_int getNTarget();
    x10_long FMGL(vectorSize);
    
    virtual void setVectorSize(x10_long vectorSize);
    virtual x10_long getVectorSize();
    x10_int FMGL(bp);
    
    virtual void setBp(x10_int bp);
    virtual x10_int getBP();
    x10_int FMGL(singles);
    
    virtual void setSingles(x10_int singles);
    virtual x10_int getSingles();
    ::x10::lang::Rail< x10_int >* FMGL(sstate);
    
    virtual void setSState(::x10::lang::Rail< x10_int >* sstate);
    virtual ::x10::lang::Rail< x10_int >* getSState();
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
