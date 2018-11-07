/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPad.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CKeyboardState &CPad::NewKeyState = *reinterpret_cast<CKeyboardState *>(GLOBAL_ADDRESS_BY_VERSION(0x7D15A8, 0x7D15B0, 0x7D05B0));
PLUGIN_VARIABLE CMouseControllerState &CPad::PCTempMouseControllerState = *reinterpret_cast<CMouseControllerState *>(GLOBAL_ADDRESS_BY_VERSION(0x7DD860, 0x7DD868, 0x7DC868));
PLUGIN_VARIABLE CKeyboardState &CPad::OldKeyState = *reinterpret_cast<CKeyboardState *>(GLOBAL_ADDRESS_BY_VERSION(0x7DDB88, 0x7DDB90, 0x7DCB90));
PLUGIN_VARIABLE CKeyboardState &CPad::TempKeyState = *reinterpret_cast<CKeyboardState *>(GLOBAL_ADDRESS_BY_VERSION(0x864A00, 0x864A08, 0x863A08));
PLUGIN_VARIABLE CMouseControllerState &CPad::OldMouseControllerState = *reinterpret_cast<CMouseControllerState *>(GLOBAL_ADDRESS_BY_VERSION(0x936908, 0x936910, 0x935910));
PLUGIN_VARIABLE CMouseControllerState &CPad::NewMouseControllerState = *reinterpret_cast<CMouseControllerState *>(GLOBAL_ADDRESS_BY_VERSION(0x94D788, 0x94D790, 0x94C790));
PLUGIN_VARIABLE char(&CPad::KeyBoardCheatString)[30] = *reinterpret_cast<char(*)[30]>(GLOBAL_ADDRESS_BY_VERSION(0xA10942, 0xA1094A, 0xA0F94A));
PLUGIN_VARIABLE bool &CPad::m_bMapPadOneToPadTwo = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AE4, 0xA10AEC, 0xA0FAEC));
PLUGIN_VARIABLE bool &CPad::bDisplayNoControllerMessage = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AEC, 0xA10AF4, 0xA0FAF4));
PLUGIN_VARIABLE bool &CPad::bInvertLook4Pad = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AF7, 0xA10AFF, 0xA0FAFF));
PLUGIN_VARIABLE bool &CPad::bHasPlayerCheated = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B2E, 0xA10B36, 0xA0FB37));
PLUGIN_VARIABLE bool &CPad::bObsoleteControllerMessage = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B83, 0xA10B8C, 0xA0FB8D));
PLUGIN_VARIABLE CPad(&Pads)[2] = *reinterpret_cast<CPad(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x7DBCB0, 0x7DBCB8, 0x7DACB8));

int ctor_addr(CPad) = ADDRESS_BY_VERSION(0x4AF0F0, 0x4AF110, 0x4AEFC0);
int ctor_gaddr(CPad) = GLOBAL_ADDRESS_BY_VERSION(0x4AF0F0, 0x4AF110, 0x4AEFC0);

int dtor_addr(CPad) = ADDRESS_BY_VERSION(0x4AF0E0, 0x4AF100, 0x4AEFB0);
int dtor_gaddr(CPad) = GLOBAL_ADDRESS_BY_VERSION(0x4AF0E0, 0x4AF100, 0x4AEFB0);

int addrof(CPad::AddToPCCheatString) = ADDRESS_BY_VERSION(0x4ABD20, 0x4ABD40, 0x4ABBF0);
int gaddrof(CPad::AddToPCCheatString) = GLOBAL_ADDRESS_BY_VERSION(0x4ABD20, 0x4ABD40, 0x4ABBF0);

void CPad::AddToPCCheatString(char character) {
    plugin::CallMethodDynGlobal<CPad *, char>(gaddrof(CPad::AddToPCCheatString), this, character);
}

int addrof(CPad::CarGunJustDown) = ADDRESS_BY_VERSION(0x4AA9F0, 0x4AAA10, 0x4AA8C0);
int gaddrof(CPad::CarGunJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA9F0, 0x4AAA10, 0x4AA8C0);

