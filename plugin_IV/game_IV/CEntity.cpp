/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntity.h"

void CEntity::Freeze(bool on, bool arg2) {
    plugin::CallMethodDyn(gpattern("56 8B F1 8B 46 38 85 C0 0F 84 ? ? ? ? 80 7C 24"), this, on, arg2);
}

void CEntity::AllocateMatrix() {
    plugin::CallMethodDyn(gpattern("56 68 ? ? ? ? 8B F1 E8 ? ? ? ? 83 C4 04 83 7E 20 00"), this);
}

void CEntity::CleanUpOldReference(void* object) {
    plugin::CallMethodDyn(gpattern("56 8B F1 E8 ? ? ? ? 8B 46 30 83 C6 30"), this, object);
}
