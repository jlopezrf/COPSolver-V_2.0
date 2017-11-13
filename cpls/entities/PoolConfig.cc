/*************************************************/
/* START of PoolConfig */
#include <cpls/entities/PoolConfig.h>

#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>

//#line 4 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"

//#line 6 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
void cpls::entities::PoolConfig::_constructor(x10_long problemSize, x10_int poolSize,
                                              x10_int poolMode, x10_double minDist) {
    
    //#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    ::cpls::entities::PoolConfig* this__5 = this;
    ::x10aux::nullCheck(this__5)->FMGL(problemSize) = ((x10_long)0ll);
    ::x10aux::nullCheck(this__5)->FMGL(poolSize) = ((x10_int)0);
    ::x10aux::nullCheck(this__5)->FMGL(poolMode) = ((x10_int)0);
    ::x10aux::nullCheck(this__5)->FMGL(minDist) = 0.0;
    
    //#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(problemSize) = problemSize;
    
    //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(poolSize) = poolSize;
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(poolMode) = poolMode;
    
    //#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(minDist) = minDist;
}
::cpls::entities::PoolConfig* cpls::entities::PoolConfig::_make(x10_long problemSize,
                                                                x10_int poolSize,
                                                                x10_int poolMode,
                                                                x10_double minDist)
{
    ::cpls::entities::PoolConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig();
    this_->_constructor(problemSize, poolSize, poolMode, minDist);
    return this_;
}



//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
x10_long cpls::entities::PoolConfig::getProblemSize() {
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    return this->FMGL(problemSize);
    
}

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
x10_int cpls::entities::PoolConfig::getPoolSize() {
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    return this->FMGL(poolSize);
    
}

//#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
x10_int cpls::entities::PoolConfig::getPoolMode() {
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    return this->FMGL(poolMode);
    
}

//#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
x10_double cpls::entities::PoolConfig::getMinDist() {
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    return this->FMGL(minDist);
    
}

//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
void cpls::entities::PoolConfig::setProblemSize(x10_long problemSize) {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(problemSize) = problemSize;
}

//#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
void cpls::entities::PoolConfig::setPoolSize(x10_int poolSize) {
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(poolSize) = poolSize;
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
void cpls::entities::PoolConfig::setPoolMode(x10_int poolMode) {
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(poolMode) = poolMode;
}

//#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
void cpls::entities::PoolConfig::setMinDist(x10_double minDist) {
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
    this->FMGL(minDist) = minDist;
}

//#line 3 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/entities/PoolConfig.x10"
::cpls::entities::PoolConfig* cpls::entities::PoolConfig::cpls__entities__PoolConfig____this__cpls__entities__PoolConfig(
  ) {
    return this;
    
}
void cpls::entities::PoolConfig::__fieldInitializers_cpls_entities_PoolConfig(
  ) {
    this->FMGL(problemSize) = ((x10_long)0ll);
    this->FMGL(poolSize) = ((x10_int)0);
    this->FMGL(poolMode) = ((x10_int)0);
    this->FMGL(minDist) = 0.0;
}
const ::x10aux::serialization_id_t cpls::entities::PoolConfig::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::entities::PoolConfig::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::entities::PoolConfig::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(problemSize));
    buf.write(this->FMGL(poolSize));
    buf.write(this->FMGL(poolMode));
    buf.write(this->FMGL(minDist));
    
}

::x10::lang::Reference* ::cpls::entities::PoolConfig::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::entities::PoolConfig* this_ = new (::x10aux::alloc_z< ::cpls::entities::PoolConfig>()) ::cpls::entities::PoolConfig();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::entities::PoolConfig::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(problemSize) = buf.read<x10_long>();
    FMGL(poolSize) = buf.read<x10_int>();
    FMGL(poolMode) = buf.read<x10_int>();
    FMGL(minDist) = buf.read<x10_double>();
}

::x10aux::RuntimeType cpls::entities::PoolConfig::rtt;
void cpls::entities::PoolConfig::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.entities.PoolConfig",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of PoolConfig */
/*************************************************/
