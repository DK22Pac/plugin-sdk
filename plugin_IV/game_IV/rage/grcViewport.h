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
    VALIDATE_OFFSET(grcViewport, m_World44, 0x0);
    VALIDATE_OFFSET(grcViewport, m_ModelView, 0x40);
    VALIDATE_OFFSET(grcViewport, m_Composite, 0x80);
    VALIDATE_OFFSET(grcViewport, m_Camera44, 0xC0);
    VALIDATE_OFFSET(grcViewport, m_View, 0x100);
    VALIDATE_OFFSET(grcViewport, m_ViewInverse, 0x140);
    VALIDATE_OFFSET(grcViewport, m_Projection, 0x180);
    VALIDATE_OFFSET(grcViewport, m_LocalLRTB, 0x1C0);
    VALIDATE_OFFSET(grcViewport, m_OrthoLRTB, 0x200);
    VALIDATE_OFFSET(grcViewport, m_Window, 0x240);
    VALIDATE_OFFSET(grcViewport, m_UnclippedWindow, 0x258);
    VALIDATE_OFFSET(grcViewport, m_LastWidth, 0x270);
    VALIDATE_OFFSET(grcViewport, m_LastHeight, 0x274);
    VALIDATE_OFFSET(grcViewport, m_FovY, 0x278);
    VALIDATE_OFFSET(grcViewport, m_DesiredAspect, 0x27C);
    VALIDATE_OFFSET(grcViewport, m_ZClipNear, 0x280);
    VALIDATE_OFFSET(grcViewport, m_ZClipFar, 0x284);
    VALIDATE_OFFSET(grcViewport, m_ShearX, 0x288);
    VALIDATE_OFFSET(grcViewport, m_ShearY, 0x28C);
    VALIDATE_OFFSET(grcViewport, m_ScaleX, 0x290);
    VALIDATE_OFFSET(grcViewport, m_ScaleY, 0x294);
    VALIDATE_OFFSET(grcViewport, m_TanVFOV, 0x298);
    VALIDATE_OFFSET(grcViewport, m_TanHFOV, 0x29C);
    VALIDATE_OFFSET(grcViewport, field_2E0, 0x2A0);
    VALIDATE_OFFSET(grcViewport, m_IsPerspective, 0x2B0);
    VALIDATE_OFFSET(grcViewport, gap_2f1, 0x2B1);
    VALIDATE_OFFSET(grcViewport, field_2F4, 0x2B4);
    VALIDATE_OFFSET(grcViewport, field_2F8, 0x2B8);
    VALIDATE_OFFSET(grcViewport, field_2FC, 0x2BC);
    VALIDATE_OFFSET(grcViewport, m_FrustumClipPlanes, 0x2C0);
    VALIDATE_OFFSET(grcViewport, field_360, 0x320);
    VALIDATE_OFFSET(grcViewport, field_364, 0x324);
    VALIDATE_OFFSET(grcViewport, field_368, 0x328);
    VALIDATE_OFFSET(grcViewport, field_36C, 0x32C);
    VALIDATE_OFFSET(grcViewport, field_370, 0x330);
    VALIDATE_OFFSET(grcViewport, field_374, 0x334);
    VALIDATE_OFFSET(grcViewport, field_378, 0x338);
    VALIDATE_OFFSET(grcViewport, field_37C, 0x33C);
    VALIDATE_OFFSET(grcViewport, field_380, 0x340);
    VALIDATE_OFFSET(grcViewport, field_384, 0x344);
    VALIDATE_OFFSET(grcViewport, field_388, 0x348);
    VALIDATE_OFFSET(grcViewport, field_38C, 0x34C);
    VALIDATE_OFFSET(grcViewport, field_390, 0x350);
    VALIDATE_OFFSET(grcViewport, field_394, 0x354);
    VALIDATE_OFFSET(grcViewport, field_398, 0x358);
    VALIDATE_OFFSET(grcViewport, field_39C, 0x35C);
    VALIDATE_OFFSET(grcViewport, field_3A0, 0x360);
    VALIDATE_OFFSET(grcViewport, field_3A4, 0x364);
    VALIDATE_OFFSET(grcViewport, field_3A8, 0x368);
    VALIDATE_OFFSET(grcViewport, field_3AC, 0x36C);
    VALIDATE_OFFSET(grcViewport, field_3B0, 0x370);
    VALIDATE_OFFSET(grcViewport, field_3B4, 0x374);
    VALIDATE_OFFSET(grcViewport, field_3B8, 0x378);
    VALIDATE_OFFSET(grcViewport, field_3BC, 0x37C);
    VALIDATE_OFFSET(grcViewport, field_3C0, 0x380);
    VALIDATE_OFFSET(grcViewport, field_3C4, 0x384);
    VALIDATE_OFFSET(grcViewport, field_3C8, 0x388);
    VALIDATE_OFFSET(grcViewport, field_3CC, 0x38C);
    VALIDATE_OFFSET(grcViewport, field_3D0, 0x390);
    VALIDATE_OFFSET(grcViewport, field_3D4, 0x394);
    VALIDATE_OFFSET(grcViewport, field_3D8, 0x398);
    VALIDATE_OFFSET(grcViewport, field_3DC, 0x39C);
    VALIDATE_OFFSET(grcViewport, mInvertZInProjectionMatrix, 0x3A0);
    VALIDATE_OFFSET(grcViewport, field_3E1, 0x3A1);
    VALIDATE_OFFSET(grcViewport, field_3E4, 0x3A4);
    VALIDATE_OFFSET(grcViewport, field_3E8, 0x3A8);
    VALIDATE_OFFSET(grcViewport, field_3EC, 0x3AC);
    VALIDATE_SIZE(grcViewport, 0x3B0);
}
