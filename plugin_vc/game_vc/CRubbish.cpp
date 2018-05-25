/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRubbish.h"

PLUGIN_SOURCE_FILE

COneSheet *CRubbish::aSheets = reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x7F92F8, 0x7F9300, 0x7F8300));
COneSheet &CRubbish::StartMoversList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D184, 0xA0D18C, 0xA0C18C));
COneSheet &CRubbish::EndMoversList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D244, 0xA0D24C, 0xA0C24C));
COneSheet &CRubbish::StartEmptyList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D334, 0xA0D33C, 0xA0C33C));
COneSheet &CRubbish::EndStaticsList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D8D4, 0xA0D8DC, 0xA0C8DC));
COneSheet &CRubbish::EndEmptyList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D9D0, 0xA0D9D8, 0xA0C9D8));
COneSheet &CRubbish::StartStaticsList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0xA0FCB0, 0xA0FCB8, 0xA0ECB8));
int *gpRubbishTexture = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x7DC0B8, 0x7DC0C0, 0x7DB0C0));

int addrof(CRubbish::Render) = ADDRESS_BY_VERSION(0x567F20, 0x567F40, 0x567E10);
int gaddrof(CRubbish::Render) = GLOBAL_ADDRESS_BY_VERSION(0x567F20, 0x567F40, 0x567E10);

void CRubbish::Render() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Render));
}

int addrof(CRubbish::SetVisibility) = ADDRESS_BY_VERSION(0x567AF0, 0x567B10, 0x5679E0);
int gaddrof(CRubbish::SetVisibility) = GLOBAL_ADDRESS_BY_VERSION(0x567AF0, 0x567B10, 0x5679E0);

void CRubbish::SetVisibility(bool bVisibility) {
    plugin::CallDynGlobal<bool>(gaddrof(CRubbish::SetVisibility), bVisibility);
}

int addrof(CRubbish::Shutdown) = ADDRESS_BY_VERSION(0x568C00, 0x568C20, 0x568AF0);
int gaddrof(CRubbish::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x568C00, 0x568C20, 0x568AF0);

void CRubbish::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Shutdown));
}

int addrof(CRubbish::StirUp) = ADDRESS_BY_VERSION(0x567B00, 0x567B20, 0x5679F0);
int gaddrof(CRubbish::StirUp) = GLOBAL_ADDRESS_BY_VERSION(0x567B00, 0x567B20, 0x5679F0);

void CRubbish::StirUp(CVehicle *pVehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CRubbish::StirUp), pVehicle);
}

int addrof(CRubbish::Update) = ADDRESS_BY_VERSION(0x568550, 0x568570, 0x568440);
int gaddrof(CRubbish::Update) = GLOBAL_ADDRESS_BY_VERSION(0x568550, 0x568570, 0x568440);

void CRubbish::Update() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Update));
}
