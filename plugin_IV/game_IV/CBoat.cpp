/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

static uint32_t CBoat__CBoatAddr;
CBoat::CBoat(uint8_t createdBy) : CVehicle(createdBy) {
    plugin::CallMethodDyn(CBoat__CBoatAddr, this, createdBy);
}

template<>
void plugin::InitPatterns<CBoat>() {
    CBoat__CBoatAddr = plugin::GetPattern("56 57 FF 74 24 0C 8B F9 E8 ? ? ? ? 8D 8F", 0);
}
