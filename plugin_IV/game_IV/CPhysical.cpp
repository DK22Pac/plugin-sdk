/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPhysical.h"

void CPhysical::SetInitialVelocity(rage::Vector3 const& vel) {
    plugin::CallMethodDyn(gpattern("56 8B F1 8B 46 38 85 C0 0F 84 ? ? ? ? 0F B7 40 08 53 BB ? ? ? ? 66 3B C3 74 73 8B C8 A1 ? ? ? ? 57 8B 40 70 8B 7C 24 10 8B 44 C8 04 24 03 3C 01 75 33 F3 0F 10 07 0F 57 C9 0F 2E C1 9F F6 C4 44 7A 1C F3 0F 10 47 ? 0F 2E C1 9F F6 C4 44 7A 0E F3 0F 10 47 ? 0F 2E C1 9F F6 C4 44 7B 07 8B CE E8 ? ? ? ? 8B CE E8 ? ? ? ? 85 C0 74 1B 8B 46 38 66 39 58 08 74 12 8B CE E8 ? ? ? ? 8B 10 57 8B C8 FF 92 ? ? ? ? 5F 5B 5E C2 04 00 CC CC CC CC CC CC CC CC CC CC CC 56"), this, &vel);
}

void CPhysical::RemoveFromMovingList() {
    plugin::CallMethodDyn(gpattern("56 8B F1 8B 56 74"), this);
}

void CPhysical::ApplyMoveForce(rage::Vector3 const& vel) {
    plugin::CallMethodDyn(gpattern("56 8B F1 8B 46 38 85 C0 74 38 0F B7 50 08 A1 ? ? ? ? 8B 40 70 8B 44 D0 04 24 03 3C 01 75 05 E8 ? ? ? ? 8B CE E8 ? ? ? ? 85 C0 74 12 8B CE E8 ? ? ? ? 8B 10 5E 8B C8 FF A2 88 00 00 00"), this, &vel);
}

void CPhysical::ApplyForce(rage::Vector3 const& dir, rage::Vector3 const& vel, int32_t flag) {
    plugin::CallMethodDyn(gpattern("55 8B EC 83 E4 F0 83 EC 1C 56 8B F1 8B 46 38 85 C0 0F 84 ? ? ? ? 0F B7 50 08 A1 ? ? ? ? 8B 40 70 8B 44 D0 04 24 03 3C 01 75 05 E8 ? ? ? ? 8B CE E8 ? ? ? ? 85 C0 74 5E"), this, &dir, &vel, flag);
}

rage::phConstrainedCollider* CPhysical::GetCollider() {
    return plugin::CallMethodAndReturnDyn<rage::phConstrainedCollider*>(gpattern("8B 41 38 85 C0 74 38 0F B7 40 08 B9 ? ? ? ? 66 3B C1 74 2A 8B C8 A1"), this);
}
