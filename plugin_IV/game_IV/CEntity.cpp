/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntity.h"

static uint32_t CEntity__TeleportAddr;
void CEntity::Teleport(rage::Matrix34 const& mat) {
    plugin::CallMethodDyn(CEntity__TeleportAddr, this, &mat, 0, 0);
}

static uint32_t CEntity__SetPositionAddr;
void CEntity::SetPosition(rage::Vector4 const& pos) {
    plugin::CallMethodDyn(CEntity__SetPositionAddr, this, &pos, 0, 0);
}

static uint32_t CEntity__SetHeadingAddr;
void CEntity::SetHeading(float heading) {
    plugin::CallMethodDyn(CEntity__SetHeadingAddr, this, heading);
}

static uint32_t CEntity__FreezeAddr;
void CEntity::Freeze(bool on, bool arg2) {
    plugin::CallMethodDyn(CEntity__FreezeAddr, this, on, arg2);
}

template<>
void plugin::InitPatterns<CEntity>() {
    CEntity__TeleportAddr = plugin::GetPattern("55 8B EC 83 E4 F0 83 EC 28 56 8B 75 08 57 8B F9 83 7F 20 00", 0);
    CEntity__SetPositionAddr = plugin::GetPattern("8B 51 20 85 D2 74 26", 0);
    CEntity__SetHeadingAddr = plugin::GetPattern("51 F3 0F 10 44 24 ? 56 8B 71 20", 0);
    CEntity__FreezeAddr = plugin::GetPattern("56 8B F1 8B 46 38 85 C0 0F 84 ? ? ? ? 80 7C 24", 0);
}
