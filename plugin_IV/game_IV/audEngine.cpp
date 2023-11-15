/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audEngine.h"

audEngine** AudioEngine = gpatternt(audEngine*, "89 35 ? ? ? ? E8 ? ? ? ? A1", 2);
int32_t& AudioEngineTimeInMilliseconds = *gpatternt(int32_t, "89 0D ? ? ? ? B9 ? ? ? ? A2", 2);

void audEngine::RequestNewSound(int32_t time) {
    plugin::CallMethodDyn(gpattern("55 8B EC 83 E4 F8 83 EC 44 53 56 57 8B F9"), this, time);
}
