/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

struct tMP3Sample {
    unsigned int m_nLength;
    unsigned int m_nPosition;
    unsigned int m_nLastPosCheckTimer;
};

VALIDATE_SIZE(tMP3Sample, 0xC);

class cMusicManager {
public:
    bool m_bIsInitialised;
    bool field_1;
    unsigned char m_nMusicMode;
    unsigned char m_nCurrentStreamedSound;
    unsigned char m_nPreviousStreamedSound;
    bool field_5;
    unsigned char field_6;
    bool field_7;
    unsigned char m_nAnnouncement;
    bool m_bPreviousPlayerInCar;
    bool m_bPlayerInCar;
    bool m_bAnnouncementInProgress;
    tMP3Sample m_asMP3Samples[196];
    char field_2364;
    char field_2365;
    char field_2366;
    char field_2367;
    unsigned int field_2368;
    unsigned int field_2372;
    unsigned int field_2376;
    bool field_2380;
    bool field_2381;
    bool field_2382;
    bool m_bRadioSetByScript;
    unsigned char m_nRadioStation;
    char field_2385;
    char field_2386;
    char field_2387;
    int m_nRadioPosition;
    char m_nRadioInCar;
    char field_2393;
    char field_2394;
    char field_2395;
        

    ~cMusicManager();
    cMusicManager();
    bool UsesPoliceRadio(CVehicle* vehicle);
    void Terminate();
    void StopFrontEndTrack();
    void StopCutSceneMusic();
    void SetRadioInCar(unsigned int radioStation);
    void SetRadioChannelByScript(unsigned char station, int position);
    void ServiceTrack();
    void ServiceGameMode();
    void ServiceFrontEndMode();
    bool ServiceAnnouncement();
    void ServiceAmbience();
    void Service();
    void ResetTimers(unsigned int time);
    void ResetMusicAfterReload();
    void PreloadCutSceneMusic(unsigned char sound);
    bool PlayerInCar();
    void PlayPreloadedCutSceneMusic();
    void PlayFrontEndTrack(unsigned char sound, unsigned char arg1);
    void PlayAnnouncement(unsigned char announcement);
    void Initialise();
    unsigned int GetTrackStartPos(unsigned char station);
    unsigned char GetRadioInCar();
    unsigned char GetNextCarTuning();
    unsigned char GetCarTuning();
    void DisplayRadioStationName();
    void ComputeAmbienceVol(unsigned char arg0, unsigned char& arg1);
    bool ChangeRadioChannel();
    void ChangeMusicMode(unsigned char arg0);
};

VALIDATE_SIZE(cMusicManager, 0x95C);

extern cMusicManager &gMusicManager;
