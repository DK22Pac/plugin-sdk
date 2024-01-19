/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "audRadioAudioEntity.h"

audRadioAudioEntity& g_RadioAudioEntity = *gpatternt(audRadioAudioEntity, "B9 ? ? ? ? E9 ? ? ? ? CC CC B9 ? ? ? ? E9 ? ? ? ? CC CC CC CC CC CC B9 ? ? ? ? E8", 1);

bool& audRadioAudioEntity::ms_IsMobilePhoneRadioActive = *gpatternt(bool, "C6 05 ? ? ? ? ? 8B 46 28 5F", 2);

void audRadioAudioEntity::RetuneToStation(const char* stationName) {
    plugin::CallMethodDyn(gpattern("8B 44 24 04 56 8B F1 BA"), this, stationName);
}

void audRadioAudioEntity::RetuneToStation(uint32_t hashName) {
    plugin::CallMethodDyn(gpattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 83 C4 04 85 C0"), this, hashName);
}

void audRadioAudioEntity::RetuneToStationIndex(int32_t index) {
    plugin::CallMethodDyn(gpattern("8B 44 24 04 89 81 ? ? ? ? C2 04 00 CC CC CC 0F B6 0D"), this, index);
}

void audRadioAudioEntity::PauseRadio() {
    plugin::CallMethodDyn(gpattern("C6 05 ? ? ? ? ? C3 CC CC CC CC CC CC CC CC 83 EC 0C"), this);
}

void audRadioAudioEntity::UnpauseRadio() {
    plugin::CallMethodDyn(gpattern("83 3D ? ? ? ? ? 74 25 A1"), this);
}

int32_t audRadioAudioEntity::GetAudibleMusicTrackTextId() {
    return plugin::CallMethodAndReturnDyn<int32_t>(gpattern("83 EC 08 56 6A 00"), this);
}

void audRadioAudioEntity::RetuneRadioUpDown(int8_t up) {
    plugin::CallDyn(gpattern("83 EC 24 E8"), up);
}

void audRadioAudioEntity::TurnOff(int16_t arg1) {
    plugin::CallDyn(gpattern("83 EC 10 80 7C 24"), arg1);
}

void audRadioAudioEntity::TurnOn(int16_t arg1) {
    plugin::CallDyn(gpattern("83 EC 08 80 7C 24 ? ? 0F 84"), arg1);
}

bool audRadioAudioEntity::CanRetune() {
    return plugin::CallAndReturnDyn<bool>(gpattern("B9 ? ? ? ? E8 ? ? ? ? 84 C0 75 0D 6A 01"));
}
