/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMoneyMessages.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CMoneyMessage(&CMoneyMessages::aMoneyMessages)[16] = *reinterpret_cast<CMoneyMessage(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x7268F0, 0x7268F0, 0x736A30));

int addrof(CMoneyMessages::Init) = ADDRESS_BY_VERSION(0x51AF70, 0x51B1A0, 0x51B130);
int gaddrof(CMoneyMessages::Init) = GLOBAL_ADDRESS_BY_VERSION(0x51AF70, 0x51B1A0, 0x51B130);

void CMoneyMessages::Init() {
    plugin::CallDynGlobal(gaddrof(CMoneyMessages::Init));
}

int addrof(CMoneyMessages::Render) = ADDRESS_BY_VERSION(0x51B030, 0x51B260, 0x51B1F0);
int gaddrof(CMoneyMessages::Render) = GLOBAL_ADDRESS_BY_VERSION(0x51B030, 0x51B260, 0x51B1F0);

void CMoneyMessages::Render() {
    plugin::CallDynGlobal(gaddrof(CMoneyMessages::Render));
}
