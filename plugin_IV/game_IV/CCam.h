/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

class CEntity;
class CPed;

enum eCamMode {
	CAM_SKELETON = 0,
	CAM_FOLLOW_PED = 1,
	CAM_FOLLOW_VEHICLE = 2,
	CAM_INTERP = 3,
	CAM_SHAKE = 4,
	CAM_FINAL = 5,
	CAM_SCRIPT = 6,
	CAM_GAME = 7,
	CAM_TRANS = 8,
	CAM_AIM_WEAPON = 9,
	CAM_BUSTED = 10,
	CAM_PHOTO = 11,
	CAM_IDLE = 12,
	CAM_2_PLAYER = 13,
	CAM_SCRIPTED = 14,
	CAM_CUTSCENE = 15,
	CAM_WASTED = 16,
	CAM_1ST_PERSON = 17,
	CAM_2_PLAYER_VEH = 18,
	CAM_AIM_WEAPON_VEH = 19,
	CAM_VIEWPORTS = 20,
	CAM_HISTORY = 21,
	CAM_CINEMATIC = 22,
	CAM_CINEMATIC_HELI_CHASE = 23,
	CAM_CINEMATIC_CAM_MAN = 24,
	CAM_SPLINE = 25,
	CAM_CINEMATOGRAPHY = 26,
	CAM_FPS_WEAPON = 27,
	CAM_FIRE_TRUCK = 28,
	CAM_RADAR = 29,
	CAM_WEAPON_AIMING = 30,
	CAM_ANIMATED = 31,
	CAM_INTERMEZZO = 32,
	CAM_VIEW_SEQ = 33,
	CAM_VIEWFIND = 34,
	CAM_PLAYER_SETTINGS = 35,
	CAM_CINEMATIC_VEH_OFFSET = 36,
	CAM_REPLAY = 37,
	CAM_FREE = 38,
	CAM_DEBUG = 39,
	CAM_MARKET = 40,
	CAM_SECTOR = 41,
	NUM_CAM_MODES,
};

class CCamera;

class CCam {
public:
	uint8_t field_4[12];
	rage::Matrix44 m_mMatrix;
	uint8_t field_100[16];
	float m_fFOV;
	float m_fNearClip;
	float m_fFarClip;
	float m_fNearDOF;
	float m_fFarDOF;
	uint8_t field_132[28];
	rage::Matrix44* m_pMatrix;
	uint8_t field_168[126];
	CCamera* m_pTheCamera;
	CCam* m_pNext;
	uint8_t field_278[32];

	// Cam Flags 1
	uint8_t m_bCamFlags1_1 : 1;
	uint8_t m_bCamFlags1_2 : 1;
	uint8_t m_bCamFlags1_3 : 1;
	uint8_t m_bActive : 1;
	uint8_t m_bCamFlags1_5 : 1;
	uint8_t m_bCamFlags1_6 : 1;
	uint8_t m_bCamFlags1_7 : 1;
	uint8_t m_bCamFlags1_8 : 1;

	uint8_t m_bField_290;
	uint8_t m_bField_291;
	uint8_t m_bField_292;
	uint8_t m_bField_293;
	uint8_t field_294[31];
	rage::Vector4 m_vRot;
	uint8_t field_295[28];

	// Cam Flags 2
	uint8_t m_bCamFlags2_1 : 1;
	uint8_t m_bCamFlags2_2 : 1;
	uint8_t m_bCamFlags2_3 : 1;
	uint8_t m_bCamFlags2_4 : 1;
	uint8_t m_bCamFlags2_5 : 1;
	uint8_t m_bCamFlags2_6 : 1;
	uint8_t m_bCamFlags2_7 : 1;
	uint8_t m_bCamFlags2_8 : 1;

	uint8_t field_298[43];
	float m_fHintFOV;
	uint8_t field_300[8];

	// Cam Flags 3
	uint8_t m_bCamFlags3_1 : 1;
	uint8_t m_bTelescopeCam : 1;
	uint8_t m_bReset : 1;
	uint8_t m_bDisableControls : 1;
	uint8_t m_bCamFlags3_5 : 1;
	uint8_t m_bCamFlags3_6 : 1;
	uint8_t m_bCamFlags3_7 : 1;
	uint8_t m_bCamFlags3_8 : 1;

	uint32_t field_338;
	uint32_t field_342;
	uint32_t field_448;
	uint8_t field_500[810];

public:
    virtual ~CCam() { plugin::CallVirtualMethod<0>(this, 0); }
	virtual void Update() { plugin::CallVirtualMethod<1>(this); }
	virtual void m2() { plugin::CallVirtualMethod<2>(this); }
	virtual void m3() { plugin::CallVirtualMethod<3>(this); }
	virtual int8_t m4() { return plugin::CallVirtualMethodAndReturn<int8_t, 4>(this); }
	virtual void m5() { plugin::CallVirtualMethod<5>(this); }
	virtual void m6() { plugin::CallVirtualMethod<6>(this); }
	virtual void m7() { plugin::CallVirtualMethod<7>(this); }
	virtual void m8() { plugin::CallVirtualMethod<8>(this); }
	virtual void m9() { plugin::CallVirtualMethod<9>(this); }
	virtual eCamMode GetCurrentCamMode() { return plugin::CallVirtualMethodAndReturn<eCamMode, 10>(this); }

public:
	void SetAsCurrent();
	CCam* GetCamMode(eCamMode mode, int32_t arg2);
	CCam* CreateCamMode(eCamMode mode, int32_t arg2);
	void SetTargetEntity(CPed* ped);
	void Activate();
	CCam* SetCamMode(eCamMode mode, int32_t arg2);
	void DestroyAllCams(bool arg);
};

VALIDATE_SIZE(CCam, 0x500);
