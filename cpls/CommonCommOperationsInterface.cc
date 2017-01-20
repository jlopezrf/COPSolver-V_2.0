/*************************************************/
/* START of CommonCommOperationsInterface */
#include <cpls/CommonCommOperationsInterface.h>

::x10aux::RuntimeType cpls::CommonCommOperationsInterface::rtt;
void cpls::CommonCommOperationsInterface::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::lang::Any>()};
    rtt.initStageTwo("cpls.CommonCommOperationsInterface",::x10aux::RuntimeType::interface_kind, 1, parents, 0, NULL, NULL);
}

/* END of CommonCommOperationsInterface */
/*************************************************/
