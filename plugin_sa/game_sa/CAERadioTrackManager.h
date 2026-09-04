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
    Int32 TrackIDs[5];
    Int32 PlayingTrackID;
    Int32 PreviousTrackID;
    Int32 PlayTime;
    Int32 TrackLengthMs;
    UInt8 TrackFlags;
    Int8 StationID; // eRadioID
    Int8 BassSetting;
    Int8 _pad27;
    float BassFactor;
    Int8 TrackTypes[5];
    Int8 PlayingTrackType;
    Int8 PreviousTrackType;
    Int8 MusicTrackIndices[5];
    Int8 PlayingTrackMusicTrackIndex;
    Int8 PreviousMusicTrackIndex;
    Int8 _pad[2];
};
VALIDATE_OFFSET(tRadioSettings, TrackIDs, 0x0);
VALIDATE_OFFSET(tRadioSettings, PlayingTrackID, 0x14);
VALIDATE_OFFSET(tRadioSettings, PreviousTrackID, 0x18);
VALIDATE_OFFSET(tRadioSettings, PlayTime, 0x1C);
VALIDATE_OFFSET(tRadioSettings, TrackLengthMs, 0x20);
VALIDATE_OFFSET(tRadioSettings, TrackFlags, 0x24);
VALIDATE_OFFSET(tRadioSettings, StationID, 0x25);
VALIDATE_OFFSET(tRadioSettings, BassSetting, 0x26);
VALIDATE_OFFSET(tRadioSettings, _pad27, 0x27);
VALIDATE_OFFSET(tRadioSettings, BassFactor, 0x28);
VALIDATE_OFFSET(tRadioSettings, TrackTypes, 0x2C);
VALIDATE_OFFSET(tRadioSettings, PlayingTrackType, 0x31);
VALIDATE_OFFSET(tRadioSettings, PreviousTrackType, 0x32);
VALIDATE_OFFSET(tRadioSettings, MusicTrackIndices, 0x33);
VALIDATE_OFFSET(tRadioSettings, PlayingTrackMusicTrackIndex, 0x38);
VALIDATE_OFFSET(tRadioSettings, PreviousMusicTrackIndex, 0x39);
VALIDATE_OFFSET(tRadioSettings, _pad, 0x3A);
VALIDATE_SIZE(tRadioSettings, 0x3C);

struct PLUGIN_API tRadioStationTracking {
    Int32 TrackingPeriodsMs[3];
    Int32 GameTimeWhenStartedMs;
    Int32 GameTimeWhenStoppedMs;
    Int32 OldPlayTimeMs;
    Int32 OldTrackIDs[3];
    Int8 OldTrackTypes[3];
    Int8 GameClockDaysWhenStopped;
    Int8 GameClockHoursWhenStopped;
};
VALIDATE_OFFSET(tRadioStationTracking, TrackingPeriodsMs, 0x0);
VALIDATE_OFFSET(tRadioStationTracking, GameTimeWhenStartedMs, 0xC);
VALIDATE_OFFSET(tRadioStationTracking, GameTimeWhenStoppedMs, 0x10);
VALIDATE_OFFSET(tRadioStationTracking, OldPlayTimeMs, 0x14);
VALIDATE_OFFSET(tRadioStationTracking, OldTrackIDs, 0x18);
VALIDATE_OFFSET(tRadioStationTracking, OldTrackTypes, 0x24);
VALIDATE_OFFSET(tRadioStationTracking, GameClockDaysWhenStopped, 0x27);
VALIDATE_OFFSET(tRadioStationTracking, GameClockHoursWhenStopped, 0x28);
VALIDATE_SIZE(tRadioStationTracking, 0x2C);

struct PLUGIN_API tMusicTrackHistory {
    char m_indices[20];
};
VALIDATE_OFFSET(tMusicTrackHistory, m_indices, 0x0);
VALIDATE_SIZE(tMusicTrackHistory, 0x14);

