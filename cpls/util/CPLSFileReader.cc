/*************************************************/
/* START of CPLSFileReader */
#include <cpls/util/CPLSFileReader.h>

#include <x10/lang/String.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/io/File.h>
#include <x10/io/FileReader.h>
#include <x10/lang/Char.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/io/InputStreamReader.h>
#include <x10/util/StringBuilder.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Unsafe.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/RailUtils.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_UTIL_CPLSFILEREADER__CLOSURE__1_CLOSURE
#define CPLS_UTIL_CPLSFILEREADER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_util_CPLSFileReader__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_CPLSFileReader__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return (__extension__ ({ static ::x10::lang::String* strLit__27235 = ::x10aux::makeStringLit("solving all problems into this directory"); strLit__27235; }));
        
    }
    
    // captured environment
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_CPLSFileReader__closure__1* storage = ::x10aux::alloc_z<cpls_util_CPLSFileReader__closure__1>();
        buf.record_reference(storage);
        cpls_util_CPLSFileReader__closure__1* this_ = new (storage) cpls_util_CPLSFileReader__closure__1();
        return this_;
    }
    
    cpls_util_CPLSFileReader__closure__1() { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10:48";
    }

};

#endif // CPLS_UTIL_CPLSFILEREADER__CLOSURE__1_CLOSURE

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
::x10::lang::Rail< x10_long >* cpls::util::CPLSFileReader::tryReadParameters(
  ::x10::lang::String* filePath) {
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::lang::Rail< x10_long >* params = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll),
                                                                                 ((x10_long)-1ll));
    
    //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::io::File* filep = ::x10::io::File::_make(filePath);
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::io::FileReader* fr = filep->openRead();
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::lang::String* fLine;
    
    //#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    do {
        
        //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        fLine = ::x10aux::nullCheck(fr)->readLine();
    } while ((::x10aux::struct_equals((fLine)->charAt(((x10_int)0)),
                                      ((x10_char)'#'))));
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::lang::Rail< x10_int >* header = ::cpls::util::CPLSFileReader::readParameters(
                                             fLine);
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < ((x10_long)(::x10aux::nullCheck(params)->FMGL(size))));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
            ::x10aux::nullCheck(params)->x10::lang::Rail< x10_long >::__set(
              i, ((x10_long)(::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                               i))));
        }
    }
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10aux::nullCheck(fr)->close();
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    return params;
    
}

//#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
::x10::lang::Rail< x10_int >* cpls::util::CPLSFileReader::readParameters(
  ::x10::lang::String* line) {
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    x10_int i;
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    x10_int j = ((x10_int)0);
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__27233 = ::x10aux::makeStringLit(""); strLit__27233; }));
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::lang::Rail< x10_int >* x = ::x10::lang::Rail< x10_int >::_make(((x10_long)2ll),
                                                                          ((x10_int)-1));
    
    //#line 31 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    {
        for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
            if (((::x10aux::struct_equals((line)->charAt(i),
                                          ((x10_char)' '))) ||
                (::x10aux::struct_equals((line)->charAt(i),
                                         ((x10_char)'\n')))))
            {
                
                //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
                x->x10::lang::Rail< x10_int >::__set(((x10_long)((__extension__ ({
                                                         x10_int pre__25629 =
                                                           j;
                                                         j =
                                                           ((j) + (((x10_int)1)));
                                                         pre__25629;
                                                     }))
                                                     )), ::x10::lang::IntNatives::parseInt(buffer));
                
                //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__27234 = ::x10aux::makeStringLit(""); strLit__27234; }));
            } else {
                
                //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
                buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
            }
            
        }
    }
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    x->x10::lang::Rail< x10_int >::__set(((x10_long)(j)),
                                         ::x10::lang::IntNatives::parseInt(buffer));
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    return x;
    
}

//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
::x10::lang::Rail< ::x10::lang::String* >* cpls::util::CPLSFileReader::loadDir(
  ::x10::lang::String* path) {
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::util::StringBuilder* nPath = ::x10::util::StringBuilder::_make();
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::io::File* fp = ::x10::io::File::_make(path);
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::lang::Rail< ::x10::lang::String* >* execList;
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    if (fp->isDirectory()) {
        
        //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        ::cpls::util::Logger::debug(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_util_CPLSFileReader__closure__1)))cpls_util_CPLSFileReader__closure__1())));
        
        //#line 49 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        execList = fp->list();
        
        //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        ::x10aux::nullCheck(nPath)->addString(path);
    } else {
        
        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        execList = (__extension__ ({
            ::x10::lang::Rail< ::x10::lang::String* >* t__27229 =
              ::x10::lang::Rail< ::x10::lang::String* >::_makeUnsafe(((x10_long)1ll), false);
            t__27229->x10::lang::Rail< ::x10::lang::String* >::__set(
              ((x10_long)0ll), fp->getName());
            t__27229;
        }))
        ;
        
        //#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        ::x10aux::nullCheck(nPath)->addString(::x10aux::nullCheck(fp->getParentFile())->getPath());
        
        //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(nPath, (__extension__ ({ static ::x10::lang::String* strLit__27236 = ::x10aux::makeStringLit(" "); strLit__27236; }))), fp->getName())));
    }
    
    //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    ::x10::util::RailUtils::sort< ::x10::lang::String* >(
      execList);
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
    return execList;
    
}

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/CPLSFileReader.x10"
::cpls::util::CPLSFileReader* cpls::util::CPLSFileReader::cpls__util__CPLSFileReader____this__cpls__util__CPLSFileReader(
  ) {
    return this;
    
}
void cpls::util::CPLSFileReader::_constructor() {
    this->cpls::util::CPLSFileReader::__fieldInitializers_cpls_util_CPLSFileReader();
}
::cpls::util::CPLSFileReader* cpls::util::CPLSFileReader::_make(
  ) {
    ::cpls::util::CPLSFileReader* this_ = new (::x10aux::alloc_z< ::cpls::util::CPLSFileReader>()) ::cpls::util::CPLSFileReader();
    this_->_constructor();
    return this_;
}


void cpls::util::CPLSFileReader::__fieldInitializers_cpls_util_CPLSFileReader(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::util::CPLSFileReader::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::CPLSFileReader::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::util::CPLSFileReader::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::cpls::util::CPLSFileReader::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::CPLSFileReader* this_ = new (::x10aux::alloc_z< ::cpls::util::CPLSFileReader>()) ::cpls::util::CPLSFileReader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::util::CPLSFileReader::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType cpls::util::CPLSFileReader::rtt;
void cpls::util::CPLSFileReader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.util.CPLSFileReader",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_util_CPLSFileReader__closure__1>cpls_util_CPLSFileReader__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_CPLSFileReader__closure__1::__apply, &cpls_util_CPLSFileReader__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_CPLSFileReader__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_util_CPLSFileReader__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_CPLSFileReader__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_CPLSFileReader__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CPLSFileReader */
/*************************************************/
