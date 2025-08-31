/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "grcWindow.h"
#include "Matrix44.h"

namespace rage {
    class grcViewport {
    public:
        rage::Matrix44 m_World44;
        rage::Matrix44 m_ModelView;
        rage::Matrix44 m_Composite;
        rage::Matrix44 m_Camera44;
        rage::Matrix44 m_View;
        rage::Matrix44 m_ViewInverse;
        rage::Matrix44 m_Projection;
        rage::Matrix44 m_LocalLRTB;
        rage::Matrix44 m_OrthoLRTB;
        rage::grcWindow m_Window;
        rage::grcWindow m_UnclippedWindow;
        int m_LastWidth;
        int m_LastHeight;
        float m_FovY;
        float m_DesiredAspect;
        float m_ZClipNear;
        float m_ZClipFar;
        float m_ShearX;
        float m_ShearY;
        float m_ScaleX;
        float m_ScaleY;
        float m_TanVFOV;
        float m_TanHFOV;
        Vector4 field_2E0;
        bool m_IsPerspective;
        char gap_2f1[3];
        int field_2F4;
        int field_2F8;
        int field_2FC;
        Vector4 m_FrustumClipPlanes[6];
        int field_360;
        int field_364;
        int field_368;
        int field_36C;
        int field_370;
        int field_374;
        int field_378;
        int field_37C;
        int field_380;
        int field_384;
        int field_388;
        int field_38C;
        int field_390;
        int field_394;
        int field_398;
        int field_39C;
        int field_3A0;
        int field_3A4;
        int field_3A8;
        int field_3AC;
        int field_3B0;
        int field_3B4;
        int field_3B8;
        int field_3BC;
        int field_3C0;
        int field_3C4;
        int field_3C8;
        int field_3CC;
        int field_3D0;
        int field_3D4;
        int field_3D8;
        int field_3DC;
        bool mInvertZInProjectionMatrix;
        char field_3E1[3];
        int field_3E4;
        int field_3E8;
        int field_3EC;

    private:
        static grcViewport* sm_Current;

    public:
        static grcViewport* GetCurrent() {
            return sm_Current;
		}

        static void SetCurrent(const grcViewport* viewport, bool regenDevice);
    };
}
