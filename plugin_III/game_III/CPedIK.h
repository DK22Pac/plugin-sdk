/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "AnimBlendFrameData.h"
#include "CVector.h"
class CPed;

enum PLUGIN_API eLimbMoveStatus : unsigned int {
    ANGLES_SET_TO_MAX = 0, //!< because given angles were unreachable
    ONE_ANGLE_COULDNT_BE_SET_EXACTLY = 1, //!< because it can't be reached in a jiffy
    ANGLES_SET_EXACTLY = 2
};

struct PLUGIN_API LimbOrientation {
    float m_fYaw;
    float m_fPitch;
};

struct PLUGIN_API LimbMovementInfo {
    float maxYaw;
    float minYaw;
    float yawD;
    float maxPitch;
    float minPitch;
    float pitchD;
};

class PLUGIN_API CPedIK {
public:
    CPed *m_pPed;
    LimbOrientation m_sHead;
    LimbOrientation m_sTorso;
    LimbOrientation m_sUpperArm;
    LimbOrientation m_sLowerArm;
    struct {
        unsigned int bGunPointedSuccessfully : 1;
        unsigned int bLookaroundHeadOnly : 1;
        unsigned int bAimsWithArm : 1;
    } m_nFlags;

    SUPPORTED_10EN_11EN_STEAM static LimbMovementInfo &ms_headInfo;
    SUPPORTED_10EN_11EN_STEAM static LimbMovementInfo &ms_headRestoreInfo;
    SUPPORTED_10EN_11EN_STEAM static LimbMovementInfo &ms_torsoInfo;
    SUPPORTED_10EN_11EN_STEAM static LimbMovementInfo &ms_upperArmInfo;
    SUPPORTED_10EN_11EN_STEAM static LimbMovementInfo &ms_lowerArmInfo;

    SUPPORTED_10EN_11EN_STEAM void ExtractYawAndPitchLocal(RwMatrix *matrix, float *yaw, float *pitch);
    SUPPORTED_10EN_11EN_STEAM void ExtractYawAndPitchWorld(RwMatrix *matrix, float *yaw, float *pitch);
    SUPPORTED_10EN_11EN_STEAM void GetComponentPosition(RwV3d &pos, unsigned int node);
    SUPPORTED_10EN_11EN_STEAM void Init(CPed *ped);
    SUPPORTED_10EN_11EN_STEAM bool LookAtPosition(CVector const &pos);
    SUPPORTED_10EN_11EN_STEAM bool LookInDirection(float targetYaw, float targetPitch);
    SUPPORTED_10EN_11EN_STEAM unsigned int MoveLimb(LimbOrientation &limb, float targetYaw, float targetPitch, LimbMovementInfo &moveInfo);
    SUPPORTED_10EN_11EN_STEAM bool PointGunAtPosition(CVector const &pos);
    SUPPORTED_10EN_11EN_STEAM bool PointGunInDirection(float targetYaw, float targetPitch);
    SUPPORTED_10EN_11EN_STEAM bool PointGunInDirectionUsingArm(float targetYaw, float targetPitch);
    SUPPORTED_10EN_11EN_STEAM bool RestoreGunPosn();
    SUPPORTED_10EN_11EN_STEAM bool RestoreLookAt();
    SUPPORTED_10EN_11EN_STEAM void RotateTorso(AnimBlendFrameData *frameData, LimbOrientation &limb, bool changeRoll);

    SUPPORTED_10EN_11EN_STEAM static RwMatrix *GetWorldMatrix(RwFrame *frame, RwMatrix *matrix);
};

SUPPORTED_10EN_11EN_STEAM extern RwV3d &ZaxisIK;
SUPPORTED_10EN_11EN_STEAM extern RwV3d &YaxisIK;
SUPPORTED_10EN_11EN_STEAM extern RwV3d &XaxisIK;

VALIDATE_SIZE(LimbOrientation, 0x8);
VALIDATE_SIZE(LimbMovementInfo, 0x18);
VALIDATE_SIZE(CPedIK, 0x28);

#include "meta/meta.CPedIK.h"
