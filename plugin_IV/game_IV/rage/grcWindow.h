/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    class grcWindow {
    public:
        float m_NormX;
        float m_NormY;
        float m_NormWidth;
        float m_NormHeight;
        float m_MinZ;
        float m_MaxZ;

    public:
        static int32_t& m_Width;
        static int32_t& m_Height;
    };
}
