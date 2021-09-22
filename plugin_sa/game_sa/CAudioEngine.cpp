/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CAudioEngine.h"

CAudioEngine& AudioEngine = *(CAudioEngine*)0xB6BC90;

void CAudioEngine::SetEffectsMasterVolume(char volume) {
    plugin::CallMethod<0x506E10, CAudioEngine*, char>(this, volume);
}

void CAudioEngine::SetMusicMasterVolume(char volume) {
    plugin::CallMethod<0x506DE0, CAudioEngine*, char>(this, volume);
}

void CAudioEngine::SetBassEnhanceOnOff(float eq) {
    plugin::CallMethod<0x506F90, CAudioEngine*, float>(this, eq);
}

void CAudioEngine::SetRadioAutoRetuneOnOff(bool on) {
    plugin::CallMethod<0x506F80, CAudioEngine*, bool>(this, on);
}

void CAudioEngine::RetuneRadio(char stationId) {
    plugin::CallMethod<0x507E10, CAudioEngine*, char>(this, stationId);
}
