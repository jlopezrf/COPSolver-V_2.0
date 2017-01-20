/*************************************************/
/* START of CPLSMasterCommInterface */
#include <cpls/CPLSMasterCommInterface.h>

::x10aux::RuntimeType cpls::CPLSMasterCommInterface::rtt;
void cpls::CPLSMasterCommInterface::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::cpls::CPLSCommInterface>()};
    rtt.initStageTwo("cpls.CPLSMasterCommInterface",::x10aux::RuntimeType::interface_kind, 2, parents, 0, NULL, NULL);
}

/* END of CPLSMasterCommInterface */
/*************************************************/
