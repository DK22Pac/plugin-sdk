/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPad.h"

CMouseState &CPad::PreviousMouseState = *(CMouseState*)0x00936908;
CMouseState &CPad::CurrentMouseState = *(CMouseState*)0x007DD860;
CKeyState &CPad::CurrentKeyState = *(CKeyState*)(0x007D15A8 + 0x216);

CPad* CPad::GetPad(int padNumber) {
    return plugin::CallAndReturn<CPad*, 0x4AB060, int>(padNumber);
}

bool CPad::CycleCameraModeJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA630, CPad *>(this);
}

bool CPad::CycleCameraModeUpJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA700, CPad *>(this);
}

bool CPad::GetTarget() {
    return plugin::CallMethodAndReturn<bool, 0x4AA4D0, CPad *>(this);
}

bool CPad::TargetJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA460, CPad *>(this);
}

bool CPad::ForceCameraBehindPlayer() {
    return plugin::CallMethodAndReturn<bool, 0x4A9F00, CPad *>(this);
}

bool CPad::GetAnaloguePadLeft() {
    return plugin::CallMethodAndReturn<bool, 0x4AA200, CPad *>(this);
}

bool CPad::GetAnaloguePadRight() {
    return plugin::CallMethodAndReturn<bool, 0x4AA1A0, CPad *>(this);
}

bool CPad::GetAnaloguePadUp() {
    return plugin::CallMethodAndReturn<bool, 0x4AA2B0, CPad *>(this);
}

bool CPad::GetAnaloguePadDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA260, CPad *>(this);
}

bool CPad::GetSprint() {
    return plugin::CallMethodAndReturn<bool, 0x4AA390, CPad *>(this);
}

bool CPad::GetCarGunFired() {
    return plugin::CallMethodAndReturn<bool, 0x4AAA60, CPad *>(this);
}

bool CPad::GetLookRight() {
    return plugin::CallMethodAndReturn<bool, 0x4AAC60, CPad *>(this);
}

bool CPad::GetLookLeft() {
    return plugin::CallMethodAndReturn<bool, 0x4AAC90, CPad *>(this);
}

bool CPad::GetLookBehindForPed() {
    return plugin::CallMethodAndReturn<bool, 0x4AAC00, CPad *>(this);
}

bool CPad::GetLookBehindForCar() {
    return plugin::CallMethodAndReturn<bool, 0x4AAC30, CPad *>(this);
}

bool CPad::GetWeapon() {
    return plugin::CallMethodAndReturn<bool, 0x4AA830, CPad *>(this);
}

bool CPad::WeaponJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA7B0, CPad *>(this);
}

bool CPad::LookAroundLeftRight() {
    return plugin::CallMethodAndReturn<bool, 0x4A9A80, CPad *>(this);
}

bool CPad::LookAroundUpDown() {
    return plugin::CallMethodAndReturn<bool, 0x4A98F0, CPad *>(this);
}

bool CPad::ExitVehicleJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA870, CPad *>(this);
}

bool CPad::GetExitVehicle() {
    return plugin::CallMethodAndReturn<bool, 0x4AA8F0, CPad *>(this);
}

bool CPad::JumpJustDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AA400, CPad *>(this);
}

bool CPad::GetAccelerate() {
    return plugin::CallMethodAndReturn<bool, 0x4AA760, CPad *>(this);
}

bool CPad::GetBrake() {
    return plugin::CallMethodAndReturn<bool, 0x4AA960, CPad *>(this);
}

bool CPad::GetPedWalkUpDown() {
    return plugin::CallMethodAndReturn<bool, 0x4AAD40, CPad *>(this);
}

bool CPad::GetPedWalkLeftRight() {
    return plugin::CallMethodAndReturn<bool, 0x4AAE30, CPad *>(this);
}