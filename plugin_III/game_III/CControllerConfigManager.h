/*
	Plugin-SDK (Grand Theft Auto 3) header file
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

enum e_ControllerActionType
{
	ACTIONTYPE_1RSTPERSON = 0,
	ACTIONTYPE_3RDPERSON,
	ACTIONTYPE_VEHICLE,
	ACTIONTYPE_VEHICLE_3RDPERSON,
	ACTIONTYPE_COMMON,
	ACTIONTYPE_1RST3RDPERSON,
	ACTIONTYPE_NONE,
};

enum eContSetOrder
{
	SETORDER_NONE = 0,
	SETORDER_1,
	SETORDER_2,
	SETORDER_3,
	SETORDER_4
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

	void MakeControllerActionsBlank();
	int32_t GetJoyButtonJustDown();
	void SaveSettings(int32_t file);
	void LoadSettings(int32_t file);
	void InitDefaultControlConfiguration();
	void InitDefaultControlConfigMouse(CMouseControllerState const& availableButtons);
	void InitDefaultControlConfigJoyPad(uint32_t buttons);
	void InitialiseControllerActionNameArray();
	void UpdateJoyInConfigMenus_ButtonDown(int32_t button, int32_t padnumber);
	void AffectControllerStateOn_ButtonDown(int32_t button, eControllerType type);
	void AffectControllerStateOn_ButtonDown_Driving(int32_t button, eControllerType type, CControllerState& state);
	void AffectControllerStateOn_ButtonDown_FirstPersonOnly(int32_t button, eControllerType type, CControllerState& state);
	void AffectControllerStateOn_ButtonDown_ThirdPersonOnly(int32_t button, eControllerType type, CControllerState& state);
	void AffectControllerStateOn_ButtonDown_FirstAndThirdPersonOnly(int32_t button, eControllerType type, CControllerState& state);
	void AffectControllerStateOn_ButtonDown_AllStates(int32_t button, eControllerType type, CControllerState& state);
	void AffectControllerStateOn_ButtonDown_VehicleAndThirdPersonOnly(int32_t button, eControllerType type, CControllerState& state);
	void UpdateJoyInConfigMenus_ButtonUp(int32_t button, int32_t padnumber);
	void AffectControllerStateOn_ButtonUp(int32_t button, eControllerType type);
	void AffectControllerStateOn_ButtonUp_All_Player_States(int32_t button, eControllerType type, CControllerState& state);
	void AffectPadFromKeyBoard();
	void AffectPadFromMouse();
	void ClearSimButtonPressCheckers();
	bool GetIsKeyboardKeyDown(RsKeyCodes keycode);
	bool GetIsKeyboardKeyJustDown(RsKeyCodes keycode);
	bool GetIsMouseButtonDown(RsKeyCodes keycode);
	bool GetIsMouseButtonUp(RsKeyCodes keycode);
	void DeleteMatchingCommonControls(e_ControllerAction action, int32_t key, eControllerType type);
	void DeleteMatching3rdPersonControls(e_ControllerAction action, int32_t key, eControllerType type);
	void DeleteMatching1rst3rdPersonControls(e_ControllerAction action, int32_t key, eControllerType type);
	void DeleteMatchingVehicleControls(e_ControllerAction action, int32_t key, eControllerType type);
	void DeleteMatchingVehicle_3rdPersonControls(e_ControllerAction action, int32_t key, eControllerType type);
	void DeleteMatching1rstPersonControls(e_ControllerAction action, int32_t key, eControllerType type);
	void DeleteMatchingActionInitiators(e_ControllerAction action, int32_t key, eControllerType type);
	bool GetIsKeyBlank(int32_t key, eControllerType type);
	e_ControllerActionType GetActionType(e_ControllerAction action);
	void ClearSettingsAssociatedWithAction(e_ControllerAction action, eControllerType type);
	wchar_t* GetControllerSettingTextWithOrderNumber(e_ControllerAction action, eContSetOrder setorder);
	wchar_t* GetControllerSettingTextKeyBoard(e_ControllerAction action, eControllerType type);
	wchar_t* GetControllerSettingTextMouse(e_ControllerAction action);
	wchar_t* GetControllerSettingTextJoystick(e_ControllerAction action);
	int32_t GetNumOfSettingsForAction(e_ControllerAction action);
	void GetWideStringOfCommandKeys(uint16_t action, wchar_t* text, uint16_t leight);
	int32_t GetControllerKeyAssociatedWithAction(e_ControllerAction action, eControllerType type);
	void UpdateJoyButtonState(int32_t padnumber);
	bool GetIsActionAButtonCombo(e_ControllerAction action);
	wchar_t* GetButtonComboText(e_ControllerAction action);
	void SetControllerKeyAssociatedWithAction(e_ControllerAction action, int32_t key, eControllerType type);
	int32_t GetMouseButtonAssociatedWithAction(e_ControllerAction action);
	void SetMouseButtonAssociatedWithAction(e_ControllerAction action, int32_t button);
	void ResetSettingOrder(e_ControllerAction action);
};

VALIDATE_SIZE(CControllerConfigManager, 0x143C);

extern CControllerConfigManager& ControlsManager;
