/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleJetPack.h"

float &CTaskSimpleJetPack::THRUST_NOMINAL         = *(float *)0x8D2F38; // 0.8
float &CTaskSimpleJetPack::THRUST_FULL            = *(float *)0x8D2F3C; // 0.6
float &CTaskSimpleJetPack::THRUST_STRAFE          = *(float *)0x8D2F40; // 0.3
float &CTaskSimpleJetPack::THRUST_STOP            = *(float *)0x8D2F44; // 0.5
float &CTaskSimpleJetPack::THRUST_MAX_ANGLE       = *(float *)0x8D2F48; // 1.309
float &CTaskSimpleJetPack::THRUST_MOVE_DAMPING    = *(float *)0x8D2F4C; // 0.02
float &CTaskSimpleJetPack::JETPACK_TURN_RATE      = *(float *)0x8D2F50; // -0.05
float &CTaskSimpleJetPack::JETPACK_ANGLE_RATE     = *(float *)0x8D2F54; // 0.9
float &CTaskSimpleJetPack::LEG_SWING_MAX_ANGLE    = *(float *)0x8D2F58; // 0.7854
float &CTaskSimpleJetPack::LEG_SWING_DELTA_V_MULT = *(float *)0x8D2F5C; // -0.2
float &CTaskSimpleJetPack::LEG_SWING_GRAVITY_MULT = *(float *)0x8D2F60; // 0.01
float &CTaskSimpleJetPack::LEG_SWING_DAMP_FRAC    = *(float *)0x8D2F64; // 0.98
CVector &JETPACK_POS_OFFSET = *(CVector *)0x8D2F68; // { 0.1, 0.08, 0.0 }
CVector &JETPACK_ROT_AXIS   = *(CVector *)0x8D2F74; // { 0.0, 1.0, 0.0 }


CTaskSimpleJetPack::CTaskSimpleJetPack(const CVector *pVecTargetPos, float fCruiseHeight, int nHoverTime) 
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x67B4E0, CTaskSimpleJetPack*, const CVector*, float,int>(this, pVecTargetPos, fCruiseHeight, nHoverTime);
}