/*************************************************/
/* START of Logger */
#include <cpls/util/Logger.h>


//#line 4 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
x10_long cpls::util::Logger::FMGL(DEBUG);
void cpls::util::Logger::FMGL(DEBUG__do_init)() {
    FMGL(DEBUG__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Logger.DEBUG");
    x10_long __var0__ = ((x10_long)0ll);
    FMGL(DEBUG) = __var0__;
    FMGL(DEBUG__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Logger::FMGL(DEBUG__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(DEBUG__status), &FMGL(DEBUG__do_init), &FMGL(DEBUG__exception), "cpls::util::Logger.DEBUG");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Logger::FMGL(DEBUG__status);
::x10::lang::CheckedThrowable* cpls::util::Logger::FMGL(DEBUG__exception);

//#line 5 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
x10_long cpls::util::Logger::FMGL(LOG);
void cpls::util::Logger::FMGL(LOG__do_init)() {
    FMGL(LOG__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Logger.LOG");
    x10_long __var1__ = ((x10_long)1ll);
    FMGL(LOG) = __var1__;
    FMGL(LOG__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Logger::FMGL(LOG__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(LOG__status), &FMGL(LOG__do_init), &FMGL(LOG__exception), "cpls::util::Logger.LOG");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Logger::FMGL(LOG__status);
::x10::lang::CheckedThrowable* cpls::util::Logger::FMGL(LOG__exception);

//#line 6 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
x10_long cpls::util::Logger::FMGL(INFO);
void cpls::util::Logger::FMGL(INFO__do_init)() {
    FMGL(INFO__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Logger.INFO");
    x10_long __var2__ = ((x10_long)2ll);
    FMGL(INFO) = __var2__;
    FMGL(INFO__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Logger::FMGL(INFO__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(INFO__status), &FMGL(INFO__do_init), &FMGL(INFO__exception), "cpls::util::Logger.INFO");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Logger::FMGL(INFO__status);
::x10::lang::CheckedThrowable* cpls::util::Logger::FMGL(INFO__exception);

//#line 7 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
x10_long cpls::util::Logger::FMGL(LEVEL);
void cpls::util::Logger::FMGL(LEVEL__do_init)() {
    FMGL(LEVEL__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: cpls::util::Logger.LEVEL");
    x10_long __var3__ = ((x10_long)3ll);
    FMGL(LEVEL) = __var3__;
    FMGL(LEVEL__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void cpls::util::Logger::FMGL(LEVEL__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(LEVEL__status), &FMGL(LEVEL__do_init), &FMGL(LEVEL__exception), "cpls::util::Logger.LEVEL");
    
}
volatile ::x10aux::StaticInitController::status cpls::util::Logger::FMGL(LEVEL__status);
::x10::lang::CheckedThrowable* cpls::util::Logger::FMGL(LEVEL__exception);

//#line 9 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::out(::x10::lang::String* s) {
    
    //#line 10 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__3294 = ::x10aux::makeStringLit("["); strLit__3294; })), ::x10::lang::Place::_make(::x10aux::here)), (__extension__ ({ static ::x10::lang::String* strLit__3295 = ::x10aux::makeStringLit(":"); strLit__3295; }))), ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::Runtime__Worker*>(::x10::lang::Thread::currentThread())))->FMGL(workerId)), (__extension__ ({ static ::x10::lang::String* strLit__3296 = ::x10aux::makeStringLit(" "); strLit__3296; }))), ::x10::lang::RuntimeNatives::nanoTime()), (__extension__ ({ static ::x10::lang::String* strLit__3297 = ::x10aux::makeStringLit("] "); strLit__3297; }))), s)));
}

//#line 14 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::info(::x10::lang::Fun_0_0< ::x10::lang::String*>* s) {
 
}

//#line 15 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::info(::x10::lang::String* s) {
 
}

//#line 16 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"

//#line 17 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::log(::x10::lang::Fun_0_0< ::x10::lang::String*>* s) {
 
}

//#line 18 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::log(::x10::lang::String* s) {
 
}

//#line 19 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"

//#line 20 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::debug(::x10::lang::Fun_0_0< ::x10::lang::String*>* s) {
 
}

//#line 21 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"

//#line 22 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
void cpls::util::Logger::debug(::x10::lang::String* s) {
 
}

//#line 3 "/home/artica/Documents/Maestria/Implementacion/codigo/COPSolver-V_2.0/cpls/util/Logger.x10"
::cpls::util::Logger* cpls::util::Logger::cpls__util__Logger____this__cpls__util__Logger(
  ) {
    return this;
    
}
void cpls::util::Logger::_constructor() {
    ::cpls::util::Logger* this__3293 = this;
    
}
::cpls::util::Logger* cpls::util::Logger::_make() {
    ::cpls::util::Logger* this_ = new (::x10aux::alloc_z< ::cpls::util::Logger>()) ::cpls::util::Logger();
    this_->_constructor();
    return this_;
}


void cpls::util::Logger::__fieldInitializers_cpls_util_Logger() {
 
}
const ::x10aux::serialization_id_t cpls::util::Logger::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::Logger::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::util::Logger::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::cpls::util::Logger::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::Logger* this_ = new (::x10aux::alloc_z< ::cpls::util::Logger>()) ::cpls::util::Logger();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::util::Logger::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType cpls::util::Logger::rtt;
void cpls::util::Logger::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.util.Logger",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Logger */
/*************************************************/
