/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "RenderWare.h"
#include "CVector.h"

#pragma pack(push, 1)
class PLUGIN_API CTaskSimpleJetPack : public CTaskSimple
{
public:
	char byte8;
	char byte9;
	char byteA;
	char byteB;
	char byteC;
	char byteD;
	char byteE;
	char fF;
	int dword10;
	int dword14;
	float dword18;
	int dword1C;
	int dword20;
	int dword24;
	int dword28;
	int dword2C;
	int dword30;
	int dword34;
	int dword38;
	float dword3C;
	RpClump *m_pJetpackObject;
    int dword44;
	CVector dword48;
	int dword54;
	int dword58;
	int dword5C;
	class CObject *pcobject60;
	void *m_apPparticles[2]; // CParticle *
	float m_fParticleIntensity;

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
};
#pragma pack(pop)

extern CVector &JETPACK_POS_OFFSET; // { 0.1, 0.08, 0.0 }
extern CVector &JETPACK_ROT_AXIS;   // { 0.0, 1.0, 0.0 }

VALIDATE_SIZE(CTaskSimpleJetPack, 0x70);