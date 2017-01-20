/*************************************************/
/* START of CPLSExplorerCommInterface */
#include <cpls/CPLSExplorerCommInterface.h>

::x10aux::RuntimeType cpls::CPLSExplorerCommInterface::rtt;
void cpls::CPLSExplorerCommInterface::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Any>(), ::x10aux::getRTT< ::cpls::CPLSCommInterface>()};
    rtt.initStageTwo("cpls.CPLSExplorerCommInterface",::x10aux::RuntimeType::interface_kind, 2, parents, 0, NULL, NULL);
}

/* END of CPLSExplorerCommInterface */
/*************************************************/
