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
VALIDATE_OFFSET(tMP3Sample, m_nLength, 0x0);
VALIDATE_OFFSET(tMP3Sample, m_nPosition, 0x4);
VALIDATE_OFFSET(tMP3Sample, m_nLastPosCheckTimer, 0x8);
VALIDATE_SIZE(tMP3Sample, 0xC);

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
VALIDATE_OFFSET(cMusicManager, m_bIsInitialised, 0x0);
VALIDATE_OFFSET(cMusicManager, m_bDisabled, 0x1);
VALIDATE_OFFSET(cMusicManager, m_nMusicMode, 0x2);
VALIDATE_OFFSET(cMusicManager, m_nCurrentStreamedSound, 0x3);
VALIDATE_OFFSET(cMusicManager, m_nPreviousStreamedSound, 0x4);
VALIDATE_OFFSET(cMusicManager, m_bFrontendTrackFinished, 0x5);
VALIDATE_OFFSET(cMusicManager, m_bPlayInFrontend, 0x6);
VALIDATE_OFFSET(cMusicManager, m_bSetNextStation, 0x7);
VALIDATE_OFFSET(cMusicManager, m_nAnnouncement, 0x8);
VALIDATE_OFFSET(cMusicManager, m_bPreviousPlayerInCar, 0x9);
VALIDATE_OFFSET(cMusicManager, m_bPlayerInCar, 0xA);
VALIDATE_OFFSET(cMusicManager, m_bAnnouncementInProgress, 0xB);
VALIDATE_OFFSET(cMusicManager, m_asMP3Samples, 0xC);
VALIDATE_OFFSET(cMusicManager, m_bResetTimers, 0x93C);
VALIDATE_OFFSET(cMusicManager, m_nResetTime, 0x940);
VALIDATE_OFFSET(cMusicManager, m_nLastTrackServiceTime, 0x944);
VALIDATE_OFFSET(cMusicManager, m_nTimer, 0x948);
VALIDATE_OFFSET(cMusicManager, m_bDoTrackService, 0x94C);
VALIDATE_OFFSET(cMusicManager, m_bIgnoreTimeDelay, 0x94D);
VALIDATE_OFFSET(cMusicManager, m_bDontServiceAmbienceTrack, 0x94E);
VALIDATE_OFFSET(cMusicManager, m_bRadioSetByScript, 0x94F);
VALIDATE_OFFSET(cMusicManager, m_nRadioStation, 0x950);
VALIDATE_OFFSET(cMusicManager, m_nRadioPosition, 0x954);
VALIDATE_OFFSET(cMusicManager, m_nRadioInCar, 0x958);
VALIDATE_SIZE(cMusicManager, 0x95C);

SUPPORTED_10EN_11EN_STEAM extern bool &bHasStarted;
SUPPORTED_10EN_11EN_STEAM extern int &gNumRetunePresses;
SUPPORTED_10EN_11EN_STEAM extern int &gRetuneCounter;
SUPPORTED_10EN_11EN_STEAM extern bool &bRadioOff;
SUPPORTED_10EN_11EN_STEAM extern cMusicManager &gMusicManager;

VALIDATE_SIZE(tMP3Sample, 0xC);
VALIDATE_SIZE(cMusicManager, 0x95C);

#include "meta/meta.cMusicManager.h"
