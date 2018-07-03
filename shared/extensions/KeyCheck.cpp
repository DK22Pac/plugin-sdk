/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "KeyCheck.h"
#include "plugin.h"

unsigned char KeyCheck::currStates[256] = {};
unsigned char KeyCheck::prevStates[256] = {};
unsigned int KeyCheck::timeDelayPressed[256] = {};

void KeyCheck::Update() {
    memcpy(prevStates, currStates, 256);
    GetKeyboardState(currStates);
}

bool KeyCheck::Check(unsigned int key) {
    return key < 256 && (currStates[key] & 0x80);
}

bool KeyCheck::CheckJustDown(unsigned int key) {
    return key < 256 && (currStates[key] & 0x80) && !(prevStates[key] & 0x80);
}

bool KeyCheck::CheckJustUp(unsigned int key) {
    return key < 256 && !(currStates[key] & 0x80) && (prevStates[key] & 0x80);
}

bool KeyCheck::CheckWithDelay(unsigned int key, unsigned int time) {
    if (key < 256 && (currStates[key] & 0x80)) {
        if (!(prevStates[key] & 0x80) || CTimer::m_snTimeInMilliseconds > static_cast<int>((timeDelayPressed[key] + time))) {
            timeDelayPressed[key] = CTimer::m_snTimeInMilliseconds;
            return true;
        }
    }
    return false;
}
