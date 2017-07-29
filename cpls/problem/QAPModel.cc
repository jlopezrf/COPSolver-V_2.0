/*************************************************/
/* START of QAPModel */
#include <cpls/problem/QAPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/array/Array_2.h>
#include <x10/lang/String.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/util/Timer.h>
#include <x10/io/File.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/io/FileReader.h>
#include <cpls/util/Logger.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/io/InputStreamReader.h>
#include <x10/lang/Char.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Synthetic.h>
#ifndef CPLS_PROBLEM_QAPMODEL__CLOSURE__1_CLOSURE
#define CPLS_PROBLEM_QAPMODEL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_problem_QAPModel__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>::itable<cpls_problem_QAPModel__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::Rail< x10_int >* __apply(x10_long id__0) {
        return ::x10::lang::Rail< x10_int >::_make(size, ((x10_int)0));
        
    }
    
    // captured environment
    x10_long size;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->size);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_problem_QAPModel__closure__1* storage = ::x10aux::alloc_z<cpls_problem_QAPModel__closure__1>();
        buf.record_reference(storage);
        x10_long that_size = buf.read<x10_long>();
        cpls_problem_QAPModel__closure__1* this_ = new (storage) cpls_problem_QAPModel__closure__1(that_size);
        return this_;
    }
    
    cpls_problem_QAPModel__closure__1(x10_long size) : size(size) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10:28";
    }

};

#endif // CPLS_PROBLEM_QAPMODEL__CLOSURE__1_CLOSURE
#ifndef CPLS_PROBLEM_QAPMODEL__CLOSURE__2_CLOSURE
#define CPLS_PROBLEM_QAPMODEL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class cpls_problem_QAPModel__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>::itable<cpls_problem_QAPModel__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::Rail< x10_int >* __apply(x10_long id__1) {
        return ::x10::lang::Rail< x10_int >::_make(size, ((x10_int)0));
        
    }
    
    // captured environment
    x10_long size;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->size);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_problem_QAPModel__closure__2* storage = ::x10aux::alloc_z<cpls_problem_QAPModel__closure__2>();
        buf.record_reference(storage);
        x10_long that_size = buf.read<x10_long>();
        cpls_problem_QAPModel__closure__2* this_ = new (storage) cpls_problem_QAPModel__closure__2(that_size);
        return this_;
    }
    
    cpls_problem_QAPModel__closure__2(x10_long size) : size(size) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10:29";
    }

};

#endif // CPLS_PROBLEM_QAPMODEL__CLOSURE__2_CLOSURE
#ifndef CPLS_PROBLEM_QAPMODEL__CLOSURE__3_CLOSURE
#define CPLS_PROBLEM_QAPMODEL__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class cpls_problem_QAPModel__closure__3 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_problem_QAPModel__closure__3> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__8101 = ::x10aux::makeStringLit("file: "); strLit__8101; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__8102 = ::x10aux::makeStringLit(" size: "); strLit__8102; }))), sizeF), (__extension__ ({ static ::x10::lang::String* strLit__8103 = ::x10aux::makeStringLit(" bound: "); strLit__8103; }))), vb), (__extension__ ({ static ::x10::lang::String* strLit__8104 = ::x10aux::makeStringLit(" opt: "); strLit__8104; }))), vopt), (__extension__ ({ static ::x10::lang::String* strLit__8105 = ::x10aux::makeStringLit(" bks: "); strLit__8105; }))), bks);
        
    }
    
    // captured environment
    ::x10::lang::String* filePath;
    x10_int sizeF;
    x10_int vb;
    x10_int vopt;
    x10_int bks;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->filePath);
        buf.write(this->sizeF);
        buf.write(this->vb);
        buf.write(this->vopt);
        buf.write(this->bks);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        cpls_problem_QAPModel__closure__3* storage = ::x10aux::alloc_z<cpls_problem_QAPModel__closure__3>();
        buf.record_reference(storage);
        ::x10::lang::String* that_filePath = buf.read< ::x10::lang::String*>();
        x10_int that_sizeF = buf.read<x10_int>();
        x10_int that_vb = buf.read<x10_int>();
        x10_int that_vopt = buf.read<x10_int>();
        x10_int that_bks = buf.read<x10_int>();
        cpls_problem_QAPModel__closure__3* this_ = new (storage) cpls_problem_QAPModel__closure__3(that_filePath, that_sizeF, that_vb, that_vopt, that_bks);
        return this_;
    }
    
    cpls_problem_QAPModel__closure__3(::x10::lang::String* filePath, x10_int sizeF, x10_int vb, x10_int vopt, x10_int bks) : filePath(filePath), sizeF(sizeF), vb(vb), vopt(vopt), bks(bks) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10:183";
    }

};

