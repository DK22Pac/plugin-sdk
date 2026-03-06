/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGarages.h"

char *CGarages::MessageIDString = (char *)0x96C014;
int& CGarages::MessageNumberInString = *(int*)0x96C010;
int& CGarages::MessageNumberInString2 = *(int*)0x96C00C;

bool CGarages::Load() {
    return plugin::CallAndReturn<bool, 0x5D3270>();
}

bool CGarages::Save() {
    return plugin::CallAndReturn<bool, 0x5D3270>();
}