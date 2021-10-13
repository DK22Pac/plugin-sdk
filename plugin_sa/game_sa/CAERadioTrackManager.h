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
    int m_djIndex[4];
    int field_10;
    int trackId;
    int field_18;
    int trackPlayTime;
    int trackLength;
    char field_24;
    char m_nCurrentRadioStation;
    char m_nBassSet;
    char _pad;
    float m_fBassGain;
    char currRadioBC_[4];
    char field_30;
    char field_31;
    char m_musicTrackIndices[10];
};

VALIDATE_SIZE(tRadioSettings, 0x3C);

struct PLUGIN_API tRadioStationData {
    int field_0;
    int field_4;
    int field_8;
    int m_nTimeRetuneStopped;
    int lastPlayingTime;
    int trackPlayTime;
    int field_18;
    int field_1C;
    int field_20;
    char field_24;
    char field_25;
    char field_26;
    char lastGameClockDays;
    int lastGameClockHours;
};

VALIDATE_SIZE(tRadioStationData, 0x2C);

struct PLUGIN_API tMusicTrackHistory {
    char m_indices[20];
};

class PLUGIN_API CAERadioTrackManager {
public:
    unsigned char field_0;
    unsigned char field_1;
    unsigned char field_2;
    unsigned char field_3;
    unsigned char field_4;
    unsigned char field_5;
    bool m_bRetuneJustStarted;
    bool m_bRadioAutoSelect;
    char field_8[14];
    unsigned char m_nMonthDay;
    unsigned char m_nClockHours;
    int m_anPlayerStats[14];
    unsigned int m_nTimeRadioStationRetuned;
    unsigned int m_nTimeToDisplayRadioName;
    int field_58;
    int field_5C;
    int field_60;
    int field_64;
    int field_68;
    int m_nStationsListed;
    int m_nStationsListDown;
    unsigned long field_74;
    unsigned long field_78;
    unsigned long field_7C;
    unsigned long field_80;
    unsigned long field_84;
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
    char *GetRadioStationName(signed char id);
    void StartRadio(int stationId, float bass, int arg, char unused);
    void StopRadio(tVehicleAudioSettings* settings, char arg);

    // 11 structures
    static tMusicTrackHistory *m_nMusicTrackIndexHistory;
};

extern CAERadioTrackManager &AERadioTrackManager;

VALIDATE_SIZE(CAERadioTrackManager, 0x370);
