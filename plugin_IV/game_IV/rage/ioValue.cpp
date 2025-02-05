/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "ioValue.h"

bool rage::ioValue::IsPressed() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("8A 51 04 8A 41 06 32 C2 3C 7F 77 0C"), this);
}

bool rage::ioValue::IsDown() {
    return plugin::CallMethodAndReturnDyn<bool>(gpattern("8A 51 04 8A 41 06 32 C2 3C 7F 76 0C"), this);
}