#endif // CPLS_PROBLEM_QAPMODEL__CLOSURE__3_CLOSURE

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
/** optimal cost (0 if unknown) */

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
/** best bound (0 if unknown) */

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size) {
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(size);
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::QAPModel* this__7902 = this;
    ::x10aux::nullCheck(this__7902)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7902)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7902)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7902)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__7902)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__7902)->FMGL(bks) = ((x10_int)0);
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(x10_long size) {
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size);
    return this_;
}



//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size, ::x10::lang::String* inPathDataProblem,
                                           ::x10::lang::String* inPathVectorSol,
                                           x10_int baseValue) {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(size);
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::QAPModel* this__7903 = this;
    ::x10aux::nullCheck(this__7903)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7903)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7903)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7903)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__7903)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__7903)->FMGL(bks) = ((x10_int)0);
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->::cpls::problem::ProblemGenericModel::FMGL(inPathDataProblem) =
      inPathDataProblem;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->::cpls::problem::ProblemGenericModel::FMGL(inPathVectorSol) =
      inPathVectorSol;
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->::cpls::problem::ProblemGenericModel::FMGL(baseValue) =
      baseValue;
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(flow) = ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::_make(size,
                                                                                 reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(sizeof(cpls_problem_QAPModel__closure__1)))cpls_problem_QAPModel__closure__1(size))));
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(dist) = ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::_make(size,
                                                                                 reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(sizeof(cpls_problem_QAPModel__closure__2)))cpls_problem_QAPModel__closure__2(size))));
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = (__extension__ ({
        ::x10::array::Array_2<x10_long>* alloc__4708 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__4708)->::x10::array::Array_2<x10_long>::_constructor(
          size, size, ((x10_long)0ll));
        alloc__4708;
    }))
    ;
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(
  x10_long size, ::x10::lang::String* inPathDataProblem, ::x10::lang::String* inPathVectorSol,
  x10_int baseValue) {
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size, inPathDataProblem, inPathVectorSol,
    baseValue);
    return this_;
}



//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size,
                                           ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
                                           ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md) {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(
      size);
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::QAPModel* this__7904 = this;
    ::x10aux::nullCheck(this__7904)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7904)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7904)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7904)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__7904)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__7904)->FMGL(bks) = ((x10_int)0);
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(flow) = mf;
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(dist) = md;
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = (__extension__ ({
        ::x10::array::Array_2<x10_long>* alloc__4709 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__4709)->::x10::array::Array_2<x10_long>::_constructor(
          size, size, ((x10_long)0ll));
        alloc__4709;
    }))
    ;
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(
  x10_long size, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
  ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md)
{
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size, mf, md);
    return this_;
}



