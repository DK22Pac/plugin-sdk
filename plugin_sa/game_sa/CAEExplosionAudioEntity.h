/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"

class PLUGIN_API CAEExplosionAudioEntity : public CAEAudioEntity {
public:
    char field_7C;
private:
    char _pad7D[3];
public:
};

VALIDATE_SIZE(CAEExplosionAudioEntity, 0x80);