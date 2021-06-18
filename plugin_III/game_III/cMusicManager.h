/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

struct PLUGIN_API tMP3Sample {
    unsigned int m_nLength;
    unsigned int m_nPosition;
    unsigned int m_nLastPosCheckTimer;
};

class PLUGIN_API cMusicManager {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(cMusicManager)

public:
    bool m_bIsInitialised;
    bool m_bDisabled;
    unsigned char m_nMusicMode;
    unsigned char m_nCurrentStreamedSound;
    unsigned char m_nPreviousStreamedSound;
    bool m_bFrontendTrackFinished;
    bool m_bPlayInFrontend;
    bool m_bSetNextStation;
    unsigned char m_nAnnouncement;
    bool m_bPreviousPlayerInCar;
    bool m_bPlayerInCar;
    bool m_bAnnouncementInProgress;
    tMP3Sample m_asMP3Samples[196];
    bool m_bResetTimers;
    unsigned int m_nResetTime;
    unsigned int m_nLastTrackServiceTime;
    unsigned int m_nTimer;
    bool m_bDoTrackService;
    bool m_bIgnoreTimeDelay;
    bool m_bDontServiceAmbienceTrack;
    bool m_bRadioSetByScript;
    unsigned char m_nRadioStation;
    int m_nRadioPosition;
    unsigned char m_nRadioInCar;


    SUPPORTED_10EN_11EN_STEAM static char &nFramesSinceCutsceneEnded;
    SUPPORTED_10EN_11EN_STEAM static float &fVol;
    SUPPORTED_10EN_11EN_STEAM static char &cCheck;
    SUPPORTED_10EN_11EN_STEAM static wchar_t *&pCurrentStation;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &cDisplay;

    SUPPORTED_10EN_11EN_STEAM void ChangeMusicMode(unsigned char mode);
    SUPPORTED_10EN_11EN_STEAM bool ChangeRadioChannel();
    SUPPORTED_10EN_11EN_STEAM void ComputeAmbienceVol(unsigned char reset, unsigned char &outVolume);
    SUPPORTED_10EN_11EN_STEAM void DisplayRadioStationName();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetCarTuning();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetNextCarTuning();
    SUPPORTED_10EN_11EN_STEAM unsigned char GetRadioInCar();
    SUPPORTED_10EN_11EN_STEAM unsigned int GetTrackStartPos(unsigned char track);
    SUPPORTED_10EN_11EN_STEAM void Initialise();
    SUPPORTED_10EN_11EN_STEAM void PlayAnnouncement(unsigned char announcement);
    SUPPORTED_10EN_11EN_STEAM void PlayFrontEndTrack(unsigned char track, unsigned char bPlayInFrontend);
    SUPPORTED_10EN_11EN_STEAM void PlayPreloadedCutSceneMusic();
    SUPPORTED_10EN_11EN_STEAM bool PlayerInCar();
    SUPPORTED_10EN_11EN_STEAM void PreloadCutSceneMusic(unsigned char sound);
    SUPPORTED_10EN_11EN_STEAM void ResetMusicAfterReload();
    SUPPORTED_10EN_11EN_STEAM void ResetTimers(unsigned int time);
    SUPPORTED_10EN_11EN_STEAM void Service();
    SUPPORTED_10EN_11EN_STEAM void ServiceAmbience();
    SUPPORTED_10EN_11EN_STEAM bool ServiceAnnouncement();
    SUPPORTED_10EN_11EN_STEAM void ServiceFrontEndMode();
    SUPPORTED_10EN_11EN_STEAM void ServiceGameMode();
    SUPPORTED_10EN_11EN_STEAM void ServiceTrack();
    SUPPORTED_10EN_11EN_STEAM void SetRadioChannelByScript(unsigned char station, int position);
    SUPPORTED_10EN_11EN_STEAM void SetRadioInCar(unsigned int radioStation);
    SUPPORTED_10EN_11EN_STEAM void StopCutSceneMusic();
    SUPPORTED_10EN_11EN_STEAM void StopFrontEndTrack();
    SUPPORTED_10EN_11EN_STEAM void Terminate();
    SUPPORTED_10EN_11EN_STEAM bool UsesPoliceRadio(CVehicle *vehicle);
};

SUPPORTED_10EN_11EN_STEAM extern bool &bHasStarted;
SUPPORTED_10EN_11EN_STEAM extern int &gNumRetunePresses;
SUPPORTED_10EN_11EN_STEAM extern int &gRetuneCounter;
SUPPORTED_10EN_11EN_STEAM extern bool &bRadioOff;
SUPPORTED_10EN_11EN_STEAM extern cMusicManager &gMusicManager;

VALIDATE_SIZE(tMP3Sample, 0xC);
VALIDATE_SIZE(cMusicManager, 0x95C);

#include "meta/meta.cMusicManager.h"