class PLUGIN_API CAERadioTrackManager {
public:
    Bool8 m_bStationChangePending;
    Bool8 m_bDisplayNewStationName;
    Bool8 m_bReadyToRetune;
    Bool8 m_bPlayRadioDuringPause;
    Bool8 m_bUseBassEnhance;
    Bool8 m_bPausedLastFrame;
    Bool8 m_bRetuneStartedThisFrame;
    Bool8 m_bUseRadioAutoRetune;
    Int8 m_nTracksSinceLastAdvertOrDJList[14];
    Int8 m_nLastVehicleExitGameClockDays;
    Int8 m_nLastVehicleExitGameClockHours;
    Int32 m_nStationListenTimes[14];
    UInt32 m_nLastRetuneTimeMs;
    UInt32 m_nStationNameDisplayEndTimeMs;
    UInt32 m_nLastVehicleExitTimeMs;
    UInt32 m_nRetuneTimeMs;
    UInt32 m_nLastPlayStartTimeMs;
    int m_nHardwareClientHandle;
    int m_nRadioStatus;
    int m_nRetunesPending;
    int m_nPreviousRetunesPending;
    int m_nLastVehicleStationID;
    int m_nRetuneStationID;
    int m_nScriptRetuneStationID;
    float m_fDialogueRadioDuckingVolume;
    float m_fDialogueRadioDuckingReleaseStep;
    tRadioSettings m_RequestedSettings;
    tRadioSettings m_ActiveSettings;
    tRadioStationTracking m_StationTrackingList[14];
    UInt32 m_numInvalidTracks;
    Int8 m_lastRadioMode;

public:
    bool IsVehicleRadioActive();
    char* GetRadioStationName(signed char id);
    void StartRadio(int stationId, float bass, int arg, char unused);
    void StopRadio(tVehicleAudioSettings* settings, char arg);

    static void Load();
    static void Save();

    static tMusicTrackHistory* m_nMusicTrackIndexHistory;
};
VALIDATE_OFFSET(CAERadioTrackManager, m_bStationChangePending, 0x0);
VALIDATE_OFFSET(CAERadioTrackManager, m_bDisplayNewStationName, 0x1);
VALIDATE_OFFSET(CAERadioTrackManager, m_bReadyToRetune, 0x2);
VALIDATE_OFFSET(CAERadioTrackManager, m_bPlayRadioDuringPause, 0x3);
VALIDATE_OFFSET(CAERadioTrackManager, m_bUseBassEnhance, 0x4);
VALIDATE_OFFSET(CAERadioTrackManager, m_bPausedLastFrame, 0x5);
VALIDATE_OFFSET(CAERadioTrackManager, m_bRetuneStartedThisFrame, 0x6);
VALIDATE_OFFSET(CAERadioTrackManager, m_bUseRadioAutoRetune, 0x7);
VALIDATE_OFFSET(CAERadioTrackManager, m_nTracksSinceLastAdvertOrDJList, 0x8);
VALIDATE_OFFSET(CAERadioTrackManager, m_nLastVehicleExitGameClockDays, 0x16);
VALIDATE_OFFSET(CAERadioTrackManager, m_nLastVehicleExitGameClockHours, 0x17);
VALIDATE_OFFSET(CAERadioTrackManager, m_nStationListenTimes, 0x18);
VALIDATE_OFFSET(CAERadioTrackManager, m_nLastRetuneTimeMs, 0x50);
VALIDATE_OFFSET(CAERadioTrackManager, m_nStationNameDisplayEndTimeMs, 0x54);
VALIDATE_OFFSET(CAERadioTrackManager, m_nLastVehicleExitTimeMs, 0x58);
VALIDATE_OFFSET(CAERadioTrackManager, m_nRetuneTimeMs, 0x5C);
VALIDATE_OFFSET(CAERadioTrackManager, m_nLastPlayStartTimeMs, 0x60);
VALIDATE_OFFSET(CAERadioTrackManager, m_nHardwareClientHandle, 0x64);
VALIDATE_OFFSET(CAERadioTrackManager, m_nRadioStatus, 0x68);
VALIDATE_OFFSET(CAERadioTrackManager, m_nRetunesPending, 0x6C);
VALIDATE_OFFSET(CAERadioTrackManager, m_nPreviousRetunesPending, 0x70);
VALIDATE_OFFSET(CAERadioTrackManager, m_nLastVehicleStationID, 0x74);
VALIDATE_OFFSET(CAERadioTrackManager, m_nRetuneStationID, 0x78);
VALIDATE_OFFSET(CAERadioTrackManager, m_nScriptRetuneStationID, 0x7C);
VALIDATE_OFFSET(CAERadioTrackManager, m_fDialogueRadioDuckingVolume, 0x80);
VALIDATE_OFFSET(CAERadioTrackManager, m_fDialogueRadioDuckingReleaseStep, 0x84);
VALIDATE_OFFSET(CAERadioTrackManager, m_RequestedSettings, 0x88);
VALIDATE_OFFSET(CAERadioTrackManager, m_ActiveSettings, 0xC4);
VALIDATE_OFFSET(CAERadioTrackManager, m_StationTrackingList, 0x100);
VALIDATE_OFFSET(CAERadioTrackManager, m_numInvalidTracks, 0x368);
VALIDATE_OFFSET(CAERadioTrackManager, m_lastRadioMode, 0x36C);
VALIDATE_SIZE(CAERadioTrackManager, 0x370);

extern CAERadioTrackManager& AERadioTrackManager;