bool CPad::CarGunJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CarGunJustDown), this);
}

int addrof(CPad::ChangeStationJustDown) = ADDRESS_BY_VERSION(0x4AA590, 0x4AA5B0, 0x4AA460);
int gaddrof(CPad::ChangeStationJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA590, 0x4AA5B0, 0x4AA460);

bool CPad::ChangeStationJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::ChangeStationJustDown), this);
}

int addrof(CPad::Clear) = ADDRESS_BY_VERSION(0x4ADBE0, 0x4ADC00, 0x4ADAB0);
int gaddrof(CPad::Clear) = GLOBAL_ADDRESS_BY_VERSION(0x4ADBE0, 0x4ADC00, 0x4ADAB0);

void CPad::Clear(char bDisablePlayerControls) {
    plugin::CallMethodDynGlobal<CPad *, char>(gaddrof(CPad::Clear), this, bDisablePlayerControls);
}

int addrof(CPad::CollectPickupJustDown) = ADDRESS_BY_VERSION(0x4A9F80, 0x4A9FA0, 0x4A9E50);
int gaddrof(CPad::CollectPickupJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4A9F80, 0x4A9FA0, 0x4A9E50);

bool CPad::CollectPickupJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CollectPickupJustDown), this);
}

int addrof(CPad::CycleCameraModeDownJustDown) = ADDRESS_BY_VERSION(0x4AA6C0, 0x4AA6E0, 0x4AA590);
int gaddrof(CPad::CycleCameraModeDownJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA6C0, 0x4AA6E0, 0x4AA590);

bool CPad::CycleCameraModeDownJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CycleCameraModeDownJustDown), this);
}

int addrof(CPad::CycleCameraModeJustDown) = ADDRESS_BY_VERSION(0x4AA630, 0x4AA650, 0x4AA500);
int gaddrof(CPad::CycleCameraModeJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA630, 0x4AA650, 0x4AA500);

bool CPad::CycleCameraModeJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CycleCameraModeJustDown), this);
}

int addrof(CPad::CycleCameraModeUpJustDown) = ADDRESS_BY_VERSION(0x4AA700, 0x4AA720, 0x4AA5D0);
int gaddrof(CPad::CycleCameraModeUpJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA700, 0x4AA720, 0x4AA5D0);

bool CPad::CycleCameraModeUpJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CycleCameraModeUpJustDown), this);
}

int addrof(CPad::CycleWeaponLeftJustDown) = ADDRESS_BY_VERSION(0x4AA560, 0x4AA580, 0x4AA430);
int gaddrof(CPad::CycleWeaponLeftJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA560, 0x4AA580, 0x4AA430);

bool CPad::CycleWeaponLeftJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CycleWeaponLeftJustDown), this);
}

int addrof(CPad::CycleWeaponRightJustDown) = ADDRESS_BY_VERSION(0x4AA530, 0x4AA550, 0x4AA400);
int gaddrof(CPad::CycleWeaponRightJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA530, 0x4AA550, 0x4AA400);

bool CPad::CycleWeaponRightJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::CycleWeaponRightJustDown), this);
}

int addrof(CPad::DuckJustDown) = ADDRESS_BY_VERSION(0x4AA430, 0x4AA450, 0x4AA300);
int gaddrof(CPad::DuckJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA430, 0x4AA450, 0x4AA300);

bool CPad::DuckJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::DuckJustDown), this);
}

int addrof(CPad::ExitVehicleJustDown) = ADDRESS_BY_VERSION(0x4AA870, 0x4AA890, 0x4AA740);
int gaddrof(CPad::ExitVehicleJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA870, 0x4AA890, 0x4AA740);

bool CPad::ExitVehicleJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::ExitVehicleJustDown), this);
}

int addrof(CPad::ForceCameraBehindPlayer) = ADDRESS_BY_VERSION(0x4A9F00, 0x4A9F20, 0x4A9DD0);
int gaddrof(CPad::ForceCameraBehindPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x4A9F00, 0x4A9F20, 0x4A9DD0);

