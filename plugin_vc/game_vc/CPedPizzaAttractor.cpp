/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedPizzaAttractor.h"

PLUGIN_SOURCE_FILE

int dtor_addr(CPedPizzaAttractor) = ADDRESS_BY_VERSION(0x62DAB0, 0x62DB00, 0x62D770);
int dtor_gaddr(CPedPizzaAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DAB0, 0x62DB00, 0x62D770);

int addrof(CPedPizzaAttractor::GetHeadOfQueueWaitTime) = ADDRESS_BY_VERSION(0x62DB00, 0x62DB50, 0x62D7C0);
int gaddrof(CPedPizzaAttractor::GetHeadOfQueueWaitTime) = GLOBAL_ADDRESS_BY_VERSION(0x62DB00, 0x62DB50, 0x62D7C0);

float CPedPizzaAttractor::GetHeadOfQueueWaitTime() {
    return plugin::CallVirtualMethodAndReturn<float, 0, CPedPizzaAttractor *>(this);
}

int del_dtor_addr(CPedPizzaAttractor) = ADDRESS_BY_VERSION(0x62DA40, 0x62DA90, 0x62D700);
int del_dtor_gaddr(CPedPizzaAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DA40, 0x62DA90, 0x62D700);

ePedAttractorType CPedPizzaAttractor::GetType() {
    return plugin::CallVirtualMethodAndReturn<ePedAttractorType, 2, CPedPizzaAttractor *>(this);
}

void CPedPizzaAttractor::UpdatePedStateOnDeparture(CPed *ped) {
    plugin::CallVirtualMethod<3, CPedPizzaAttractor *, CPed *>(this, ped);
}
