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
        return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__8210 = ::x10aux::makeStringLit("file: "); strLit__8210; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__8211 = ::x10aux::makeStringLit(" size: "); strLit__8211; }))), sizeF), (__extension__ ({ static ::x10::lang::String* strLit__8212 = ::x10aux::makeStringLit(" bound: "); strLit__8212; }))), vb), (__extension__ ({ static ::x10::lang::String* strLit__8213 = ::x10aux::makeStringLit(" opt: "); strLit__8213; }))), vopt), (__extension__ ({ static ::x10::lang::String* strLit__8214 = ::x10aux::makeStringLit(" bks: "); strLit__8214; }))), bks);
        
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
    ::cpls::problem::QAPModel* this__8011 = this;
    ::x10aux::nullCheck(this__8011)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8011)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8011)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8011)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__8011)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__8011)->FMGL(bks) = ((x10_int)0);
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
    ::cpls::problem::QAPModel* this__8012 = this;
    ::x10aux::nullCheck(this__8012)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8012)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8012)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8012)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__8012)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__8012)->FMGL(bks) = ((x10_int)0);
    
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
        ::x10::array::Array_2<x10_long>* alloc__4817 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__4817)->::x10::array::Array_2<x10_long>::_constructor(
          size, size, ((x10_long)0ll));
        alloc__4817;
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
    ::cpls::problem::QAPModel* this__8013 = this;
    ::x10aux::nullCheck(this__8013)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8013)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8013)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__8013)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__8013)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__8013)->FMGL(bks) = ((x10_int)0);
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(flow) = mf;
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(dist) = md;
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = (__extension__ ({
        ::x10::array::Array_2<x10_long>* alloc__4818 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__4818)->::x10::array::Array_2<x10_long>::_constructor(
          size, size, ((x10_long)0ll));
        alloc__4818;
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
        ::x10::array::Array_2<x10_long>* this__6919 = this->FMGL(delta);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__6917 = i;
        x10_long j__6918 = j;
        x10_long ret__6920;
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__6920 = (::x10aux::nullCheck(this__6919)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__8014 = i__6917;
            x10_long j__8015 = j__6918;
            ((j__8015) + (((i__8014) * (::x10aux::nullCheck(this__6919)->FMGL(numElems_2)))));
        }))
        );
        ret__6920;
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
                        ::x10::array::Array_2<x10_long>* this__8018 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__8019 = i;
                        x10_long j__8020 = j;
                        x10_long v__8021 = this->computeDelta(
                                             sz, i, j, variables);
                        x10_long ret__8022;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__8018)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__8016 = i__8019;
                            x10_long j__8017 = j__8020;
                            ((j__8017) + (((i__8016) * (::x10aux::nullCheck(this__8018)->FMGL(numElems_2)))));
                        }))
                        , v__8021);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__8022 = v__8021;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__8022;
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
        ::x10::array::Array_2<x10_long>* this__6966 = this->FMGL(delta);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__6964 = i1v;
        x10_long j__6965 = i2v;
        x10_long ret__6967;
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__6967 = (::x10aux::nullCheck(this__6966)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__8023 = i__6964;
            x10_long j__8024 = j__6965;
            ((j__8024) + (((i__8023) * (::x10aux::nullCheck(this__6966)->FMGL(numElems_2)))));
        }))
        );
        ret__6967;
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
                        ::x10::array::Array_2<x10_long>* this__8027 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__8028 = i;
                        x10_long j__8029 = j;
                        x10_long v__8030 = this->computeDeltaPart(
                                             sz, i, j, i1,
                                             i2, variables);
                        x10_long ret__8031;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__8027)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__8025 = i__8028;
                            x10_long j__8026 = j__8029;
                            ((j__8026) + (((i__8025) * (::x10aux::nullCheck(this__8027)->FMGL(numElems_2)))));
                        }))
                        , v__8030);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__8031 = v__8030;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__8031;
                    } else {
                        
                        //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__8034 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__8035 = i;
                        x10_long j__8036 = j;
                        x10_long v__8037 = this->computeDelta(
                                             sz, i, j, variables);
                        x10_long ret__8038;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__8034)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__8032 = i__8035;
                            x10_long j__8033 = j__8036;
                            ((j__8033) + (((i__8032) * (::x10aux::nullCheck(this__8034)->FMGL(numElems_2)))));
                        }))
                        , v__8037);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__8038 = v__8037;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__8038;
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
                                            ::x10::array::Array_2<x10_long>* this__6989 =
                                              this->FMGL(delta);
                                            
                                            //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__6987 =
                                              i;
                                            x10_long j__6988 =
                                              j;
                                            x10_long ret__6990;
                                            
                                            //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            ret__6990 = (::x10aux::nullCheck(this__6989)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                
                                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__8039 =
                                                  i__6987;
                                                x10_long j__8040 =
                                                  j__6988;
                                                ((j__8040) + (((i__8039) * (::x10aux::nullCheck(this__6989)->FMGL(numElems_2)))));
                                            }))
                                            );
                                            ret__6990;
                                        }))
                                        ) : ((__extension__ ({
                                                 ::x10::array::Array_2<x10_long>* this__6996 =
                                                   this->FMGL(delta);
                                                 
                                                 //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                 x10_long i__6994 =
                                                   j;
                                                 x10_long j__6995 =
                                                   i;
                                                 x10_long ret__6997;
                                                 
                                                 //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                 ret__6997 =
                                                   (::x10aux::nullCheck(this__6996)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                     
                                                     //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                     x10_long i__8041 =
                                                       i__6994;
                                                     x10_long j__8042 =
                                                       j__6995;
                                                     ((j__8042) + (((i__8041) * (::x10aux::nullCheck(this__6996)->FMGL(numElems_2)))));
                                                 }))
                                                 );
                                                 ret__6997;
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
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__8205 = ::x10aux::makeStringLit("\n--   Solving "); strLit__8205; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__8206 = ::x10aux::makeStringLit(" "); strLit__8206; })))));
    
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
    ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__8215 = ::x10aux::makeStringLit(""); strLit__8215; }));
    
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
                                                         x10_int pre__4463 =
                                                           j;
                                                         j =
                                                           ((j) + (((x10_int)1)));
                                                         pre__4463;
                                                     }))
                                                     )), ::x10::lang::IntNatives::parseInt(buffer));
                
                //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8216 = ::x10aux::makeStringLit(""); strLit__8216; }));
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
            ::x10::lang::Iterator< ::x10::lang::String*>* line__4901;
            for (line__4901 = ::x10aux::nullCheck(::x10aux::nullCheck(fr)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__4901));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__4901));
                
                //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                i = ((i) + (((x10_int)1)));
                
                //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8217 = ::x10aux::makeStringLit(""); strLit__8217; }));
                j = ((x10_int)0);
                
                //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                if ((((i) >= (((x10_int)2))) && ((((x10_long)(i))) < (((((x10_long)(sizeF))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__8044 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__8045 = (x10_long)(::x10aux::nullCheck(rail__8044)->FMGL(size));
                    {
                        x10_long idx__8046;
                        for (idx__8046 = ((x10_long)0ll);
                             ((idx__8046) < (size__8045));
                             idx__8046 = ((idx__8046) + (((x10_long)1ll))))
                        {
                            x10_char char__8047 = ::x10aux::nullCheck(rail__8044)->x10::lang::Rail< x10_char >::__apply(
                                                    idx__8046);
                            
                            //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__8047,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8219 = ::x10aux::makeStringLit(""); strLit__8219; })))))
                                {
                                    
                                    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__8043 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__8043;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8221 = ::x10aux::makeStringLit(""); strLit__8221; }));
                            } else {
                                
                                //#line 230 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__8047);
                            }
                            
                        }
                    }
                    
                    //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8222 = ::x10aux::makeStringLit(""); strLit__8222; })))))
                    {
                        
                        //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__4525 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__4525;
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
                    ::x10::lang::Rail< x10_char >* rail__8049 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__8050 = (x10_long)(::x10aux::nullCheck(rail__8049)->FMGL(size));
                    {
                        x10_long idx__8051;
                        for (idx__8051 = ((x10_long)0ll);
                             ((idx__8051) < (size__8050));
                             idx__8051 = ((idx__8051) + (((x10_long)1ll))))
                        {
                            x10_char char__8052 = ::x10aux::nullCheck(rail__8049)->x10::lang::Rail< x10_char >::__apply(
                                                    idx__8051);
                            
                            //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__8052,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8225 = ::x10aux::makeStringLit(""); strLit__8225; })))))
                                {
                                    
                                    //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__8048 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__8048;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 249 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__8227 = ::x10aux::makeStringLit(""); strLit__8227; }));
                            } else {
                                
                                //#line 251 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__8052);
                            }
                            
                        }
                    }
                    
                    //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__8228 = ::x10aux::makeStringLit(""); strLit__8228; })))))
                    {
                        
                        //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__4590 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__4590;
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
                
                //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8230 = ::x10aux::makeStringLit("Error reading file"); strLit__8230; }))));
            }
        } else
        throw;
    }
}

