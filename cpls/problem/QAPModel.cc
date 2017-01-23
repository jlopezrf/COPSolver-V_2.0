/*************************************************/
/* START of QAPModel */
#include <cpls/problem/QAPModel.h>

#include <cpls/problem/ProblemGenericModel.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <x10/lang/Rail.h>
#include <x10/array/Array_2.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
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
#include <x10/lang/Fun_0_0.h>
class cpls_problem_QAPModel__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_problem_QAPModel__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    ::x10::lang::String* __apply() {
        return ::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__7780 = ::x10aux::makeStringLit("file: "); strLit__7780; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__7781 = ::x10aux::makeStringLit(" size: "); strLit__7781; }))), sizeF), (__extension__ ({ static ::x10::lang::String* strLit__7782 = ::x10aux::makeStringLit(" bound: "); strLit__7782; }))), vb), (__extension__ ({ static ::x10::lang::String* strLit__7783 = ::x10aux::makeStringLit(" opt: "); strLit__7783; }))), vopt), (__extension__ ({ static ::x10::lang::String* strLit__7784 = ::x10aux::makeStringLit(" bks: "); strLit__7784; }))), bks);
        
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
        cpls_problem_QAPModel__closure__1* storage = ::x10aux::alloc_z<cpls_problem_QAPModel__closure__1>();
        buf.record_reference(storage);
        ::x10::lang::String* that_filePath = buf.read< ::x10::lang::String*>();
        x10_int that_sizeF = buf.read<x10_int>();
        x10_int that_vb = buf.read<x10_int>();
        x10_int that_vopt = buf.read<x10_int>();
        x10_int that_bks = buf.read<x10_int>();
        cpls_problem_QAPModel__closure__1* this_ = new (storage) cpls_problem_QAPModel__closure__1(that_filePath, that_sizeF, that_vb, that_vopt, that_bks);
        return this_;
    }
    
    cpls_problem_QAPModel__closure__1(::x10::lang::String* filePath, x10_int sizeF, x10_int vb, x10_int vopt, x10_int bks) : filePath(filePath), sizeF(sizeF), vb(vb), vopt(vopt), bks(bks) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10:160";
    }

};

#endif // CPLS_PROBLEM_QAPMODEL__CLOSURE__1_CLOSURE

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
    ::cpls::problem::ProblemGenericModel* this__7593 = this;
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_long sizeProblem__7594 = size;
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this__7593)->FMGL(size) = sizeProblem__7594;
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this__7593)->cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel();
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::QAPModel* this__7592 = this;
    ::x10aux::nullCheck(this__7592)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7592)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7592)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7592)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__7592)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__7592)->FMGL(bks) = ((x10_int)0);
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(x10_long size) {
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size);
    return this_;
}



//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::_constructor(x10_long size, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
                                           ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md) {
    
    //#line 23 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::ProblemGenericModel* this__7596 = this;
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    x10_long sizeProblem__7597 = size;
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this__7596)->FMGL(size) = sizeProblem__7597;
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/ProblemGenericModel.x10"
    ::x10aux::nullCheck(this__7596)->cpls::problem::ProblemGenericModel::__fieldInitializers_cpls_problem_ProblemGenericModel();
    
    //#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    
    //#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::QAPModel* this__7595 = this;
    ::x10aux::nullCheck(this__7595)->FMGL(flow) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7595)->FMGL(dist) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7595)->FMGL(delta) = (::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    ::x10aux::nullCheck(this__7595)->FMGL(opt) = ((x10_int)0);
    ::x10aux::nullCheck(this__7595)->FMGL(bound) = ((x10_int)0);
    ::x10aux::nullCheck(this__7595)->FMGL(bks) = ((x10_int)0);
    
    //#line 24 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(flow) = mf;
    
    //#line 25 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(dist) = md;
    
    //#line 26 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    this->FMGL(delta) = (__extension__ ({
        ::x10::array::Array_2<x10_long>* alloc__4694 =  (new (::x10aux::alloc_z< ::x10::array::Array_2<x10_long> >()) ::x10::array::Array_2<x10_long>());
        (alloc__4694)->::x10::array::Array_2<x10_long>::_constructor(
          size, size, ((x10_long)0ll));
        alloc__4694;
    }))
    ;
}
::cpls::problem::QAPModel* cpls::problem::QAPModel::_make(x10_long size,
                                                          ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mf,
                                                          ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* md)
{
    ::cpls::problem::QAPModel* this_ = new (::x10aux::alloc_z< ::cpls::problem::QAPModel>()) ::cpls::problem::QAPModel();
    this_->_constructor(size, mf, md);
    return this_;
}



