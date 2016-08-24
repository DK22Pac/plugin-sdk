#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"

class CAEFireAudioEntity : public CAEAudioEntity {
public:
    CAESound *field_7C;
    CAESound *field_80;
    class FxSystem_c *field_84;
};

VALIDATE_SIZE(CAEFireAudioEntity, 0x88);