//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::computeDelta(x10_long sz,
                                               x10_long i,
                                               x10_long j,
                                               ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pi = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                i)));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pj = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                j)));
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long k;
    x10_long pk;
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long dis = ((x10_long)(((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                           i))->x10::lang::Rail< x10_int >::__apply(
                                       i)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                    j))->x10::lang::Rail< x10_int >::__apply(
                                                j)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                 pj))->x10::lang::Rail< x10_int >::__apply(
                                                             pj)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                           pi))->x10::lang::Rail< x10_int >::__apply(
                                                                       pi)))))) + (((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                             i))->x10::lang::Rail< x10_int >::__apply(
                                                                                         j)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                      j))->x10::lang::Rail< x10_int >::__apply(
                                                                                                  i)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                   pj))->x10::lang::Rail< x10_int >::__apply(
                                                                                                               pi)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                             pi))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                         pj)))))))));
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (k = ((x10_long)0ll); ((k) < (i)); k = ((k) + (((x10_long)1ll))))
        {
            
            //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            pk = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                               k)));
            
            //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            dis = ((dis) + (((x10_long)(((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                    k))->x10::lang::Rail< x10_int >::__apply(
                                                i)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                             k))->x10::lang::Rail< x10_int >::__apply(
                                                         j)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                          pk))->x10::lang::Rail< x10_int >::__apply(
                                                                      pj)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                    pk))->x10::lang::Rail< x10_int >::__apply(
                                                                                pi)))))) + (((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                      i))->x10::lang::Rail< x10_int >::__apply(
                                                                                                  k)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                               j))->x10::lang::Rail< x10_int >::__apply(
                                                                                                           k)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                            pj))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                        pk)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                      pi))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                  pk)))))))))));
        }
    }
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    while (((k = ((k) + (((x10_long)1ll)))) < (j))) {
        
        //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        pk = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                           k)));
        
        //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        dis = ((dis) + (((x10_long)(((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                k))->x10::lang::Rail< x10_int >::__apply(
                                            i)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                         k))->x10::lang::Rail< x10_int >::__apply(
                                                     j)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                      pk))->x10::lang::Rail< x10_int >::__apply(
                                                                  pj)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                pk))->x10::lang::Rail< x10_int >::__apply(
                                                                            pi)))))) + (((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                  i))->x10::lang::Rail< x10_int >::__apply(
                                                                                              k)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                           j))->x10::lang::Rail< x10_int >::__apply(
                                                                                                       k)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                        pj))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                    pk)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                  pi))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                              pk)))))))))));
    }
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    while (((k = ((k) + (((x10_long)1ll)))) < (this->FMGL(size))))
    {
        
        //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        pk = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                           k)));
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        dis = ((dis) + (((x10_long)(((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                k))->x10::lang::Rail< x10_int >::__apply(
                                            i)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                         k))->x10::lang::Rail< x10_int >::__apply(
                                                     j)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                      pk))->x10::lang::Rail< x10_int >::__apply(
                                                                  pj)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                pk))->x10::lang::Rail< x10_int >::__apply(
                                                                            pi)))))) + (((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                  i))->x10::lang::Rail< x10_int >::__apply(
                                                                                              k)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                           j))->x10::lang::Rail< x10_int >::__apply(
                                                                                                       k)))) * (((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                        pj))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                    pk)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                  pi))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                              pk)))))))))));
    }
    
    //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return dis;
    
}

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::computeDeltaPart(x10_long sz,
                                                   x10_long i,
                                                   x10_long j,
                                                   x10_long r,
                                                   x10_long s,
                                                   ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pi = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                i)));
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pj = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                j)));
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pr = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                r)));
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long ps = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                s)));
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return (((((__extension__ ({
        ::x10::array::Array_2<x10_long>* this__6810 = this->FMGL(delta);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__6808 = i;
        x10_long j__6809 = j;
        x10_long ret__6811;
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__6811 = (::x10aux::nullCheck(this__6810)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__7905 = i__6808;
            x10_long j__7906 = j__6809;
            ((j__7906) + (((i__7905) * (::x10aux::nullCheck(this__6810)->FMGL(numElems_2)))));
        }))
        );
        ret__6811;
    }))
    ) + (((x10_long)(((((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                   r))->x10::lang::Rail< x10_int >::__apply(
                               i)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                            r))->x10::lang::Rail< x10_int >::__apply(
                                        j)))) + (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                       s))->x10::lang::Rail< x10_int >::__apply(
                                                   j)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                  s))->x10::lang::Rail< x10_int >::__apply(
                                                              i)))) * (((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                   ps))->x10::lang::Rail< x10_int >::__apply(
                                                                               pi)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                             ps))->x10::lang::Rail< x10_int >::__apply(
                                                                                         pj)))) + (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                         pr))->x10::lang::Rail< x10_int >::__apply(
                                                                                                     pj)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                     pr))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                 pi)))))))))) + (((x10_long)(((((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                           i))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                       r)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                    j))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                r)))) + (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                               j))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                           s)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                                          i))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                      s)))) * (((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                                                           pi))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                       ps)) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                                                                     pj))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                 ps)))) + (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                                                                                 pj))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                             pr)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                                                                                                                                                                                                             pi))->x10::lang::Rail< x10_int >::__apply(
                                                                                                                                                                                                                                         pr)))))))));
    
}

