/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "scrProgram.h"

int32_t rage::scrProgram::Release() {
    return plugin::CallMethodAndReturnDyn<int32_t>(gpattern("FF 0D ? ? ? ? 56 8B F1 75 7A"), this);
}