//#line 32 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::computeDelta(x10_long i,
                                               x10_long j) {
    
    //#line 33 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pi = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                i)));
    
    //#line 34 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pj = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                j)));
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long k;
    x10_long pk;
    
    //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
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
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (k = ((x10_long)0ll); ((k) < (i)); k = ((k) + (((x10_long)1ll))))
        {
            
            //#line 40 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            pk = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                               k)));
            
            //#line 41 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
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
    
    //#line 45 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    while (((k = ((k) + (((x10_long)1ll)))) < (j))) {
        
        //#line 46 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        pk = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                           k)));
        
        //#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
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
    
    //#line 51 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    while (((k = ((k) + (((x10_long)1ll)))) < (this->FMGL(size))))
    {
        
        //#line 52 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        pk = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                           k)));
        
        //#line 53 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
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
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return dis;
    
}

//#line 64 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::computeDeltaPart(x10_long i,
                                                   x10_long j,
                                                   x10_long r,
                                                   x10_long s) {
    
    //#line 65 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pi = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                i)));
    
    //#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pj = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                j)));
    
    //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long pr = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                r)));
    
    //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long ps = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                s)));
    
    //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return (((((__extension__ ({
        ::x10::array::Array_2<x10_long>* this__6500 = this->FMGL(delta);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__6498 = i;
        x10_long j__6499 = j;
        x10_long ret__6501;
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__6501 = (::x10aux::nullCheck(this__6500)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__7598 = i__6498;
            x10_long j__7599 = j__6499;
            ((j__7599) + (((i__7598) * (::x10aux::nullCheck(this__6500)->FMGL(numElems_2)))));
        }))
        );
        ret__6501;
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

//#line 77 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOfSolution(x10_boolean shouldBeRecorded) {
    
    //#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    r = ((r) + (((x10_long)(((::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                    i))->x10::lang::Rail< x10_int >::__apply(
                                                j)) * (::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                                             ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                                           i)))))->x10::lang::Rail< x10_int >::__apply(
                                                         ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                                                       j))))))))));
                }
            }
            
        }
    }
    
    //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (shouldBeRecorded) {
        
        //#line 84 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        {
            for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
                 i = ((i) + (((x10_long)1ll)))) {
                
                //#line 85 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                {
                    for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                         j = ((j) + (((x10_long)1ll)))) {
                        
                        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__7602 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__7603 = i;
                        x10_long j__7604 = j;
                        x10_long v__7605 = this->computeDelta(
                                             i, j);
                        x10_long ret__7606;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__7602)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__7600 = i__7603;
                            x10_long j__7601 = j__7604;
                            ((j__7601) + (((i__7600) * (::x10aux::nullCheck(this__7602)->FMGL(numElems_2)))));
                        }))
                        , v__7605);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7606 = v__7605;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7606;
                    }
                }
                
            }
        }
        
    }
    
    //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costIfSwap(x10_long currentCost,
                                             x10_long i1,
                                             x10_long i2) {
    
    //#line 92 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i1v = i1;
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i2v = i2;
    
    //#line 94 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (((i1) > (i2))) {
        
        //#line 95 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i1v = i2;
        
        //#line 96 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i2v = i1;
    }
    
    //#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return ((currentCost) + ((__extension__ ({
        ::x10::array::Array_2<x10_long>* this__6547 = this->FMGL(delta);
        
        //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        x10_long i__6545 = i1v;
        x10_long j__6546 = i2v;
        x10_long ret__6548;
        
        //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
        ret__6548 = (::x10aux::nullCheck(this__6547)->FMGL(raw))->unchecked_apply((__extension__ ({
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
            x10_long i__7607 = i__6545;
            x10_long j__7608 = j__6546;
            ((j__7608) + (((i__7607) * (::x10aux::nullCheck(this__6547)->FMGL(numElems_2)))));
        }))
        );
        ret__6548;
    }))
    ));
    
}

