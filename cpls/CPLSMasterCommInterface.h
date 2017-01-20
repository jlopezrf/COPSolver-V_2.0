#ifndef __CPLS_CPLSMASTERCOMMINTERFACE_H
#define __CPLS_CPLSMASTERCOMMINTERFACE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define CPLS_CPLSCOMMINTERFACE_H_NODEPS
#include <cpls/CPLSCommInterface.h>
#undef CPLS_CPLSCOMMINTERFACE_H_NODEPS
namespace cpls { 

class CPLSMasterCommInterface   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class Iface> struct itable {
        itable(void (Iface::*communicateLM) (::cpls::entities::State), x10_boolean (Iface::*equals) (::x10::lang::Any*), x10_int (Iface::*hashCode) (), ::x10::lang::String* (Iface::*toString) (), ::x10::lang::String* (Iface::*typeName) ()) : communicateLM(communicateLM), equals(equals), hashCode(hashCode), toString(toString), typeName(typeName) {}
        void (Iface::*communicateLM) (::cpls::entities::State);
        x10_boolean (Iface::*equals) (::x10::lang::Any*);
        x10_int (Iface::*hashCode) ();
        ::x10::lang::String* (Iface::*toString) ();
        ::x10::lang::String* (Iface::*typeName) ();
    };
    
    template <class R> static void communicateLM(R* _recv, ::cpls::entities::State arg0);
    template <class R> static void communicateLM(R _recv, ::cpls::entities::State arg0);
    template <class R> static x10_boolean equals(R* _recv, ::x10::lang::Any* arg0) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CPLSMasterCommInterface>(_refRecv->_getITables())->equals))(arg0);
    }
    template <class R> static x10_boolean equals(R _recv, ::x10::lang::Any* arg0) {
        return _recv->equals(arg0);
    }
    template <class R> static x10_int hashCode(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CPLSMasterCommInterface>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    template <class R> static ::x10::lang::String* toString(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CPLSMasterCommInterface>(_refRecv->_getITables())->toString))();
    }
    template <class R> static ::x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    template <class R> static ::x10::lang::String* typeName(R* _recv) {
        ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
        return (_refRecv->*(::x10aux::findITable< ::cpls::CPLSMasterCommInterface>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static ::x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    
};


} 
#endif // CPLS_CPLSMASTERCOMMINTERFACE_H

namespace cpls { 
class CPLSMasterCommInterface;
} 

#ifndef CPLS_CPLSMASTERCOMMINTERFACE_H_NODEPS
#define CPLS_CPLSMASTERCOMMINTERFACE_H_NODEPS
#include <x10/lang/Any.h>
#include <cpls/CPLSCommInterface.h>
#ifndef CPLS_CPLSMASTERCOMMINTERFACE_H_GENERICS
#define CPLS_CPLSMASTERCOMMINTERFACE_H_GENERICS
template <class R> void ::cpls::CPLSMasterCommInterface::communicateLM(R* _recv, ::cpls::entities::State arg0) {
    ::x10::lang::Reference* _refRecv = reinterpret_cast< ::x10::lang::Reference*>(_recv);
    (_refRecv->*(::x10aux::findITable< ::cpls::CPLSMasterCommInterface>(_refRecv->_getITables())->communicateLM))(arg0);
}
template <class R> void ::cpls::CPLSMasterCommInterface::communicateLM(R _recv, ::cpls::entities::State arg0) {
    _recv->communicateLM(arg0);
}
#endif // CPLS_CPLSMASTERCOMMINTERFACE_H_GENERICS
#endif // __CPLS_CPLSMASTERCOMMINTERFACE_H_NODEPS
