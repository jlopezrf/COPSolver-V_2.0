/*************************************************/
/* START of RandomTools */
#include <cpls/util/RandomTools.h>

#include <x10/lang/Long.h>
#include <x10/util/Random.h>
#include <x10/util/Timer.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Double.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_UTIL_RANDOMTOOLS__CLOSURE__1_CLOSURE
#define CPLS_UTIL_RANDOMTOOLS__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_util_RandomTools__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_util_RandomTools__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long k) {
        return ((baseValue) + (((x10_int) (k))));
        
    }
    
    // captured environment
    x10_int baseValue;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->baseValue);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_util_RandomTools__closure__1* storage = ::x10aux::alloc_z<cpls_util_RandomTools__closure__1>();
        buf.record_reference(storage);
        x10_int that_baseValue = buf.read<x10_int>();
        cpls_util_RandomTools__closure__1* this_ = new (storage) cpls_util_RandomTools__closure__1(that_baseValue);
        return this_;
    }
    
    cpls_util_RandomTools__closure__1(x10_int baseValue) : baseValue(baseValue) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10:22";
    }

};

#endif // CPLS_UTIL_RANDOMTOOLS__CLOSURE__1_CLOSURE

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
void cpls::util::RandomTools::_constructor(x10_long seedIn) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    ::cpls::util::RandomTools* this__2040 = this;
    ::x10aux::nullCheck(this__2040)->FMGL(seed) = ((x10_long)0ll);
    ::x10aux::nullCheck(this__2040)->FMGL(r) = (__extension__ ({
        
        //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
        ::x10::util::Random* alloc__2039 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        
        //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
        (alloc__2039)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
        alloc__2039;
    }))
    ;
    
    //#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    this->FMGL(seed) = seedIn;
    
    //#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    ::x10::util::Random* this__2041 = this->FMGL(r);
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    x10_long seed__2042 = seedIn;
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    this__2041->x10::util::Random::init(seed__2042);
}
::cpls::util::RandomTools* cpls::util::RandomTools::_make(x10_long seedIn)
{
    ::cpls::util::RandomTools* this_ = new (::x10aux::alloc_z< ::cpls::util::RandomTools>()) ::cpls::util::RandomTools();
    this_->_constructor(seedIn);
    return this_;
}



//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
void cpls::util::RandomTools::setSeed(x10_long s) {
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    ::x10::util::Random* this__2043 = this->FMGL(r);
    
    //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    x10_long seed__2044 = s;
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
    this__2043->x10::util::Random::init(seed__2044);
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    this->FMGL(seed) = s;
}

//#line 20 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
::x10::lang::Rail< x10_int >* cpls::util::RandomTools::randomPermut(x10_long sz,
                                                                    x10_int baseValue) {
    
    //#line 21 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    x10_int size = ((x10_int) (sz));
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    ::x10::lang::Rail< x10_int >* vec = ::x10::lang::Rail< x10_int >::_make(((x10_long)(size)),
                                                                            reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, x10_int>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(cpls_util_RandomTools__closure__1)))cpls_util_RandomTools__closure__1(baseValue))));
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    {
        x10_int i;
        for (i = ((size) - (((x10_int)1))); ((i) > (((x10_int)0)));
             i = ((i) - (((x10_int)1)))) {
            
            //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            x10_int j = this->FMGL(r)->nextInt(((i) + (((x10_int)1))));
            
            //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            x10_int z = vec->x10::lang::Rail< x10_int >::__apply(
                          ((x10_long)(i)));
            
            //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            vec->x10::lang::Rail< x10_int >::__set(((x10_long)(i)),
                                                   vec->x10::lang::Rail< x10_int >::__apply(
                                                     ((x10_long)(j))));
            
            //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            vec->x10::lang::Rail< x10_int >::__set(((x10_long)(j)),
                                                   z);
        }
    }
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    return vec;
    
}

//#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
::x10::lang::Rail< x10_int >* cpls::util::RandomTools::randomArrayPermut(
  ::x10::lang::Rail< x10_int >* vec) {
    
    //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    {
        x10_long i;
        for (i = (((x10_long)(::x10aux::nullCheck(vec)->FMGL(size))) - (((x10_long)1ll)));
             ((i) > (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            x10_int j = this->randomInt(((i) + (((x10_long)1ll))));
            
            //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            x10_int z = ::x10aux::nullCheck(vec)->x10::lang::Rail< x10_int >::__apply(
                          i);
            
            //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            ::x10aux::nullCheck(vec)->x10::lang::Rail< x10_int >::__set(
              i, ::x10aux::nullCheck(vec)->x10::lang::Rail< x10_int >::__apply(
                   ((x10_long)(j))));
            
            //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
            ::x10aux::nullCheck(vec)->x10::lang::Rail< x10_int >::__set(
              ((x10_long)(j)), z);
        }
    }
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    return vec;
    
}

//#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
x10_int cpls::util::RandomTools::randomInterval(x10_int low,
                                                x10_int up) {
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    return ((::x10::lang::DoubleNatives::toInt(((this->FMGL(r)->nextDouble()) * (((x10_double) (((((up) - (low))) + (((x10_int)1))))))))) + (low));
    
}

//#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
x10_int cpls::util::RandomTools::randomInt(x10_long limit) {
    return this->FMGL(r)->nextInt(((x10_int) (limit)));
    
}

//#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
x10_long cpls::util::RandomTools::randomLong() {
    return this->FMGL(r)->nextLong();
    
}

//#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
x10_double cpls::util::RandomTools::randomDouble() {
    return this->FMGL(r)->nextDouble();
    
}

//#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
x10_long cpls::util::RandomTools::getRandomSeed() {
    
    //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
    return ::x10::lang::RuntimeNatives::nanoTime();
    
}

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
::cpls::util::RandomTools* cpls::util::RandomTools::cpls__util__RandomTools____this__cpls__util__RandomTools(
  ) {
    return this;
    
}
void cpls::util::RandomTools::__fieldInitializers_cpls_util_RandomTools(
  ) {
    this->FMGL(seed) = ((x10_long)0ll);
    this->FMGL(r) = (__extension__ ({
        
        //#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/util/RandomTools.x10"
        ::x10::util::Random* alloc__307 =  (new (::x10aux::alloc_z< ::x10::util::Random>()) ::x10::util::Random());
        
        //#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/util/Random.x10"
        (alloc__307)->::x10::util::Random::_constructor(::x10::lang::RuntimeNatives::nanoTime());
        alloc__307;
    }))
    ;
}
const ::x10aux::serialization_id_t cpls::util::RandomTools::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::util::RandomTools::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::util::RandomTools::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(seed));
    buf.write(this->FMGL(r));
    
}

::x10::lang::Reference* ::cpls::util::RandomTools::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::util::RandomTools* this_ = new (::x10aux::alloc_z< ::cpls::util::RandomTools>()) ::cpls::util::RandomTools();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::util::RandomTools::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(seed) = buf.read<x10_long>();
    FMGL(r) = buf.read< ::x10::util::Random*>();
}

::x10aux::RuntimeType cpls::util::RandomTools::rtt;
void cpls::util::RandomTools::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.util.RandomTools",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, x10_int>::itable<cpls_util_RandomTools__closure__1>cpls_util_RandomTools__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_util_RandomTools__closure__1::__apply, &cpls_util_RandomTools__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_util_RandomTools__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, x10_int> >, &cpls_util_RandomTools__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_util_RandomTools__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_util_RandomTools__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of RandomTools */
/*************************************************/