//#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::executedSwap(x10_long i1, x10_long i2) {
    
    //#line 103 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long temp = ((x10_long)(this->FMGL(variables)->x10::lang::Rail< x10_int >::__apply(
                                  i1)));
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (((i1) >= (i2))) {
        
        //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_long tmp = i1;
        
        //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i1 = i2;
        
        //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        i2 = tmp;
    }
    
    //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 110 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((i) + (((x10_long)1ll))); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 112 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (((((!::x10aux::struct_equals(i, i1)) &&
                        (!::x10aux::struct_equals(i, i2))) &&
                        (!::x10aux::struct_equals(j, i1))) &&
                        (!::x10aux::struct_equals(j, i2))))
                    {
                        
                        //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__7611 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__7612 = i;
                        x10_long j__7613 = j;
                        x10_long v__7614 = this->computeDeltaPart(
                                             i, j, i1, i2);
                        x10_long ret__7615;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__7611)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__7609 = i__7612;
                            x10_long j__7610 = j__7613;
                            ((j__7610) + (((i__7609) * (::x10aux::nullCheck(this__7611)->FMGL(numElems_2)))));
                        }))
                        , v__7614);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7615 = v__7614;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7615;
                    } else {
                        
                        //#line 115 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10::array::Array_2<x10_long>* this__7618 =
                          this->FMGL(delta);
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        x10_long i__7619 = i;
                        x10_long j__7620 = j;
                        x10_long v__7621 = this->computeDelta(
                                             i, j);
                        x10_long ret__7622;
                        
                        //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        (::x10aux::nullCheck(this__7618)->FMGL(raw))->unchecked_set((__extension__ ({
                            
                            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                            x10_long i__7616 = i__7619;
                            x10_long j__7617 = j__7620;
                            ((j__7617) + (((i__7616) * (::x10aux::nullCheck(this__7618)->FMGL(numElems_2)))));
                        }))
                        , v__7621);
                        
                        //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7622 = v__7621;
                        
                        //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                        ret__7622;
                    }
                    
                }
            }
            
        }
    }
    
}

//#line 124 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_long cpls::problem::QAPModel::costOnVariable(x10_long i) {
    
    //#line 125 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = (x10_long)0x8000000000000000LL;
    
    //#line 126 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        x10_long j;
        for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
             j = ((j) + (((x10_long)1ll)))) {
            
            //#line 127 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if ((::x10aux::struct_equals(i, j))) {
                continue;
            }
            
            //#line 128 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            x10_long d = ((i) < (j)) ? ((__extension__ ({
                                            ::x10::array::Array_2<x10_long>* this__6570 =
                                              this->FMGL(delta);
                                            
                                            //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            x10_long i__6568 =
                                              i;
                                            x10_long j__6569 =
                                              j;
                                            x10_long ret__6571;
                                            
                                            //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                            ret__6571 = (::x10aux::nullCheck(this__6570)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                
                                                //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                x10_long i__7623 =
                                                  i__6568;
                                                x10_long j__7624 =
                                                  j__6569;
                                                ((j__7624) + (((i__7623) * (::x10aux::nullCheck(this__6570)->FMGL(numElems_2)))));
                                            }))
                                            );
                                            ret__6571;
                                        }))
                                        ) : ((__extension__ ({
                                                 ::x10::array::Array_2<x10_long>* this__6577 =
                                                   this->FMGL(delta);
                                                 
                                                 //#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                 x10_long i__6575 =
                                                   j;
                                                 x10_long j__6576 =
                                                   i;
                                                 x10_long ret__6578;
                                                 
                                                 //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                 ret__6578 =
                                                   (::x10aux::nullCheck(this__6577)->FMGL(raw))->unchecked_apply((__extension__ ({
                                                     
                                                     //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/2-4-2/Building_for_source/x10-2.4.2-src/x10.dist/stdlib/x10.jar:x10/array/Array_2.x10"
                                                     x10_long i__7625 =
                                                       i__6575;
                                                     x10_long j__7626 =
                                                       j__6576;
                                                     ((j__7626) + (((i__7625) * (::x10aux::nullCheck(this__6577)->FMGL(numElems_2)))));
                                                 }))
                                                 );
                                                 ret__6578;
                                             }))
                                             );
            
            //#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            d = (-(d));
            
            //#line 130 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((d) > (r))) {
                r = d;
            }
            
        }
    }
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return r;
    
}

