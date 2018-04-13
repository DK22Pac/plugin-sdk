/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "LimbOrientation.h"
#include "AnimBlendFrameData.h"
#include "eBodyParts.h"

class CPedIK {
public:
    class CPed *m_pPed;
    LimbOrientation m_sHead;
    LimbOrientation m_sTorso;
    LimbOrientation m_sUpperArm;
    LimbOrientation m_sLowerArm;
    unsigned int m_flags;

    // variables
    static LimbMovementInfo *ms_headInfo;
    static LimbMovementInfo *ms_headRestoreInfo;
    static LimbMovementInfo *ms_torsoInfo;
    static LimbMovementInfo *ms_upperArmInfo;
    static LimbMovementInfo *ms_lowerArmInfo;

    // functions
    void Init(CPed* ped);
    static RwMatrixTag* GetWorldMatrix(RwFrame* frame, RwMatrixTag* matrix);
    void GetComponentPosition(RwV3d& posnOut, eBodyParts component);
    void ExtractYawAndPitchWorld(RwMatrixTag* matrix, float& x, float& y);
    void ExtractYawAndPitchLocal(RwMatrixTag* matrix, float& x, float& y);
    unsigned int MoveLimb(LimbOrientation& orient, float x, float y, LimbMovementInfo& info);
    bool LookAtPosition(CVector const& posn);
    bool LookInDirection(float x, float y);
    bool RestoreLookAt();
    bool PointGunAtPosition(CVector const& posn);
    bool PointGunInDirection(float x, float y);
    bool PointGunInDirectionUsingArm(float x, float y);
    bool RestoreGunPosn();
    void RotateTorso(AnimBlendFrameData* frameData, LimbOrientation& orient, bool flag);
};

VALIDATE_SIZE(CPedIK, 0x28);
