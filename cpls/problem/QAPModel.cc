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
    ::x10::lang::Rail< x10_int >* __apply(x10_long id__7) {
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
    ::x10::lang::Rail< x10_int >* __apply(x10_long id__8) {
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
        return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__34177 = ::x10aux::makeStringLit("file: "); strLit__34177; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__34178 = ::x10aux::makeStringLit(" size: "); strLit__34178; }))), sizeF), (__extension__ ({ static ::x10::lang::String* strLit__34179 = ::x10aux::makeStringLit(" bound: "); strLit__34179; }))), vb), (__extension__ ({ static ::x10::lang::String* strLit__34180 = ::x10aux::makeStringLit(" opt: "); strLit__34180; }))), vopt), (__extension__ ({ static ::x10::lang::String* strLit__34181 = ::x10aux::makeStringLit(" bks: "); strLit__34181; }))), bks);
        
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
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10:182";
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
x10_long cpls::problem::QAPModel::computeDelta(x10_long i,
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
x10_long cpls::problem::QAPModel::computeDeltaPart(x10_long i,
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
x10_long cpls::problem::QAPModel::costOfSolution(x10_boolean shouldBeRecorded,
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
                          i, j, this->computeDelta(i, j, variables));
                    }
                }
                
            }
        }
        
    }
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOfSolution(::x10::lang::Rail< x10_int >* solution) {
    
    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costIfSwap(x10_long currentCost,
                                             x10_long i1,
                                             x10_long i2) {
    
    //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i1v = i1;
    
    //#line 114 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i2v = i2;
    
    //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (((i1) > (i2))) {
        
        //#line 116 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i1v = i2;
        
        //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i2v = i1;
    }
    
    //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return ((currentCost) + (::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                               i1v, i2v)));
    
}

//#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::executedSwap(x10_long i1, x10_long i2,
                                           ::x10::lang::Rail< x10_int >* variables) {
    
    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long temp = ((x10_long)(::x10aux::nullCheck(variables)->x10::lang::Rail< x10_int >::__apply(
                                  i1)));
    
    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (((i1) >= (i2))) {
        
        //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_long tmp = i1;
        
        //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i1 = i2;
        
        //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        i2 = tmp;
    }
    
    //#line 131 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 133 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 134 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    if (((((!::x10aux::struct_equals(i, i1)) &&
                        (!::x10aux::struct_equals(i, i2))) &&
                        (!::x10aux::struct_equals(j, i1))) &&
                        (!::x10aux::struct_equals(j, i2))))
                    {
                        
                        //#line 135 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__set(
                          i, j, this->computeDeltaPart(i,
                                                       j,
                                                       i1,
                                                       i2,
                                                       variables));
                    } else {
                        
                        //#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__set(
                          i, j, this->computeDelta(i, j, variables));
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOnVariable(x10_long i) {
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = (x10_long)0x8000000000000000LL;
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        x10_long j;
        for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if ((::x10aux::struct_equals(i, j))) {
                continue;
            }
            
            //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            x10_long d = ((i) < (j)) ? (::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                                          i, j)) : (::x10aux::nullCheck(this->FMGL(delta))->x10::array::Array_2<x10_long>::__apply(
                                                      j, i));
            
            //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            d = (-(d));
            
            //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if (((d) > (r))) {
                r = d;
            }
            
        }
    }
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::loadData(::x10::lang::String* filePath) {
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long loadTime = (-(::x10::lang::System::nanoTime()));
    
    //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::File* filep = ::x10::io::File::_make(filePath);
    
    //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (filep->isDirectory()) {
        return false;
        
    }
    
    //#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__34172 = ::x10aux::makeStringLit("\n--   Solving "); strLit__34172; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__34173 = ::x10aux::makeStringLit(" "); strLit__34173; })))));
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::FileReader* fr = filep->openRead();
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::String* fLine = ::x10aux::nullCheck(fr)->readLine();
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* header = ::cpls::problem::QAPModel::readParameters(
                                             fLine);
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int sizeF = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                      ((x10_long)0ll));
    x10_int opt = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)1ll));
    x10_int bks = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)2ll));
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int bound = ((x10_int)0);
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    if (((((x10_long)(opt))) < (((x10_long)0ll)))) {
        
        //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        bound = (-(opt));
        
        //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        opt = ((x10_int)0);
    } else {
        
        //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        bound = opt;
    }
    
    //#line 181 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int vopt = opt;
    x10_int vb = bound;
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_problem_QAPModel__closure__3)))cpls_problem_QAPModel__closure__3(filePath, sizeF, vb, vopt, bks))));
    
    //#line 185 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    this->readMatrix(fr, sizeF);
    
    //#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10aux::nullCheck(fr)->close();
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return true;
    
}

