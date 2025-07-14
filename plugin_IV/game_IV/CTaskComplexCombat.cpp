/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexCombat.h"

CTaskComplexCombat::CTaskComplexCombat(CPed* target, int32_t unk) {
    plugin::CallMethodDyn(gpattern("53 56 57 8B F1 E8 ? ? ? ? 8B 44 24 ? F3 0F 10 44 24"), this, target, unk);
}