bool CPad::ForceCameraBehindPlayer() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::ForceCameraBehindPlayer), this);
}

int addrof(CPad::GetAccelerate) = ADDRESS_BY_VERSION(0x4AA760, 0x4AA780, 0x4AA630);
int gaddrof(CPad::GetAccelerate) = GLOBAL_ADDRESS_BY_VERSION(0x4AA760, 0x4AA780, 0x4AA630);

short CPad::GetAccelerate() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetAccelerate), this);
}

int addrof(CPad::GetAnalogueLeftRight) = ADDRESS_BY_VERSION(0x4AADC0, 0x4AADE0, 0x4AAC90);
int gaddrof(CPad::GetAnalogueLeftRight) = GLOBAL_ADDRESS_BY_VERSION(0x4AADC0, 0x4AADE0, 0x4AAC90);

short CPad::GetAnalogueLeftRight() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetAnalogueLeftRight), this);
}

int addrof(CPad::GetAnaloguePadDown) = ADDRESS_BY_VERSION(0x4AA260, 0x4AA280, 0x4AA130);
int gaddrof(CPad::GetAnaloguePadDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA260, 0x4AA280, 0x4AA130);

bool CPad::GetAnaloguePadDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetAnaloguePadDown), this);
}

int addrof(CPad::GetAnaloguePadLeft) = ADDRESS_BY_VERSION(0x4AA200, 0x4AA220, 0x4AA0D0);
int gaddrof(CPad::GetAnaloguePadLeft) = GLOBAL_ADDRESS_BY_VERSION(0x4AA200, 0x4AA220, 0x4AA0D0);

bool CPad::GetAnaloguePadLeft() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetAnaloguePadLeft), this);
}

int addrof(CPad::GetAnaloguePadLeftJustUp) = ADDRESS_BY_VERSION(0x4AA0D0, 0x4AA0F0, 0x4A9FA0);
int gaddrof(CPad::GetAnaloguePadLeftJustUp) = GLOBAL_ADDRESS_BY_VERSION(0x4AA0D0, 0x4AA0F0, 0x4A9FA0);

bool CPad::GetAnaloguePadLeftJustUp() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetAnaloguePadLeftJustUp), this);
}

int addrof(CPad::GetAnaloguePadRight) = ADDRESS_BY_VERSION(0x4AA1A0, 0x4AA1C0, 0x4AA070);
int gaddrof(CPad::GetAnaloguePadRight) = GLOBAL_ADDRESS_BY_VERSION(0x4AA1A0, 0x4AA1C0, 0x4AA070);

bool CPad::GetAnaloguePadRight() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetAnaloguePadRight), this);
}

int addrof(CPad::GetAnaloguePadRightJustUp) = ADDRESS_BY_VERSION(0x4AA000, 0x4AA020, 0x4A9ED0);
int gaddrof(CPad::GetAnaloguePadRightJustUp) = GLOBAL_ADDRESS_BY_VERSION(0x4AA000, 0x4AA020, 0x4A9ED0);

bool CPad::GetAnaloguePadRightJustUp() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetAnaloguePadRightJustUp), this);
}

int addrof(CPad::GetAnaloguePadUp) = ADDRESS_BY_VERSION(0x4AA2B0, 0x4AA2D0, 0x4AA180);
int gaddrof(CPad::GetAnaloguePadUp) = GLOBAL_ADDRESS_BY_VERSION(0x4AA2B0, 0x4AA2D0, 0x4AA180);

bool CPad::GetAnaloguePadUp() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetAnaloguePadUp), this);
}

int addrof(CPad::GetAnalogueUpDown) = ADDRESS_BY_VERSION(0x4AACC0, 0x4AACE0, 0x4AAB90);
int gaddrof(CPad::GetAnalogueUpDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AACC0, 0x4AACE0, 0x4AAB90);

short CPad::GetAnalogueUpDown() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetAnalogueUpDown), this);
}

