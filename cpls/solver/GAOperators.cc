/*************************************************/
/* START of GAOperators */
#include <cpls/solver/GAOperators.h>

#include <x10/lang/Double.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/util/Random.h>
#include <x10/lang/Float.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <cpls/solver/GAIndividual.h>
#include <x10/lang/UInt.h>
#include <x10/lang/Iterator.h>
#include <x10/compiler/Synthetic.h>

//#line 7 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"

//#line 8 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"

//#line 9 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"

//#line 10 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"

//#line 12 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"

//#line 14 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
void cpls::solver::GAOperators::_constructor(x10_int longIndv, x10_float mutRate,
                                             x10_int scalingFactor) {
    
    //#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->cpls::solver::GAOperators::__fieldInitializers_cpls_solver_GAOperators();
    
    //#line 15 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->FMGL(longIndiv) = this->FMGL(longIndiv);
    
    //#line 16 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->FMGL(mask) = this->createMask();
    
    //#line 17 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->FMGL(mutRate) = ((x10_double) (mutRate));
    
    //#line 18 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->FMGL(randomGenerator) = ::x10::util::Random::_make();
    
    //#line 19 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->FMGL(scalingFactor) = scalingFactor;
}
::cpls::solver::GAOperators* cpls::solver::GAOperators::_make(x10_int longIndv,
                                                              x10_float mutRate,
                                                              x10_int scalingFactor)
{
    ::cpls::solver::GAOperators* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAOperators>()) ::cpls::solver::GAOperators();
    this_->_constructor(longIndv, mutRate, scalingFactor);
    return this_;
}



//#line 22 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
::x10::lang::String* cpls::solver::GAOperators::createMask(
  ) {
    
    //#line 35 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)32ll)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 36 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            if (((i) < (this->FMGL(longIndiv)))) {
                this->FMGL(mask) = ::x10::lang::String::__plus(this->FMGL(mask), (__extension__ ({ static ::x10::lang::String* strLit__43101 = ::x10aux::makeStringLit("1"); strLit__43101; })));
            } else {
                
                //#line 37 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                this->FMGL(mask) = ::x10::lang::String::__plus(this->FMGL(mask), (__extension__ ({ static ::x10::lang::String* strLit__43102 = ::x10aux::makeStringLit("0"); strLit__43102; })));
            }
            
        }
    }
    
    //#line 39 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return this->FMGL(mask);
    
}

//#line 42 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
::x10::lang::String* cpls::solver::GAOperators::getMask() {
    
    //#line 43 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return this->FMGL(mask);
    
}

//#line 47 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
void cpls::solver::GAOperators::setMutRate(x10_double mutRate) {
    
    //#line 48 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    this->FMGL(mutRate) = ((this->FMGL(mutRate)) + (mutRate));
}

//#line 54 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
::x10::lang::String* cpls::solver::GAOperators::getCrossingMask(
  ) {
    
    //#line 55 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::String* crossingMask = (__extension__ ({ static ::x10::lang::String* strLit__43103 = ::x10aux::makeStringLit(""); strLit__43103; }));
    
    //#line 56 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_int posCrossing = ::x10::lang::DoubleNatives::toInt(((::x10aux::nullCheck(this->FMGL(randomGenerator))->nextDouble()) * (((x10_double) (this->FMGL(longIndiv))))));
    
    //#line 58 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)32ll)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 59 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            if (((i) < (posCrossing))) {
                crossingMask = ::x10::lang::String::__plus(crossingMask, (__extension__ ({ static ::x10::lang::String* strLit__43104 = ::x10aux::makeStringLit("1"); strLit__43104; })));
            } else {
                
                //#line 60 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                crossingMask = ::x10::lang::String::__plus(crossingMask, (__extension__ ({ static ::x10::lang::String* strLit__43105 = ::x10aux::makeStringLit("0"); strLit__43105; })));
            }
            
        }
    }
    
    //#line 62 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return crossingMask;
    
}

