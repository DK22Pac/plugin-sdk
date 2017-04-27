/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "List_c.h"
#include "FxInfoManager_c.h"

class FxPrimBP_c {
public:
    char field_4;
    unsigned char m_nSrcBlendId;
    unsigned char m_nDstBlendId;
    unsigned char m_nAlphaOn;
    void* m_pMatrixBuffered;
    RwTexture* m_apTextures[4];
    int field_1C;
    List_c m_emitterPrts;
    FxInfoManager_c m_fxInfoManager;

    virtual ~FxPrimBP_c() {}
};

VALIDATE_SIZE(FxPrimBP_c, 0x40);