/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAEAudioEntity.h"

class PLUGIN_API CAEDoorAudioEntity {
public:
    CAEAudioEntity audio;
    unsigned long m_nTime;
    unsigned long field_80;
    unsigned long field_84;
};

VALIDATE_SIZE(CAEDoorAudioEntity, 0x88);