//#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOfSolution(x10_long sz,
                                                 x10_boolean shouldBeRecorded,
                                                 ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    r = ((r) + (((x10_long)(((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                    i))->x10::lang::Rail< x10_int >::__apply(
                                                j)) * (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                             ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                                           i)))))->x10::lang::Rail< x10_int >::__apply(
                                                         ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                       j))))))))));
                }
            }
            
        }
    }
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (shouldBeRecorded) {
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        {
            for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
                 i = ((i) + (((x10_long)1ll)))) {
                
                //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                {
                    for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                         j = ((j) + (((x10_long)1ll)))) {
                        
                        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__7909 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__7910 = i;
                        x10_long j__7911 = j;
                        x10_long v__7912 = this->computeDelta(
                                             sz, i, j, variables);
                        x10_long ret__7913;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__7909)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__7907 = i__7910;
                            x10_long j__7908 = j__7911;
                            ((j__7908) + (((i__7907) * (::x10aux::nullCheck(this__7909)->FMGL(numElems_2)))));
                        }))
                        , v__7912);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7913 = v__7912;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7913;
                    }
                }
                
            }
        }
        
    }
    
    //#line 99 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOfSolution(x10_long sz,
                                                 ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    r = ((r) + (((x10_long)(((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                    i))->x10::lang::Rail< x10_int >::__apply(
                                                j)) * (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                             ((x10_long)(::x10aux::nullCheck(solution)->x10::lang::Rail< x10_int >::__apply(
                                                                                           i)))))->x10::lang::Rail< x10_int >::__apply(
                                                         ((x10_long)(::x10aux::nullCheck(solution)->x10::lang::Rail< x10_int >::__apply(
                                                                       j))))))))));
                }
            }
            
        }
    }
    
    //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costIfSwap(x10_long currentCost,
                                             x10_long i1,
                                             x10_long i2) {
    
    //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i1v = i1;
    
    //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i2v = i2;
    
    //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (((i1) > (i2))) {
        
        //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i1v = i2;
        
        //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i2v = i1;
    }
    
    //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return ((currentCost) + ((__extension__ ({
        ::x10::array::Array_2<x10_long>* this__6857 = this->FMGL(delta);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__6855 = i1v;
        x10_long j__6856 = i2v;
        x10_long ret__6858;
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__6858 = (::x10aux::nullCheck(this__6857)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__7914 = i__6855;
            x10_long j__7915 = j__6856;
            ((j__7915) + (((i__7914) * (::x10aux::nullCheck(this__6857)->FMGL(numElems_2)))));
        }))
        );
        ret__6858;
    }))
    ));
    
}

