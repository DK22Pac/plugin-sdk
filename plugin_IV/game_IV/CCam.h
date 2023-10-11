/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

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
};

class CCam {
public:
	uint8_t field_1[12];
	rage::Matrix34 m_Matrix;
	uint8_t pad2[0x10];
	float m_fFOV;
	float m_fNearZ;
	float m_fFarZ;
	float m_fNearDOF;
	float m_fFarDOF;
	uint8_t pad3[0xCC];

public:
    virtual ~CCam() {}
};

VALIDATE_SIZE(CCam, 0x140);
