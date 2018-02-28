/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CTimer.h"

class KeyCheck {
    static unsigned char currStates[256];
    static unsigned char prevStates[256];
    static unsigned int timeDelayPressed[256];
public:
    static void Update();
    static bool Check(unsigned int key);
    static bool CheckJustDown(unsigned int key);
    static bool CheckJustUp(unsigned int key);
    static bool CheckWithDelay(unsigned int key, unsigned int time);
};
