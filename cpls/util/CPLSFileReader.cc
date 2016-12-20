/*************************************************/
/* START of CPLSFileReader */
#include <cpls/util/CPLSFileReader.h>

#include <x10/compiler/Synthetic.h>

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/x10dt/workspace/COPSolver-V_2.0/cpls/util/CPLSFileReader.x10"
::cpls::util::CPLSFileReader* cpls::util::CPLSFileReader::cpls__util__CPLSFileReader____this__cpls__util__CPLSFileReader(
  ) {
    return this;
    
}
void cpls::util::CPLSFileReader::_constructor() {
    ::cpls::util::CPLSFileReader* this__3 = this;
    
}
::cpls::util::CPLSFileReader* cpls::util::CPLSFileReader::_make()
{
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

/* END of CPLSFileReader */
/*************************************************/
