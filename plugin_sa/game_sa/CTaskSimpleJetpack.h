/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CVector.h"
#include "CAnimBlendAssociation.h"
#include "FxSystem_c.h"

class PLUGIN_API CTaskSimpleJetPack : public CTaskSimple
{
protected:
    CTaskSimpleJetPack(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bIsFinished;
    bool m_bAddedIdleAnim;
    bool m_bAnimsReferenced;
    bool m_bAttackButtonPressed;
    bool m_bSwitchedWeapons;

    char m_nThrustStop;
    char m_nThrustFwd;
    float m_fThrustStrafe;
    float m_fThrustAngle;

    float m_fLegSwingFwd;
    float m_fLegSwingSide;
    float m_fLegTwist;

    float m_fLegSwingFwdSpeed;
    float m_fLegSwingSideSpeed;
    float m_fLegTwistSpeed;

    CVector m_vecOldSpeed;
    float m_fOldHeading;

    RpClump *m_pJetPackClump;
    CAnimBlendAssociation* m_pAnim;

    CVector m_vecTargetPos;
    float m_fCruiseHeight;
    int m_nHoverTime;
    unsigned int m_nStartHover;
    CEntity *m_pTargetEnt;

    FxSystem_c* m_pFxSysL;
    FxSystem_c* m_pFxSysR;
    float m_fxKeyTime;

    static float &THRUST_NOMINAL;         // 0.8
    static float &THRUST_FULL;            // 0.6
    static float &THRUST_STRAFE;          // 0.3
    static float &THRUST_STOP;            // 0.5
    static float &THRUST_MAX_ANGLE;       // 1.309
    static float &THRUST_MOVE_DAMPING;    // 0.02
    static float &JETPACK_TURN_RATE;      // -0.05
    static float &JETPACK_ANGLE_RATE;     // 0.9
    static float &LEG_SWING_MAX_ANGLE;    // 0.7854
    static float &LEG_SWING_DELTA_V_MULT; // -0.2
    static float &LEG_SWING_GRAVITY_MULT; // 0.01
    static float &LEG_SWING_DAMP_FRAC;    // 0.98

    CTaskSimpleJetPack(const CVector *pVecTargetPos = NULL, float fCruiseHeight = 10.0f, int nHoverTime = 0);
};
VALIDATE_OFFSET(CTaskSimpleJetPack, m_bIsFinished, 0x8);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_bAddedIdleAnim, 0x9);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_bAnimsReferenced, 0xA);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_bAttackButtonPressed, 0xB);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_bSwitchedWeapons, 0xC);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_nThrustStop, 0xD);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_nThrustFwd, 0xE);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fThrustStrafe, 0x10);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fThrustAngle, 0x14);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fLegSwingFwd, 0x18);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fLegSwingSide, 0x1C);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fLegTwist, 0x20);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fLegSwingFwdSpeed, 0x24);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fLegSwingSideSpeed, 0x28);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fLegTwistSpeed, 0x2C);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_vecOldSpeed, 0x30);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fOldHeading, 0x3C);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_pJetPackClump, 0x40);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_pAnim, 0x44);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_vecTargetPos, 0x48);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fCruiseHeight, 0x54);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_nHoverTime, 0x58);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_nStartHover, 0x5C);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_pTargetEnt, 0x60);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_pFxSysL, 0x64);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_pFxSysR, 0x68);
VALIDATE_OFFSET(CTaskSimpleJetPack, m_fxKeyTime, 0x6C);
VALIDATE_SIZE(CTaskSimpleJetPack, 0x70);

extern CVector &JETPACK_POS_OFFSET; // { 0.1, 0.08, 0.0 }
extern CVector &JETPACK_ROT_AXIS;   // { 0.0, 1.0, 0.0 }

VALIDATE_SIZE(CTaskSimpleJetPack, 0x70);
