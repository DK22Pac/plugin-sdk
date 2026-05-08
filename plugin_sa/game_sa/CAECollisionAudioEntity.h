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
VALIDATE_OFFSET(tCollisionAudioEntry, field_0, 0x0);
VALIDATE_OFFSET(tCollisionAudioEntry, field_4, 0x4);
VALIDATE_OFFSET(tCollisionAudioEntry, field_8, 0x8);
VALIDATE_OFFSET(tCollisionAudioEntry, field_C, 0xC);
VALIDATE_OFFSET(tCollisionAudioEntry, field_10, 0x10);
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
VALIDATE_OFFSET(CAECollisionAudioEntity, audio, 0x0);
VALIDATE_OFFSET(CAECollisionAudioEntity, field_7C, 0x7C);
VALIDATE_OFFSET(CAECollisionAudioEntity, field_200, 0x200);
VALIDATE_OFFSET(CAECollisionAudioEntity, field_202, 0x202);
VALIDATE_OFFSET(CAECollisionAudioEntity, field_204, 0x204);
VALIDATE_OFFSET(CAECollisionAudioEntity, field_208, 0x208);
VALIDATE_SIZE(CAECollisionAudioEntity, 0x1978);
