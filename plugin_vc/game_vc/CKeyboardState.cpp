/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CKeyboardState.h"

PLUGIN_SOURCE_FILE

int addrof(CKeyboardState::Clear) = ADDRESS_BY_VERSION(0x4AE1C0, 0x4AE1E0, 0x4AE090);
int gaddrof(CKeyboardState::Clear) = GLOBAL_ADDRESS_BY_VERSION(0x4AE1C0, 0x4AE1E0, 0x4AE090);

void CKeyboardState::Clear() {
    plugin::CallMethodDynGlobal<CKeyboardState *>(gaddrof(CKeyboardState::Clear), this);
}
