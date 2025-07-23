/*
	Plugin-SDK (Grand Theft Auto 3) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "CControllerConfigManager.h"

CControllerConfigManager& ControlsManager = *(CControllerConfigManager*)0x8F43A4;

void CControllerConfigManager::MakeControllerActionsBlank()
{
    plugin::CallMethodDynGlobal(0x58B7A0, this);
}

int32_t CControllerConfigManager::GetJoyButtonJustDown()
{
    return plugin::CallMethodAndReturnDynGlobal<int32_t>(0x58B7D0, this);
}

void CControllerConfigManager::SaveSettings(int32_t file)
{
    plugin::CallMethodDynGlobal(0x58B800, this, file);
}

void CControllerConfigManager::LoadSettings(int32_t file)
{
    plugin::CallMethodDynGlobal(0x58B870, this, file);
}

void CControllerConfigManager::InitDefaultControlConfiguration()
{
    plugin::CallMethodDynGlobal(0x58B930, this);
}

void CControllerConfigManager::InitDefaultControlConfigMouse(CMouseControllerState const& availableButtons)
{
    plugin::CallMethodDynGlobal(0x58BD00, this, availableButtons);
}

void CControllerConfigManager::InitDefaultControlConfigJoyPad(uint32_t buttons)
{
    plugin::CallMethodDynGlobal(0x58BD90, this, buttons);
}

void CControllerConfigManager::InitialiseControllerActionNameArray()
{
    plugin::CallMethodDynGlobal(0x58C060, this);
}

void CControllerConfigManager::UpdateJoyInConfigMenus_ButtonDown(int32_t button, int32_t padnumber)
{
    plugin::CallMethodDynGlobal(0x58C5E0, this, button, padnumber);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown(int32_t button, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58C730, this, button, type);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown_Driving(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58C880, this, button, type, state);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown_FirstPersonOnly(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58CAD0, this, button, type, state);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown_ThirdPersonOnly(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58CB10, this, button, type, state);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown_FirstAndThirdPersonOnly(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58CBD0, this, button, type, state);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown_AllStates(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58CD70, this, button, type, state);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonDown_VehicleAndThirdPersonOnly(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58CE50, this, button, type, state);
}

void CControllerConfigManager::UpdateJoyInConfigMenus_ButtonUp(int32_t button, int32_t padnumber)
{
    plugin::CallMethodDynGlobal(0x58CE80, this, button, padnumber);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonUp(int32_t button, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58CFD0, this, button, type);
}

void CControllerConfigManager::AffectControllerStateOn_ButtonUp_All_Player_States(int32_t button, eControllerType type, CControllerState& state)
{
    plugin::CallMethodDynGlobal(0x58D090, this, button, type, state);
}

void CControllerConfigManager::AffectPadFromKeyBoard()
{
    plugin::CallMethodDynGlobal(0x58D0C0, this);
}

void CControllerConfigManager::AffectPadFromMouse()
{
    plugin::CallMethodDynGlobal(0x58D1A0, this);
}

void CControllerConfigManager::ClearSimButtonPressCheckers()
{
    plugin::CallMethodDynGlobal(0x58D220, this);
}

bool CControllerConfigManager::GetIsKeyboardKeyDown(RsKeyCodes keycode)
{
    return plugin::CallMethodAndReturnDynGlobal<bool>(0x58D2A0, this, keycode);
}

bool CControllerConfigManager::GetIsKeyboardKeyJustDown(RsKeyCodes keycode)
{
    return plugin::CallMethodAndReturnDynGlobal<bool>(0x58D8A0, this, keycode);
}

bool CControllerConfigManager::GetIsMouseButtonDown(RsKeyCodes keycode)
{
    return plugin::CallMethodAndReturnDynGlobal<bool>(0x58E280, this, keycode);
}

bool CControllerConfigManager::GetIsMouseButtonUp(RsKeyCodes keycode)
{
    return plugin::CallMethodAndReturnDynGlobal<bool>(0x58E360, this, keycode);
}

void CControllerConfigManager::DeleteMatchingCommonControls(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E440, this, action, key, type);
}

void CControllerConfigManager::DeleteMatching3rdPersonControls(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E540, this, action, key, type);
}

void CControllerConfigManager::DeleteMatching1rst3rdPersonControls(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E630, this, action, key, type);
}

void CControllerConfigManager::DeleteMatchingVehicleControls(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E710, this, action, key, type);
}

void CControllerConfigManager::DeleteMatchingVehicle_3rdPersonControls(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E890, this, action, key, type);
}

void CControllerConfigManager::DeleteMatching1rstPersonControls(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E8D0, this, action, key, type);
}

void CControllerConfigManager::DeleteMatchingActionInitiators(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58E920, this, action, key, type);
}

bool CControllerConfigManager::GetIsKeyBlank(int32_t key, eControllerType type)
{
    return plugin::CallMethodAndReturnDynGlobal<bool>(0x58EA70, this, key, type);
}

e_ControllerActionType CControllerConfigManager::GetActionType(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<e_ControllerActionType>(0x58EAD0, this, action);
}

void CControllerConfigManager::ClearSettingsAssociatedWithAction(e_ControllerAction action, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58EB40, this, action, type);
}

wchar_t* CControllerConfigManager::GetControllerSettingTextWithOrderNumber(e_ControllerAction action, eContSetOrder setorder)
{
    return plugin::CallMethodAndReturnDynGlobal<wchar_t*>(0x58EBF0, this, action, setorder);
}

wchar_t* CControllerConfigManager::GetControllerSettingTextKeyBoard(e_ControllerAction action, eControllerType type)
{
    return plugin::CallMethodAndReturnDynGlobal<wchar_t*>(0x58EC50, this, action, type);
}

wchar_t* CControllerConfigManager::GetControllerSettingTextMouse(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<wchar_t*>(0x58F320, this, action);
}

wchar_t* CControllerConfigManager::GetControllerSettingTextJoystick(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<wchar_t*>(0x58F3D0, this, action);
}

int32_t CControllerConfigManager::GetNumOfSettingsForAction(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<int32_t>(0x58F420, this, action);
}

void CControllerConfigManager::GetWideStringOfCommandKeys(uint16_t action, wchar_t* text, uint16_t length)
{
    plugin::CallMethodDynGlobal(0x58F460, this, action, text, length);
}

int32_t CControllerConfigManager::GetControllerKeyAssociatedWithAction(e_ControllerAction action, eControllerType type)
{
    return plugin::CallMethodAndReturnDynGlobal<int32_t>(0x58F590, this, action, type);
}

void CControllerConfigManager::UpdateJoyButtonState(int32_t padnumber)
{
    plugin::CallMethodDynGlobal(0x58F5B0, this, padnumber);
}

bool CControllerConfigManager::GetIsActionAButtonCombo(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<bool>(0x58F660, this, action);
}

wchar_t* CControllerConfigManager::GetButtonComboText(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<wchar_t*>(0x58F690, this, action);
}

void CControllerConfigManager::SetControllerKeyAssociatedWithAction(e_ControllerAction action, int32_t key, eControllerType type)
{
    plugin::CallMethodDynGlobal(0x58F700, this, action, key, type);
}

int32_t CControllerConfigManager::GetMouseButtonAssociatedWithAction(e_ControllerAction action)
{
    return plugin::CallMethodAndReturnDynGlobal<int32_t>(0x58F740, this, action);
}

void CControllerConfigManager::SetMouseButtonAssociatedWithAction(e_ControllerAction action, int32_t button)
{
    plugin::CallMethodDynGlobal(0x58F760, this, action, button);
}

void CControllerConfigManager::ResetSettingOrder(e_ControllerAction action)
{
    plugin::CallMethodDynGlobal(0x58F790, this, action);
}