/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAEVehicleAudioEntity.h"

struct PLUGIN_API tRadioSettings {
    int TrackQueue[5];
    int CurrTrackID;
    int PrevTrackID;
    int PlayTime;
    int TrackLengthMs;
    char TrackFlags;
    eRadioID m_nCurrentRadioStation;
    char m_nBassSet;
    float m_fBassGain;
    char TrackTypes[5];
    char CurrTrackType;
    char PrevTrackType;
    char TrackIndices[5];
    char CurrTrackIdx;
    char PrevTrackIdx;
    char _pad[2];
};

VALIDATE_OFFSET(tRadioSettings, TrackQueue, 0x0);
VALIDATE_OFFSET(tRadioSettings, CurrTrackID, 0x14);
VALIDATE_OFFSET(tRadioSettings, PrevTrackID, 0x18);
VALIDATE_OFFSET(tRadioSettings, PlayTime, 0x1C);
VALIDATE_OFFSET(tRadioSettings, TrackLengthMs, 0x20);
VALIDATE_OFFSET(tRadioSettings, TrackFlags, 0x24);
VALIDATE_OFFSET(tRadioSettings, m_nCurrentRadioStation, 0x25);
VALIDATE_OFFSET(tRadioSettings, m_nBassSet, 0x26);
VALIDATE_OFFSET(tRadioSettings, m_fBassGain, 0x28);
VALIDATE_OFFSET(tRadioSettings, TrackTypes, 0x2C);
VALIDATE_OFFSET(tRadioSettings, CurrTrackType, 0x31);
VALIDATE_OFFSET(tRadioSettings, PrevTrackType, 0x32);
VALIDATE_OFFSET(tRadioSettings, TrackIndices, 0x33);
VALIDATE_OFFSET(tRadioSettings, CurrTrackIdx, 0x38);
VALIDATE_OFFSET(tRadioSettings, PrevTrackIdx, 0x39);
VALIDATE_OFFSET(tRadioSettings, _pad, 0x3A);
VALIDATE_SIZE(tRadioSettings, 0x3C);

struct PLUGIN_API tRadioStationData {
    int m_aElapsed[3];
    int m_iTimeInPauseModeInMs;
    int m_iTimeInMs;
    int m_iTrackPlayTime;
    int m_aTrackQueue[3];
    char m_aTrackTypes[3];
    char m_nGameClockDays;
    int m_nGameClockHours;
};

VALIDATE_OFFSET(tRadioStationData, m_aElapsed, 0x0);
VALIDATE_OFFSET(tRadioStationData, m_iTimeInPauseModeInMs, 0xC);
VALIDATE_OFFSET(tRadioStationData, m_iTimeInMs, 0x10);
VALIDATE_OFFSET(tRadioStationData, m_iTrackPlayTime, 0x14);
VALIDATE_OFFSET(tRadioStationData, m_aTrackQueue, 0x18);
VALIDATE_OFFSET(tRadioStationData, m_aTrackTypes, 0x24);
VALIDATE_OFFSET(tRadioStationData, m_nGameClockDays, 0x27);
VALIDATE_OFFSET(tRadioStationData, m_nGameClockHours, 0x28);
VALIDATE_SIZE(tRadioStationData, 0x2C);

struct PLUGIN_API tMusicTrackHistory {
    char m_indices[20];
};
VALIDATE_OFFSET(tMusicTrackHistory, m_indices, 0x0);
VALIDATE_SIZE(tMusicTrackHistory, 0x14);

class PLUGIN_API CAERadioTrackManager {
public:
    bool m_bInitialised;
    bool m_bDisplayStationName;
    char m_prev;
    bool m_bEnabledInPauseMode;
    bool m_bBassEnhance;
    bool m_bPauseMode;
    bool m_bRetuneJustStarted;
    bool m_bRadioAutoSelect;
    char m_nTracksInARow[14];
    unsigned char m_nSavedGameClockDays;
    unsigned char m_nSavedGameClockHours;
    int m_aListenTimes[14];
    unsigned int m_nTimeRadioStationRetuned;
    unsigned int m_nTimeToDisplayRadioName;
    int m_nSavedTimeMs;
    int m_nRetuneStartedTime;
    int field_60;
    int m_HwClientHandle;
    int m_nMode;
    int m_nStationsListed;
    int m_nStationsListDown;
    int m_nSavedRadioStationId;
    int m_iRadioStationMenuRequest;
    int m_iRadioStationScriptRequest;
    float m_f80;
    float m_f84;
    tRadioSettings m_TempSettings;
    tRadioSettings m_Settings;
    tRadioStationData m_RadioStationsData[13];
    unsigned char gap33C[12];
    char field_348[32];
    unsigned long field_368;
    unsigned char field_36C;
    char field_36D[3];

public:
    bool IsVehicleRadioActive();
    char* GetRadioStationName(signed char id);
    void StartRadio(int stationId, float bass, int arg, char unused);
    void StopRadio(tVehicleAudioSettings* settings, char arg);

