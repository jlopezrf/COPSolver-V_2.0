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
#include <x10/lang/System.h>
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
    ::x10::lang::Rail< x10_int >* __apply(x10_long id__5) {
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10:28";
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
    ::x10::lang::Rail< x10_int >* __apply(x10_long id__6) {
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10:29";
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
        return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42883 = ::x10aux::makeStringLit("file: "); strLit__42883; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__42884 = ::x10aux::makeStringLit(" size: "); strLit__42884; }))), sizeF), (__extension__ ({ static ::x10::lang::String* strLit__42885 = ::x10aux::makeStringLit(" bound: "); strLit__42885; }))), vb), (__extension__ ({ static ::x10::lang::String* strLit__42886 = ::x10aux::makeStringLit(" opt: "); strLit__42886; }))), vopt), (__extension__ ({ static ::x10::lang::String* strLit__42887 = ::x10aux::makeStringLit(" bks: "); strLit__42887; }))), bks);
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10:186";
    }

};

#endif // CPLS_PROBLEM_QAPMODEL__CLOSURE__3_CLOSURE

//#line 11 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"

//#line 13 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"

//#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
/** optimal cost (0 if unknown) */

//#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
/** best bound (0 if unknown) */

//#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size) {
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(size);
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->cpls::problem::QAPModel::__fieldInitializers_cpls_problem_QAPModel();
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(x10_long size) {
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size);
    return this_;
}



//#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size, ::x10::lang::String* inPathDataProblem,
                                           ::x10::lang::String* inPathVectorSol,
                                           x10_int baseValue) {
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(size);
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->cpls::problem::QAPModel::__fieldInitializers_cpls_problem_QAPModel();
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->::cpls::problem::ProblemGenericModel::FMGL(inPathDataProblem) =
      inPathDataProblem;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->::cpls::problem::ProblemGenericModel::FMGL(inPathVectorSol) =
      inPathVectorSol;
    
    //#line 27 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->::cpls::problem::ProblemGenericModel::FMGL(baseValue) =
      baseValue;
    
    //#line 28 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(flow) = ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::_make(size,
                                                                                 reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(sizeof(cpls_problem_QAPModel__closure__1)))cpls_problem_QAPModel__closure__1(size))));
    
    //#line 29 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(dist) = ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::_make(size,
                                                                                 reinterpret_cast< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1<x10_long, ::x10::lang::Rail< x10_int >*> >(sizeof(cpls_problem_QAPModel__closure__2)))cpls_problem_QAPModel__closure__2(size))));
    
    //#line 30 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = ::x10::array::Array_2<x10_long>::_make(size,
                                                               size,
                                                               ((x10_long)0ll));
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(
  x10_long size, ::x10::lang::String* inPathDataProblem, ::x10::lang::String* inPathVectorSol,
  x10_int baseValue) {
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size, inPathDataProblem, inPathVectorSol,
    baseValue);
    return this_;
}



//#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size,
                                           ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
                                           ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md) {
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    (this)->::cpls::problem::ProblemGenericModel::_constructor(
      size);
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->cpls::problem::QAPModel::__fieldInitializers_cpls_problem_QAPModel();
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(flow) = mf;
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(dist) = md;
    
    //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = ::x10::array::Array_2<x10_long>::_make(size,
                                                               size,
                                                               ((x10_long)0ll));
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(
  x10_long size, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
  ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md)
{
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size, mf, md);
    return this_;
}



//#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::computeDelta(x10_long sz,
                                               x10_long i,
                                               x10_long j,
                                               ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 44 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long pi = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                i)));
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long pj = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                j)));
    
    //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long k;
    x10_long pk;
    
    //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 50 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (k = ((x10_long)0ll); ((k) < (i)); k = ((k) + (((x10_long)1ll))))
        {
            
            //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            pk = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                               k)));
            
            //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    while (((k = ((k) + (((x10_long)1ll)))) < (j))) {
        
        //#line 57 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        pk = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                           k)));
        
        //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    while (((k = ((k) + (((x10_long)1ll)))) < (this->FMGL(size))))
    {
        
        //#line 63 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        pk = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                           k)));
        
        //#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return dis;
    
}

//#line 75 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::computeDeltaPart(x10_long sz,
                                                   x10_long i,
                                                   x10_long j,
                                                   x10_long r,
                                                   x10_long s,
                                                   ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 76 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long pi = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                i)));
    
    //#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long pj = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                j)));
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long pr = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                r)));
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long ps = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                s)));
    
    //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return ((((::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                 i, j)) + (((x10_long)(((((((((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
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

