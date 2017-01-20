#ifndef __CPLS_COMMONCOMMOPERATIONSINTERFACE_H
#define __CPLS_COMMONCOMMOPERATIONSINTERFACE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace cpls { namespace problem { 
class ProblemGenericModel;
} } 
namespace cpls { namespace util { 
template<class TPMGL(T)> class Maybe;
} } 
namespace cpls { namespace entities { 
class State;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace cpls { namespace measurements { 
class GlobalStats;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace cpls { namespace solver { 
class HeuristicSolver;
} } 
namespace cpls { 

class CommonCommOperationsInterface   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*accStats) (::cpls::measurements::GlobalStats*), x10_boolean (Iface::*announceWinner) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>, x10_long), void (Iface::*clear) (), void (Iface::*clearDivPool) (), void (Iface::*clearIntPool) (), void (Iface::*clearSample) (), void (Iface::*communicate) (::cpls::entities::State), void (Iface::*communicateLM) (::cpls::entities::State), void (Iface::*diversify) (), x10_boolean (Iface::*equals) (::x10::lang::Any*), ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getBestConf) (), ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getConf) (), x10_long (Iface::*getCost) (), x10_int (Iface::*getGroupReset) (), x10_boolean (Iface::*getIPVector) (::cpls::problem::ProblemGenericModel*, x10_long), ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getLM) (), ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getLMConf) (), ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getPR) (), x10_int (Iface::*hashCode) (), x10_int (Iface::*inTeamReportI) (), x10_int (Iface::*inTeamUpdateI) (), void (Iface::*incGroupReset) (), void (Iface::*installSolver) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>, ::x10::lang::Fun_0_1<x10_int, ::cpls::solver::HeuristicSolver*>*, x10_int), void (Iface::*kill) (), void (Iface::*printAVG) (x10_int, x10_int, x10_int), void (Iface::*printGenAVG) (x10_int, x10_int, x10_int), void (Iface::*printStats) (x10_int, x10_int, x10_int), void (Iface::*_m27__setStats) (::cpls::measurements::GlobalStats*), void (Iface::*_m28__setStats) (x10_int, x10_int, x10_int, x10_double, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_boolean, x10_int, ::x10::lang::Rail< x10_int >*), void (Iface::*setStats_) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>), void (Iface::*start) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>, ::x10::lang::Fun_0_0< ::cpls::problem::ProblemGenericModel*>*, x10_long, x10_long, x10_boolean), x10_long (Iface::*sz) (), ::x10::lang::String* (Iface::*toString) (), void (Iface::*tryInsertConf) (::cpls::entities::State), void (Iface::*tryInsertLM) (::cpls::entities::State), ::x10::lang::String* (Iface::*typeName) (), void (Iface::*verifyWinner) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>), void (Iface::*verify_) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>)) : accStats(accStats), announceWinner(announceWinner), clear(clear), clearDivPool(clearDivPool), clearIntPool(clearIntPool), clearSample(clearSample), communicate(communicate), communicateLM(communicateLM), diversify(diversify), equals(equals), getBestConf(getBestConf), getConf(getConf), getCost(getCost), getGroupReset(getGroupReset), getIPVector(getIPVector), getLM(getLM), getLMConf(getLMConf), getPR(getPR), hashCode(hashCode), inTeamReportI(inTeamReportI), inTeamUpdateI(inTeamUpdateI), incGroupReset(incGroupReset), installSolver(installSolver), kill(kill), printAVG(printAVG), printGenAVG(printGenAVG), printStats(printStats), _m27__setStats(_m27__setStats), _m28__setStats(_m28__setStats), setStats_(setStats_), start(start), sz(sz), toString(toString), tryInsertConf(tryInsertConf), tryInsertLM(tryInsertLM), typeName(typeName), verifyWinner(verifyWinner), verify_(verify_) {}
        void (Iface::*accStats) (::cpls::measurements::GlobalStats*);
        x10_boolean (Iface::*announceWinner) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>, x10_long);
        void (Iface::*clear) ();
        void (Iface::*clearDivPool) ();
        void (Iface::*clearIntPool) ();
        void (Iface::*clearSample) ();
        void (Iface::*communicate) (::cpls::entities::State);
        void (Iface::*communicateLM) (::cpls::entities::State);
        void (Iface::*diversify) ();
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getBestConf) ();
        ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getConf) ();
        x10_long (Iface::*getCost) ();
        x10_int (Iface::*getGroupReset) ();
        x10_boolean (Iface::*getIPVector) (::cpls::problem::ProblemGenericModel*, x10_long);
        ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getLM) ();
        ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getLMConf) ();
        ::cpls::util::Maybe< ::cpls::entities::State>* (Iface::*getPR) ();
        x10_int (Iface::*hashCode) ();
        x10_int (Iface::*inTeamReportI) ();
        x10_int (Iface::*inTeamUpdateI) ();
        void (Iface::*incGroupReset) ();
        void (Iface::*installSolver) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>, ::x10::lang::Fun_0_1<x10_int, ::cpls::solver::HeuristicSolver*>*, x10_int);
        void (Iface::*kill) ();
        void (Iface::*printAVG) (x10_int, x10_int, x10_int);
        void (Iface::*printGenAVG) (x10_int, x10_int, x10_int);
        void (Iface::*printStats) (x10_int, x10_int, x10_int);
        void (Iface::*_m27__setStats) (::cpls::measurements::GlobalStats*);
        void (Iface::*_m28__setStats) (x10_int, x10_int, x10_int, x10_double, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_int, x10_boolean, x10_int, ::x10::lang::Rail< x10_int >*);
        void (Iface::*setStats_) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>);
        void (Iface::*start) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>, ::x10::lang::Fun_0_0< ::cpls::problem::ProblemGenericModel*>*, x10_long, x10_long, x10_boolean);
        x10_long (Iface::*sz) ();
        ::x10::lang::String* (Iface::*toString) ();
        void (Iface::*tryInsertConf) (::cpls::entities::State);
        void (Iface::*tryInsertLM) (::cpls::entities::State);
        ::x10::lang::String* (Iface::*typeName) ();
        void (Iface::*verifyWinner) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>);
        void (Iface::*verify_) (::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*>);
    };
    
    template <class R> static void accStats(R* _recv, ::cpls::measurements::GlobalStats* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->accStats))(arg0);
    }
    template <class R> static void accStats(R _recv, ::cpls::measurements::GlobalStats* arg0) {
        _recv->accStats(arg0);
    }
    template <class R> static x10_boolean announceWinner(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, x10_long arg1);
    template <class R> static x10_boolean announceWinner(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, x10_long arg1);
    template <class R> static void clear(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->clear))();
    }
    template <class R> static void clear(R _recv) {
        _recv->clear();
    }
    template <class R> static void clearDivPool(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->clearDivPool))();
    }
    template <class R> static void clearDivPool(R _recv) {
        _recv->clearDivPool();
    }
    template <class R> static void clearIntPool(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->clearIntPool))();
    }
    template <class R> static void clearIntPool(R _recv) {
        _recv->clearIntPool();
    }
    template <class R> static void clearSample(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->clearSample))();
    }
    template <class R> static void clearSample(R _recv) {
        _recv->clearSample();
    }
    template <class R> static void communicate(R* _recv, ::cpls::entities::State arg0);
    template <class R> static void communicate(R _recv, ::cpls::entities::State arg0);
    template <class R> static void communicateLM(R* _recv, ::cpls::entities::State arg0);
    template <class R> static void communicateLM(R _recv, ::cpls::entities::State arg0);
    template <class R> static void diversify(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->diversify))();
    }
    template <class R> static void diversify(R _recv) {
        _recv->diversify();
    }
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->equals))(arg0);
    }
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0) {
        return _recv->equals(arg0);
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getBestConf(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getBestConf))();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getBestConf(R _recv) {
        return _recv->getBestConf();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getConf(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getConf))();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getConf(R _recv) {
        return _recv->getConf();
    }
    template <class R> static x10_long getCost(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getCost))();
    }
    template <class R> static x10_long getCost(R _recv) {
        return _recv->getCost();
    }
    template <class R> static x10_int getGroupReset(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getGroupReset))();
    }
    template <class R> static x10_int getGroupReset(R _recv) {
        return _recv->getGroupReset();
    }
    template <class R> static x10_boolean getIPVector(R* _recv, ::cpls::problem::ProblemGenericModel* arg0, x10_long arg1) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getIPVector))(arg0, arg1);
    }
    template <class R> static x10_boolean getIPVector(R _recv, ::cpls::problem::ProblemGenericModel* arg0, x10_long arg1) {
        return _recv->getIPVector(arg0, arg1);
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getLM(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getLM))();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getLM(R _recv) {
        return _recv->getLM();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getLMConf(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getLMConf))();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getLMConf(R _recv) {
        return _recv->getLMConf();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getPR(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->getPR))();
    }
    template <class R> static ::cpls::util::Maybe< ::cpls::entities::State>* getPR(R _recv) {
        return _recv->getPR();
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static x10_int inTeamReportI(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->inTeamReportI))();
    }
    template <class R> static x10_int inTeamReportI(R _recv) {
        return _recv->inTeamReportI();
    }
    template <class R> static x10_int inTeamUpdateI(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->inTeamUpdateI))();
    }
    template <class R> static x10_int inTeamUpdateI(R _recv) {
        return _recv->inTeamUpdateI();
    }
    template <class R> static void incGroupReset(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->incGroupReset))();
    }
    template <class R> static void incGroupReset(R _recv) {
        _recv->incGroupReset();
    }
    template <class R> static void installSolver(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_1<x10_int, ::cpls::solver::HeuristicSolver*>* arg1, x10_int arg2);
    template <class R> static void installSolver(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_1<x10_int, ::cpls::solver::HeuristicSolver*>* arg1, x10_int arg2);
    template <class R> static void kill(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->kill))();
    }
    template <class R> static void kill(R _recv) {
        _recv->kill();
    }
    template <class R> static void printAVG(R* _recv, x10_int arg0, x10_int arg1, x10_int arg2) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->printAVG))(arg0, arg1, arg2);
    }
    template <class R> static void printAVG(R _recv, x10_int arg0, x10_int arg1, x10_int arg2) {
        _recv->printAVG(arg0, arg1, arg2);
    }
    template <class R> static void printGenAVG(R* _recv, x10_int arg0, x10_int arg1, x10_int arg2) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->printGenAVG))(arg0, arg1, arg2);
    }
    template <class R> static void printGenAVG(R _recv, x10_int arg0, x10_int arg1, x10_int arg2) {
        _recv->printGenAVG(arg0, arg1, arg2);
    }
    template <class R> static void printStats(R* _recv, x10_int arg0, x10_int arg1, x10_int arg2) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->printStats))(arg0, arg1, arg2);
    }
    template <class R> static void printStats(R _recv, x10_int arg0, x10_int arg1, x10_int arg2) {
        _recv->printStats(arg0, arg1, arg2);
    }
    template <class R> static void _m27__setStats(R* _recv, ::cpls::measurements::GlobalStats* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->_m27__setStats))(arg0);
    }
    template <class R> static void _m27__setStats(R _recv, ::cpls::measurements::GlobalStats* arg0) {
        _recv->setStats(arg0);
    }
    template <class R> static void _m28__setStats(R* _recv, x10_int arg0, x10_int arg1, x10_int arg2, x10_double arg3, x10_int arg4, x10_int arg5, x10_int arg6, x10_int arg7, x10_int arg8, x10_int arg9, x10_int arg10, x10_int arg11, x10_int arg12, x10_boolean arg13, x10_int arg14, ::x10::lang::Rail< x10_int >* arg15);
    template <class R> static void _m28__setStats(R _recv, x10_int arg0, x10_int arg1, x10_int arg2, x10_double arg3, x10_int arg4, x10_int arg5, x10_int arg6, x10_int arg7, x10_int arg8, x10_int arg9, x10_int arg10, x10_int arg11, x10_int arg12, x10_boolean arg13, x10_int arg14, ::x10::lang::Rail< x10_int >* arg15);
    template <class R> static void setStats_(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0);
    template <class R> static void setStats_(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0);
    template <class R> static void start(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_0< ::cpls::problem::ProblemGenericModel*>* arg1, x10_long arg2, x10_long arg3, x10_boolean arg4);
    template <class R> static void start(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_0< ::cpls::problem::ProblemGenericModel*>* arg1, x10_long arg2, x10_long arg3, x10_boolean arg4);
    template <class R> static x10_long sz(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->sz))();
    }
    template <class R> static x10_long sz(R _recv) {
        return _recv->sz();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static void tryInsertConf(R* _recv, ::cpls::entities::State arg0);
    template <class R> static void tryInsertConf(R _recv, ::cpls::entities::State arg0);
    template <class R> static void tryInsertLM(R* _recv, ::cpls::entities::State arg0);
    template <class R> static void tryInsertLM(R _recv, ::cpls::entities::State arg0);
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    template <class R> static void verifyWinner(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0);
    template <class R> static void verifyWinner(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0);
    template <class R> static void verify_(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0);
    template <class R> static void verify_(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0);
    
};


} 
#endif // CPLS_COMMONCOMMOPERATIONSINTERFACE_H

