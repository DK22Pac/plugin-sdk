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
VALIDATE_OFFSET(CAEScriptAudioEntity, audio, 0x0);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_7C, 0x7C);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_7D, 0x7D);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_7E, 0x7E);
VALIDATE_OFFSET(CAEScriptAudioEntity, m_dwLastTimeHornPlayed, 0x80);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_84, 0x84);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_88, 0x88);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_8C, 0x8C);
VALIDATE_OFFSET(CAEScriptAudioEntity, wavLinks, 0x90);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_110, 0x110);
VALIDATE_OFFSET(CAEScriptAudioEntity, field_114, 0x114);
VALIDATE_OFFSET(CAEScriptAudioEntity, m_explosionAudio, 0x19C);
VALIDATE_SIZE(CAEScriptAudioEntity, 0x21C);
