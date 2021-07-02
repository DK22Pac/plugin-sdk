/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRubbish.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE COneSheet(&CRubbish::aSheets)[64] = *reinterpret_cast<COneSheet(*)[64]>(GLOBAL_ADDRESS_BY_VERSION(0x712AC0, 0x712AC0, 0x722C00));
PLUGIN_VARIABLE int &CRubbish::RubbishVisibility = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B7C, 0x885B2C, 0x895C6C));
PLUGIN_VARIABLE COneSheet &CRubbish::StartMoversList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x9406D0, 0x940888, 0x9509C8));
PLUGIN_VARIABLE COneSheet &CRubbish::EndMoversList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x9411F4, 0x9413AC, 0x9514EC));
PLUGIN_VARIABLE COneSheet &CRubbish::StartEmptyList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x941240, 0x9413F8, 0x951538));
PLUGIN_VARIABLE COneSheet &CRubbish::EndStaticsList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x941454, 0x94160C, 0x95174C));
PLUGIN_VARIABLE COneSheet &CRubbish::EndEmptyList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x94154C, 0x941704, 0x951844));
PLUGIN_VARIABLE COneSheet &CRubbish::StartStaticsList = *reinterpret_cast<COneSheet *>(GLOBAL_ADDRESS_BY_VERSION(0x942FC4, 0x94317C, 0x9532BC));
PLUGIN_VARIABLE bool &CRubbish::bRubbishInvisible = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD97, 0x95CF50, 0x96D090));
PLUGIN_VARIABLE float(&aAnimations)[3][34] = *reinterpret_cast<float(*)[3][34]>(GLOBAL_ADDRESS_BY_VERSION(0x5FE9E4, 0x5FE7CC, 0x60B7C4));
PLUGIN_VARIABLE RwImVertexIndex(&RubbishIndexList)[6] = *reinterpret_cast<RwImVertexIndex(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x6490E0, 0x6490E0, 0x6590E0));
PLUGIN_VARIABLE RwImVertexIndex(&RubbishIndexList2)[6] = *reinterpret_cast<RwImVertexIndex(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x6490EC, 0x6490EC, 0x6590EC));
PLUGIN_VARIABLE RwIm3DVertex(&RubbishVertices)[4] = *reinterpret_cast<RwIm3DVertex(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x6490F8, 0x6490F8, 0x6590F8));
PLUGIN_VARIABLE RwTexture *(&gpRubbishTexture)[4] = *reinterpret_cast<RwTexture *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x6F0738, 0x6F0738, 0x700878));

int addrof(CRubbish::Init) = ADDRESS_BY_VERSION(0x511940, 0x511B30, 0x511AC0);
int gaddrof(CRubbish::Init) = GLOBAL_ADDRESS_BY_VERSION(0x511940, 0x511B30, 0x511AC0);

void CRubbish::Init() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Init));
}

int addrof(CRubbish::Render) = ADDRESS_BY_VERSION(0x512190, 0x5123A0, 0x512330);
int gaddrof(CRubbish::Render) = GLOBAL_ADDRESS_BY_VERSION(0x512190, 0x5123A0, 0x512330);

void CRubbish::Render() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Render));
}

int addrof(CRubbish::SetVisibility) = ADDRESS_BY_VERSION(0x512AA0, 0x512CB0, 0x512C40);
int gaddrof(CRubbish::SetVisibility) = GLOBAL_ADDRESS_BY_VERSION(0x512AA0, 0x512CB0, 0x512C40);

void CRubbish::SetVisibility(bool visible) {
    plugin::CallDynGlobal<bool>(gaddrof(CRubbish::SetVisibility), visible);
}

int addrof(CRubbish::Shutdown) = ADDRESS_BY_VERSION(0x511B50, 0x511D40, 0x511CD0);
int gaddrof(CRubbish::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x511B50, 0x511D40, 0x511CD0);

void CRubbish::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Shutdown));
}

int addrof(CRubbish::StirUp) = ADDRESS_BY_VERSION(0x512690, 0x5128A0, 0x512830);
int gaddrof(CRubbish::StirUp) = GLOBAL_ADDRESS_BY_VERSION(0x512690, 0x5128A0, 0x512830);

void CRubbish::StirUp(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(CRubbish::StirUp), vehicle);
}

int addrof(CRubbish::Update) = ADDRESS_BY_VERSION(0x511B90, 0x511DA0, 0x511D30);
int gaddrof(CRubbish::Update) = GLOBAL_ADDRESS_BY_VERSION(0x511B90, 0x511DA0, 0x511D30);

void CRubbish::Update() {
    plugin::CallDynGlobal(gaddrof(CRubbish::Update));
}
