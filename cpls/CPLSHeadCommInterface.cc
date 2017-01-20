/*************************************************/
/* START of CPLSHeadCommInterface */
#include <cpls/CPLSHeadCommInterface.h>

::x10aux::RuntimeType cpls::CPLSHeadCommInterface::rtt;
void cpls::CPLSHeadCommInterface::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::cpls::CPLSCommInterface>()};
    rtt.initStageTwo("cpls.CPLSHeadCommInterface",::x10aux::RuntimeType::interface_kind, 2, parents, 0, NULL, NULL);
}

/* END of CPLSHeadCommInterface */
/*************************************************/
