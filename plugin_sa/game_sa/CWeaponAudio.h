/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"
#include "CAESound.h"

class CPed;

class PLUGIN_API CWeaponAudio : public CAEAudioEntity {
public:
    char field_7C;
    char field_7D;
    char field_7E;
    char field_7F;
    char field_80;
    char field_81[3];
    int field_84;
    int field_88;
    int field_8C;
    int field_90;
    int       m_nTimeChainsaw;
    int       m_nTimeLastFired;
    CAESound *m_pSounds;
    bool      m_bActive;
    char field_A1[3];
    CPed *m_pPed;
};

VALIDATE_SIZE(CWeaponAudio, 0xA8);