//#line 66 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_int cpls::solver::GAOperators::mutating(x10_int genes) {
    
    //#line 67 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::String* maskMut = (__extension__ ({ static ::x10::lang::String* strLit__43106 = ::x10aux::makeStringLit(""); strLit__43106; }));
    
    //#line 68 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((((x10_long)(i))) < (((x10_long)32ll)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 69 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            if (((i) < (this->FMGL(longIndiv)))) {
                
                //#line 70 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                if (((::x10aux::nullCheck(this->FMGL(randomGenerator))->nextDouble()) < (this->FMGL(mutRate))))
                {
                    maskMut = ::x10::lang::String::__plus(maskMut, (__extension__ ({ static ::x10::lang::String* strLit__43107 = ::x10aux::makeStringLit("1"); strLit__43107; })));
                } else {
                    
                    //#line 71 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                    maskMut = ::x10::lang::String::__plus(maskMut, (__extension__ ({ static ::x10::lang::String* strLit__43108 = ::x10aux::makeStringLit("0"); strLit__43108; })));
                }
                
            } else {
                
                //#line 72 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                maskMut = ::x10::lang::String::__plus(maskMut, (__extension__ ({ static ::x10::lang::String* strLit__43109 = ::x10aux::makeStringLit("0"); strLit__43109; })));
            }
            
        }
    }
    
    //#line 74 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return ((genes) ^ (::x10::lang::IntNatives::parseInt(maskMut)));
    
}

//#line 78 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_double cpls::solver::GAOperators::expectedValue(x10_int sizePopulation) {
    
    //#line 79 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_double accumulator = ((x10_double) (((x10_long)0ll)));
    
    //#line 80 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    if (((((sizePopulation) % ::x10aux::zeroCheck(((x10_int)2)))) > (((x10_int)0))))
    {
        
        //#line 81 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        x10_int upLimit = ((((((sizePopulation) - (((x10_int)1)))) / ::x10aux::zeroCheck(((x10_int)2)))) + (((x10_int)1)));
        
        //#line 82 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (upLimit)); i =
                                                        ((i) + (((x10_int)1))))
            {
                
                //#line 83 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                accumulator = ((accumulator) + (((((x10_double) (((((x10_long)2ll)) * (((x10_long)(i))))))) * (((this->power(
                                                                                                                   0.5,
                                                                                                                   sizePopulation)) * (this->binomial(
                                                                                                                                         sizePopulation,
                                                                                                                                         i)))))));
            }
        }
        
    } else {
        
        //#line 86 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        x10_int upLimit = ((sizePopulation) / ::x10aux::zeroCheck(((x10_int)2)));
        
        //#line 87 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (upLimit)); i =
                                                        ((i) + (((x10_int)1))))
            {
                
                //#line 88 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                accumulator = ((accumulator) + (((((x10_double) (((((x10_long)2ll)) * (((x10_long)(i))))))) * (((this->power(
                                                                                                                   0.5,
                                                                                                                   sizePopulation)) * (this->binomial(
                                                                                                                                         sizePopulation,
                                                                                                                                         i)))))));
            }
        }
        
        //#line 90 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        x10_int aux = ((sizePopulation) / ::x10aux::zeroCheck(((x10_int)2)));
        
        //#line 91 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        accumulator = ((accumulator) + (((((((x10_double) (aux))) * (this->binomial(
                                                                       sizePopulation,
                                                                       aux)))) * (this->power(
                                                                                    0.5,
                                                                                    sizePopulation)))));
    }
    
    //#line 93 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return accumulator = ((accumulator) * (((x10_double) (((this->FMGL(longIndiv)) / ::x10aux::zeroCheck(sizePopulation))))));
    
}

