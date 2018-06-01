/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimeCycle.h"

PLUGIN_SOURCE_FILE

int addrof(CTimeCycle::Initialise) = ADDRESS_BY_VERSION(0x4D05E0, 0x4D0600, 0x4D04A0);
int gaddrof(CTimeCycle::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4D05E0, 0x4D0600, 0x4D04A0);

void CTimeCycle::Initialise() {
    plugin::CallDynGlobal(gaddrof(CTimeCycle::Initialise));
}

int addrof(CTimeCycle::StopExtraColour) = ADDRESS_BY_VERSION(0x4CE9E0, 0x4CEA00, 0x4CE8A0);
int gaddrof(CTimeCycle::StopExtraColour) = GLOBAL_ADDRESS_BY_VERSION(0x4CE9E0, 0x4CEA00, 0x4CE8A0);

void CTimeCycle::StopExtraColour(bool arg1) {
    plugin::CallDynGlobal<bool>(gaddrof(CTimeCycle::StopExtraColour), arg1);
}

int addrof(CTimeCycle::Update) = ADDRESS_BY_VERSION(0x4CEA40, 0x4CEA60, 0x4CE900);
int gaddrof(CTimeCycle::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4CEA40, 0x4CEA60, 0x4CE900);

void CTimeCycle::Update() {
    plugin::CallDynGlobal(gaddrof(CTimeCycle::Update));
}
