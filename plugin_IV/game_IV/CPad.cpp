/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPad.h"

CPad* Pads = gpatternt(CPad, "BE ? ? ? ? BF ? ? ? ? 8D 64 24 00 8B CE E8 ? ? ? ? 81 C6 ? ? ? ? 4F 79 F0 5F 5E C3 CC CC CC CC CC CC CC CC CC CC CC CC CC 83 EC 10", 1); // [4]
int32_t& CPad::CurrentPad = *gpatternt(int32_t, "8B 35 ? ? ? ? 39 35 ? ? ? ? 74 41", 2);

void CControllerState::Clear() {
    plugin::CallMethodDyn<CControllerState*>(gpattern("C7 01 ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C7 41 ? ? ? ? ? C3"), this);
}

void CPad::StartShake(uint32_t shakeDuration, int32_t shakeFrequency, uint32_t shakeDuration1, int32_t shakeFrequency1, int32_t shakeTime, bool force) {
    plugin::CallMethodDyn<CPad*>(gpattern("83 3D ? ? ? ? ? 56 8B F1 0F 84 ? ? ? ? E8"), this, shakeDuration, shakeFrequency, shakeDuration1, shakeFrequency1, shakeTime, force);
}

void CPad::Clear() {
    plugin::CallMethodDyn<CPad*>(gpattern("56 8B F1 8D 4E 04 E8 ? ? ? ? 8D 4E 54"), this);
}

CPad* CPad::GetPad(int32_t padId) {
    return plugin::CallAndReturnDyn<CPad*>(gpattern("83 7C 24 ? ? 7C 06"), padId);
}

bool CPad::HasPadInHands() {
    return plugin::CallAndReturnDyn<bool>(gpattern("B0 01 33 C9 83 3D"));
}

int32_t CPad::IsButtonPressed(int32_t padId, uint32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("FF 74 24 04 E8 ? ? ? ? 83 C4 04 85 C0 74 60"), padId, buttonId);
}

bool CPad::IsButtonJustPressed(int32_t padId, uint32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("56 FF 74 24 08 E8 ? ? ? ? 8B F0 83 C4 04 85 F6 0F 84"), padId, buttonId);
}

bool CPad::IsMouseButtonJustPressed(int32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("A1 ? ? ? ? 8B 4C 24 04 8B D0 33 15"), buttonId);
}

bool CPad::IsMouseButtonPressed(int32_t buttonId) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("8B 4C 24 04 A1 ? ? ? ? 49"), buttonId);
}

void CPad::GetMouseWheel(int32_t* wheel) {
    return plugin::CallDyn(gpattern("6A 01 E8 ? ? ? ? 8A 88 ? ? ? ? 32 88 ? ? ? ? 83 C4 04 80 F9 7F 76 0B"), wheel);
}

float* CPad::GetMousePos(float* x, float* y) {
    return plugin::CallAndReturnDyn<float*>(gpattern("66 0F 6E 05 ? ? ? ? F3 0F 10 0D ? ? ? ? 0F 5B C0 0F 57 D2 F3 0F 59 05 ? ? ? ? 0F 2F D0 76 05"), x, y);
}

void CPad::GetMouseInput(int32_t* x, int32_t* y) {
    return plugin::CallDyn(gpattern("56 8B 74 24 0C 57 8B 7C 24 0C C7 07 ? ? ? ? C7 06 ? ? ? ? 83 3D"), x, y);
}

void CPad::StopPadsShaking() {
    plugin::CallDyn(gpattern("56 BE ? ? ? ? 6A 01 8B CE E8 ? ? ? ? 81 C6"));
}

