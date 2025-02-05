/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCam.h"

void CCam::SetAsCurrent() {
    plugin::CallMethodDyn(gpattern("80 89 ? ? ? ? ? 8B 89"), this);
}

CCam* CCam::GetCamMode(eCamMode mode, int32_t arg2) {
    return plugin::CallMethodAndReturnDyn<CCam*>(gpattern("56 8B F1 57 8B 06 FF 50 28 8B 7C 24 0C 3B C7 75 16 8B 44 24 10 8B C8 48 89 44 24 10 85 C9 7F 07 5F 8B C6 5E C2 08 00 8B 8E"), this, mode, arg2);
}

CCam* CCam::CreateCamMode(eCamMode mode, int32_t arg2) {
    return plugin::CallMethodAndReturnDyn<CCam*>(gpattern("56 FF 74 24 0C 8B F1 FF 74 24 0C E8 ? ? ? ? 85 C0 75 11 8B 8E ? ? ? ? 56 50 FF 74 24 10 E8 ? ? ? ? 5E C2 08 00 CC CC CC CC CC CC CC 8A 81"), this, mode, arg2);
}

void CCam::SetTargetEntity(CPed* ped) {
    plugin::CallMethodDyn(gpattern("56 57 8B 7C 24 0C 85 FF 0F 95 C0 C0 E0 06"), this, ped);
}

void CCam::Activate() {
    plugin::CallMethodDyn(gpattern("8B 81 ? ? ? ? 8B 91 ? ? ? ? 56"), this);
}

CCam* CCam::SetCamMode(eCamMode mode, int32_t arg2) {
    return plugin::CallMethodAndReturnDyn<CCam*>(gpattern("56 8B F1 57 8B 06 FF 50 28 8B 7C 24 0C 3B C7 75 16 8B 44 24 10 8B C8 48 89 44 24 10 85 C9 7F 07 5F 8B C6 5E C2 08 00 8B CE"), this, mode, arg2);
}

void CCam::DestroyAllCams(bool arg) {
    plugin::CallMethodDyn(gpattern("81 EC ? ? ? ? 8D 04 24 56 50 E8 ? ? ? ? 8D 70 FF 85 F6 7E 19"), this, arg);
}
