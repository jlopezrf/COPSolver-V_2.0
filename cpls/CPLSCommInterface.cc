/*************************************************/
/* START of CPLSCommInterface */
#include <cpls/CPLSCommInterface.h>

::x10aux::RuntimeType cpls::CPLSCommInterface::rtt;
void cpls::CPLSCommInterface::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CPLSCommInterface",::x10aux::RuntimeType::interface_kind, 1, parents, 0, NULL, NULL);
}

/* END of CPLSCommInterface */
/*************************************************/
