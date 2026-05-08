/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAEFrontendAudioEntity.h"
#include "CAEPedlessSpeechAudioEntity.h"
#include "CAETwinLoopSoundEntity.h"
#include "CAEScriptAudioEntity.h"
#include "CAECollisionAudioEntity.h"
#include "CAEVehicleAudioEntity.h"
#include "eAudioEvents.h"

class PLUGIN_API CAudioEngine {
public:
    char field_0;
    char field_1;
    char m_nCurrentRadiostationId;
    char field_3;
    int field_4;
    char field_8[152];
    char field_A0;
    char field_A1[15];
    char field_B0;
    char field_B1[3];
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
    void RetuneRadio(char stationId);
    CReference* ReportFrontendAudioEvent(int id, float volume, float speed);
    void ReportMissionAudioEvent(eAudioEvents audioEvent, CVector const* coords);
    void Service();
    void ServiceLoadingTune(float fade);
    void StartRadio(int radioStation, char arg);
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
VALIDATE_OFFSET(CAudioEngine, field_0, 0x0);
VALIDATE_OFFSET(CAudioEngine, field_1, 0x1);
VALIDATE_OFFSET(CAudioEngine, m_nCurrentRadiostationId, 0x2);
VALIDATE_OFFSET(CAudioEngine, field_3, 0x3);
VALIDATE_OFFSET(CAudioEngine, field_4, 0x4);
VALIDATE_OFFSET(CAudioEngine, field_8, 0x8);
VALIDATE_OFFSET(CAudioEngine, field_A0, 0xA0);
VALIDATE_OFFSET(CAudioEngine, field_A1, 0xA1);
VALIDATE_OFFSET(CAudioEngine, field_B0, 0xB0);
VALIDATE_OFFSET(CAudioEngine, field_B1, 0xB1);
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