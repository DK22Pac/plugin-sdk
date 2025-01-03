/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "dinput.h"

enum PLUGIN_API e_ControllerAction {
    PED_FIREWEAPON,
    PED_FIREWEAPON_ALT,
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
    PED_DUCK,
    PED_ANSWER_PHONE,
    SNEAK_ABOUT,
    VEHICLE_FIREWEAPON,
    VEHICLE_FIREWEAPON_ALT,
    VEHICLE_STEERLEFT,
    VEHICLE_STEERRIGHT,
    VEHICLE_STEERUP,
    VEHICLE_STEERDOWN,
    VEHICLE_ACCELERATE,
    VEHICLE_BRAKE,
    VEHICLE_RADIO_STATION_UP,
    VEHICLE_RADIO_STATION_DOWN,
    VEHICLE_HORN = 29,
    TOGGLE_SUBMISSIONS,
    VEHICLE_HANDBRAKE,
    PED_1RST_PERSON_LOOK_LEFT,
    PED_1RST_PERSON_LOOK_RIGHT,
    VEHICLE_LOOKLEFT,
    VEHICLE_LOOKRIGHT,
    VEHICLE_LOOKBEHIND,
    VEHICLE_MOUSELOOK,
    VEHICLE_TURRETLEFT,
    VEHICLE_TURRETRIGHT,
    VEHICLE_TURRETUP,
    VEHICLE_TURRETDOWN,
    PED_CYCLE_TARGET_LEFT,
    PED_CYCLE_TARGET_RIGHT,
    PED_CENTER_CAMERA_BEHIND_PLAYER,
    PED_LOCK_TARGET,
    NETWORK_TALK,
    CONVERSATION_YES,
    CONVERSATION_NO,
    GROUP_CONTROL_FWD,
    GROUP_CONTROL_BWD,
    PED_1RST_PERSON_LOOK_UP,
    PED_1RST_PERSON_LOOK_DOWN,
    TOGGLE_DPAD = 54,
    SWITCH_DEBUG_CAM_ON,
    TAKE_SCREEN_SHOT,
    SHOW_MOUSE_POINTER_TOGGLE
};

enum PLUGIN_API eControllerType {
    CONTROLLER_KEYBOARD1 = 0,
    CONTROLLER_KEYBOARD2 = 1,
    CONTROLLER_MOUSE = 2,
    CONTROLLER_PAD = 3,
};

class PLUGIN_API CControllerKey {
public:
    unsigned int keyCode;
    unsigned int priority;
};

class PLUGIN_API CControllerAction {
public:
    CControllerKey keys[4];
};

class PLUGIN_API CControllerConfigManager {
public:
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    DIJOYSTATE2       m_prevPadState;
    DIJOYSTATE2       m_currPadState;
    char              m_aszEventNames[59][40];
    char field_B5C[17]; // pad button states
    char _pad1[3];
    CControllerAction m_actions[59];
    char field_12D0[16];
    char field_12E0;
    char _pad2[3];

    void SaveSettings(int file);
    bool LoadSettings(int file);
    bool GetIsKeyboardKeyDown(RsKeyCodes key);
    bool GetIsKeyboardKeyJustDown(RsKeyCodes key);
    void ResetSettingOrder(e_ControllerAction action);
};

VALIDATE_SIZE(CControllerConfigManager, 0x12E4);

extern PLUGIN_API CControllerConfigManager &ControlsManager;
