/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlane.h"

static uint32_t CPlane__CPlaneAddr;
CPlane::CPlane(uint8_t createdBy) : CAutomobile(createdBy) {
    plugin::CallMethodDyn(CPlane__CPlaneAddr, this, createdBy);
}

template<>
void plugin::InitPatterns<CPlane>() {
    CPlane__CPlaneAddr = plugin::GetPattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 80 A6", 0);
}
