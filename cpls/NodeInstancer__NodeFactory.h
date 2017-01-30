#ifndef __CPLS_NODEINSTANCER__NODEFACTORY_H
#define __CPLS_NODEINSTANCER__NODEFACTORY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace cpls { 
class CPLSNode;
} 
namespace cpls { 
class ExplorerNode;
} 
namespace cpls { 
class HeadNode;
} 
namespace cpls { 
class MasterNode;
} 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace cpls { 

class NodeInstancer__NodeFactory   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::cpls::NodeInstancer__NodeFactory* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::cpls::NodeInstancer__NodeFactory > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::cpls::NodeInstancer__NodeFactory _alloc(){::cpls::NodeInstancer__NodeFactory t; return t; }
    
    static ::cpls::CPLSNode* make(x10_int nodeRole);
    ::x10::lang::String* typeName();
    ::x10::lang::String* toString();
    x10_int hashCode() {
        x10_int result = ((x10_int)1);
        return result;
        
    }
    x10_boolean equals(::x10::lang::Any* other);
    x10_boolean equals(::cpls::NodeInstancer__NodeFactory other) {
        return true;
        
    }
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::cpls::NodeInstancer__NodeFactory other) {
        return true;
        
    }
    ::cpls::NodeInstancer__NodeFactory cpls__NodeInstancer__NodeFactory____this__cpls__NodeInstancer__NodeFactory(
      ) {
        return (*this);
        
    }
    void _constructor() {
        ::cpls::NodeInstancer__NodeFactory this__4921 = (*this);
        
    }
    static ::cpls::NodeInstancer__NodeFactory _make() {
        ::cpls::NodeInstancer__NodeFactory this_; 
        this_->_constructor();
        return this_;
    }
    
    void __fieldInitializers_cpls_NodeInstancer_NodeFactory() {
     
    }
    
    static void _serialize(::cpls::NodeInstancer__NodeFactory this_, ::x10aux::serialization_buffer& buf);
    
    static ::cpls::NodeInstancer__NodeFactory _deserialize(::x10aux::deserialization_buffer& buf) {
        ::cpls::NodeInstancer__NodeFactory this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // CPLS_NODEINSTANCER__NODEFACTORY_H

namespace cpls { 
class NodeInstancer__NodeFactory;
} 

#ifndef CPLS_NODEINSTANCER__NODEFACTORY_H_NODEPS
#define CPLS_NODEINSTANCER__NODEFACTORY_H_NODEPS
#ifndef CPLS_NODEINSTANCER__NODEFACTORY_H_GENERICS
#define CPLS_NODEINSTANCER__NODEFACTORY_H_GENERICS
#endif // CPLS_NODEINSTANCER__NODEFACTORY_H_GENERICS
#endif // __CPLS_NODEINSTANCER__NODEFACTORY_H_NODEPS
