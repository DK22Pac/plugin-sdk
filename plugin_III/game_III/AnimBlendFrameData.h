/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "rw/rphanim.h"

#ifdef PED_SKIN
struct RpHAnimStdInterpFrame {
    RpHAnimStdKeyFrame* keyFrame1;
    RpHAnimStdKeyFrame* keyFrame2;
    RtQuat q;
    RwV3d t;
};
#endif

enum PLUGIN_API eFrameDataFlag : unsigned char {
    IGNORE_ROTATION = 0x2,
    IGNORE_TRANSLATION = 0x4,
    VELOCITY_EXTRACTION = 0x8,
    VELOCITY_EXTRACTION_3D = 0x10
};

struct PLUGIN_API AnimBlendFrameData {
    unsigned char m_nFlags;
    RwV3d m_vecResetPos;
#ifdef PED_SKIN
    union {
        RpHAnimStdInterpFrame* m_pAnimFrame;
        RwFrame* m_pFrame;
    };
#else
    RwFrame* m_pFrame;
#endif

#ifdef PED_SKIN
    int32_t m_nNodeId;
#endif
};

#ifdef PED_SKIN
VALIDATE_SIZE(AnimBlendFrameData, 0x18);
#else
VALIDATE_SIZE(AnimBlendFrameData, 0x14);
#endif