    static void Load();
    static void Save();

    static tMusicTrackHistory* m_nMusicTrackIndexHistory;
};

VALIDATE_OFFSET(CAERadioTrackManager, m_bInitialised, 0x0);
VALIDATE_OFFSET(CAERadioTrackManager, m_bDisplayStationName, 0x1);
VALIDATE_OFFSET(CAERadioTrackManager, m_prev, 0x2);
VALIDATE_OFFSET(CAERadioTrackManager, m_bEnabledInPauseMode, 0x3);
VALIDATE_OFFSET(CAERadioTrackManager, m_bBassEnhance, 0x4);
VALIDATE_OFFSET(CAERadioTrackManager, m_bPauseMode, 0x5);
VALIDATE_OFFSET(CAERadioTrackManager, m_bRetuneJustStarted, 0x6);
VALIDATE_OFFSET(CAERadioTrackManager, m_bRadioAutoSelect, 0x7);
VALIDATE_OFFSET(CAERadioTrackManager, m_nTracksInARow, 0x8);
VALIDATE_OFFSET(CAERadioTrackManager, m_nSavedGameClockDays, 0x16);
VALIDATE_OFFSET(CAERadioTrackManager, m_nSavedGameClockHours, 0x17);
VALIDATE_OFFSET(CAERadioTrackManager, m_aListenTimes, 0x18);
VALIDATE_OFFSET(CAERadioTrackManager, m_nTimeRadioStationRetuned, 0x50);
VALIDATE_OFFSET(CAERadioTrackManager, m_nTimeToDisplayRadioName, 0x54);
VALIDATE_OFFSET(CAERadioTrackManager, m_nSavedTimeMs, 0x58);
VALIDATE_OFFSET(CAERadioTrackManager, m_nRetuneStartedTime, 0x5C);
VALIDATE_OFFSET(CAERadioTrackManager, field_60, 0x60);
VALIDATE_OFFSET(CAERadioTrackManager, m_HwClientHandle, 0x64);
VALIDATE_OFFSET(CAERadioTrackManager, m_nMode, 0x68);
VALIDATE_OFFSET(CAERadioTrackManager, m_nStationsListed, 0x6C);
VALIDATE_OFFSET(CAERadioTrackManager, m_nStationsListDown, 0x70);
VALIDATE_OFFSET(CAERadioTrackManager, m_nSavedRadioStationId, 0x74);
VALIDATE_OFFSET(CAERadioTrackManager, m_iRadioStationMenuRequest, 0x78);
VALIDATE_OFFSET(CAERadioTrackManager, m_iRadioStationScriptRequest, 0x7C);
VALIDATE_OFFSET(CAERadioTrackManager, m_f80, 0x80);
VALIDATE_OFFSET(CAERadioTrackManager, m_f84, 0x84);
VALIDATE_OFFSET(CAERadioTrackManager, m_TempSettings, 0x88);
VALIDATE_OFFSET(CAERadioTrackManager, m_Settings, 0xC4);
VALIDATE_OFFSET(CAERadioTrackManager, m_RadioStationsData, 0x100);
VALIDATE_OFFSET(CAERadioTrackManager, gap33C, 0x33C);
VALIDATE_OFFSET(CAERadioTrackManager, field_348, 0x348);
VALIDATE_OFFSET(CAERadioTrackManager, field_368, 0x368);
VALIDATE_OFFSET(CAERadioTrackManager, field_36C, 0x36C);
VALIDATE_OFFSET(CAERadioTrackManager, field_36D, 0x36D);
VALIDATE_SIZE(CAERadioTrackManager, 0x370);

extern CAERadioTrackManager& AERadioTrackManager;

VALIDATE_SIZE(CAERadioTrackManager, 0x370);
