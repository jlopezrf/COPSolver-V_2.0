/*************************************************/
/* START of Utils */
#include <cpls/util/Utils.h>


//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"
void cpls::util::Utils::show(::x10::lang::String* s, ::x10::lang::Rail< x10_int >* d) {
    
    //#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(s, (__extension__ ({ static ::x10::lang::String* strLit__39471 = ::x10aux::makeStringLit(" in "); strLit__39471; }))), ::x10::lang::Place::_make(::x10aux::here)->FMGL(id)), (__extension__ ({ static ::x10::lang::String* strLit__39472 = ::x10aux::makeStringLit(" : "); strLit__39472; }))));
    
    //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"
    ::x10::lang::Rail< x10_int >* rail__35836 = d;
    x10_long i__35820min__35837 = ((x10_long)0ll);
    x10_long i__35820max__35838 = (x10_long)(::x10aux::nullCheck(rail__35836)->FMGL(size));
    {
        x10_long i__35839;
        for (i__35839 = i__35820min__35837; ((i__35839) < (i__35820max__35838));
             i__35839 = ((i__35839) + (((x10_long)1ll)))) {
            x10_long k__35840 = i__35839;
            
            //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__39473 = ::x10aux::makeStringLit(" "); strLit__39473; })), ::x10aux::nullCheck(d)->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                      k__35840)));
        }
    }
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__39475 = ::x10aux::makeStringLit(""); strLit__39475; }))));
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/util/Utils.x10"
::cpls::util::Utils* cpls::util::Utils::cpls__util__Utils____this__cpls__util__Utils(
  ) {
    return this;
    
}
void cpls::util::Utils::_constructor() {
    this->cpls::util::Utils::__fieldInitializers_cpls_util_Utils();
}
::cpls::util::Utils* cpls::util::Utils::_make() {
    ::cpls::util::Utils* this_ = new (::x10aux::alloc_z< ::cpls::util::Utils>()) ::cpls::util::Utils();
    this_->_constructor();
    return this_;
}


void cpls::util::Utils::__fieldInitializers_cpls_util_Utils(
  ) {
 
}
const ::x10aux::serialization_id_t cpls::util::Utils::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::Utils::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::util::Utils::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::cpls::util::Utils::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::Utils* this_ = new (::x10aux::alloc_z< ::cpls::util::Utils>()) ::cpls::util::Utils();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::util::Utils::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType cpls::util::Utils::rtt;
void cpls::util::Utils::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.util.Utils",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Utils */
/*************************************************/