//#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::QAPModel::readParameters(
  ::x10::lang::String* line) {
    
    //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int i;
    
    //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int j = ((x10_int)0);
    
    //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__34182 = ::x10aux::makeStringLit(""); strLit__34182; }));
    
    //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* x = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                          ((x10_int)0));
    
    //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if (((::x10aux::struct_equals((line)->charAt(i),
                                          ((x10_char)' '))) ||
                (::x10aux::struct_equals((line)->charAt(i),
                                         ((x10_char)'\n')))))
            {
                
                //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                x->x10::lang::Rail< x10_int >::__set(((x10_long)((__extension__ ({
                                                         x10_int pre__29813 =
                                                           j;
                                                         j =
                                                           ((j) + (((x10_int)1)));
                                                         pre__29813;
                                                     }))
                                                     )), ::x10::lang::IntNatives::parseInt(buffer));
                
                //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__34183 = ::x10aux::makeStringLit(""); strLit__34183; }));
            } else {
                
                //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
            }
            
        }
    }
    
    //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x->x10::lang::Rail< x10_int >::__set(((x10_long)(j)),
                                         ::x10::lang::IntNatives::parseInt(buffer));
    
    //#line 205 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return x;
    
}

//#line 208 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::readMatrix(::x10::io::FileReader* fr,
                                         x10_int sizeF) {
    
    //#line 209 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    try {
        
        //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int i = ((x10_int)0);
        
        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int j;
        
        //#line 212 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        ::x10::lang::String* buffer;
        
        //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int fLine = ((x10_int)0);
        
        //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        x10_int dLine = ((x10_int)0);
        
        //#line 215 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__30181;
            for (line__30181 = ::x10aux::nullCheck(::x10aux::nullCheck(fr)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__30181));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__30181));
                
                //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                i = ((i) + (((x10_int)1)));
                
                //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__34184 = ::x10aux::makeStringLit(""); strLit__34184; }));
                j = ((x10_int)0);
                
                //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                if ((((i) >= (((x10_int)2))) && ((((x10_long)(i))) < (((((x10_long)(sizeF))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__30244 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__30245 = (x10_long)(::x10aux::nullCheck(rail__30244)->FMGL(size));
                    {
                        x10_long idx__30246;
                        for (idx__30246 = ((x10_long)0ll);
                             ((idx__30246) < (size__30245));
                             idx__30246 = ((idx__30246) + (((x10_long)1ll))))
                        {
                            x10_char char__30247 = ::x10aux::nullCheck(rail__30244)->x10::lang::Rail< x10_char >::__apply(
                                                     idx__30246);
                            
                            //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__30247,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 222 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__34186 = ::x10aux::makeStringLit(""); strLit__34186; })))))
                                {
                                    
                                    //#line 223 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 224 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__30243 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__30243;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__34188 = ::x10aux::makeStringLit(""); strLit__34188; }));
                            } else {
                                
                                //#line 229 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__30247);
                            }
                            
                        }
                    }
                    
                    //#line 233 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__34189 = ::x10aux::makeStringLit(""); strLit__34189; })))))
                    {
                        
                        //#line 234 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__29875 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__29875;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 236 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    fLine = ((fLine) + (((x10_int)1)));
                } else 
                //#line 237 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                if ((((((x10_long)(i))) > (((((x10_long)(sizeF))) + (((x10_long)2ll))))) &&
                    ((((x10_long)(i))) <= (((((((x10_long)(sizeF))) * (((x10_long)2ll)))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 240 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__30249 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__30250 = (x10_long)(::x10aux::nullCheck(rail__30249)->FMGL(size));
                    {
                        x10_long idx__30251;
                        for (idx__30251 = ((x10_long)0ll);
                             ((idx__30251) < (size__30250));
                             idx__30251 = ((idx__30251) + (((x10_long)1ll))))
                        {
                            x10_char char__30252 = ::x10aux::nullCheck(rail__30249)->x10::lang::Rail< x10_char >::__apply(
                                                     idx__30251);
                            
                            //#line 241 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__30252,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 242 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__34192 = ::x10aux::makeStringLit(""); strLit__34192; })))))
                                {
                                    
                                    //#line 243 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 244 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__30248 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__30248;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 248 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__34194 = ::x10aux::makeStringLit(""); strLit__34194; }));
                            } else {
                                
                                //#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__30252);
                            }
                            
                        }
                    }
                    
                    //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__34195 = ::x10aux::makeStringLit(""); strLit__34195; })))))
                    {
                        
                        //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__29940 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__29940;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    dLine = ((dLine) + (((x10_int)1)));
                }
                
            }
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc381) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc381)) {
            ::x10::lang::Exception* id__9 = static_cast< ::x10::lang::Exception*>(__exc381);
            {
                
                //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__34197 = ::x10aux::makeStringLit("Error reading file"); strLit__34197; }))));
            }
        } else
        throw;
    }
}

