/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audRadioAudioEntity.h"
#include "Patch.h"

audRadioAudioEntity& RadioAudioEntity = *gpatternt(audRadioAudioEntity, "B9 ? ? ? ? E9 ? ? ? ? CC CC B9 ? ? ? ? E9 ? ? ? ? CC CC CC CC CC CC B9 ? ? ? ? E8", 0);

void audRadioAudioEntity::UnpauseRadio() {
    plugin::CallMethodDyn<audRadioAudioEntity*>(gpattern("83 3D ? ? ? ? ? 74 25 A1"), this);
}

void audRadioAudioEntity::SetRadioStationIndex(int32_t index) {
    plugin::CallMethodDyn<audRadioAudioEntity*>(gpattern("8B 44 24 04 89 81 ? ? ? ? C2 04 00 CC CC CC 0F B6 0D"), this, index);
}

void audRadioAudioEntity::SetRadioStation(const char* name) {
    plugin::CallMethodDyn<audRadioAudioEntity*>(gpattern("8B 44 24 04 56 8B F1 BA"), this, name);
}
