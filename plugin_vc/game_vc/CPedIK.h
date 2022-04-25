/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

// Return flags from MoveLimb() function
enum MoveLimbResult {
    CANT_REACH_TARGET,
    HAVENT_REACHED_TARGET,
    REACHED_TARGET
};

struct LimbOrientation {
public:
    float m_fYaw;
    float m_fPitch;
};

VALIDATE_SIZE(LimbOrientation, 0x8);

struct LimbMovementInfo {
    float maxYaw;
    float minYaw;
    float yawD;
    float maxPitch;
    float minPitch;
    float pitchD;
};

VALIDATE_SIZE(LimbMovementInfo, 0x18);

class CPed;

class CPedIK {
public:
    CPed* m_pPed;
    LimbOrientation m_sHead;
    LimbOrientation m_sTorso;
    LimbOrientation m_sUpperArm;
    LimbOrientation m_sLowerArm;

    union {
        unsigned int m_nFlags;
        struct {
            unsigned int bGunPointedSuccessfully : 1;
            unsigned int bLookaroundHeadOnly : 1;
            unsigned int bAimsWithArm : 1;
            unsigned int bSlopePitch : 1;
        };
    };

    static LimbMovementInfo& ms_headInfo;
    static LimbMovementInfo& ms_headRestoreInfo;
    static LimbMovementInfo& ms_torsoInfo;
    static LimbMovementInfo& ms_upperArmInfo;
    static LimbMovementInfo& ms_lowerArmInfo;

public:
    MoveLimbResult MoveLimb(LimbOrientation& limb, float yaw, float pitch, LimbMovementInfo &moveInfo);
    void GetComponentPosition(RwV3d& returnedPos, unsigned int boneIndex);
    void ExtractYawAndPitchWorld(RwMatrix* matrix, float* yaw, float* pitch);
};

VALIDATE_SIZE(CPedIK, 0x28);