//#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::executedSwap(x10_long sz, x10_long i1,
                                           x10_long i2, ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long temp = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                  i1)));
    
    //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (((i1) >= (i2))) {
        
        //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_long tmp = i1;
        
        //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i1 = i2;
        
        //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i2 = tmp;
    }
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (((((!::x10aux::struct_equals(i, i1)) &&
                        (!::x10aux::struct_equals(i, i2))) &&
                        (!::x10aux::struct_equals(j, i1))) &&
                        (!::x10aux::struct_equals(j, i2))))
                    {
                        
                        //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__7918 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__7919 = i;
                        x10_long j__7920 = j;
                        x10_long v__7921 = this->computeDeltaPart(
                                             sz, i, j, i1,
                                             i2, variables);
                        x10_long ret__7922;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__7918)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__7916 = i__7919;
                            x10_long j__7917 = j__7920;
                            ((j__7917) + (((i__7916) * (::x10aux::nullCheck(this__7918)->FMGL(numElems_2)))));
                        }))
                        , v__7921);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7922 = v__7921;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7922;
                    } else {
                        
                        //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__7925 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__7926 = i;
                        x10_long j__7927 = j;
                        x10_long v__7928 = this->computeDelta(
                                             sz, i, j, variables);
                        x10_long ret__7929;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__7925)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__7923 = i__7926;
                            x10_long j__7924 = j__7927;
                            ((j__7924) + (((i__7923) * (::x10aux::nullCheck(this__7925)->FMGL(numElems_2)))));
                        }))
                        , v__7928);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7929 = v__7928;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7929;
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOnVariable(x10_long i) {
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = (x10_long)0x8000000000000000LL;
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        x10_long j;
        for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if ((::x10aux::struct_equals(i, j))) {
                continue;
            }
            
            //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            x10_long d = ((i) < (j)) ? ((__extension__ ({
                                            ::x10::array::Array_2<x10_long>* this__6880 =
                                              this->FMGL(delta);
                                            
                                            //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__6878 =
                                              i;
                                            x10_long j__6879 =
                                              j;
                                            x10_long ret__6881;
                                            
                                            //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            ret__6881 = (::x10aux::nullCheck(this__6880)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                
                                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__7930 =
                                                  i__6878;
                                                x10_long j__7931 =
                                                  j__6879;
                                                ((j__7931) + (((i__7930) * (::x10aux::nullCheck(this__6880)->FMGL(numElems_2)))));
                                            }))
                                            );
                                            ret__6881;
                                        }))
                                        ) : ((__extension__ ({
                                                 ::x10::array::Array_2<x10_long>* this__6887 =
                                                   this->FMGL(delta);
                                                 
                                                 //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                 x10_long i__6885 =
                                                   j;
                                                 x10_long j__6886 =
                                                   i;
                                                 x10_long ret__6888;
                                                 
                                                 //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                 ret__6888 =
                                                   (::x10aux::nullCheck(this__6887)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                     
                                                     //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                     x10_long i__7932 =
                                                       i__6885;
                                                     x10_long j__7933 =
                                                       j__6886;
                                                     ((j__7933) + (((i__7932) * (::x10aux::nullCheck(this__6887)->FMGL(numElems_2)))));
                                                 }))
                                                 );
                                                 ret__6888;
                                             }))
                                             );
            
            //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            d = (-(d));
            
            //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((d) > (r))) {
                r = d;
            }
            
        }
    }
    
    //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::loadData(::x10::lang::String* filePath) {
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long loadTime = (-(::x10::lang::RuntimeNatives::nanoTime()));
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::File* filep =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
    (filep)->::x10::io::File::_constructor(filePath);
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (filep->isDirectory()) {
        return false;
        
    }
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__8096 = ::x10aux::makeStringLit("\n--   Solving "); strLit__8096; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__8097 = ::x10aux::makeStringLit(" "); strLit__8097; })))));
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::FileReader* fr = filep->openRead();
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::String* fLine = ::x10aux::nullCheck(fr)->readLine();
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* header = ::cpls::problem::QAPModel::readParameters(
                                             fLine);
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int sizeF = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                      ((x10_long)0ll));
    x10_int opt = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)1ll));
    x10_int bks = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)2ll));
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int bound = ((x10_int)0);
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (((((x10_long)(opt))) < (((x10_long)0ll)))) {
        
        //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        bound = (-(opt));
        
        //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        opt = ((x10_int)0);
    } else {
        
        //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        bound = opt;
    }
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int vopt = opt;
    x10_int vb = bound;
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_problem_QAPModel__closure__3)))cpls_problem_QAPModel__closure__3(filePath, sizeF, vb, vopt, bks))));
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->readMatrix(fr, sizeF);
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10aux::nullCheck(fr)->close();
    
    //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return true;
    
}

