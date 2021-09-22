/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAEPedSpeechAudioEntity.h"

class PLUGIN_API CAEPedlessSpeechAudioEntity {
public:
    CAEPedSpeechAudioEntity pedSpeech;
};

VALIDATE_SIZE(CAEPedlessSpeechAudioEntity, 0x100);
