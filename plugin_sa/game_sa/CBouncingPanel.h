/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

class CVehicle;

class CBouncingPanel {
public:
    unsigned short m_nFrameId;
    unsigned short m_nAxis;
    float          m_fAngleLimit;
    CVector        m_vecRotation;
    CVector        m_vecPos;

    void ResetPanel();
    void SetPanel(short frameId, short axis, float angleLimit);
    void ProcessPanel(CVehicle* vehicle, RwFrame* frame, CVector arg2, CVector arg3, float arg4, float arg5);
};

VALIDATE_SIZE(CBouncingPanel, 0x20);