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
VALIDATE_OFFSET(tRadioSettings, m_djIndex, 0x0);
VALIDATE_OFFSET(tRadioSettings, field_10, 0x10);
VALIDATE_OFFSET(tRadioSettings, trackId, 0x14);
VALIDATE_OFFSET(tRadioSettings, field_18, 0x18);
VALIDATE_OFFSET(tRadioSettings, trackPlayTime, 0x1C);
VALIDATE_OFFSET(tRadioSettings, trackLength, 0x20);
VALIDATE_OFFSET(tRadioSettings, field_24, 0x24);
VALIDATE_OFFSET(tRadioSettings, m_nCurrentRadioStation, 0x25);
VALIDATE_OFFSET(tRadioSettings, m_nBassSet, 0x26);
VALIDATE_OFFSET(tRadioSettings, _pad, 0x27);
VALIDATE_OFFSET(tRadioSettings, m_fBassGain, 0x28);
VALIDATE_OFFSET(tRadioSettings, currRadioBC_, 0x2C);
VALIDATE_OFFSET(tRadioSettings, field_30, 0x30);
VALIDATE_OFFSET(tRadioSettings, field_31, 0x31);
VALIDATE_OFFSET(tRadioSettings, m_musicTrackIndices, 0x32);
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
VALIDATE_OFFSET(tRadioStationData, field_0, 0x0);
VALIDATE_OFFSET(tRadioStationData, field_4, 0x4);
VALIDATE_OFFSET(tRadioStationData, field_8, 0x8);
VALIDATE_OFFSET(tRadioStationData, m_nTimeRetuneStopped, 0xC);
VALIDATE_OFFSET(tRadioStationData, lastPlayingTime, 0x10);
VALIDATE_OFFSET(tRadioStationData, trackPlayTime, 0x14);
VALIDATE_OFFSET(tRadioStationData, field_18, 0x18);
VALIDATE_OFFSET(tRadioStationData, field_1C, 0x1C);
VALIDATE_OFFSET(tRadioStationData, field_20, 0x20);
VALIDATE_OFFSET(tRadioStationData, field_24, 0x24);
VALIDATE_OFFSET(tRadioStationData, field_25, 0x25);
VALIDATE_OFFSET(tRadioStationData, field_26, 0x26);
VALIDATE_OFFSET(tRadioStationData, lastGameClockDays, 0x27);
VALIDATE_OFFSET(tRadioStationData, lastGameClockHours, 0x28);
VALIDATE_SIZE(tRadioStationData, 0x2C);

struct PLUGIN_API tMusicTrackHistory {
    char m_indices[20];
};
VALIDATE_OFFSET(tMusicTrackHistory, m_indices, 0x0);
VALIDATE_SIZE(tMusicTrackHistory, 0x14);

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

    static void Load();
    static void Save();

    // 11 structures
    static tMusicTrackHistory *m_nMusicTrackIndexHistory;
};
VALIDATE_OFFSET(CAERadioTrackManager, field_0, 0x0);
VALIDATE_OFFSET(CAERadioTrackManager, field_1, 0x1);
VALIDATE_OFFSET(CAERadioTrackManager, field_2, 0x2);
VALIDATE_OFFSET(CAERadioTrackManager, field_3, 0x3);
VALIDATE_OFFSET(CAERadioTrackManager, field_4, 0x4);
VALIDATE_OFFSET(CAERadioTrackManager, field_5, 0x5);
VALIDATE_OFFSET(CAERadioTrackManager, m_bRetuneJustStarted, 0x6);
VALIDATE_OFFSET(CAERadioTrackManager, m_bRadioAutoSelect, 0x7);
VALIDATE_OFFSET(CAERadioTrackManager, field_8, 0x8);
VALIDATE_OFFSET(CAERadioTrackManager, m_nMonthDay, 0x16);
VALIDATE_OFFSET(CAERadioTrackManager, m_nClockHours, 0x17);
VALIDATE_OFFSET(CAERadioTrackManager, m_anPlayerStats, 0x18);
VALIDATE_OFFSET(CAERadioTrackManager, m_nTimeRadioStationRetuned, 0x50);
VALIDATE_OFFSET(CAERadioTrackManager, m_nTimeToDisplayRadioName, 0x54);
VALIDATE_OFFSET(CAERadioTrackManager, field_58, 0x58);
VALIDATE_OFFSET(CAERadioTrackManager, field_5C, 0x5C);
VALIDATE_OFFSET(CAERadioTrackManager, field_60, 0x60);
VALIDATE_OFFSET(CAERadioTrackManager, field_64, 0x64);
VALIDATE_OFFSET(CAERadioTrackManager, field_68, 0x68);
VALIDATE_OFFSET(CAERadioTrackManager, m_nStationsListed, 0x6C);
VALIDATE_OFFSET(CAERadioTrackManager, m_nStationsListDown, 0x70);
VALIDATE_OFFSET(CAERadioTrackManager, field_74, 0x74);
VALIDATE_OFFSET(CAERadioTrackManager, field_78, 0x78);
VALIDATE_OFFSET(CAERadioTrackManager, field_7C, 0x7C);
VALIDATE_OFFSET(CAERadioTrackManager, field_80, 0x80);
VALIDATE_OFFSET(CAERadioTrackManager, field_84, 0x84);
VALIDATE_OFFSET(CAERadioTrackManager, m_TempSettings, 0x88);
VALIDATE_OFFSET(CAERadioTrackManager, m_Settings, 0xC4);
VALIDATE_OFFSET(CAERadioTrackManager, m_RadioStationsData, 0x100);
VALIDATE_OFFSET(CAERadioTrackManager, gap33C, 0x33C);
VALIDATE_OFFSET(CAERadioTrackManager, field_348, 0x348);
VALIDATE_OFFSET(CAERadioTrackManager, field_368, 0x368);
VALIDATE_OFFSET(CAERadioTrackManager, field_36C, 0x36C);
VALIDATE_OFFSET(CAERadioTrackManager, field_36D, 0x36D);
VALIDATE_SIZE(CAERadioTrackManager, 0x370);

extern CAERadioTrackManager &AERadioTrackManager;

VALIDATE_SIZE(CAERadioTrackManager, 0x370);