//#line 98 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_double cpls::solver::GAOperators::dispersion(::x10::lang::Rail< ::cpls::solver::GAIndividual* >* population) {
    
    //#line 100 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_uint maskDispersion;
    
    //#line 101 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::Rail< x10_double >* averages = ::x10::lang::Rail< x10_double >::_make(((x10_long)(this->FMGL(longIndiv))));
    
    //#line 102 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_double dispersionValue = ((x10_double) (((x10_long)0ll)));
    
    //#line 104 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::Iterator< ::cpls::solver::GAIndividual*>* it =
      ::x10aux::nullCheck(population)->x10::lang::Rail< ::cpls::solver::GAIndividual* >::iterator();
    
    //#line 105 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::cpls::solver::GAIndividual* auxIndiv;
    
    //#line 106 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::Rail< x10_int >* auxGenes;
    
    //#line 107 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    while (::x10::lang::Iterator< ::cpls::solver::GAIndividual*>::hasNext(::x10aux::nullCheck(it)))
    {
        
        //#line 108 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        maskDispersion = ((x10_uint)0x80000000u);
        
        //#line 109 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        auxIndiv = ::x10::lang::Iterator< ::cpls::solver::GAIndividual*>::next(::x10aux::nullCheck(it));
        
        //#line 111 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        {
            x10_int i;
            for (i = ((x10_int)0); ((i) < (this->FMGL(longIndiv)));
                 i = ((i) + (((x10_int)1)))) {
                
                //#line 113 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                maskDispersion = ((x10_uint) ((maskDispersion) >> (0x1f & (x10_int)(((x10_long)1ll)))));
            }
        }
        
    }
    
    //#line 117 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (this->FMGL(longIndiv)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 118 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            ::x10aux::nullCheck(averages)->x10::lang::Rail< x10_double >::__set(
              ((x10_long)(i)), ((::x10aux::nullCheck(averages)->x10::lang::Rail< x10_double >::__apply(
                                   ((x10_long)(i)))) / (((x10_double) ((x10_long)(::x10aux::nullCheck(population)->FMGL(size)))))));
            
            //#line 119 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            if (((::x10aux::nullCheck(averages)->x10::lang::Rail< x10_double >::__apply(
                    ((x10_long)(i)))) > (((((x10_double) (((x10_long)1ll)))) - (::x10aux::nullCheck(averages)->x10::lang::Rail< x10_double >::__apply(
                                                                                  ((x10_long)(i))))))))
            {
                dispersionValue = ((dispersionValue) + (::x10aux::nullCheck(averages)->x10::lang::Rail< x10_double >::__apply(
                                                          ((x10_long)(i)))));
            } else {
                
                //#line 120 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                dispersionValue = ((dispersionValue) + (((((x10_double) (((x10_long)1ll)))) - (::x10aux::nullCheck(averages)->x10::lang::Rail< x10_double >::__apply(
                                                                                                 ((x10_long)(i)))))));
            }
            
        }
    }
    
    //#line 122 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return dispersionValue;
    
}

//#line 129 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_int cpls::solver::GAOperators::calcScalingFactor() {
    
    //#line 132 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return this->FMGL(scalingFactor);
    
}

//#line 137 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
void cpls::solver::GAOperators::calcFitness() {
 
}

//#line 142 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
::x10::lang::Rail< x10_int >* cpls::solver::GAOperators::selecPopulation(
  x10_double size) {
    
    //#line 143 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::Rail< x10_int >* couples = ::x10::lang::Rail< x10_int >::_make(((x10_long)(::x10::lang::DoubleNatives::toInt(size))),
                                                                                ::x10::lang::DoubleNatives::toInt(size));
    
    //#line 144 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    ::x10::lang::Rail< x10_boolean >* busyFlags = ::x10::lang::Rail< x10_boolean >::_make(((x10_long)(::x10::lang::DoubleNatives::toInt(size))),
                                                                                          false);
    
    //#line 145 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_int randomIndex = ::x10::lang::DoubleNatives::toInt(size);
    
    //#line 147 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    {
        x10_int i;
        for (i = ((x10_int)0); ((i) < (::x10::lang::DoubleNatives::toInt(size)));
             i = ((i) + (((x10_int)1)))) {
            
            //#line 148 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            do {
                
                //#line 149 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
                randomIndex = ((::x10::lang::DoubleNatives::toInt(::x10aux::nullCheck(this->FMGL(randomGenerator))->nextDouble())) * (::x10::lang::DoubleNatives::toInt(size)));
            } while (::x10aux::nullCheck(busyFlags)->x10::lang::Rail< x10_boolean >::__apply(
                       ((x10_long)(randomIndex))));
            
            //#line 151 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            ::x10aux::nullCheck(couples)->x10::lang::Rail< x10_int >::__set(
              ((x10_long)(i)), randomIndex);
            
            //#line 152 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            ::x10aux::nullCheck(busyFlags)->x10::lang::Rail< x10_boolean >::__set(
              ((x10_long)(randomIndex)), true);
        }
    }
    
    //#line 154 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return couples;
    
}

