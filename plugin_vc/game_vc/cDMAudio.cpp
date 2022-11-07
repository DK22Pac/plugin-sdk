/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cDMAudio.h"

cDMAudio& DMAudio = *(cDMAudio*)0xA10B8A;

void cDMAudio::PlayFrontEndSound(unsigned short frontend, unsigned int volume) {
    plugin::CallMethod<0x5F9960, cDMAudio*, unsigned short, unsigned int>(this, frontend, volume);
}

void cDMAudio::PlayLoadedMissionAudio(unsigned char slot) {
    plugin::CallMethod<0x5F97B0, cDMAudio*, unsigned char>(this, slot);
}

void cDMAudio::ClearMissionAudio(unsigned char slot) {
    plugin::CallMethod<0x5F9770, cDMAudio*, unsigned char>(this, slot);
}

void cDMAudio::PreloadMissionAudio(unsigned char slot, const char* missionAudio) {
    plugin::CallMethod<0x5F9820, cDMAudio*, unsigned char, const char*>(this, slot, missionAudio);
}

void cDMAudio::PlayOneShot(int audioEntity, unsigned short shot, float volume) {
    plugin::CallMethod<0x5F9DA0, cDMAudio*, int, unsigned short, float>(this, audioEntity, shot, volume);
}

void cDMAudio::SetRadioInCar(unsigned int radio) {
    plugin::CallMethod<0x5F9730, cDMAudio*, unsigned int>(this, radio);
}

void cDMAudio::PlayFrontEndTrack(unsigned int track, char flag) {
    plugin::CallMethod<0x5F9910, cDMAudio*, unsigned int, char>(this, track, flag);
}