//#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOfSolution(x10_long sz,
                                                 x10_boolean shouldBeRecorded,
                                                 ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 89 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (shouldBeRecorded) {
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        {
            for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
                 i = ((i) + (((x10_long)1ll)))) {
                
                //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                {
                    for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                         j = ((j) + (((x10_long)1ll)))) {
                        
                        //#line 97 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__set(
                          i, j, this->computeDelta(sz, i,
                                                   j, variables));
                    }
                }
                
            }
        }
        
    }
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOfSolution(x10_long sz,
                                                 ::x10::lang::Rail< x10_int >* solution) {
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costIfSwap(x10_long currentCost,
                                             x10_long i1,
                                             x10_long i2) {
    
    //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i1v = i1;
    
    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i2v = i2;
    
    //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (((i1) > (i2))) {
        
        //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i1v = i2;
        
        //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i2v = i1;
    }
    
    //#line 123 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return ((currentCost) + (::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                               i1v, i2v)));
    
}

//#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::executedSwap(x10_long sz, x10_long i1,
                                           x10_long i2, ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long temp = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                  i1)));
    
    //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (((i1) >= (i2))) {
        
        //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_long tmp = i1;
        
        //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i1 = i2;
        
        //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i2 = tmp;
    }
    
    //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 136 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 138 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    if (((((!::x10aux::struct_equals(i, i1)) &&
                        (!::x10aux::struct_equals(i, i2))) &&
                        (!::x10aux::struct_equals(j, i1))) &&
                        (!::x10aux::struct_equals(j, i2))))
                    {
                        
                        //#line 139 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__set(
                          i, j, this->computeDeltaPart(sz,
                                                       i,
                                                       j,
                                                       i1,
                                                       i2,
                                                       variables));
                    } else {
                        
                        //#line 141 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__set(
                          i, j, this->computeDelta(sz, i,
                                                   j, variables));
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOnVariable(x10_long i) {
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = (x10_long)0x8000000000000000LL;
    
    //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        x10_long j;
        for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if ((::x10aux::struct_equals(i, j))) {
                continue;
            }
            
            //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            x10_long d = ((i) < (j)) ? (::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                                          i, j)) : (::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                                                      j, i));
            
            //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            d = (-(d));
            
            //#line 156 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if (((d) > (r))) {
                r = d;
            }
            
        }
    }
    
    //#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::loadData(::x10::lang::String* filePath) {
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long loadTime = (-(::x10::lang::System::nanoTime()));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::File* filep = ::x10::io::File::_make(filePath);
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (filep->isDirectory()) {
        return false;
        
    }
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42878 = ::x10aux::makeStringLit("\n--   Solving "); strLit__42878; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__42879 = ::x10aux::makeStringLit(" "); strLit__42879; })))));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::FileReader* fr = filep->openRead();
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::String* fLine = ::x10aux::nullCheck(fr)->readLine();
    
    //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* header = ::cpls::problem::QAPModel::readParameters(
                                             fLine);
    
    //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int sizeF = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                      ((x10_long)0ll));
    x10_int opt = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)1ll));
    x10_int bks = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)2ll));
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int bound = ((x10_int)0);
    
    //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (((((x10_long)(opt))) < (((x10_long)0ll)))) {
        
        //#line 180 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        bound = (-(opt));
        
        //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        opt = ((x10_int)0);
    } else {
        
        //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        bound = opt;
    }
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int vopt = opt;
    x10_int vb = bound;
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_problem_QAPModel__closure__3)))cpls_problem_QAPModel__closure__3(filePath, sizeF, vb, vopt, bks))));
    
    //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->readMatrix(fr, sizeF);
    
    //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10aux::nullCheck(fr)->close();
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return true;
    
}

//#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::QAPModel::readParameters(
  ::x10::lang::String* line) {
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int i;
    
    //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int j = ((x10_int)0);
    
    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__42888 = ::x10aux::makeStringLit(""); strLit__42888; }));
    
    //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* x = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                          ((x10_int)0));
    
    //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if (((::x10aux::struct_equals((line)->charAt(i),
                                          ((x10_char)' '))) ||
                (::x10aux::struct_equals((line)->charAt(i),
                                         ((x10_char)'\n')))))
            {
                
                //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                x->x10::lang::Rail< x10_int >::__set(((x10_long)((__extension__ ({
                                                         x10_int pre__37541 =
                                                           j;
                                                         j =
                                                           ((j) + (((x10_int)1)));
                                                         pre__37541;
                                                     }))
                                                     )), ::x10::lang::IntNatives::parseInt(buffer));
                
                //#line 203 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__42889 = ::x10aux::makeStringLit(""); strLit__42889; }));
            } else {
                
                //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
            }
            
        }
    }
    
    //#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x->x10::lang::Rail< x10_int >::__set(((x10_long)(j)),
                                         ::x10::lang::IntNatives::parseInt(buffer));
    
    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return x;
    
}