//#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::loadData(::x10::lang::String* filePath,
                                              ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mFlow,
                                              ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mDist) {
    
    //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long loadTime = (-(::x10::lang::RuntimeNatives::nanoTime()));
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::File* filep =  (new (::x10aux::alloc_z< ::x10::io::File>()) ::x10::io::File());
    (filep)->::x10::io::File::_constructor(filePath);
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (filep->isDirectory()) {
        return false;
        
    }
    
    //#line 146 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__7775 = ::x10aux::makeStringLit("\n--   Solving "); strLit__7775; })), filePath), (__extension__ ({ static ::x10::lang::String* strLit__7776 = ::x10aux::makeStringLit(" "); strLit__7776; })))));
    
    //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::FileReader* fr = filep->openRead();
    
    //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::String* fLine = ::x10aux::nullCheck(fr)->readLine();
    
    //#line 150 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* header = ::cpls::problem::QAPModel::readParameters(
                                             fLine);
    
    //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int sizeF = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                      ((x10_long)0ll));
    x10_int opt = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)1ll));
    x10_int bks = ::x10aux::nullCheck(header)->x10::lang::Rail< x10_int >::__apply(
                    ((x10_long)2ll));
    
    //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int bound = ((x10_int)0);
    
    //#line 153 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    if (((((x10_long)(opt))) < (((x10_long)0ll)))) {
        
        //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        bound = (-(opt));
        
        //#line 155 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        opt = ((x10_int)0);
    } else {
        
        //#line 157 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        bound = opt;
    }
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int vopt = opt;
    x10_int vb = bound;
    
    //#line 160 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::util::Logger::info(reinterpret_cast< ::x10::lang::Fun_0_0< ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0< ::x10::lang::String*> >(sizeof(cpls_problem_QAPModel__closure__1)))cpls_problem_QAPModel__closure__1(filePath, sizeF, vb, vopt, bks))));
    
    //#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::cpls::problem::QAPModel::readMatrix(fr, sizeF, mFlow,
                                          mDist);
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10aux::nullCheck(fr)->close();
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return true;
    
}

//#line 168 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
::x10::lang::Rail< x10_int >* cpls::problem::QAPModel::readParameters(
  ::x10::lang::String* line) {
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int i;
    
    //#line 170 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int j = ((x10_int)0);
    
    //#line 171 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::String* buffer = (__extension__ ({ static ::x10::lang::String* strLit__7785 = ::x10aux::makeStringLit(""); strLit__7785; }));
    
    //#line 172 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* x = ::x10::lang::Rail< x10_int >::_make(((x10_long)3ll),
                                                                          ((x10_int)0));
    
    //#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((i) < (::x10aux::nullCheck(line)->x10::lang::String::length()));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((::x10aux::struct_equals((line)->charAt(i),
                                          ((x10_char)' '))) ||
                (::x10aux::struct_equals((line)->charAt(i),
                                         ((x10_char)'\n')))))
            {
                
                //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                x->x10::lang::Rail< x10_int >::__set(((x10_long)((__extension__ ({
                                                         x10_int pre__4371 =
                                                           j;
                                                         j =
                                                           ((j) + (((x10_int)1)));
                                                         pre__4371;
                                                     }))
                                                     )), ::x10::lang::IntNatives::parseInt(buffer));
                
                //#line 177 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__7786 = ::x10aux::makeStringLit(""); strLit__7786; }));
            } else {
                
                //#line 179 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = ::x10::lang::String::__plus(buffer, (line)->charAt(i));
            }
            
        }
    }
    
    //#line 182 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x->x10::lang::Rail< x10_int >::__set(((x10_long)(j)),
                                         ::x10::lang::IntNatives::parseInt(buffer));
    
    //#line 183 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return x;
    
}

