/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CKeyboardMgr.h"
#include "Patch.h"

uint8_t* CKeyboardMgr::OldKeyState; // [256]
uint8_t* CKeyboardMgr::NewKeyState; // [256]
uint8_t* CKeyboardMgr::TempKeyState; // [256]

static uint32_t CKeyboardMgr__GetAsciiJustPressed;
bool CKeyboardMgr::GetAsciiJustPressed(uint32_t code, int32_t* out) {
    return plugin::CallMethodAndReturnDyn<bool, CKeyboardMgr*>(CKeyboardMgr__GetAsciiJustPressed, this, code, out);
}

static uint32_t CKeyboardMgr__GetAsciiPressed;
bool CKeyboardMgr::GetAsciiPressed(uint32_t code, int32_t* out) {
    return plugin::CallMethodAndReturnDyn<bool, CKeyboardMgr*>(CKeyboardMgr__GetAsciiPressed, this, code, out);
}

static inline uint32_t CKeyboardMgr__IsKeyJustPressed;
bool CKeyboardMgr::IsKeyJustPressed(eKeyCodes key, int32_t index, const char* str) {
    return plugin::CallMethodAndReturnDyn<bool, CKeyboardMgr*>(CKeyboardMgr__IsKeyJustPressed, this, key, index, str);
}

static inline uint32_t CKeyboardMgr__IsKeyPressed;
bool CKeyboardMgr::IsKeyPressed(eKeyCodes key, int32_t index, const char* str) {
    return plugin::CallMethodAndReturnDyn<bool, CKeyboardMgr*>(CKeyboardMgr__IsKeyPressed, this, key, index, str);
}

template<>
void plugin::InitPatterns<CKeyboardMgr>() {    
    CKeyboardMgr::OldKeyState = (uint8_t*)plugin::patch::GetPointer(plugin::GetPattern("C6 05 ? ? ? ? ? 5E 83 C4 14", 2));
    CKeyboardMgr::NewKeyState = (uint8_t*)plugin::patch::GetPointer(plugin::GetPattern("C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? 5E 83 C4 14", 2));
    CKeyboardMgr::TempKeyState = (uint8_t*)plugin::patch::GetPointer(plugin::GetPattern("C6 82 ? ? ? ? ? C6 84 11", 2));

    CKeyboardMgr__GetAsciiJustPressed = plugin::GetPattern("83 EC 20 A1 ? ? ? ? 33 C4 89 44 24 1C 53 55 56 8B 74 24 30 57 8B 7C 24 38 6A 00 89 4C 24 18 FF 15 ? ? ? ? 8B E8 8B CD 81 E1 ? ? ? ? 83 F9 19 0F 94 C7 80 3D ? ? ? ? ? 88 7C 24 18 74 0D 80 3D ? ? ? ? ? 75 04 32 C0 EB 02 B0 01 55 6A 00 84 C0 56 0F 95 C3 FF 15 ? ? ? ? 8B C8 85 C9 0F 84 ? ? ? ? 8B 44 24 14 F6 84 06 ? ? ? ? ? 0F 84 ? ? ? ? F6 84 06", 0);
    CKeyboardMgr__GetAsciiPressed = plugin::GetPattern("83 EC 20 A1 ? ? ? ? 33 C4 89 44 24 1C 53 55 56 8B 74 24 30 57 8B 7C 24 38 6A 00 89 4C 24 18 FF 15 ? ? ? ? 8B E8 8B CD 81 E1 ? ? ? ? 83 F9 19 0F 94 C7 80 3D ? ? ? ? ? 88 7C 24 18 74 0D 80 3D ? ? ? ? ? 75 04 32 C0 EB 02 B0 01 55 6A 00 84 C0 56 0F 95 C3 FF 15 ? ? ? ? 8B C8 85 C9 0F 84 ? ? ? ? 8B 44 24 14 F6 84 06 ? ? ? ? ? 0F 84 ? ? ? ? 55", 0);

    CKeyboardMgr__IsKeyJustPressed = plugin::GetPattern("8B 44 24 08 3B 41 04 74 0A 83 F8 02 74 05 32 C0 C2 0C 00 8B 54 24 04", 0);
    CKeyboardMgr__IsKeyPressed = plugin::GetPattern("8B 44 24 08 3B 41 04 74 0A 83 F8 02 74 05 32 C0 C2 0C 00 8B 15", 0);
}
