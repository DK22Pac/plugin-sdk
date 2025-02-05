/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedSeatAttractor.h"

PLUGIN_SOURCE_FILE

int dtor_addr(CPedSeatAttractor) = ADDRESS_BY_VERSION(0x62DC50, 0x62DCA0, 0x62D910);
int dtor_gaddr(CPedSeatAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DC50, 0x62DCA0, 0x62D910);

int del_dtor_addr(CPedSeatAttractor) = ADDRESS_BY_VERSION(0x62DBE0, 0x62DC30, 0x62D8A0);
int del_dtor_gaddr(CPedSeatAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DBE0, 0x62DC30, 0x62D8A0);

ePedAttractorType CPedSeatAttractor::GetType() {
    return plugin::CallVirtualMethodAndReturn<ePedAttractorType, 2, CPedSeatAttractor *>(this);
}

void CPedSeatAttractor::UpdatePedStateOnDeparture(CPed *ped) {
    plugin::CallVirtualMethod<3, CPedSeatAttractor *, CPed *>(this, ped);
}