//#line 186 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::readMatrix(::x10::io::FileReader* fr,
                                         x10_int sizeF, ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mF,
                                         ::x10::lang::Rail< ::x10::lang::Rail< x10_int >* >* mD) {
    
    //#line 187 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    try {
        
        //#line 188 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int i = ((x10_int)0);
        
        //#line 189 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int j;
        
        //#line 190 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        ::x10::lang::String* buffer;
        
        //#line 191 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int fLine = ((x10_int)0);
        
        //#line 192 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        x10_int dLine = ((x10_int)0);
        
        //#line 193 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__4777;
            for (line__4777 = ::x10aux::nullCheck(::x10aux::nullCheck(fr)->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__4777));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__4777));
                
                //#line 194 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                i = ((i) + (((x10_int)1)));
                
                //#line 195 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                buffer = (__extension__ ({ static ::x10::lang::String* strLit__7787 = ::x10aux::makeStringLit(""); strLit__7787; }));
                j = ((x10_int)0);
                
                //#line 196 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                if ((((i) >= (((x10_int)2))) && ((((x10_long)(i))) < (((((x10_long)(sizeF))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 197 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__7628 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__7629 = (x10_long)(::x10aux::nullCheck(rail__7628)->FMGL(size));
                    {
                        x10_long idx__7630;
                        for (idx__7630 = ((x10_long)0ll);
                             ((idx__7630) < (size__7629));
                             idx__7630 = ((idx__7630) + (((x10_long)1ll))))
                        {
                            x10_char char__7631 = ::x10aux::nullCheck(rail__7628)->x10::lang::Rail< x10_char >::__apply(
                                                    idx__7630);
                            
                            //#line 198 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__7631,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 199 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__7789 = ::x10aux::makeStringLit(""); strLit__7789; })))))
                                {
                                    
                                    //#line 200 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 201 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(mF)->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__7627 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__7627;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 204 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__7791 = ::x10aux::makeStringLit(""); strLit__7791; }));
                            } else {
                                
                                //#line 206 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__7631);
                            }
                            
                        }
                    }
                    
                    //#line 210 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__7792 = ::x10aux::makeStringLit(""); strLit__7792; })))))
                    {
                        
                        //#line 211 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(mF)->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(fLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__4433 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__4433;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 213 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    fLine = ((fLine) + (((x10_int)1)));
                } else 
                //#line 214 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                if ((((((x10_long)(i))) > (((((x10_long)(sizeF))) + (((x10_long)2ll))))) &&
                    ((((x10_long)(i))) <= (((((((x10_long)(sizeF))) * (((x10_long)2ll)))) + (((x10_long)2ll)))))))
                {
                    
                    //#line 217 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::lang::Rail< x10_char >* rail__7633 =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    x10_long size__7634 = (x10_long)(::x10aux::nullCheck(rail__7633)->FMGL(size));
                    {
                        x10_long idx__7635;
                        for (idx__7635 = ((x10_long)0ll);
                             ((idx__7635) < (size__7634));
                             idx__7635 = ((idx__7635) + (((x10_long)1ll))))
                        {
                            x10_char char__7636 = ::x10aux::nullCheck(rail__7633)->x10::lang::Rail< x10_char >::__apply(
                                                    idx__7635);
                            
                            //#line 218 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                            if ((::x10aux::struct_equals(char__7636,
                                                         ((x10_char)' '))))
                            {
                                
                                //#line 219 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__7795 = ::x10aux::makeStringLit(""); strLit__7795; })))))
                                {
                                    
                                    //#line 220 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                    if (((j) < (sizeF))) {
                                        
                                        //#line 221 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                        ::x10aux::nullCheck(::x10aux::nullCheck(mD)->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                                          ((x10_long)((__extension__ ({
                                              x10_int pre__7632 =
                                                j;
                                              j = ((j) + (((x10_int)1)));
                                              pre__7632;
                                          }))
                                          )), ::x10::lang::IntNatives::parseInt(buffer));
                                    }
                                    
                                }
                                
                                //#line 225 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = (__extension__ ({ static ::x10::lang::String* strLit__7797 = ::x10aux::makeStringLit(""); strLit__7797; }));
                            } else {
                                
                                //#line 227 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                                buffer = ::x10::lang::String::__plus(buffer, char__7636);
                            }
                            
                        }
                    }
                    
                    //#line 231 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    if (!(::x10aux::equals(buffer,(__extension__ ({ static ::x10::lang::String* strLit__7798 = ::x10aux::makeStringLit(""); strLit__7798; })))))
                    {
                        
                        //#line 232 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                        ::x10aux::nullCheck(::x10aux::nullCheck(mD)->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                              ((x10_long)(dLine))))->x10::lang::Rail< x10_int >::__set(
                          ((x10_long)((__extension__ ({
                              x10_int pre__4498 = j;
                              j = ((j) + (((x10_int)1)));
                              pre__4498;
                          }))
                          )), ::x10::lang::IntNatives::parseInt(buffer));
                    }
                    
                    //#line 235 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    dLine = ((dLine) + (((x10_int)1)));
                }
                
            }
        }
        
    }
    catch (::x10::lang::CheckedThrowable* __exc9) {
        if (::x10aux::instanceof< ::x10::lang::Exception*>(__exc9)) {
            ::x10::lang::Exception* id__0 = static_cast< ::x10::lang::Exception*>(__exc9);
            {
                
                //#line 239 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__7800 = ::x10aux::makeStringLit("Error reading file"); strLit__7800; }))));
            }
        } else
        throw;
    }
}

