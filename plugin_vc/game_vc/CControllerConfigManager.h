/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

#define DIRECTINPUT_VERSION 0x0800
#include "dinput.h"

enum e_ControllerAction {
	PED_FIREWEAPON,
	PED_CYCLE_WEAPON_RIGHT,
	PED_CYCLE_WEAPON_LEFT,
	GO_FORWARD,
	GO_BACK,
	GO_LEFT,
	GO_RIGHT,
	PED_SNIPER_ZOOM_IN,
	PED_SNIPER_ZOOM_OUT,
	VEHICLE_ENTER_EXIT,
	CAMERA_CHANGE_VIEW_ALL_SITUATIONS,
	PED_JUMPING,
	PED_SPRINT,
	PED_LOOKBEHIND,
	VEHICLE_ACCELERATE,
	VEHICLE_BRAKE,
	VEHICLE_CHANGE_RADIO_STATION,
	VEHICLE_HORN,
	TOGGLE_SUBMISSIONS,
	VEHICLE_HANDBRAKE,
	PED_1RST_PERSON_LOOK_LEFT,
	PED_1RST_PERSON_LOOK_RIGHT,
	VEHICLE_LOOKLEFT,
	VEHICLE_LOOKRIGHT,
	VEHICLE_LOOKBEHIND,
	VEHICLE_TURRETLEFT,
	VEHICLE_TURRETRIGHT,
	VEHICLE_TURRETUP,
	VEHICLE_TURRETDOWN,
	PED_CYCLE_TARGET_LEFT,
	PED_CYCLE_TARGET_RIGHT,
	PED_CENTER_CAMERA_BEHIND_PLAYER,
	PED_LOCK_TARGET,
	NETWORK_TALK,
	PED_1RST_PERSON_LOOK_UP,
	PED_1RST_PERSON_LOOK_DOWN,
	CONTROLLERACTION_36,
	TOGGLE_DPAD,
	SWITCH_DEBUG_CAM_ON,
	TAKE_SCREEN_SHOT,
	SHOW_MOUSE_POINTER_TOGGLE,
	NUM_CONTROLLER_ACTIONS,
};

enum eControllerType {
	CONTROLLER_KEYBOARD1 = 0,
	CONTROLLER_KEYBOARD2 = 1,
	CONTROLLER_MOUSE = 2,
	CONTROLLER_PAD = 3,
};

class CControllerKey {
public:
	unsigned int keyCode;
	unsigned int priority;
};

class CControllerAction {
public:
	CControllerKey keys[4];
};

class CControllerConfigManager {
public:
	bool m_bFirstCapture;
	DIJOYSTATE2 m_OldState;
	DIJOYSTATE2 m_NewState;
	wchar_t m_aActionNames[NUM_CONTROLLER_ACTIONS][40];
	bool m_aButtonStates[17];
	CControllerAction m_actions[NUM_CONTROLLER_ACTIONS];
	bool m_aSimCheckers[4][4];
	bool m_bMouseAssociated;
};

VALIDATE_SIZE(CControllerConfigManager, 0x143C);

extern CControllerConfigManager& ControlsManager;