//#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::readMatrix(::x10::io::FileReader* fr,
                                         x10_int sizeF) {
    
    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    try {
        
        //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int i = ((x10_int)0);
        
        //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int j;
        
        //#line 216 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        ::x10::lang::String* buffer;
        
        //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int fLine = ((x10_int)0);
        
        //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int dLine = ((x10_int)0);
        
        //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__37940;
            for (line__37940 = ::x10aux::nullCheck(::x10aux::nullCheck(fr)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__37940));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__37940));
                
                //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                i = ((i) + (((x10_int)1)));
                
                //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__42890 = ::x10aux::makeStringLit(""); strLit__42890; }));
                j = ((x10_int)0);
                
                //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                if ((((i) >= (((x10_int)2))) && ((((x10_long)(i))) < (((((x10_long)(sizeF))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__38003 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__38004 = (x10_long)(::x10aux::nullCheck(rail__38003)->FMGL(size));
                    {
                        x10_long idx__38005;
                        for (idx__38005 = ((x10_long)0ll);
                             ((idx__38005) < (size__38004));
                             idx__38005 = ((idx__38005) + (((x10_long)1ll))))
                        {
                            x10_char char__38006 = ::x10aux::nullCheck(rail__38003)->x10::lang::Rail< x10_char >::__apply(
                                                     idx__38005);
                            
                            //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__38006,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 226 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__42892 = ::x10aux::makeStringLit(""); strLit__42892; })))))
                                {
                                    
                                    //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 228 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__38002 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__38002;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__42894 = ::x10aux::makeStringLit(""); strLit__42894; }));
                            } else {
                                
                                //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__38006);
                            }
                            
                        }
                    }
                    
                    //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__42895 = ::x10aux::makeStringLit(""); strLit__42895; })))))
                    {
                        
                        //#line 238 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__37603 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__37603;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    fLine = ((fLine) + (((x10_int)1)));
                } else 
                //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                if ((((((x10_long)(i))) > (((((x10_long)(sizeF))) + (((x10_long)2ll))))) &&
                    ((((x10_long)(i))) <= (((((((x10_long)(sizeF))) * (((x10_long)2ll)))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__38008 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__38009 = (x10_long)(::x10aux::nullCheck(rail__38008)->FMGL(size));
                    {
                        x10_long idx__38010;
                        for (idx__38010 = ((x10_long)0ll);
                             ((idx__38010) < (size__38009));
                             idx__38010 = ((idx__38010) + (((x10_long)1ll))))
                        {
                            x10_char char__38011 = ::x10aux::nullCheck(rail__38008)->x10::lang::Rail< x10_char >::__apply(
                                                     idx__38010);
                            
                            //#line 245 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__38011,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 246 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__42898 = ::x10aux::makeStringLit(""); strLit__42898; })))))
                                {
                                    
                                    //#line 247 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__38007 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__38007;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__42900 = ::x10aux::makeStringLit(""); strLit__42900; }));
                            } else {
                                
                                //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__38011);
                            }
                            
                        }
                    }
                    
                    //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__42901 = ::x10aux::makeStringLit(""); strLit__42901; })))))
                    {
                        
                        //#line 259 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__37668 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__37668;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    dLine = ((dLine) + (((x10_int)1)));
                }
                
            }
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc448) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc448)) {
            ::x10::lang::Exception* id__7 = static_cast< ::x10::lang::Exception*>(__exc448);
            {
                
                //#line 268 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42903 = ::x10aux::makeStringLit("Error reading file"); strLit__42903; }))));
            }
        } else
        throw;
    }
}

//#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::clearProblemModel() {
    
    //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = ::x10::array::Array_2<x10_long>::_make(this->FMGL(size),
                                                               this->FMGL(size),
                                                               ((x10_long)0ll));
}

//#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrix(x10_int size, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* matrix) {
    
    //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42904 = ::x10aux::makeStringLit("*******"); strLit__42904; }))));
    
    //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (size)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                x10_int j;
                for (j = ((x10_int)0); ((j) < (size)); j =
                                                         ((j) + (((x10_int)1))))
                {
                    
                    //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(::x10aux::nullCheck(::x10aux::nullCheck(matrix)->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                        ((x10_long)(i))))->x10::lang::Rail< x10_int >::__apply(
                                                    ((x10_long)(j))), (__extension__ ({ static ::x10::lang::String* strLit__42907 = ::x10aux::makeStringLit(" "); strLit__42907; }))));
                }
            }
            
            //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42908 = ::x10aux::makeStringLit(""); strLit__42908; }))));
        }
    }
    
}

