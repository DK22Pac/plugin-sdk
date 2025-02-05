/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class cDMAudio {
public:
    void PlayFrontEndSound(unsigned short frontend, unsigned int volume);
    void PlayLoadedMissionAudio(unsigned char slot);
    void ClearMissionAudio(unsigned char slot);
    void PreloadMissionAudio(unsigned char slot, const char* missionAudio);
    void PlayOneShot(int audioEntity, unsigned short shot, float volume);
    void SetRadioInCar(unsigned int radio);
    void PlayFrontEndTrack(unsigned int track, char flag);
    void StopFrontEndTrack();
    bool IsMP3RadioChannelAvailable();
    void SetEffectsFadeVol(unsigned char volume);
    void SetMusicFadeVol(unsigned char volume);
    void SetEffectsMasterVolume(unsigned char volume);
    void SetMusicMasterVolume(unsigned char volume);

};

extern cDMAudio& DMAudio;