//#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::QAPModel::readParameters(
  ::x10::lang::String* line) {
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int i;
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int j = ((x10_int)0);
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__8106 = ::x10aux::makeStringLit(""); strLit__8106; }));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* x = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                          ((x10_int)0));
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((::x10aux::struct_equals((line)->charAt(i),
                                          ((x10_char)' '))) ||
                (::x10aux::struct_equals((line)->charAt(i),
                                         ((x10_char)'\n')))))
            {
                
                //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                x->x10::lang::Rail< x10_int >::__set(((x10_long)((__extension__ ({
                                                         x10_int pre__4385 =
                                                           j;
                                                         j =
                                                           ((j) + (((x10_int)1)));
                                                         pre__4385;
                                                     }))
                                                     )), ::x10::lang::IntNatives::parseInt(buffer));
                
                //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8107 = ::x10aux::makeStringLit(""); strLit__8107; }));
            } else {
                
                //#line 202 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
            }
            
        }
    }
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x->x10::lang::Rail< x10_int >::__set(((x10_long)(j)),
                                         ::x10::lang::IntNatives::parseInt(buffer));
    
    //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return x;
    
}

//#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::readMatrix(::x10::io::FileReader* fr,
                                         x10_int sizeF) {
    
    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    try {
        
        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int i = ((x10_int)0);
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int j;
        
        //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        ::x10::lang::String* buffer;
        
        //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int fLine = ((x10_int)0);
        
        //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int dLine = ((x10_int)0);
        
        //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__4792;
            for (line__4792 = ::x10aux::nullCheck(::x10aux::nullCheck(fr)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__4792));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__4792));
                
                //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                i = ((i) + (((x10_int)1)));
                
                //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8108 = ::x10aux::makeStringLit(""); strLit__8108; }));
                j = ((x10_int)0);
                
                //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                if ((((i) >= (((x10_int)2))) && ((((x10_long)(i))) < (((((x10_long)(sizeF))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__7935 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__7936 = (x10_long)(::x10aux::nullCheck(rail__7935)->FMGL(size));
                    {
                        x10_long idx__7937;
                        for (idx__7937 = ((x10_long)0ll);
                             ((idx__7937) < (size__7936));
                             idx__7937 = ((idx__7937) + (((x10_long)1ll))))
                        {
                            x10_char char__7938 = ::x10aux::nullCheck(rail__7935)->x10::lang::Rail< x10_char >::__apply(
                                                    idx__7937);
                            
                            //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__7938,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8110 = ::x10aux::makeStringLit(""); strLit__8110; })))))
                                {
                                    
                                    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__7934 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__7934;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8112 = ::x10aux::makeStringLit(""); strLit__8112; }));
                            } else {
                                
                                //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__7938);
                            }
                            
                        }
                    }
                    
                    //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8113 = ::x10aux::makeStringLit(""); strLit__8113; })))))
                    {
                        
                        //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__4447 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__4447;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    fLine = ((fLine) + (((x10_int)1)));
                } else 
                //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                if ((((((x10_long)(i))) > (((((x10_long)(sizeF))) + (((x10_long)2ll))))) &&
                    ((((x10_long)(i))) <= (((((((x10_long)(sizeF))) * (((x10_long)2ll)))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__7940 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__7941 = (x10_long)(::x10aux::nullCheck(rail__7940)->FMGL(size));
                    {
                        x10_long idx__7942;
                        for (idx__7942 = ((x10_long)0ll);
                             ((idx__7942) < (size__7941));
                             idx__7942 = ((idx__7942) + (((x10_long)1ll))))
                        {
                            x10_char char__7943 = ::x10aux::nullCheck(rail__7940)->x10::lang::Rail< x10_char >::__apply(
                                                    idx__7942);
                            
                            //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__7943,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8116 = ::x10aux::makeStringLit(""); strLit__8116; })))))
                                {
                                    
                                    //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__7939 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__7939;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8118 = ::x10aux::makeStringLit(""); strLit__8118; }));
                            } else {
                                
                                //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__7943);
                            }
                            
                        }
                    }
                    
                    //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8119 = ::x10aux::makeStringLit(""); strLit__8119; })))))
                    {
                        
                        //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__4512 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__4512;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    dLine = ((dLine) + (((x10_int)1)));
                }
                
            }
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc10) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc10)) {
            ::x10::lang::Exception* id__2 = static_cast< ::x10::lang::Exception*>(__exc10);
            {
                
                //#line 263 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8121 = ::x10aux::makeStringLit("Error reading file"); strLit__8121; }))));
            }
        } else
        throw;
    }
}

