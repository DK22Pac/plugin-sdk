/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedIceCreamVanAttractor.h"

PLUGIN_SOURCE_FILE

int dtor_addr(CPedIceCreamVanAttractor) = ADDRESS_BY_VERSION(0x62D2F0, 0x62D340, 0x62CFB0);
int dtor_gaddr(CPedIceCreamVanAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62D2F0, 0x62D340, 0x62CFB0);

int del_dtor_addr(CPedIceCreamVanAttractor) = ADDRESS_BY_VERSION(0x62D930, 0x62D980, 0x62D5F0);
int del_dtor_gaddr(CPedIceCreamVanAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62D930, 0x62D980, 0x62D5F0);

ePedAttractorType CPedIceCreamVanAttractor::GetType() {
    return plugin::CallVirtualMethodAndReturn<ePedAttractorType, 2, CPedIceCreamVanAttractor *>(this);
}

void CPedIceCreamVanAttractor::UpdatePedStateOnDeparture(CPed *ped) {
    plugin::CallVirtualMethod<3, CPedIceCreamVanAttractor *, CPed *>(this, ped);
}
