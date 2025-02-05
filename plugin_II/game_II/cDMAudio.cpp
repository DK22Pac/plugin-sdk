/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "cDMAudio.h"

cDMAudio& DMAudio = *(cDMAudio*)0x5D85A0;
tAudioObject& cDMAudio::NewFrontendAudioObject = *(tAudioObject*)0x5EAF50;
tAudioObject& cDMAudio::OldFrontendAudioObject = *(tAudioObject*)0x5EAF40;

char cDMAudio::GetEffectsMasterVolume() {
    return plugin::CallMethodAndReturn<char, 0x4105F0, cDMAudio*>(this);
}

char cDMAudio::GetMusicMasterVolume() {
    return plugin::CallMethodAndReturn<char, 0x410630, cDMAudio*>(this);
}

void cDMAudio::SetMusicMasterVolume(unsigned char volume) {
    plugin::CallMethod<0x410600, cDMAudio*, unsigned char>(this, volume);
}

void cDMAudio::SetEffectsMasterVolume(unsigned char volume) {
    plugin::CallMethod<0x4105C0, cDMAudio*, unsigned char>(this, volume);
}

void cDMAudio::SetCurrent3DProvider(unsigned char provider) {
    plugin::CallMethod<0x410670, cDMAudio*, unsigned char>(this, provider);
}

void cDMAudio::PlayVocal(unsigned short id) {
    plugin::CallMethod<0x4105B0, cDMAudio*>(this, id);
}

void cDMAudio::ReleaseDigitalHandle() {
    plugin::CallMethod<0x410640, cDMAudio*>(this);
}

int cDMAudio::CreateEntity(void* e) {
    return plugin::CallMethodAndReturn<int, 0x410530, cDMAudio*, void*>(this, e);
}

void cDMAudio::DestroyEntity(int audioEntity) {
    plugin::CallMethod<0x410540, cDMAudio*, int>(this, audioEntity);
}