//#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::verify(x10_long sz, ::x10::lang::Rail< x10_int >* match) {
    
    //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(sz,
                                                                                ((x10_int)0));
    
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int baseV = this->FMGL(baseValue);
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* rail__7948 = match;
    x10_long i__4794max__7949 = (x10_long)(::x10aux::nullCheck(rail__7948)->FMGL(size));
    {
        x10_long i__7950;
        for (i__7950 = ((x10_long)0ll); ((i__7950) < (i__4794max__7949));
             i__7950 = ((i__7950) + (((x10_long)1ll)))) {
            x10_long mi__7951 = i__7950;
            
            //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            x10_int value__7947 = ::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                    mi__7951);
            
            //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* a__7944 = permutV;
            x10_long i__7945 = ((x10_long)(((value__7947) - (baseV))));
            x10_int r__7946 = ((a__7944->x10::lang::Rail< x10_int >::__apply(
                                  i__7945)) + (((x10_int)1)));
            a__7944->x10::lang::Rail< x10_int >::__set(i__7945,
                                                       r__7946);
            
            //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((value__7947) - (baseV)))))))) > (((x10_long)1ll))))
            {
                
                //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__8127 = ::x10aux::makeStringLit("Not valid permutation, value "); strLit__8127; })), value__7947), (__extension__ ({ static ::x10::lang::String* strLit__8128 = ::x10aux::makeStringLit(" is repeted"); strLit__8128; })))));
            }
            
        }
    }
    
    //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (sz)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (sz)); j =
                                                          ((j) + (((x10_long)1ll))))
                {
                    
                    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    r = ((r) + (((x10_long)(((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                    i))->x10::lang::Rail< x10_int >::__apply(
                                                j)) * (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                             ((x10_long)(::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                                                                           i)))))->x10::lang::Rail< x10_int >::__apply(
                                                         ((x10_long)(::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                                                       j))))))))));
                }
            }
            
        }
    }
    
    //#line 291 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return (::x10aux::struct_equals(r, ((x10_long)0ll)));
    
}

