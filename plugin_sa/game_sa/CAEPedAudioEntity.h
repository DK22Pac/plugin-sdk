/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAEAudioEntity.h"
#include "CAESound.h"
#include "CAETwinLoopSoundEntity.h"

class CPed;

class PLUGIN_API CAEPedAudioEntity : public CAEAudioEntity {
public:
    char field_7C;
    char field_7D;
    short field_7E;
    int field_80;
    float field_84;
    float field_88;
    char field_8C[8];
    CPed *m_pPed;
    char field_98;
    char field_99[3];
    CAESound *field_9C;
    int field_A0;
    CAESound *field_A4;
	CAETwinLoopSoundEntity TwinLoopSoundEntity;
    CAESound *field_150;
    float field_154;
    float field_158;
};
VALIDATE_OFFSET(CAEPedAudioEntity, field_7C, 0x7C);
VALIDATE_OFFSET(CAEPedAudioEntity, field_7D, 0x7D);
VALIDATE_OFFSET(CAEPedAudioEntity, field_7E, 0x7E);
VALIDATE_OFFSET(CAEPedAudioEntity, field_80, 0x80);
VALIDATE_OFFSET(CAEPedAudioEntity, field_84, 0x84);
VALIDATE_OFFSET(CAEPedAudioEntity, field_88, 0x88);
VALIDATE_OFFSET(CAEPedAudioEntity, field_8C, 0x8C);
VALIDATE_OFFSET(CAEPedAudioEntity, m_pPed, 0x94);
VALIDATE_OFFSET(CAEPedAudioEntity, field_98, 0x98);
VALIDATE_OFFSET(CAEPedAudioEntity, field_99, 0x99);
VALIDATE_OFFSET(CAEPedAudioEntity, field_9C, 0x9C);
VALIDATE_OFFSET(CAEPedAudioEntity, field_A0, 0xA0);
VALIDATE_OFFSET(CAEPedAudioEntity, field_A4, 0xA4);
VALIDATE_OFFSET(CAEPedAudioEntity, TwinLoopSoundEntity, 0xA8);
VALIDATE_OFFSET(CAEPedAudioEntity, field_150, 0x150);
VALIDATE_OFFSET(CAEPedAudioEntity, field_154, 0x154);
VALIDATE_OFFSET(CAEPedAudioEntity, field_158, 0x158);
VALIDATE_SIZE(CAEPedAudioEntity, 0x15C);
