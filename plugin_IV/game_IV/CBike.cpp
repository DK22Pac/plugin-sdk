/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBike.h"

static uint32_t CBike__CBikeAddr;
CBike::CBike(uint8_t createdBy) : CVehicle(createdBy) {
    plugin::CallMethodDyn(CBike__CBikeAddr, this, createdBy);
}

template<>
void plugin::InitPatterns<CBike>() {
    CBike__CBikeAddr = plugin::GetPattern("53 56 57 FF 74 24 10 8B F9", 0);
}
