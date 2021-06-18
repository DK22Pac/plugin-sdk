/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMousePointerStateHelper.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CMousePointerStateHelper &MousePointerStateHelper = *reinterpret_cast<CMousePointerStateHelper *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC8C, 0x95CE44, 0x96CF84));

int addrof(CMousePointerStateHelper::GetMouseSetUp) = ADDRESS_BY_VERSION(0x491BD0, 0x491C90, 0x491C20);
int gaddrof(CMousePointerStateHelper::GetMouseSetUp) = GLOBAL_ADDRESS_BY_VERSION(0x491BD0, 0x491C90, 0x491C20);

CMouseControllerState CMousePointerStateHelper::GetMouseSetUp() {
    CMouseControllerState ret_state;
    plugin::CallMethodDynGlobal<CMousePointerStateHelper *, CMouseControllerState *>(gaddrof(CMousePointerStateHelper::GetMouseSetUp), this, &ret_state);
    return ret_state;
}
