/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "LimbOrientation.h"
#include "RenderWare.h"
#include "CVector.h"
#include "AnimBlendFrameData.h"

class CPed;

#pragma pack(push, 4)
class CPedIK {
public:
    CPed *m_pPed;
    LimbOrientation m_TorsoOrien;
    int dwordC; 
    int dword10; 
    int dword14; 
    int dword18; 
    int dword1C; 
    int dword20; 
    unsigned int m_flags;

    //variables
    //CPedIK::ms_headInfo        0x5F9F5C 
    //CPedIK::ms_headRestoreInfo 0x5F9F74 
    //CPedIK::ms_torsoInfo       0x5F9F8C 
    //CPedIK::ms_upperArmInfo    0x5F9FA4 

    //funcs
    CPedIK();
    void ExtractYawAndPitchLocal(RwMatrixTag* matrix, float& x, float& y);
    void ExtractYawAndPitchWorld(RwMatrixTag* matrix, float& x, float& y);
    void GetComponentPosition(RwV3d& pos, unsigned int component);
    static RwMatrixTag* GetWorldMatrix(RwFrame* frame, RwMatrixTag* matrix);
    bool LookAtPosition(CVector const& pos);
    bool LookInDirection(float x, float y);
    void MoveLimb(LimbOrientation& orient, float x, float y, LimbMovementInfo& info);
    bool PointGunAtPosition(CVector const& pos);
    bool PointGunInDirection(float x, float y);
    bool PointGunInDirectionUsingArm(float x, float y);
    bool RestoreGunPosn();
    bool RestoreLookAt();
    void RotateTorso(AnimBlendFrameData* data, LimbOrientation& orient, bool arg2);
};
#pragma pack(pop)

VALIDATE_SIZE(CPedIK, 0x28);