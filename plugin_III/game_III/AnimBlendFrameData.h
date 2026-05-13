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

enum PLUGIN_API eFrameDataFlag : unsigned char {
    IGNORE_ROTATION = 0x2,
    IGNORE_TRANSLATION = 0x4,
    VELOCITY_EXTRACTION = 0x8,
    VELOCITY_EXTRACTION_3D = 0x10
};

#ifndef PED_SKIN
struct PLUGIN_API AnimBlendFrameData {
    unsigned char m_nFlags;
    RwV3d m_vecResetPos;
    RwFrame* m_pFrame;
};
VALIDATE_OFFSET(AnimBlendFrameData, m_nFlags, 0x0);
VALIDATE_OFFSET(AnimBlendFrameData, m_vecResetPos, 0x4);
VALIDATE_OFFSET(AnimBlendFrameData, m_pFrame, 0x10);
VALIDATE_SIZE(AnimBlendFrameData, 0x14);
#endif

#ifdef PED_SKIN
struct RpHAnimStdInterpFrame {
    RpHAnimStdKeyFrame* keyFrame1;
    RpHAnimStdKeyFrame* keyFrame2;
    RtQuat q;
    RwV3d t;
};
VALIDATE_OFFSET(RpHAnimStdInterpFrame, keyFrame1, 0x0);
VALIDATE_OFFSET(RpHAnimStdInterpFrame, keyFrame2, 0x4);
VALIDATE_OFFSET(RpHAnimStdInterpFrame, q, 0x8);
VALIDATE_OFFSET(RpHAnimStdInterpFrame, t, 0x18);
VALIDATE_SIZE(RpHAnimStdInterpFrame, 0x24);

struct PLUGIN_API AnimBlendFrameData {
    unsigned char m_nFlags;
    RwV3d m_vecResetPos;

    union {
        RpHAnimStdInterpFrame* m_pAnimFrame;
        RwFrame* m_pFrame;
    };

    int32_t m_nNodeId;
};
VALIDATE_OFFSET(AnimBlendFrameData, m_nFlags, 0x08);
VALIDATE_OFFSET(AnimBlendFrameData, m_vecResetPos, 0x4);
VALIDATE_OFFSET(AnimBlendFrameData, m_pAnimFrame, 0x8);
VALIDATE_OFFSET(AnimBlendFrameData, m_pFrame, 0x10);
VALIDATE_OFFSET(AnimBlendFrameData, m_nNodeId, 0x10);
VALIDATE_SIZE(AnimBlendFrameData, 0x14);
#endif