int addrof(CPad::GetBrake) = ADDRESS_BY_VERSION(0x4AA960, 0x4AA980, 0x4AA830);
int gaddrof(CPad::GetBrake) = GLOBAL_ADDRESS_BY_VERSION(0x4AA960, 0x4AA980, 0x4AA830);

short CPad::GetBrake() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetBrake), this);
}

int addrof(CPad::GetCarGunFired) = ADDRESS_BY_VERSION(0x4AAA60, 0x4AAA80, 0x4AA930);
int gaddrof(CPad::GetCarGunFired) = GLOBAL_ADDRESS_BY_VERSION(0x4AAA60, 0x4AAA80, 0x4AA930);

bool CPad::GetCarGunFired() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetCarGunFired), this);
}

int addrof(CPad::GetCarGunLeftRight) = ADDRESS_BY_VERSION(0x4AAEB0, 0x4AAED0, 0x4AAD80);
int gaddrof(CPad::GetCarGunLeftRight) = GLOBAL_ADDRESS_BY_VERSION(0x4AAEB0, 0x4AAED0, 0x4AAD80);

short CPad::GetCarGunLeftRight() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetCarGunLeftRight), this);
}

int addrof(CPad::GetCarGunUpDown) = ADDRESS_BY_VERSION(0x4AAF00, 0x4AAF20, 0x4AADD0);
int gaddrof(CPad::GetCarGunUpDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AAF00, 0x4AAF20, 0x4AADD0);

short CPad::GetCarGunUpDown() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetCarGunUpDown), this);
}

int addrof(CPad::GetExitVehicle) = ADDRESS_BY_VERSION(0x4AA8F0, 0x4AA910, 0x4AA7C0);
int gaddrof(CPad::GetExitVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x4AA8F0, 0x4AA910, 0x4AA7C0);

bool CPad::GetExitVehicle() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetExitVehicle), this);
}

int addrof(CPad::GetHandBrake) = ADDRESS_BY_VERSION(0x4AA9B0, 0x4AA9D0, 0x4AA880);
int gaddrof(CPad::GetHandBrake) = GLOBAL_ADDRESS_BY_VERSION(0x4AA9B0, 0x4AA9D0, 0x4AA880);

short CPad::GetHandBrake() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetHandBrake), this);
}

int addrof(CPad::GetHorn) = ADDRESS_BY_VERSION(0x4AAB60, 0x4AAB80, 0x4AAA30);
int gaddrof(CPad::GetHorn) = GLOBAL_ADDRESS_BY_VERSION(0x4AAB60, 0x4AAB80, 0x4AAA30);

bool CPad::GetHorn() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetHorn), this);
}

int addrof(CPad::GetLookBehindForCar) = ADDRESS_BY_VERSION(0x4AAC30, 0x4AAC50, 0x4AAB00);
int gaddrof(CPad::GetLookBehindForCar) = GLOBAL_ADDRESS_BY_VERSION(0x4AAC30, 0x4AAC50, 0x4AAB00);

bool CPad::GetLookBehindForCar() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetLookBehindForCar), this);
}

int addrof(CPad::GetLookBehindForPed) = ADDRESS_BY_VERSION(0x4AAC00, 0x4AAC20, 0x4AAAD0);
int gaddrof(CPad::GetLookBehindForPed) = GLOBAL_ADDRESS_BY_VERSION(0x4AAC00, 0x4AAC20, 0x4AAAD0);

bool CPad::GetLookBehindForPed() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetLookBehindForPed), this);
}

int addrof(CPad::GetLookLeft) = ADDRESS_BY_VERSION(0x4AAC90, 0x4AACB0, 0x4AAB60);
int gaddrof(CPad::GetLookLeft) = GLOBAL_ADDRESS_BY_VERSION(0x4AAC90, 0x4AACB0, 0x4AAB60);

bool CPad::GetLookLeft() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetLookLeft), this);
}

int addrof(CPad::GetLookRight) = ADDRESS_BY_VERSION(0x4AAC60, 0x4AAC80, 0x4AAB30);
int gaddrof(CPad::GetLookRight) = GLOBAL_ADDRESS_BY_VERSION(0x4AAC60, 0x4AAC80, 0x4AAB30);