//#line 250 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
x10_boolean cpls::problem::QAPModel::verify(::x10::lang::Rail< x10_int >* match) {
    
    //#line 252 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* permutV = ::x10::lang::Rail< x10_int >::_make(this->FMGL(size),
                                                                                ((x10_int)0));
    
    //#line 253 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int baseV = this->FMGL(baseValue);
    
    //#line 254 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::lang::Rail< x10_int >* rail__7641 = match;
    x10_long i__4779max__7642 = (x10_long)(::x10aux::nullCheck(rail__7641)->FMGL(size));
    {
        x10_long i__7643;
        for (i__7643 = ((x10_long)0ll); ((i__7643) < (i__4779max__7642));
             i__7643 = ((i__7643) + (((x10_long)1ll)))) {
            x10_long mi__7644 = i__7643;
            
            //#line 255 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            x10_int value__7640 = ::x10aux::nullCheck(match)->x10::lang::Rail< x10_int >::__apply(
                                    mi__7644);
            
            //#line 256 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* a__7637 = permutV;
            x10_long i__7638 = ((x10_long)(((value__7640) - (baseV))));
            x10_int r__7639 = ((a__7637->x10::lang::Rail< x10_int >::__apply(
                                  i__7638)) + (((x10_int)1)));
            a__7637->x10::lang::Rail< x10_int >::__set(i__7638,
                                                       r__7639);
            
            //#line 257 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            if (((((x10_long)(permutV->x10::lang::Rail< x10_int >::__apply(
                                ((x10_long)(((value__7640) - (baseV)))))))) > (((x10_long)1ll))))
            {
                
                //#line 258 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((__extension__ ({ static ::x10::lang::String* strLit__7805 = ::x10aux::makeStringLit("Not valid permutation, value "); strLit__7805; })), value__7640), (__extension__ ({ static ::x10::lang::String* strLit__7806 = ::x10aux::makeStringLit(" is repeted"); strLit__7806; })))));
            }
            
        }
    }
    
    //#line 261 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long i;
    x10_long j;
    
    //#line 262 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_long r = ((x10_long)0ll);
    
    //#line 264 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_long)0ll); ((i) < (this->FMGL(size)));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 265 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            {
                for (j = ((x10_long)0ll); ((j) < (this->FMGL(size)));
                     j = ((j) + (((x10_long)1ll)))) {
                    
                    //#line 266 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
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
    
    //#line 267 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    return (::x10aux::struct_equals(r, ((x10_long)0ll)));
    
}

