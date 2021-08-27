/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedStopAttractor.h"

PLUGIN_SOURCE_FILE

int dtor_addr(CPedStopAttractor) = ADDRESS_BY_VERSION(0x62DB90, 0x62DBE0, 0x62D850);
int dtor_gaddr(CPedStopAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DB90, 0x62DBE0, 0x62D850);

int del_dtor_addr(CPedStopAttractor) = ADDRESS_BY_VERSION(0x62DB20, 0x62DB70, 0x62D7E0);
int del_dtor_gaddr(CPedStopAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DB20, 0x62DB70, 0x62D7E0);

ePedAttractorType CPedStopAttractor::GetType() {
    return plugin::CallVirtualMethodAndReturn<ePedAttractorType, 2, CPedStopAttractor *>(this);
}

void CPedStopAttractor::UpdatePedStateOnDeparture(CPed *ped) {
    plugin::CallVirtualMethod<3, CPedStopAttractor *, CPed *>(this, ped);
}
