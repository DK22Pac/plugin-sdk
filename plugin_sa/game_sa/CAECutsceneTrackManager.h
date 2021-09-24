/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"

class PLUGIN_API CAECutsceneTrackManager {
public:
    unsigned char gap0[8];
    unsigned long m_nStatus;

public:
    void StopCutsceneTrack();
    void StartTrackPlayback();
    void Service(int time);
    void PreloadBeatTrack(char arg1, bool arg2);
    void PlayPreloadedCutsceneTrack();
    bool IsCutsceneTrackActive();
    char GetCutsceneTrackStatus();
};

VALIDATE_SIZE(CAECutsceneTrackManager, 0xC);

extern CAECutsceneTrackManager& AECutsceneTrackManager;