//#line 158 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_double cpls::solver::GAOperators::binomial(x10_int n,
                                               x10_int k) {
    
    //#line 159 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return ((x10_double) (((this->factorial(n)) / ::x10aux::zeroCheck(((this->factorial(
                                                                          ((n) - (k)))) * (this->factorial(
                                                                                             k)))))));
    
}

//#line 163 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_int cpls::solver::GAOperators::factorial(x10_int number) {
    
    //#line 164 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_int value = ((x10_int)1);
    
    //#line 165 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    while ((!::x10aux::struct_equals(number, ((x10_int)0))))
    {
        
        //#line 166 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        value = ((value) * (number));
        
        //#line 167 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
        number = ((number) - (((x10_int)1)));
    }
    
    //#line 169 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return value;
    
}

//#line 173 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
x10_double cpls::solver::GAOperators::power(x10_double number,
                                            x10_int n) {
    
    //#line 174 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    x10_double value = number;
    
    //#line 175 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    {
        x10_int i;
        for (i = ((x10_int)1); ((i) < (n)); i = ((i) + (((x10_int)1))))
        {
            
            //#line 176 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
            value = ((value) * (number));
        }
    }
    
    //#line 178 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
    return value;
    
}

//#line 5 "/home/jason/Documents/Maestria/Implementacion/X10/Repositorio/COPSolver-V_2.0/src/cpls/solver/GAOperators.x10"
::cpls::solver::GAOperators* cpls::solver::GAOperators::cpls__solver__GAOperators____this__cpls__solver__GAOperators(
  ) {
    return this;
    
}
void cpls::solver::GAOperators::__fieldInitializers_cpls_solver_GAOperators(
  ) {
    this->FMGL(mutRate) = 0.0;
    this->FMGL(mask) = (__extension__ ({ static ::x10::lang::String* strLit__43116 = ::x10aux::makeStringLit(""); strLit__43116; }));
    this->FMGL(longIndiv) = ((x10_int)0);
    this->FMGL(scalingFactor) = ((x10_int)0);
    this->FMGL(randomGenerator) = (::x10aux::class_cast_unchecked< ::x10::util::Random*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t cpls::solver::GAOperators::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::cpls::solver::GAOperators::_deserializer, ::x10aux::CLOSURE_KIND_NOT_ASYNC);

void cpls::solver::GAOperators::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mutRate));
    buf.write(this->FMGL(mask));
    buf.write(this->FMGL(longIndiv));
    buf.write(this->FMGL(scalingFactor));
    buf.write(this->FMGL(randomGenerator));
    
}

::x10::lang::Reference* ::cpls::solver::GAOperators::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::cpls::solver::GAOperators* this_ = new (::x10aux::alloc_z< ::cpls::solver::GAOperators>()) ::cpls::solver::GAOperators();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void cpls::solver::GAOperators::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(mutRate) = buf.read<x10_double>();
    FMGL(mask) = buf.read< ::x10::lang::String*>();
    FMGL(longIndiv) = buf.read<x10_int>();
    FMGL(scalingFactor) = buf.read<x10_int>();
    FMGL(randomGenerator) = buf.read< ::x10::util::Random*>();
}

::x10aux::RuntimeType cpls::solver::GAOperators::rtt;
void cpls::solver::GAOperators::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("cpls.solver.GAOperators",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of GAOperators */
/*************************************************/
