/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntity.h"

static uint32_t CEntity__FreezeAddr;
void CEntity::Freeze(bool on, bool arg2) {
    plugin::CallMethodDyn(CEntity__FreezeAddr, this, on, arg2);
}

static uint32_t CEntity__AllocateMatrixAddr;
void CEntity::AllocateMatrix() {
    plugin::CallMethodDyn(CEntity__AllocateMatrixAddr, this);
}

static uint32_t CEntity__CleanUpOldReferenceAddr;
void CEntity::CleanUpOldReference(void* object) {
    plugin::CallMethodDyn(CEntity__CleanUpOldReferenceAddr, this, object);
}

template<>
void plugin::InitPatterns<CEntity>() {
    CEntity__FreezeAddr = plugin::GetPattern("56 8B F1 8B 46 38 85 C0 0F 84 ? ? ? ? 80 7C 24", 0);
    CEntity__AllocateMatrixAddr = plugin::GetPattern("56 68 ? ? ? ? 8B F1 E8 ? ? ? ? 83 C4 04 83 7E 20 00", 0);
    CEntity__CleanUpOldReferenceAddr = plugin::GetPattern("56 8B F1 E8 ? ? ? ? 8B 46 30 83 C6 30", 0);
}
