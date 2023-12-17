/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eDownscaleFactor : int32_t {
    DOWNSCALE_FIRST = 0x1,
    DOWNSCALE_ONE = 0x1,
    DOWNSCALE_HALF = 0x2,
    DOWNSCALE_QUARTER = 0x4,
    DOWNSCALE_EIGHTH = 0x8,
    DOWNSCALE_SIXTEENTH = 0x10,
    DOWNSCALE_MAX = 0x10,
};

class CTextureDecodeRequestDesc {
public:
    enum Type : int32_t {
        UNKNOWN = 0x0,
        JPEG_BUFFER = 0x1,
        DDS_BUFFER = 0x2,
    };

    char* m_TxdName;
    char* m_TextureName;
    Type m_Type;
    void* m_BufferPtr;
    uint32_t m_BufferSize;
    eDownscaleFactor m_JPEGScalingFactor;
    bool m_JPEGEncodeAsDXT;
};
