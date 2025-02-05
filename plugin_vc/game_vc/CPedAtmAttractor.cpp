/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedAtmAttractor.h"

PLUGIN_SOURCE_FILE

int dtor_addr(CPedAtmAttractor) = ADDRESS_BY_VERSION(0x62DD10, 0x62DD60, 0x62D9D0);
int dtor_gaddr(CPedAtmAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DD10, 0x62DD60, 0x62D9D0);

int del_dtor_addr(CPedAtmAttractor) = ADDRESS_BY_VERSION(0x62DCA0, 0x62DCF0, 0x62D960);
int del_dtor_gaddr(CPedAtmAttractor) = GLOBAL_ADDRESS_BY_VERSION(0x62DCA0, 0x62DCF0, 0x62D960);

int addrof(CPedAtmAttractor::GetType) = ADDRESS_BY_VERSION(0x62DD50, 0x62DDA0, 0x62DA10);
int gaddrof(CPedAtmAttractor::GetType) = GLOBAL_ADDRESS_BY_VERSION(0x62DD50, 0x62DDA0, 0x62DA10);

ePedAttractorType CPedAtmAttractor::GetType() {
    return plugin::CallVirtualMethodAndReturn<ePedAttractorType, 2, CPedAtmAttractor *>(this);
}

int addrof(CPedAtmAttractor::UpdatePedStateOnDeparture) = ADDRESS_BY_VERSION(0x62ADB0, 0x62AE00, 0x62AA70);
int gaddrof(CPedAtmAttractor::UpdatePedStateOnDeparture) = GLOBAL_ADDRESS_BY_VERSION(0x62ADB0, 0x62AE00, 0x62AA70);

void CPedAtmAttractor::UpdatePedStateOnDeparture(CPed *ped) {
    plugin::CallVirtualMethod<3, CPedAtmAttractor *, CPed *>(this, ped);
}