//#line 270 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
void cpls::problem::QAPModel::printMatrices() {
    
    //#line 271 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__7814 = ::x10aux::makeStringLit("\nMatrix1"); strLit__7814; }))));
    
    //#line 272 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    x10_int i = ((x10_int)0);
    
    //#line 273 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 274 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__7815 = ::x10aux::makeStringLit(" : "); strLit__7815; }))));
            
            //#line 275 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__7645 = ::x10aux::nullCheck(this->FMGL(flow))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                         ((x10_long)(i)));
            x10_long size__7646 = (x10_long)(::x10aux::nullCheck(rail__7645)->FMGL(size));
            {
                x10_long idx__7647;
                for (idx__7647 = ((x10_long)0ll); ((idx__7647) < (size__7646));
                     idx__7647 = ((idx__7647) + (((x10_long)1ll))))
                {
                    x10_int j__7648 = ::x10aux::nullCheck(rail__7645)->x10::lang::Rail< x10_int >::__apply(
                                        idx__7647);
                    
                    //#line 276 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__7648, (__extension__ ({ static ::x10::lang::String* strLit__7818 = ::x10aux::makeStringLit(" "); strLit__7818; }))));
                }
            }
            
            //#line 277 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__7819 = ::x10aux::makeStringLit(""); strLit__7819; }))));
        }
    }
    
    //#line 279 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__7820 = ::x10aux::makeStringLit("Matrix2"); strLit__7820; }))));
    
    //#line 280 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
    {
        for (i = ((x10_int)0); ((((x10_long)(i))) < (this->FMGL(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 281 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->print(::x10::lang::String::__plus(((((x10_long)(i))) + (((x10_long)1ll))), (__extension__ ({ static ::x10::lang::String* strLit__7821 = ::x10aux::makeStringLit(": "); strLit__7821; }))));
            
            //#line 282 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::lang::Rail< x10_int >* rail__7649 = ::x10aux::nullCheck(this->FMGL(dist))->x10::lang::Rail< ::x10::lang::Rail< x10_int >* >::__apply(
                                                         ((x10_long)(i)));
            x10_long size__7650 = (x10_long)(::x10aux::nullCheck(rail__7649)->FMGL(size));
            {
                x10_long idx__7651;
                for (idx__7651 = ((x10_long)0ll); ((idx__7651) < (size__7650));
                     idx__7651 = ((idx__7651) + (((x10_long)1ll))))
                {
                    x10_int j__7652 = ::x10aux::nullCheck(rail__7649)->x10::lang::Rail< x10_int >::__apply(
                                        idx__7651);
                    
                    //#line 283 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
                    ::x10::io::Console::FMGL(OUT__get)()->print(
                      ::x10::lang::String::__plus(j__7652, (__extension__ ({ static ::x10::lang::String* strLit__7824 = ::x10aux::makeStringLit(" "); strLit__7824; }))));
                }
            }
            
            //#line 284 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/cpls/problem/QAPModel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast< ::x10::lang::Any*>((__extension__ ({ static ::x10::lang::String* strLit__7825 = ::x10aux::makeStringLit(""); strLit__7825; }))));
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

::x10::lang::Fun_0_0< ::x10::lang::String*>::itable<cpls_problem_QAPModel__closure__1>cpls_problem_QAPModel__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &cpls_problem_QAPModel__closure__1::__apply, &cpls_problem_QAPModel__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry cpls_problem_QAPModel__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0< ::x10::lang::String*> >, &cpls_problem_QAPModel__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t cpls_problem_QAPModel__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(cpls_problem_QAPModel__closure__1::_deserialize,::x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of QAPModel */
/*************************************************/