//#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrix(x10_int size, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* matrix) {
    
    //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8231 = ::x10aux::makeStringLit("*******"); strLit__8231; }))));
    
    //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (size)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((j) < (size)); j =
                                                         ((j) + (((x10_int)1))))
                {
                    
                    //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10aux::nullCheck(::x10aux::nullCheck(matrix)->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                        ((x10_long)(i))))->x10::lang::Rail< x10_int >::__apply(
                                                    ((x10_long)(j))), (__extension__ ({ static ::x10::lang::String* strLit__8234 = ::x10aux::makeStringLit(" "); strLit__8234; }))));
                }
            }
            
            //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8235 = ::x10aux::makeStringLit(""); strLit__8235; }))));
        }
    }
    
}

//#line 286 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::verify(x10_long sz, ::x10::lang::Rail< x10_int >* match) {
    
    //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(sz,
                                                                                ((x10_int)0));
    
    //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int baseV = this->FMGL(baseValue);
    
    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* rail__8057 = match;
    x10_long i__4903max__8058 = (x10_long)(::x10aux::nullCheck(rail__8057)->FMGL(size));
    {
        x10_long i__8059;
        for (i__8059 = ((x10_long)0ll); ((i__8059) < (i__4903max__8058));
             i__8059 = ((i__8059) + (((x10_long)1ll)))) {
            x10_long mi__8060 = i__8059;
            
            //#line 291 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            x10_int value__8056 = ::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                    mi__8060);
            
            //#line 292 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* a__8053 = permutV;
            x10_long i__8054 = ((x10_long)(((value__8056) - (baseV))));
            x10_int r__8055 = ((a__8053->x10::lang::Rail< x10_int >::__apply(
                                  i__8054)) + (((x10_int)1)));
            a__8053->x10::lang::Rail< x10_int >::__set(i__8054,
                                                       r__8055);
            
            //#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((value__8056) - (baseV)))))))) > (((x10_long)1ll))))
            {
                
                //#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__8241 = ::x10aux::makeStringLit("Not valid permutation, value "); strLit__8241; })), value__8056), (__extension__ ({ static ::x10::lang::String* strLit__8242 = ::x10aux::makeStringLit(" is repeted"); strLit__8242; })))));
            }
            
        }
    }
    
    //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (sz)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (sz)); j =
                                                          ((j) + (((x10_long)1ll))))
                {
                    
                    //#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
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
    
    //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return (::x10aux::struct_equals(r, ((x10_long)0ll)));
    
}

