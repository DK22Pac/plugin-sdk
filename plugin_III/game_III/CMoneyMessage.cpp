/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMoneyMessage.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CMoneyMessage) = ADDRESS_BY_VERSION(0x51C2E0, 0x51C510, 0x51C4A0);
int ctor_gaddr(CMoneyMessage) = GLOBAL_ADDRESS_BY_VERSION(0x51C2E0, 0x51C510, 0x51C4A0);

int addrof(CMoneyMessage::Render) = ADDRESS_BY_VERSION(0x51AD90, 0x51AFC0, 0x51AF50);
int gaddrof(CMoneyMessage::Render) = GLOBAL_ADDRESS_BY_VERSION(0x51AD90, 0x51AFC0, 0x51AF50);

void CMoneyMessage::Render() {
    plugin::CallMethodDynGlobal<CMoneyMessage *>(gaddrof(CMoneyMessage::Render), this);
}
