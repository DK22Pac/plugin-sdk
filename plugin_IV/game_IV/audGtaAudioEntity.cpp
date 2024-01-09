/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audGtaAudioEntity.h"

void audGtaAudioEntity::ReportSoundEvent(const char* name, rage::audSoundInitParams* params, int32_t arg3, int32_t arg4, int32_t arg5) {
    plugin::CallMethodDyn(gpattern("83 EC 48 56 8B F1 8D 4C 24 04 E8 ? ? ? ? FF 74 24 60"), this, name, params, arg3, arg4, arg5);
}
