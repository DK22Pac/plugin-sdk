/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPad.h"
#include "Patch.h"

CPad* Pads; // [4]

static CKeyboardMgr* CPad__KeyboardMgrAddr;
CKeyboardMgr& CPad::KeyboardMgr = *(CKeyboardMgr*)CPad__KeyboardMgrAddr;

static float* CPad__MousePosXAddr;
float& MousePosX = *(float*)CPad__MousePosXAddr;

static float* CPad__MousePosYAddr;
float& MousePosY = *(float*)CPad__MousePosYAddr;

static int32_t* CPad__NewMouseControllerStateAddr;
int32_t* CPad::NewMouseControllerState = CPad__NewMouseControllerStateAddr;
static int32_t* CPad__OldMouseControllerStateAddr;
int32_t* CPad::OldMouseControllerState = CPad__OldMouseControllerStateAddr;

static int32_t* CPad__CurrentPadAddr;
int32_t& CPad::CurrentPad = *(int32_t*)CPad__CurrentPadAddr;

static uint32_t CControllerState__ClearAddr;
void CControllerState::Clear() {
    plugin::CallMethodDyn<CControllerState*>(CControllerState__ClearAddr, this);
}

static uint32_t CPad__StartShakeAddr;
void CPad::StartShake(uint32_t shakeDuration, int32_t shakeFrequency, uint32_t shakeDuration1, int32_t shakeFrequency1, int32_t shakeTime, bool force) {
    plugin::CallMethodDyn<CPad*>(CPad__StartShakeAddr, this, shakeDuration, shakeFrequency, shakeDuration1, shakeFrequency1, shakeTime, force);
}

static uint32_t CPad__ClearAddr;
void CPad::Clear() {
    plugin::CallMethodDyn<CPad*>(CPad__ClearAddr, this);
}

static uint32_t CPad__CPadAddr;
CPad* CPad::GetPad(int32_t padId) {
    return plugin::CallAndReturnDyn<CPad*>(CPad__CPadAddr, padId);
}

static uint32_t CPad__HasPadInHandsAddr;
bool CPad::HasPadInHands() {
    return plugin::CallAndReturnDyn<bool>(CPad__HasPadInHandsAddr);
}

static uint32_t CPad__IsButtonPressedAddr;
int32_t CPad::IsButtonPressed(int32_t padId, uint32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(CPad__IsButtonPressedAddr, padId, buttonId);
}

static uint32_t CPad__IsButtonJustPressedAddr;
bool CPad::IsButtonJustPressed(int32_t padId, uint32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(CPad__IsButtonJustPressedAddr, padId, buttonId);
}

static uint32_t CPad__IsMouseButtonJustPressedAddr;
bool CPad::IsMouseButtonJustPressed(int32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(CPad__IsMouseButtonJustPressedAddr, buttonId);
}

static uint32_t CPad__IsMouseButtonPressedAddr;
bool CPad::IsMouseButtonPressed(int32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(CPad__IsMouseButtonPressedAddr, buttonId);
}

static uint32_t CPad__GetMousePosAddr;
float* CPad::GetMousePos(float* x, float* y) {
    return plugin::CallAndReturnDyn<float*>(CPad__GetMousePosAddr, x, y);
}

static uint32_t CPad__StopPadsShakingAddr;
void CPad::StopPadsShaking() {
    plugin::CallDyn(CPad__StopPadsShakingAddr);
}

template<>
void plugin::InitPatterns<CPad>() {
    Pads = (CPad*)plugin::patch::GetPointer(plugin::GetPattern("BE ? ? ? ? BF ? ? ? ? 8D 64 24 00 8B CE E8 ? ? ? ? 81 C6 ? ? ? ? 4F 79 F0 5F 5E C3 CC CC CC CC CC CC CC CC CC CC CC CC CC 83 EC 10", 1));

    CControllerState__ClearAddr = plugin::GetPattern("C7 01 ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C3", 0);

    CPad__MousePosXAddr = (float*)plugin::patch::GetPointer(plugin::GetPattern("89 0D ? ? ? ? 8B 4C 24 08", 2));
    CPad__MousePosYAddr = (float*)plugin::patch::GetPointer(plugin::GetPattern("89 0D ? ? ? ? C3 CC CC CC CC CC 53", 2));

    CPad__NewMouseControllerStateAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3 8B 0D", 2));
    CPad__OldMouseControllerStateAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C3 8B 0D", 2));

    CPad__CurrentPadAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("8B 35 ? ? ? ? 39 35 ? ? ? ? 74 41", 2));

    CPad__KeyboardMgrAddr = (CKeyboardMgr*)plugin::patch::GetPointer(plugin::GetPattern("BE ? ? ? ? BF ? ? ? ? 8D 64 24 00 81 EE ? ? ? ? 8B CE E8 ? ? ? ? 4F 79 F0 5F 5E C3 CC CC CC CC CC CC CC CC CC CC CC CC CC B9 ? ? ? ? E8 ? ? ? ? B9", 1));
    CPad__StartShakeAddr = plugin::GetPattern("83 3D ? ? ? ? ? 56 8B F1 0F 84 ? ? ? ? E8", 0);
    CPad__ClearAddr = plugin::GetPattern("56 8B F1 8D 4E 04 E8 ? ? ? ? 8D 4E 54", 0);
    CPad__CPadAddr = plugin::GetPattern("83 7C 24 ? ? 7C 06", 0);
    CPad__HasPadInHandsAddr = plugin::GetPattern("B0 01 33 C9 83 3D", 0);
    CPad__IsButtonPressedAddr = plugin::GetPattern("FF 74 24 04 E8 ? ? ? ? 83 C4 04 85 C0 74 60", 0);
    CPad__IsButtonJustPressedAddr = plugin::GetPattern("56 FF 74 24 08 E8 ? ? ? ? 8B F0 83 C4 04 85 F6 0F 84", 0);
    CPad__IsMouseButtonJustPressedAddr = plugin::GetPattern("A1 ? ? ? ? 8B 4C 24 04 8B D0 33 15", 0);
    CPad__IsMouseButtonPressedAddr = plugin::GetPattern("8B 4C 24 04 A1 ? ? ? ? 49", 0);
    CPad__GetMousePosAddr = plugin::GetPattern("66 0F 6E 05 ? ? ? ? F3 0F 10 0D ? ? ? ? 0F 5B C0 0F 57 D2 F3 0F 59 05 ? ? ? ? 0F 2F D0 76 05", 0);
}
