/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAESound.h"

class CEntity;

class PLUGIN_API CAEAudioEntity {
protected:
    void **vtable;          // TODO take care of this vtable
public:
    CEntity *m_pEntity;
    CAESound m_tempSound;

    // vtable
    void UpdateParameters(CAESound *sound, short arg2);
};

VALIDATE_SIZE(CAEAudioEntity, 0x7C);