//#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::verify(x10_long sz, ::x10::lang::Rail< x10_int >* match) {
    
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(sz,
                                                                                ((x10_int)0));
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int baseV = this->FMGL(baseValue);
    
    //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* rail__38016 = match;
    x10_long i__37942min__38017 = ((x10_long)0ll);
    x10_long i__37942max__38018 = (x10_long)(::x10aux::nullCheck(rail__38016)->FMGL(size));
    {
        x10_long i__38019;
        for (i__38019 = i__37942min__38017; ((i__38019) < (i__37942max__38018));
             i__38019 = ((i__38019) + (((x10_long)1ll))))
        {
            x10_long mi__38020 = i__38019;
            
            //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            x10_int value__38015 = ::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                     mi__38020);
            
            //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* a__38012 = permutV;
            x10_long i__38013 = ((x10_long)(((value__38015) - (baseV))));
            x10_int r__38014 = ((a__38012->x10::lang::Rail< x10_int >::__apply(
                                   i__38013)) + (((x10_int)1)));
            a__38012->x10::lang::Rail< x10_int >::__set(i__38013,
                                                        r__38014);
            
            //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((value__38015) - (baseV)))))))) > (((x10_long)1ll))))
            {
                
                //#line 301 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__42914 = ::x10aux::makeStringLit("Not valid permutation, value "); strLit__42914; })), value__38015), (__extension__ ({ static ::x10::lang::String* strLit__42915 = ::x10aux::makeStringLit(" is repeted"); strLit__42915; })))));
            }
            
        }
    }
    
    //#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 305 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 307 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (sz)); i = ((i) + (((x10_long)1ll))))
        {
            
            //#line 308 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (sz)); j =
                                                          ((j) + (((x10_long)1ll))))
                {
                    
                    //#line 309 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 310 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return (::x10aux::struct_equals(r, ((x10_long)0ll)));
    
}

//#line 313 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrices() {
    
    //#line 314 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42924 = ::x10aux::makeStringLit("\nMatrix1"); strLit__42924; }))));
    
    //#line 315 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int i = ((x10_int)0);
    
    //#line 316 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 317 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__42925 = ::x10aux::makeStringLit(" : "); strLit__42925; }))));
            
            //#line 318 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__38021 = ::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                          ((x10_long)(i)));
            x10_long size__38022 = (x10_long)(::x10aux::nullCheck(rail__38021)->FMGL(size));
            {
                x10_long idx__38023;
                for (idx__38023 = ((x10_long)0ll); ((idx__38023) < (size__38022));
                     idx__38023 = ((idx__38023) + (((x10_long)1ll))))
                {
                    x10_int j__38024 = ::x10aux::nullCheck(rail__38021)->x10::lang::Rail< x10_int >::__apply(
                                         idx__38023);
                    
                    //#line 319 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__38024, (__extension__ ({ static ::x10::lang::String* strLit__42928 = ::x10aux::makeStringLit(" "); strLit__42928; }))));
                }
            }
            
            //#line 320 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42929 = ::x10aux::makeStringLit(""); strLit__42929; }))));
        }
    }
    
    //#line 322 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42930 = ::x10aux::makeStringLit("Matrix2"); strLit__42930; }))));
    
    //#line 323 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 324 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__42931 = ::x10aux::makeStringLit(": "); strLit__42931; }))));
            
            //#line 325 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__38025 = ::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                          ((x10_long)(i)));
            x10_long size__38026 = (x10_long)(::x10aux::nullCheck(rail__38025)->FMGL(size));
            {
                x10_long idx__38027;
                for (idx__38027 = ((x10_long)0ll); ((idx__38027) < (size__38026));
                     idx__38027 = ((idx__38027) + (((x10_long)1ll))))
                {
                    x10_int j__38028 = ::x10aux::nullCheck(rail__38025)->x10::lang::Rail< x10_int >::__apply(
                                         idx__38027);
                    
                    //#line 326 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__38028, (__extension__ ({ static ::x10::lang::String* strLit__42934 = ::x10aux::makeStringLit(" "); strLit__42934; }))));
                }
            }
            
            //#line 327 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__42935 = ::x10aux::makeStringLit(""); strLit__42935; }))));
        }
    }
    
}

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