//#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrices() {
    
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8137 = ::x10aux::makeStringLit("\nMatrix1"); strLit__8137; }))));
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int i = ((x10_int)0);
    
    //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__8138 = ::x10aux::makeStringLit(" : "); strLit__8138; }))));
            
            //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__7952 = ::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                         ((x10_long)(i)));
            x10_long size__7953 = (x10_long)(::x10aux::nullCheck(rail__7952)->FMGL(size));
            {
                x10_long idx__7954;
                for (idx__7954 = ((x10_long)0ll); ((idx__7954) < (size__7953));
                     idx__7954 = ((idx__7954) + (((x10_long)1ll))))
                {
                    x10_int j__7955 = ::x10aux::nullCheck(rail__7952)->x10::lang::Rail< x10_int >::__apply(
                                        idx__7954);
                    
                    //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__7955, (__extension__ ({ static ::x10::lang::String* strLit__8141 = ::x10aux::makeStringLit(" "); strLit__8141; }))));
                }
            }
            
            //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8142 = ::x10aux::makeStringLit(""); strLit__8142; }))));
        }
    }
    
    //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8143 = ::x10aux::makeStringLit("Matrix2"); strLit__8143; }))));
    
    //#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 305 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__8144 = ::x10aux::makeStringLit(": "); strLit__8144; }))));
            
            //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__7956 = ::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                         ((x10_long)(i)));
            x10_long size__7957 = (x10_long)(::x10aux::nullCheck(rail__7956)->FMGL(size));
            {
                x10_long idx__7958;
                for (idx__7958 = ((x10_long)0ll); ((idx__7958) < (size__7957));
                     idx__7958 = ((idx__7958) + (((x10_long)1ll))))
                {
                    x10_int j__7959 = ::x10aux::nullCheck(rail__7956)->x10::lang::Rail< x10_int >::__apply(
                                        idx__7958);
                    
                    //#line 307 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__7959, (__extension__ ({ static ::x10::lang::String* strLit__8147 = ::x10aux::makeStringLit(" "); strLit__8147; }))));
                }
            }
            
            //#line 308 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8148 = ::x10aux::makeStringLit(""); strLit__8148; }))));
        }
    }
    
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
::cpls::problem::QAPModel* cpls::problem::QAPModel::cpls__problem__QAPModel____this__cpls__problem__QAPModel(
  ) {
    return this;
    
}
void cpls::problem::QAPModel::__fieldInitializers_cpls_problem_QAPModel(
  ) {
    this->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(opt) = ((x10_int)0);
    this->FMGL(bound) = ((x10_int)0);
    this->FMGL(bks) = ((x10_int)0);
}
const ::x10aux::serialization_id_t cpls::problem::QAPModel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::problem::QAPModel::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::problem::QAPModel::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_serialize_body(buf);
    buf.write(this->FMGL(flow));
    buf.write(this->FMGL(dist));
    buf.write(this->FMGL(delta));
    buf.write(this->FMGL(opt));
    buf.write(this->FMGL(bound));
    buf.write(this->FMGL(bks));
    
}

::x10::lang::Reference* ::cpls::problem::QAPModel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::problem::QAPModel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::cpls::problem::ProblemGenericModel::_deserialize_body(buf);
    FMGL(flow) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>();
    FMGL(dist) = buf.read< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>();
    FMGL(delta) = buf.read< ::x10::array::Array_2<x10_long>*>();
    FMGL(opt) = buf.read<x10_int>();
    FMGL(bound) = buf.read<x10_int>();
    FMGL(bks) = buf.read<x10_int>();
}

::x10aux::RuntimeType cpls::problem::QAPModel::rtt;
void cpls::problem::QAPModel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::cpls::problem::ProblemGenericModel>()};
    rtt.initStageTwo("cpls.problem.QAPModel",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>::itable<cpls_problem_QAPModel__closure__1>cpls_problem_QAPModel__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_problem_QAPModel__closure__1::__apply, &cpls_problem_QAPModel__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_problem_QAPModel__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >, &cpls_problem_QAPModel__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_problem_QAPModel__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_problem_QAPModel__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>::itable<cpls_problem_QAPModel__closure__2>cpls_problem_QAPModel__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_problem_QAPModel__closure__2::__apply, &cpls_problem_QAPModel__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_problem_QAPModel__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >, &cpls_problem_QAPModel__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_problem_QAPModel__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_problem_QAPModel__closure__2::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_problem_QAPModel__closure__3>cpls_problem_QAPModel__closure__3::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_problem_QAPModel__closure__3::__apply, &cpls_problem_QAPModel__closure__3::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_problem_QAPModel__closure__3::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_problem_QAPModel__closure__3::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_problem_QAPModel__closure__3::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_problem_QAPModel__closure__3::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of QAPModel */
/*************************************************/