bool CPad::GetLookRight() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetLookRight), this);
}

int addrof(CPad::GetPedWalkLeftRight) = ADDRESS_BY_VERSION(0x4AAE30, 0x4AAE50, 0x4AAD00);
int gaddrof(CPad::GetPedWalkLeftRight) = GLOBAL_ADDRESS_BY_VERSION(0x4AAE30, 0x4AAE50, 0x4AAD00);

short CPad::GetPedWalkLeftRight() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetPedWalkLeftRight), this);
}

int addrof(CPad::GetPedWalkUpDown) = ADDRESS_BY_VERSION(0x4AAD40, 0x4AAD60, 0x4AAC10);
int gaddrof(CPad::GetPedWalkUpDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AAD40, 0x4AAD60, 0x4AAC10);

short CPad::GetPedWalkUpDown() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetPedWalkUpDown), this);
}

int addrof(CPad::GetSprint) = ADDRESS_BY_VERSION(0x4AA390, 0x4AA3B0, 0x4AA260);
int gaddrof(CPad::GetSprint) = GLOBAL_ADDRESS_BY_VERSION(0x4AA390, 0x4AA3B0, 0x4AA260);

bool CPad::GetSprint() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetSprint), this);
}

int addrof(CPad::GetSteeringLeftRight) = ADDRESS_BY_VERSION(0x4AAFD0, 0x4AAFF0, 0x4AAEA0);
int gaddrof(CPad::GetSteeringLeftRight) = GLOBAL_ADDRESS_BY_VERSION(0x4AAFD0, 0x4AAFF0, 0x4AAEA0);

short CPad::GetSteeringLeftRight() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetSteeringLeftRight), this);
}

int addrof(CPad::GetSteeringUpDown) = ADDRESS_BY_VERSION(0x4AAF50, 0x4AAF70, 0x4AAE20);
int gaddrof(CPad::GetSteeringUpDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AAF50, 0x4AAF70, 0x4AAE20);

short CPad::GetSteeringUpDown() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetSteeringUpDown), this);
}

int addrof(CPad::GetTarget) = ADDRESS_BY_VERSION(0x4AA4D0, 0x4AA4F0, 0x4AA3A0);
int gaddrof(CPad::GetTarget) = GLOBAL_ADDRESS_BY_VERSION(0x4AA4D0, 0x4AA4F0, 0x4AA3A0);

bool CPad::GetTarget() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::GetTarget), this);
}

int addrof(CPad::GetWeapon) = ADDRESS_BY_VERSION(0x4AA830, 0x4AA850, 0x4AA700);
int gaddrof(CPad::GetWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4AA830, 0x4AA850, 0x4AA700);

short CPad::GetWeapon() {
    return plugin::CallMethodAndReturnDynGlobal<short, CPad *>(gaddrof(CPad::GetWeapon), this);
}

int addrof(CPad::HornJustDown) = ADDRESS_BY_VERSION(0x4AAAC0, 0x4AAAE0, 0x4AA990);
int gaddrof(CPad::HornJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AAAC0, 0x4AAAE0, 0x4AA990);

bool CPad::HornJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::HornJustDown), this);
}

int addrof(CPad::InputHowLongAgo) = ADDRESS_BY_VERSION(0x4ADBD0, 0x4ADBF0, 0x4ADAA0);
int gaddrof(CPad::InputHowLongAgo) = GLOBAL_ADDRESS_BY_VERSION(0x4ADBD0, 0x4ADBF0, 0x4ADAA0);

int CPad::InputHowLongAgo() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPad *>(gaddrof(CPad::InputHowLongAgo), this);
}

int addrof(CPad::JumpJustDown) = ADDRESS_BY_VERSION(0x4AA400, 0x4AA420, 0x4AA2D0);
int gaddrof(CPad::JumpJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA400, 0x4AA420, 0x4AA2D0);

bool CPad::JumpJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::JumpJustDown), this);
}

