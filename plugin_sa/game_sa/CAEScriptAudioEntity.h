/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAEAudioEntity.h"
#include "CAudioLink.h"
#include "CAEDoorAudioEntity.h"
#include "CAEExplosionAudioEntity.h"

class PLUGIN_API CAEScriptAudioEntity {
public:
    CAEAudioEntity audio;
    char field_7C;
    char field_7D;
    char field_7E;
    int m_dwLastTimeHornPlayed;
    int field_84;
    float field_88;
    float field_8C;
    CAudioLink wavLinks[4];
    int field_110;
    CAEDoorAudioEntity field_114;
    CAEExplosionAudioEntity m_explosionAudio;
};

VALIDATE_SIZE(CAEScriptAudioEntity, 0x21C);
