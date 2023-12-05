/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audFrontendAudioEntity.h"

audFrontendAudioEntity& g_FrontendAudioEntity = *gpatternt(audFrontendAudioEntity, "B9 ? ? ? ? E8 ? ? ? ? 8D 44 24 38", 1);

void audFrontendAudioEntity::ReportFrontendAudioEvent(const char* name) {
    plugin::CallMethodDyn(gpattern("83 EC 48 56 8B F1 8D 4C 24 04 E8 ? ? ? ? 80 4C 24"), this, name);
}

void audFrontendAudioEntity::StartLoadingTune() {
    plugin::CallMethodDyn(gpattern("83 EC 48 B8 ? ? ? ? 57 8B F9 66 39 47 04 74 76 83 7F 50 00 56 8D 77 50 75 6B 8D 4C 24 08 E8 ? ? ? ? FF 35 ? ? ? ? 8D 44 24 50 50 E8 ? ? ? ? 83 C4 08 8D 44 24 08 6A 00 6A 00 6A FF 50 56 68 ? ? ? ? 8B CF C7 44 24 ? ? ? ? ? E8 ? ? ? ? 83 3E 00 74 2A 6A FF 6A 01 68 ? ? ? ? E8 ? ? ? ? 8B 0E 83 C4 04 50 E8 ? ? ? ? FF 35 ? ? ? ? 8B 0D ? ? ? ? E8 ? ? ? ? 5E 5F 83 C4 48 C3 CC CC CC CC 83 EC 48"), this);
}

void audFrontendAudioEntity::StopLoadingTune(bool arg1) {
    plugin::CallMethodDyn(gpattern("83 EC 48 53 56 8B F1 E8"), this, arg1);
}

void audFrontendAudioEntity::TriggerMissionCompleteAudioEvent(int32_t index) {
    plugin::CallMethodDyn(gpattern("83 EC 44 A1 ? ? ? ? 33 C4 89 44 24 40 56 8B F1"), this, index);
}