int addrof(CPad::LookAroundLeftRight) = ADDRESS_BY_VERSION(0x4A9A80, 0x4A9AA0, 0x4A9950);
int gaddrof(CPad::LookAroundLeftRight) = GLOBAL_ADDRESS_BY_VERSION(0x4A9A80, 0x4A9AA0, 0x4A9950);

int CPad::LookAroundLeftRight() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPad *>(gaddrof(CPad::LookAroundLeftRight), this);
}

int addrof(CPad::LookAroundUpDown) = ADDRESS_BY_VERSION(0x4A98F0, 0x4A9910, 0x4A97C0);
int gaddrof(CPad::LookAroundUpDown) = GLOBAL_ADDRESS_BY_VERSION(0x4A98F0, 0x4A9910, 0x4A97C0);

int CPad::LookAroundUpDown() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPad *>(gaddrof(CPad::LookAroundUpDown), this);
}

int addrof(CPad::ReconcileTwoControllersInput) = ADDRESS_BY_VERSION(0x4AD350, 0x4AD370, 0x4AD220);
int gaddrof(CPad::ReconcileTwoControllersInput) = GLOBAL_ADDRESS_BY_VERSION(0x4AD350, 0x4AD370, 0x4AD220);

CControllerState CPad::ReconcileTwoControllersInput(CControllerState const &controller1, CControllerState const &controller2) {
    CControllerState ret_result;
    plugin::CallMethodDynGlobal<CPad *, CControllerState *, CControllerState const &, CControllerState const &>(gaddrof(CPad::ReconcileTwoControllersInput), this, &ret_result, controller1, controller2);
    return ret_result;
}

int addrof(CPad::ResetAverageWeapon) = ADDRESS_BY_VERSION(0x4A98A0, 0x4A98C0, 0x4A9770);
int gaddrof(CPad::ResetAverageWeapon) = GLOBAL_ADDRESS_BY_VERSION(0x4A98A0, 0x4A98C0, 0x4A9770);

void CPad::ResetAverageWeapon() {
    plugin::CallMethodDynGlobal<CPad *>(gaddrof(CPad::ResetAverageWeapon), this);
}

int addrof(CPad::SetDrunkInputDelay) = ADDRESS_BY_VERSION(0x4AD340, 0x4AD360, 0x4AD210);
int gaddrof(CPad::SetDrunkInputDelay) = GLOBAL_ADDRESS_BY_VERSION(0x4AD340, 0x4AD360, 0x4AD210);

void CPad::SetDrunkInputDelay(int bEnable) {
    plugin::CallMethodDynGlobal<CPad *, int>(gaddrof(CPad::SetDrunkInputDelay), this, bEnable);
}

int addrof(CPad::ShiftTargetLeftJustDown) = ADDRESS_BY_VERSION(0x4AA360, 0x4AA380, 0x4AA230);
int gaddrof(CPad::ShiftTargetLeftJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA360, 0x4AA380, 0x4AA230);

bool CPad::ShiftTargetLeftJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::ShiftTargetLeftJustDown), this);
}

int addrof(CPad::ShiftTargetRightJustDown) = ADDRESS_BY_VERSION(0x4AA300, 0x4AA320, 0x4AA1D0);
int gaddrof(CPad::ShiftTargetRightJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA300, 0x4AA320, 0x4AA1D0);

bool CPad::ShiftTargetRightJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::ShiftTargetRightJustDown), this);
}

int addrof(CPad::SniperModeLookLeftRight) = ADDRESS_BY_VERSION(0x4A9D40, 0x4A9D60, 0x4A9C10);
int gaddrof(CPad::SniperModeLookLeftRight) = GLOBAL_ADDRESS_BY_VERSION(0x4A9D40, 0x4A9D60, 0x4A9C10);

int CPad::SniperModeLookLeftRight() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPad *>(gaddrof(CPad::SniperModeLookLeftRight), this);
}

