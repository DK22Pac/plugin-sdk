/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhysical.h"

static uint32_t CPhysical__SetInitialVelocityAddr;
void CPhysical::SetInitialVelocity(rage::Vector3 const& vel) {
    plugin::CallMethodDyn(CPhysical__SetInitialVelocityAddr, this, &vel);
}

static uint32_t CWorld__RemoveFromMovingListAddr;
void CPhysical::RemoveFromMovingList() {
    plugin::CallMethodDyn(CWorld__RemoveFromMovingListAddr, this);
}

template<>
void plugin::InitPatterns<CPhysical>() {
    CPhysical__SetInitialVelocityAddr = plugin::GetPattern("56 8B F1 8B 46 38 85 C0 0F 84 ? ? ? ? 0F B7 40 08 53 BB ? ? ? ? 66 3B C3 74 73 8B C8 A1 ? ? ? ? 57 8B 40 70 8B 7C 24 10 8B 44 C8 04 24 03 3C 01 75 33 F3 0F 10 07 0F 57 C9 0F 2E C1 9F F6 C4 44 7A 1C F3 0F 10 47 ? 0F 2E C1 9F F6 C4 44 7A 0E F3 0F 10 47 ? 0F 2E C1 9F F6 C4 44 7B 07 8B CE E8 ? ? ? ? 8B CE E8 ? ? ? ? 85 C0 74 1B 8B 46 38 66 39 58 08 74 12 8B CE E8 ? ? ? ? 8B 10 57 8B C8 FF 92 ? ? ? ? 5F 5B 5E C2 04 00 CC CC CC CC CC CC CC CC CC CC CC 56", 0);
    CWorld__RemoveFromMovingListAddr = plugin::GetPattern("56 8B F1 8B 56 74", 0);
}
