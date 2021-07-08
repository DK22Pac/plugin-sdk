/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

enum PLUGIN_API eFrameDataFlag : unsigned char {
    IGNORE_ROTATION = 0x2,
    IGNORE_TRANSLATION = 0x4,
    VELOCITY_EXTRACTION = 0x8,
    VELOCITY_EXTRACTION_3D = 0x10
};

struct PLUGIN_API AnimBlendFrameData {
    unsigned char m_nFlags;
    RwV3d m_vecResetPos;
    RwFrame *m_pFrame;
};

VALIDATE_SIZE(AnimBlendFrameData, 0x14);
