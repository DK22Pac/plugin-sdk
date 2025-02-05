/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audEntity.h"

void rage::audEntity::CreateSound_LocalReference(const char* name, rage::audSound* sound, audSoundInitParams* initParams, int32_t arg4, int32_t arg5, int32_t arg6) {
    plugin::CallMethodDyn(gpattern("83 EC 48 56 8B F1 8D 4C 24 04 E8 ? ? ? ? FF 74 24 64 8B 44 24 5C FF 74 24 64 85 C0 FF 74 24 64 8D 4C 24 10 0F 45 C8 51 FF 74 24 64 6A 00 FF 74 24 68 E8 ? ? ? ? 83 C4 08 8B CE 50 E8 ? ? ? ? 5E 83 C4 48 C2 18 00 CC CC CC CC CC CC 83 EC 48 56 57 6A 00 FF 74 24 58 8B F9 E8 ? ? ? ? 83 C4 08 8D 4C 24 08 8B F0 E8 ? ? ? ? FF 74 24 70 8B 4C 24 64 FF 74 24 70 8A 54 24 64 8B 44 24 6C FF 74 24 70 89 4C 24 24 8A 4C 24 5A C0 E2 05 32 D1 89 44 24 34 8D 44 24 14 50 FF 74 24 68 80 E2 20 32 CA 88 4C 24 62 56 8B CF E8 ? ? ? ? 5F 5E 83 C4 48 C2 20 00 CC CC CC CC CC B8"),
                          this, name, sound, initParams, arg4, arg5, arg6);
}
