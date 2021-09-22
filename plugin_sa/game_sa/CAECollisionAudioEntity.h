/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAEAudioEntity.h"

struct tCollisionAudioEntry {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
};

VALIDATE_SIZE(tCollisionAudioEntry, 0x14);

class PLUGIN_API CAECollisionAudioEntity {
public:
    CAEAudioEntity audio;
    char field_7C[388];
    WORD field_200;
    WORD field_202;
    DWORD field_204;
    tCollisionAudioEntry field_208[300];
};

VALIDATE_SIZE(CAECollisionAudioEntity, 0x1978);
