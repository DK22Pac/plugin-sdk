/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audRadioAudioEntity.h"
#include "Patch.h"

audRadioAudioEntity* RadioAudioEntityAddr;
audRadioAudioEntity& RadioAudioEntity = *(audRadioAudioEntity*)RadioAudioEntityAddr;

static uint32_t audRadioAudioEntity__UnpauseRadioAddr;
void audRadioAudioEntity::UnpauseRadio() {
    plugin::CallMethodDyn<audRadioAudioEntity*>(audRadioAudioEntity__UnpauseRadioAddr, this);
}

static uint32_t audRadioAudioEntity__SetRadioStationIndexAddr;
void audRadioAudioEntity::SetRadioStationIndex(int32_t index) {
    plugin::CallMethodDyn<audRadioAudioEntity*>(audRadioAudioEntity__SetRadioStationIndexAddr, this, index);
}

static uint32_t audRadioAudioEntity__SetRadioStationAddr;
void audRadioAudioEntity::SetRadioStation(const char* name) {
    plugin::CallMethodDyn<audRadioAudioEntity*>(audRadioAudioEntity__SetRadioStationAddr, this, name);
}

template<>
void plugin::InitPatterns<audRadioAudioEntity>() {
    RadioAudioEntityAddr = (audRadioAudioEntity*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E9 ? ? ? ? CC CC B9 ? ? ? ? E9 ? ? ? ? CC CC CC CC CC CC B9 ? ? ? ? E8", 1));

    audRadioAudioEntity__UnpauseRadioAddr = plugin::GetPattern("83 3D ? ? ? ? ? 74 25 A1", 0);
    audRadioAudioEntity__SetRadioStationIndexAddr = plugin::GetPattern("8B 44 24 04 89 81 ? ? ? ? C2 04 00 CC CC CC 0F B6 0D", 0);
    audRadioAudioEntity__SetRadioStationAddr = plugin::GetPattern("8B 44 24 04 56 8B F1 BA", 0);

}
