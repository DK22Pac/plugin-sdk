/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicle.h"

static uint32_t CVehicle__CVehicleAddr;
CVehicle::CVehicle(uint8_t createdBy) {
    plugin::CallMethodDyn(CVehicle__CVehicleAddr, this, createdBy);
}

static uint32_t CVehicle__SetPositionAddr;
void CVehicle::SetPosition(rage::Vector3 const& pos, bool arg2, bool arg3) {
    plugin::CallMethodDyn(CVehicle__SetPositionAddr, this, pos, arg2, arg3);
}

template<>
void plugin::InitPatterns<CVehicle>() {
    CVehicle__CVehicleAddr = plugin::GetPattern("53 55 56 57 8B F9 E8 ? ? ? ? 8D 8F", 0);
    CVehicle__SetPositionAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 48 8B 0D ? ? ? ? 56 57 8B 7D 08", 0);
}
