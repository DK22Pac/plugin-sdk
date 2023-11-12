/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicle.h"

CVehicle::CVehicle(uint8_t createdBy) {
    plugin::CallMethodDyn(gpattern("53 55 56 57 8B F9 E8 ? ? ? ? 8D 8F"), this, createdBy);
}

void CVehicle::SetPosition(rage::Vector3 const& pos, bool arg2, bool arg3) {
    plugin::CallMethodDyn(gpattern("55 8B EC 83 E4 F0 83 EC 48 8B 0D ? ? ? ? 56 57 8B 7D 08"), this, pos, arg2, arg3);
}
