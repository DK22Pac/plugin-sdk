/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

typedef struct DIJOYSTATE2 {
    std::int32_t lX;
    std::int32_t lY;
    std::int32_t lZ;
    std::int32_t lRx;
    std::int32_t lRy;
    std::int32_t lRz;
    std::int32_t rglSlider[2];
    std::uint32_t rgdwPOV[4];
    std::uint8_t rgbButtons[128];
    std::int32_t lVX;
    std::int32_t lVY;
    std::int32_t lVZ;
    std::int32_t lVRx;
    std::int32_t lVRy;
    std::int32_t lVRz;
    std::int32_t rglVSlider[2];
    std::int32_t lAX;
    std::int32_t lAY;
    std::int32_t lAZ;
    std::int32_t lARx;
    std::int32_t lARy;
    std::int32_t lARz;
    std::int32_t rglASlider[2];
    std::int32_t lFX;
    std::int32_t lFY;
    std::int32_t lFZ;
    std::int32_t lFRx;
    std::int32_t lFRy;
    std::int32_t lFRz;
    std::int32_t rglFSlider[2];
} DIJOYSTATE2, *LPDIJOYSTATE2;

enum e_ControllerAction
{
	CA_PED_FIREWEAPON,
	CA_PED_FIREWEAPON_ALT,
	CA_PED_CYCLE_WEAPON_RIGHT,
	CA_PED_CYCLE_WEAPON_LEFT,
	CA_GO_FORWARD,
	CA_GO_BACK,
	CA_GO_LEFT,
	CA_GO_RIGHT,
	CA_PED_SNIPER_ZOOM_IN,
	CA_PED_SNIPER_ZOOM_OUT,
	CA_VEHICLE_ENTER_EXIT,
	CA_CAMERA_CHANGE_VIEW_ALL_SITUATIONS,
	CA_PED_JUMPING,
	CA_PED_SPRINT,
	CA_PED_LOOKBEHIND,
	CA_PED_DUCK,
	CA_PED_ANSWER_PHONE,
	CA_SNEAK_ABOUT,
	CA_VEHICLE_FIREWEAPON,
	CA_VEHICLE_FIREWEAPON_ALT,
	CA_VEHICLE_STEERLEFT,
	CA_VEHICLE_STEERRIGHT,
	CA_VEHICLE_STEERUP,
	CA_VEHICLE_STEERDOWN,
	CA_VEHICLE_ACCELERATE,
	CA_VEHICLE_BRAKE,
	CA_VEHICLE_RADIO_STATION_UP,
	CA_VEHICLE_RADIO_STATION_DOWN,
	CA_VEHICLE_HORN = 29,
	CA_TOGGLE_SUBMISSIONS,
	CA_VEHICLE_HANDBRAKE,
	CA_PED_1RST_PERSON_LOOK_LEFT,
	CA_PED_1RST_PERSON_LOOK_RIGHT,
	CA_VEHICLE_LOOKLEFT,
	CA_VEHICLE_LOOKRIGHT,
	CA_VEHICLE_LOOKBEHIND,
	CA_VEHICLE_MOUSELOOK,
	CA_VEHICLE_TURRETLEFT,
	CA_VEHICLE_TURRETRIGHT,
	CA_VEHICLE_TURRETUP,
	CA_VEHICLE_TURRETDOWN,
	CA_PED_CYCLE_TARGET_LEFT,
	CA_PED_CYCLE_TARGET_RIGHT,
	CA_PED_CENTER_CAMERA_BEHIND_PLAYER,
	CA_PED_LOCK_TARGET,
	CA_NETWORK_TALK,
	CA_CONVERSATION_YES,
	CA_CONVERSATION_NO,
	CA_GROUP_CONTROL_FWD,
	CA_GROUP_CONTROL_BWD,
	CA_PED_1RST_PERSON_LOOK_UP,
	CA_PED_1RST_PERSON_LOOK_DOWN,
	CA_TOGGLE_DPAD = 54,
	CA_SWITCH_DEBUG_CAM_ON,
	CA_TAKE_SCREEN_SHOT,
	CA_SHOW_MOUSE_POINTER_TOGGLE
};

enum eControllerType
{
	// 4 types
};

class CControllerKey
{
	unsigned int keyCode;
	unsigned int priority;
};

class CControllerAction
{
public:
	CControllerKey keys[4];
};

#pragma pack(push, 4)
class PLUGIN_API CControllerConfigManager
{
public:
	char field_0;
	char field_1;
	char field_2;
	char field_3;
	DIJOYSTATE2 prevPadState;
	DIJOYSTATE2 currPadState;
	char eventNames[59][40]; 
	char field_B5C[17]; // pad button states
	char _pad1[3];
	CControllerAction actions[59];
	char field_12D0[16];
	char field_12E0;
	char _pad2[3];

	void SaveSettings(int file);
	bool LoadSettings(int file);
    bool GetIsKeyboardKeyDown(RsKeyCodes key);
    bool GetIsKeyboardKeyJustDown(RsKeyCodes key);
};
#pragma pack(pop)

VALIDATE_SIZE(CControllerConfigManager, 0x12E4);

extern PLUGIN_API CControllerConfigManager &ControlsManager;