int addrof(CPad::SniperModeLookUpDown) = ADDRESS_BY_VERSION(0x4A9C40, 0x4A9C60, 0x4A9B10);
int gaddrof(CPad::SniperModeLookUpDown) = GLOBAL_ADDRESS_BY_VERSION(0x4A9C40, 0x4A9C60, 0x4A9B10);

int CPad::SniperModeLookUpDown() {
    return plugin::CallMethodAndReturnDynGlobal<int, CPad *>(gaddrof(CPad::SniperModeLookUpDown), this);
}

int addrof(CPad::SniperZoomIn) = ADDRESS_BY_VERSION(0x4A9E90, 0x4A9EB0, 0x4A9D60);
int gaddrof(CPad::SniperZoomIn) = GLOBAL_ADDRESS_BY_VERSION(0x4A9E90, 0x4A9EB0, 0x4A9D60);

bool CPad::SniperZoomIn() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::SniperZoomIn), this);
}

int addrof(CPad::SniperZoomOut) = ADDRESS_BY_VERSION(0x4A9E20, 0x4A9E40, 0x4A9CF0);
int gaddrof(CPad::SniperZoomOut) = GLOBAL_ADDRESS_BY_VERSION(0x4A9E20, 0x4A9E40, 0x4A9CF0);

bool CPad::SniperZoomOut() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::SniperZoomOut), this);
}

int addrof(CPad::StartShake) = ADDRESS_BY_VERSION(0x4AD2E0, 0x4AD300, 0x4AD1B0);
int gaddrof(CPad::StartShake) = GLOBAL_ADDRESS_BY_VERSION(0x4AD2E0, 0x4AD300, 0x4AD1B0);

void CPad::StartShake(short duration, unsigned char frequency) {
    plugin::CallMethodDynGlobal<CPad *, short, unsigned char>(gaddrof(CPad::StartShake), this, duration, frequency);
}

int addrof(CPad::StopShaking) = ADDRESS_BY_VERSION(0x4AB070, 0x4AB090, 0x4AAF40);
int gaddrof(CPad::StopShaking) = GLOBAL_ADDRESS_BY_VERSION(0x4AB070, 0x4AB090, 0x4AAF40);

void CPad::StopShaking(int a1) {
    plugin::CallMethodDynGlobal<CPad *, int>(gaddrof(CPad::StopShaking), this, a1);
}

int addrof(CPad::TargetJustDown) = ADDRESS_BY_VERSION(0x4AA460, 0x4AA480, 0x4AA330);
int gaddrof(CPad::TargetJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA460, 0x4AA480, 0x4AA330);

bool CPad::TargetJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::TargetJustDown), this);
}

int addrof(CPad::Update) = ADDRESS_BY_VERSION(0x4AB0C0, 0x4AB0E0, 0x4AAF90);
int gaddrof(CPad::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4AB0C0, 0x4AB0E0, 0x4AAF90);

void CPad::Update(int a2) {
    plugin::CallMethodDynGlobal<CPad *, int>(gaddrof(CPad::Update), this, a2);
}

int addrof(CPad::WeaponJustDown) = ADDRESS_BY_VERSION(0x4AA7B0, 0x4AA7D0, 0x4AA680);
int gaddrof(CPad::WeaponJustDown) = GLOBAL_ADDRESS_BY_VERSION(0x4AA7B0, 0x4AA7D0, 0x4AA680);

bool CPad::WeaponJustDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPad *>(gaddrof(CPad::WeaponJustDown), this);
}

int addrof(CPad::ClearMouseHistory) = ADDRESS_BY_VERSION(0x4ADB30, 0x4ADB50, 0x4ADA00);
int gaddrof(CPad::ClearMouseHistory) = GLOBAL_ADDRESS_BY_VERSION(0x4ADB30, 0x4ADB50, 0x4ADA00);

void CPad::ClearMouseHistory() {
    plugin::CallDynGlobal(gaddrof(CPad::ClearMouseHistory));
}