namespace cpls { 
class CommonCommOperationsInterface;
} 

#ifndef CPLS_COMMONCOMMOPERATIONSINTERFACE_H_NODEPS
#define CPLS_COMMONCOMMOPERATIONSINTERFACE_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Boolean.h>
#include <cpls/util/Maybe.h>
#include <cpls/entities/State.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Double.h>
#include <x10/lang/Rail.h>
#include <cpls/measurements/GlobalStats.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Fun_0_1.h>
#include <cpls/solver/HeuristicSolver.h>
#ifndef CPLS_COMMONCOMMOPERATIONSINTERFACE_H_GENERICS
#define CPLS_COMMONCOMMOPERATIONSINTERFACE_H_GENERICS
template <class R> x10_boolean ::cpls::CommonCommOperationsInterface::announceWinner(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, x10_long arg1) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    return (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->announceWinner))(arg0, arg1);
}
template <class R> x10_boolean ::cpls::CommonCommOperationsInterface::announceWinner(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, x10_long arg1) {
    return _recv->announceWinner(arg0, arg1);
}
template <class R> void ::cpls::CommonCommOperationsInterface::communicate(R* _recv, ::cpls::entities::State arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->communicate))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::communicate(R _recv, ::cpls::entities::State arg0) {
    _recv->communicate(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::communicateLM(R* _recv, ::cpls::entities::State arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->communicateLM))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::communicateLM(R _recv, ::cpls::entities::State arg0) {
    _recv->communicateLM(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::installSolver(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_1<x10_int, ::cpls::solver::HeuristicSolver*>* arg1, x10_int arg2) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->installSolver))(arg0, arg1, arg2);
}
template <class R> void ::cpls::CommonCommOperationsInterface::installSolver(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_1<x10_int, ::cpls::solver::HeuristicSolver*>* arg1, x10_int arg2) {
    _recv->installSolver(arg0, arg1, arg2);
}
template <class R> void ::cpls::CommonCommOperationsInterface::_m28__setStats(R* _recv, x10_int arg0, x10_int arg1, x10_int arg2, x10_double arg3, x10_int arg4, x10_int arg5, x10_int arg6, x10_int arg7, x10_int arg8, x10_int arg9, x10_int arg10, x10_int arg11, x10_int arg12, x10_boolean arg13, x10_int arg14, ::x10::lang::Rail< x10_int >* arg15) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->_m28__setStats))(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}
template <class R> void ::cpls::CommonCommOperationsInterface::_m28__setStats(R _recv, x10_int arg0, x10_int arg1, x10_int arg2, x10_double arg3, x10_int arg4, x10_int arg5, x10_int arg6, x10_int arg7, x10_int arg8, x10_int arg9, x10_int arg10, x10_int arg11, x10_int arg12, x10_boolean arg13, x10_int arg14, ::x10::lang::Rail< x10_int >* arg15) {
    _recv->setStats(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
}
template <class R> void ::cpls::CommonCommOperationsInterface::setStats_(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->setStats_))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::setStats_(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0) {
    _recv->setStats_(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::start(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_0< ::cpls::problem::ProblemGenericModel*>* arg1, x10_long arg2, x10_long arg3, x10_boolean arg4) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->start))(arg0, arg1, arg2, arg3, arg4);
}
template <class R> void ::cpls::CommonCommOperationsInterface::start(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0, ::x10::lang::Fun_0_0< ::cpls::problem::ProblemGenericModel*>* arg1, x10_long arg2, x10_long arg3, x10_boolean arg4) {
    _recv->start(arg0, arg1, arg2, arg3, arg4);
}
template <class R> void ::cpls::CommonCommOperationsInterface::tryInsertConf(R* _recv, ::cpls::entities::State arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->tryInsertConf))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::tryInsertConf(R _recv, ::cpls::entities::State arg0) {
    _recv->tryInsertConf(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::tryInsertLM(R* _recv, ::cpls::entities::State arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->tryInsertLM))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::tryInsertLM(R _recv, ::cpls::entities::State arg0) {
    _recv->tryInsertLM(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::verifyWinner(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->verifyWinner))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::verifyWinner(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0) {
    _recv->verifyWinner(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::verify_(R* _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CommonCommOperationsInterface>(_refRecv->_getITables())->verify_))(arg0);
}
template <class R> void ::cpls::CommonCommOperationsInterface::verify_(R _recv, ::x10::lang::PlaceLocalHandle< ::cpls::CommonCommOperationsInterface*> arg0) {
    _recv->verify_(arg0);
}
#endif // CPLS_COMMONCOMMOPERATIONSINTERFACE_H_GENERICS
#endif // __CPLS_COMMONCOMMOPERATIONSINTERFACE_H_NODEPS
