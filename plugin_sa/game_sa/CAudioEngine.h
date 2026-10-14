/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "AudioTypes.h"
#include "CAEFrontendAudioEntity.h"
#include "CAEPedlessSpeechAudioEntity.h"
#include "CAETwinLoopSoundEntity.h"
#include "CAEScriptAudioEntity.h"
#include "CAECollisionAudioEntity.h"
#include "CAEVehicleAudioEntity.h"
#include "eAudioEvents.h"
#include "eRadioID.h"

class PLUGIN_API CAudioEngine {
public:
    bool m_bPlayingMissionCompleteTrack;
    bool m_bStoppingMissionCompleteTrack;
    eRadioID m_nCurrentRadiostationId;
    eRadioID m_nSavedRadioStationId;
    int m_nBackgroundAudioChannel;
    tBeatInfo m_beatInfo;
    CAEFrontendAudioEntity m_FrontendAudio;
    CAETwinLoopSoundEntity field_150;
    CAETwinLoopSoundEntity field_1F8;
    CAEScriptAudioEntity m_scriptAudio;
    CAECollisionAudioEntity m_collisionAudio;
    int m_pWeaponAudio;
    CAEPedlessSpeechAudioEntity m_pedlessSpeechAudio;
    char field_1F38[24];
    CAEDoorAudioEntity m_doorAudio;

public:
    void Initialise();
    void Restart();
    void Shutdown();
    void SetEffectsMasterVolume(char volume);
    void SetMusicMasterVolume(char volume);
    void SetBassEnhanceOnOff(bool on);
    void SetRadioAutoRetuneOnOff(bool on);
    void RetuneRadio(eRadioID stationId);
    CReference* ReportFrontendAudioEvent(int id, float volume, float speed);
    void ReportMissionAudioEvent(eAudioEvents audioEvent, CVector const* coords);
    void Service();
    void ServiceLoadingTune(float fade);
    void StartRadio(eRadioID radioStation, char arg);
    void StopRadio(tVehicleAudioSettings* settings, bool arg);
    bool IsRadioRetuneInProgress();
    bool IsLoadingTuneActive();
    bool IsRadioOn();
    bool IsAmbienceTrackActive();
    bool StartLoadingTune();
    char GetCurrentRadioStationID();
    bool IsVehicleRadioActive();
    void InitialisePostLoading();
    void SetMusicFaderScalingFactor(float value);
    void SetEffectsFaderScalingFactor(float value);
};
VALIDATE_OFFSET(CAudioEngine, m_bPlayingMissionCompleteTrack, 0x0);
VALIDATE_OFFSET(CAudioEngine, m_bStoppingMissionCompleteTrack, 0x1);
VALIDATE_OFFSET(CAudioEngine, m_nCurrentRadiostationId, 0x2);
VALIDATE_OFFSET(CAudioEngine, m_nSavedRadioStationId, 0x3);
VALIDATE_OFFSET(CAudioEngine, m_nBackgroundAudioChannel, 0x4);
VALIDATE_OFFSET(CAudioEngine, m_beatInfo, 0x8);
VALIDATE_OFFSET(CAudioEngine, m_FrontendAudio, 0xB4);
VALIDATE_OFFSET(CAudioEngine, field_150, 0x150);
VALIDATE_OFFSET(CAudioEngine, field_1F8, 0x1F8);
VALIDATE_OFFSET(CAudioEngine, m_scriptAudio, 0x2A0);
VALIDATE_OFFSET(CAudioEngine, m_collisionAudio, 0x4BC);
VALIDATE_OFFSET(CAudioEngine, m_pWeaponAudio, 0x1E34);
VALIDATE_OFFSET(CAudioEngine, m_pedlessSpeechAudio, 0x1E38);
VALIDATE_OFFSET(CAudioEngine, field_1F38, 0x1F38);
VALIDATE_OFFSET(CAudioEngine, m_doorAudio, 0x1F50);
VALIDATE_SIZE(CAudioEngine, 0x1FD8);

extern CAudioEngine& AudioEngine;