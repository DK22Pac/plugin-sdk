/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMovingThings.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CMovingThing &CMovingThings::StartCloseList = *reinterpret_cast<CMovingThing *>(GLOBAL_ADDRESS_BY_VERSION(0x9412CC, 0x941484, 0x9515C4));
PLUGIN_VARIABLE CMovingThing &CMovingThings::EndCloseList = *reinterpret_cast<CMovingThing *>(GLOBAL_ADDRESS_BY_VERSION(0x9414A0, 0x941658, 0x951798));
PLUGIN_VARIABLE unsigned short &CMovingThings::Num = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC2C, 0x95CDE4, 0x96CF24));
PLUGIN_VARIABLE CScrollBar(&aScrollBars)[11] = *reinterpret_cast<CScrollBar(*)[11]>(GLOBAL_ADDRESS_BY_VERSION(0x62F240, 0x62F240, 0x63F240));
PLUGIN_VARIABLE CTowerClock(&aTowerClocks)[2] = *reinterpret_cast<CTowerClock(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x62F660, 0x62F660, 0x63F660));
PLUGIN_VARIABLE CDigitalClock(&aDigitalClocks)[3] = *reinterpret_cast<CDigitalClock(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x62F6B0, 0x62F6B0, 0x63F6B0));
PLUGIN_VARIABLE CMovingThing(&aMovingThings)[128] = *reinterpret_cast<CMovingThing(*)[128]>(GLOBAL_ADDRESS_BY_VERSION(0x6E7FA8, 0x6E7FA8, 0x6F80E8));

int addrof(CMovingThings::Init) = ADDRESS_BY_VERSION(0x4FE7C0, 0x4FE8A0, 0x4FE830);
int gaddrof(CMovingThings::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4FE7C0, 0x4FE8A0, 0x4FE830);

void CMovingThings::Init() {
    plugin::CallDynGlobal(gaddrof(CMovingThings::Init));
}

int addrof(CMovingThings::Render) = ADDRESS_BY_VERSION(0x4FF210, 0x4FF2F0, 0x4FF280);
int gaddrof(CMovingThings::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4FF210, 0x4FF2F0, 0x4FF280);

void CMovingThings::Render() {
    plugin::CallDynGlobal(gaddrof(CMovingThings::Render));
}

int addrof(CMovingThings::Shutdown) = ADDRESS_BY_VERSION(0x4FF020, 0x4FF100, 0x4FF090);
int gaddrof(CMovingThings::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4FF020, 0x4FF100, 0x4FF090);

void CMovingThings::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CMovingThings::Shutdown));
}

int addrof(CMovingThings::Update) = ADDRESS_BY_VERSION(0x4FF0D0, 0x4FF1B0, 0x4FF140);
int gaddrof(CMovingThings::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4FF0D0, 0x4FF1B0, 0x4FF140);

void CMovingThings::Update() {
    plugin::CallDynGlobal(gaddrof(CMovingThings::Update));
}