int addrof(CPad::DoCheats) = ADDRESS_BY_VERSION(0x4AB090, 0x4AB0B0, 0x4AAF60);
int gaddrof(CPad::DoCheats) = GLOBAL_ADDRESS_BY_VERSION(0x4AB090, 0x4AB0B0, 0x4AAF60);

void CPad::DoCheats() {
    plugin::CallDynGlobal(gaddrof(CPad::DoCheats));
}

int addrof(CPad::EditCodesForControls) = ADDRESS_BY_VERSION(0x4A90B0, 0x4A90D0, 0x4A8F80);
int gaddrof(CPad::EditCodesForControls) = GLOBAL_ADDRESS_BY_VERSION(0x4A90B0, 0x4A90D0, 0x4A8F80);

void CPad::EditCodesForControls(int *outKeyCode, int a2) {
    plugin::CallDynGlobal<int *, int>(gaddrof(CPad::EditCodesForControls), outKeyCode, a2);
}

int addrof(CPad::FixPadsAfterSave) = ADDRESS_BY_VERSION(0x4AB0A0, 0x4AB0C0, 0x4AAF70);
int gaddrof(CPad::FixPadsAfterSave) = GLOBAL_ADDRESS_BY_VERSION(0x4AB0A0, 0x4AB0C0, 0x4AAF70);

void CPad::FixPadsAfterSave() {
    plugin::CallDynGlobal(gaddrof(CPad::FixPadsAfterSave));
}

int addrof(CPad::GetPad) = ADDRESS_BY_VERSION(0x4AB060, 0x4AB080, 0x4AAF30);
int gaddrof(CPad::GetPad) = GLOBAL_ADDRESS_BY_VERSION(0x4AB060, 0x4AB080, 0x4AAF30);

CPad *CPad::GetPad(int padNumber) {
    return plugin::CallAndReturnDynGlobal<CPad *, int>(gaddrof(CPad::GetPad), padNumber);
}

int addrof(CPad::PrintErrorMessage) = ADDRESS_BY_VERSION(0x4A9660, 0x4A9680, 0x4A9530);
int gaddrof(CPad::PrintErrorMessage) = GLOBAL_ADDRESS_BY_VERSION(0x4A9660, 0x4A9680, 0x4A9530);

void CPad::PrintErrorMessage() {
    plugin::CallDynGlobal(gaddrof(CPad::PrintErrorMessage));
}

int addrof(CPad::ResetCheats) = ADDRESS_BY_VERSION(0x4A9590, 0x4A95B0, 0x4A9460);
int gaddrof(CPad::ResetCheats) = GLOBAL_ADDRESS_BY_VERSION(0x4A9590, 0x4A95B0, 0x4A9460);

void CPad::ResetCheats() {
    plugin::CallDynGlobal(gaddrof(CPad::ResetCheats));
}

int addrof(CPad::StopPadsShaking) = ADDRESS_BY_VERSION(0x4AB080, 0x4AB0A0, 0x4AAF50);
int gaddrof(CPad::StopPadsShaking) = GLOBAL_ADDRESS_BY_VERSION(0x4AB080, 0x4AB0A0, 0x4AAF50);

void CPad::StopPadsShaking() {
    plugin::CallDynGlobal(gaddrof(CPad::StopPadsShaking));
}

int addrof(CPad::UpdateMouse) = ADDRESS_BY_VERSION(0x4AD820, 0x4AD840, 0x4AD6F0);
int gaddrof(CPad::UpdateMouse) = GLOBAL_ADDRESS_BY_VERSION(0x4AD820, 0x4AD840, 0x4AD6F0);

void CPad::UpdateMouse() {
    plugin::CallDynGlobal(gaddrof(CPad::UpdateMouse));
}

int addrof(CPad::UpdatePads) = ADDRESS_BY_VERSION(0x4AB6C0, 0x4AB6E0, 0x4AB590);
int gaddrof(CPad::UpdatePads) = GLOBAL_ADDRESS_BY_VERSION(0x4AB6C0, 0x4AB6E0, 0x4AB590);

void CPad::UpdatePads() {
    plugin::CallDynGlobal(gaddrof(CPad::UpdatePads));
}
