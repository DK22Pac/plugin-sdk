/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "LimbOrientation.h"
#include "AnimBlendFrameData.h"
#include "CVector.h"

class CPed;

class PLUGIN_API CPedIK {
public:
    CPed *m_pPed;
    LimbOrientation m_TorsoOrien;
    float m_fSlopePitch;
    float m_fSlopePitchLimitMult;
    float m_fSlopeRoll;
    float m_fBodyRoll;
    unsigned int m_nFlags;

    //funcs
    void RotateTorso(AnimBlendFrameData* bone, LimbOrientation& orientation, bool flag);
    bool PointGunInDirection(float Z_angle, float arg2, bool flag, float arg4);
    void PointGunAtPosition(CVector const& posn, float arg2);
    static RwMatrixTag* GetWorldMatrix(RwFrame* frame, RwMatrixTag* transformMat);
};

VALIDATE_SIZE(CPedIK, 0x20);
