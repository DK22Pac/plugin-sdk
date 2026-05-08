/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAEAudioEntity.h"

class CAEFireAudioEntity : public CAEAudioEntity {
public:
    CAESound *field_7C;
    CAESound *field_80;
    class FxSystem_c *field_84;
};
VALIDATE_OFFSET(CAEFireAudioEntity, field_7C, 0x7C);
VALIDATE_OFFSET(CAEFireAudioEntity, field_80, 0x80);
VALIDATE_OFFSET(CAEFireAudioEntity, field_84, 0x84);
VALIDATE_SIZE(CAEFireAudioEntity, 0x88);