//#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::verify(::x10::lang::Rail< x10_int >* match) {
    
    //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                ((x10_int)0));
    
    //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int baseV = this->FMGL(baseValue);
    
    //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* rail__30257 = match;
    x10_long i__30183min__30258 = ((x10_long)0ll);
    x10_long i__30183max__30259 = (x10_long)(::x10aux::nullCheck(rail__30257)->FMGL(size));
    {
        x10_long i__30260;
        for (i__30260 = i__30183min__30258; ((i__30260) < (i__30183max__30259));
             i__30260 = ((i__30260) + (((x10_long)1ll))))
        {
            x10_long mi__30261 = i__30260;
            
            //#line 278 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            x10_int value__30256 = ::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                     mi__30261);
            
            //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* a__30253 = permutV;
            x10_long i__30254 = ((x10_long)(((value__30256) - (baseV))));
            x10_int r__30255 = ((a__30253->x10::lang::Rail< x10_int >::__apply(
                                   i__30254)) + (((x10_int)1)));
            a__30253->x10::lang::Rail< x10_int >::__set(i__30254,
                                                        r__30255);
            
            //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((value__30256) - (baseV)))))))) > (((x10_long)1ll))))
            {
                
                //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__34202 = ::x10aux::makeStringLit("Not valid permutation, value "); strLit__34202; })), value__30256), (__extension__ ({ static ::x10::lang::String* strLit__34203 = ::x10aux::makeStringLit(" is repeted"); strLit__34203; })))));
            }
            
        }
    }
    
    //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 285 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 287 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 288 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 289 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
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
    
    //#line 290 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    return (::x10aux::struct_equals(r, ((x10_long)0ll)));
    
}

//#line 293 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrices() {
    
    //#line 294 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__34211 = ::x10aux::makeStringLit("\nMatrix1"); strLit__34211; }))));
    
    //#line 295 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    x10_int i = ((x10_int)0);
    
    //#line 296 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 297 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__34212 = ::x10aux::makeStringLit(" : "); strLit__34212; }))));
            
            //#line 298 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__30262 = ::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                          ((x10_long)(i)));
            x10_long size__30263 = (x10_long)(::x10aux::nullCheck(rail__30262)->FMGL(size));
            {
                x10_long idx__30264;
                for (idx__30264 = ((x10_long)0ll); ((idx__30264) < (size__30263));
                     idx__30264 = ((idx__30264) + (((x10_long)1ll))))
                {
                    x10_int j__30265 = ::x10aux::nullCheck(rail__30262)->x10::lang::Rail< x10_int >::__apply(
                                         idx__30264);
                    
                    //#line 299 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__30265, (__extension__ ({ static ::x10::lang::String* strLit__34215 = ::x10aux::makeStringLit(" "); strLit__34215; }))));
                }
            }
            
            //#line 300 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__34216 = ::x10aux::makeStringLit(""); strLit__34216; }))));
        }
    }
    
    //#line 302 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__34217 = ::x10aux::makeStringLit("Matrix2"); strLit__34217; }))));
    
    //#line 303 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 304 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__34218 = ::x10aux::makeStringLit(": "); strLit__34218; }))));
            
            //#line 305 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__30266 = ::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                          ((x10_long)(i)));
            x10_long size__30267 = (x10_long)(::x10aux::nullCheck(rail__30266)->FMGL(size));
            {
                x10_long idx__30268;
                for (idx__30268 = ((x10_long)0ll); ((idx__30268) < (size__30267));
                     idx__30268 = ((idx__30268) + (((x10_long)1ll))))
                {
                    x10_int j__30269 = ::x10aux::nullCheck(rail__30266)->x10::lang::Rail< x10_int >::__apply(
                                         idx__30268);
                    
                    //#line 306 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__30269, (__extension__ ({ static ::x10::lang::String* strLit__34221 = ::x10aux::makeStringLit(" "); strLit__34221; }))));
                }
            }
            
            //#line 307 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__34222 = ::x10aux::makeStringLit(""); strLit__34222; }))));
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
