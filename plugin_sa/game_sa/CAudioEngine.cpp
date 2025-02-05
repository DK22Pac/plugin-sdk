/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CAudioEngine.h"

CAudioEngine& AudioEngine = *(CAudioEngine*)0xB6BC90;

void CAudioEngine::Initialise() {
    plugin::CallMethod<0x5B9C60, CAudioEngine*>(this);
}

void CAudioEngine::Restart() {
    plugin::CallMethod<0x506DB0, CAudioEngine*>(this);
}

void CAudioEngine::Shutdown() {
    plugin::CallMethod<0x507CB0, CAudioEngine*>(this);
}

void CAudioEngine::SetEffectsMasterVolume(char volume) {
    plugin::CallMethod<0x506E10, CAudioEngine*, char>(this, volume);
}

void CAudioEngine::SetMusicMasterVolume(char volume) {
    plugin::CallMethod<0x506DE0, CAudioEngine*, char>(this, volume);
}

void CAudioEngine::SetBassEnhanceOnOff(bool on) {
    plugin::CallMethod<0x506F90, CAudioEngine*, bool>(this, on);
}

void CAudioEngine::SetRadioAutoRetuneOnOff(bool on) {
    plugin::CallMethod<0x506F80, CAudioEngine*, bool>(this, on);
}

void CAudioEngine::RetuneRadio(char stationId) {
    plugin::CallMethod<0x507E10, CAudioEngine*, char>(this, stationId);
}

CReference* CAudioEngine::ReportFrontendAudioEvent(int id, float volume, float speed) {
    return plugin::CallMethodAndReturn<CReference*, 0x506EA0, CAudioEngine*, int, float, float>(this, id, volume, speed);
}


void CAudioEngine::ReportMissionAudioEvent(eAudioEvents audioEvent, CVector const* coords) {
    plugin::CallMethod<0x507340, CAudioEngine*, eAudioEvents,CVector const*>(this,audioEvent,coords);
}

void CAudioEngine::Service() {
    plugin::CallMethod<0x507750, CAudioEngine*>(this);
}

void CAudioEngine::ServiceLoadingTune(float fade) {
    plugin::CallMethod<0x5078A0, CAudioEngine*, float>(this, fade);
}

void CAudioEngine::StartRadio(int radioStation, char arg) {
    plugin::CallMethod<0x507DC0, CAudioEngine*, int, char>(this, radioStation, arg);
}

void CAudioEngine::StopRadio(tVehicleAudioSettings* settings, bool arg) {
    plugin::CallMethod<0x506F70, CAudioEngine*, tVehicleAudioSettings*, bool>(this, settings, arg);
}

bool CAudioEngine::IsRadioRetuneInProgress() {
    return plugin::CallMethodAndReturn<bool, 0x506FF0, CAudioEngine*>(this);
}

bool CAudioEngine::IsLoadingTuneActive() {
    return plugin::CallMethodAndReturn<bool, 0x506D90, CAudioEngine*>(this);
}

bool CAudioEngine::IsRadioOn() {
    return plugin::CallMethodAndReturn<bool, 0x506FD0, CAudioEngine*>(this);
}

bool CAudioEngine::IsAmbienceTrackActive() {
    return plugin::CallMethodAndReturn<bool, 0x507210, CAudioEngine*>(this);
}

bool CAudioEngine::StartLoadingTune() {
    return plugin::CallMethodAndReturn<bool, 0x507410, CAudioEngine*>(this);
}

char CAudioEngine::GetCurrentRadioStationID() {
    return plugin::CallMethodAndReturn<bool, 0x507040, CAudioEngine*>(this);
}

bool CAudioEngine::IsVehicleRadioActive() {
    return plugin::CallMethodAndReturn<bool, 0x507050, CAudioEngine*>(this);
}

void CAudioEngine::InitialisePostLoading() {
    plugin::CallMethod<0x5078F0, CAudioEngine*>(this);
}

void CAudioEngine::SetMusicFaderScalingFactor(float value) {
    plugin::CallMethod<0x506E40, CAudioEngine*, float>(this, value);
}

void CAudioEngine::SetEffectsFaderScalingFactor(float value) {
    plugin::CallMethod<0x506E50, CAudioEngine*, float>(this, value);
}
