/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMousePointerStateHelper.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CMousePointerStateHelper &MousePointerStateHelper = *reinterpret_cast<CMousePointerStateHelper *>(GLOBAL_ADDRESS_BY_VERSION(0xA10A4C, 0xA10A54, 0xA0FA54));

int addrof(CMousePointerStateHelper::GetMouseSetUp) = ADDRESS_BY_VERSION(0x4ADA20, 0x4ADA40, 0x4AD8F0);
int gaddrof(CMousePointerStateHelper::GetMouseSetUp) = GLOBAL_ADDRESS_BY_VERSION(0x4ADA20, 0x4ADA40, 0x4AD8F0);

CMouseControllerState CMousePointerStateHelper::GetMouseSetUp() {
    CMouseControllerState ret_state;
    plugin::CallMethodDynGlobal<CMousePointerStateHelper *, CMouseControllerState *>(gaddrof(CMousePointerStateHelper::GetMouseSetUp), this, &ret_state);
    return ret_state;
}
