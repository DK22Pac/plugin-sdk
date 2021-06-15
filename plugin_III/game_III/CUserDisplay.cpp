/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CUserDisplay.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE COnscreenTimer &CUserDisplay::OnscnTimer = *reinterpret_cast<COnscreenTimer *>(GLOBAL_ADDRESS_BY_VERSION(0x862238, 0x8621E8, 0x872328));
PLUGIN_VARIABLE CPager &CUserDisplay::Pager = *reinterpret_cast<CPager *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2744, 0x8F27F8, 0x902938));
PLUGIN_VARIABLE CPlaceName &CUserDisplay::PlaceName = *reinterpret_cast<CPlaceName *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29BC, 0x8F2A70, 0x902BB0));
PLUGIN_VARIABLE CCurrentVehicle &CUserDisplay::CurrentVehicle = *reinterpret_cast<CCurrentVehicle *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FE8, 0x8F609C, 0x9061DC));

int addrof(CUserDisplay::Init) = ADDRESS_BY_VERSION(0x4AD660, 0x4AD750, 0x4AD6E0);
int gaddrof(CUserDisplay::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4AD660, 0x4AD750, 0x4AD6E0);

void CUserDisplay::Init() {
    plugin::CallDynGlobal(gaddrof(CUserDisplay::Init));
}

int addrof(CUserDisplay::Process) = ADDRESS_BY_VERSION(0x4AD690, 0x4AD780, 0x4AD710);
int gaddrof(CUserDisplay::Process) = GLOBAL_ADDRESS_BY_VERSION(0x4AD690, 0x4AD780, 0x4AD710);

void CUserDisplay::Process() {
    plugin::CallDynGlobal(gaddrof(CUserDisplay::Process));
}
