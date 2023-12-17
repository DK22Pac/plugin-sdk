/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "grcWindow.h"

namespace rage {
    class grcViewport {
        uint8_t field_640[640];
        grcWindow m_Window;
        grcWindow m_UnclippedWindow;
        int m_LastWidth;
        int m_LastHeight;
        float m_ZClipNear;
        float m_ZClipFar;
        float m_ScaleX;
        float m_ScaleY;
        float m_ShearX;
        float m_ShearY;
        float m_FovY;
        float m_TanVFOV;
        float m_TanHFOV;
        float m_ComputedAspect;
        float m_DesiredAspect;
        bool m_IsPerspective;
        struct sysIpcCurrentThreadId__* m_Owner;
        bool m_InvertZInProjectionMatrix;
    };
}