//#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrices() {
    
    //#line 307 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8251 = ::x10aux::makeStringLit("\nMatrix1"); strLit__8251; }))));
    
    //#line 308 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int i = ((x10_int)0);
    
    //#line 309 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 310 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__8252 = ::x10aux::makeStringLit(" : "); strLit__8252; }))));
            
            //#line 311 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__8061 = ::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                         ((x10_long)(i)));
            x10_long size__8062 = (x10_long)(::x10aux::nullCheck(rail__8061)->FMGL(size));
            {
                x10_long idx__8063;
                for (idx__8063 = ((x10_long)0ll); ((idx__8063) < (size__8062));
                     idx__8063 = ((idx__8063) + (((x10_long)1ll))))
                {
                    x10_int j__8064 = ::x10aux::nullCheck(rail__8061)->x10::lang::Rail< x10_int >::__apply(
                                        idx__8063);
                    
                    //#line 312 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__8064, (__extension__ ({ static ::x10::lang::String* strLit__8255 = ::x10aux::makeStringLit(" "); strLit__8255; }))));
                }
            }
            
            //#line 313 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8256 = ::x10aux::makeStringLit(""); strLit__8256; }))));
        }
    }
    
    //#line 315 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8257 = ::x10aux::makeStringLit("Matrix2"); strLit__8257; }))));
    
    //#line 316 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 317 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__8258 = ::x10aux::makeStringLit(": "); strLit__8258; }))));
            
            //#line 318 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__8065 = ::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                         ((x10_long)(i)));
            x10_long size__8066 = (x10_long)(::x10aux::nullCheck(rail__8065)->FMGL(size));
            {
                x10_long idx__8067;
                for (idx__8067 = ((x10_long)0ll); ((idx__8067) < (size__8066));
                     idx__8067 = ((idx__8067) + (((x10_long)1ll))))
                {
                    x10_int j__8068 = ::x10aux::nullCheck(rail__8065)->x10::lang::Rail< x10_int >::__apply(
                                        idx__8067);
                    
                    //#line 319 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__8068, (__extension__ ({ static ::x10::lang::String* strLit__8261 = ::x10aux::makeStringLit(" "); strLit__8261; }))));
                }
            }
            
            //#line 320 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__8262 = ::x10aux::makeStringLit(""); strLit__8262; }))));
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
