/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CControllerState.h"

PLUGIN_SOURCE_FILE

int addrof(CControllerState::CheckForInput) = ADDRESS_BY_VERSION(0x4AE470, 0x4AE490, 0x4AE340);
int gaddrof(CControllerState::CheckForInput) = GLOBAL_ADDRESS_BY_VERSION(0x4AE470, 0x4AE490, 0x4AE340);

bool CControllerState::CheckForInput() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CControllerState *>(gaddrof(CControllerState::CheckForInput), this);
}
