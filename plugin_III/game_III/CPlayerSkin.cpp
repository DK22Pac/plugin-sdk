/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerSkin.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &CPlayerSkin::m_txdSlot = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AA0, 0x8F1B54, 0x901C94));
PLUGIN_VARIABLE RpClump *&gpPlayerClump = *reinterpret_cast<RpClump **>(GLOBAL_ADDRESS_BY_VERSION(0x660FF8, 0x660FF8, 0x670F80));
PLUGIN_VARIABLE float &gOldFov = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x660FFC, 0x660FFC, 0x670F84));

int addrof(CPlayerSkin::BeginFrontendSkinEdit) = ADDRESS_BY_VERSION(0x59BC70, 0x59BF30, 0x599020);
int gaddrof(CPlayerSkin::BeginFrontendSkinEdit) = GLOBAL_ADDRESS_BY_VERSION(0x59BC70, 0x59BF30, 0x599020);

void CPlayerSkin::BeginFrontendSkinEdit() {
    plugin::CallDynGlobal(gaddrof(CPlayerSkin::BeginFrontendSkinEdit));
}

int addrof(CPlayerSkin::EndFrontendSkinEdit) = ADDRESS_BY_VERSION(0x59BCB0, 0x59BF70, 0x599060);
int gaddrof(CPlayerSkin::EndFrontendSkinEdit) = GLOBAL_ADDRESS_BY_VERSION(0x59BCB0, 0x59BF70, 0x599060);

void CPlayerSkin::EndFrontendSkinEdit() {
    plugin::CallDynGlobal(gaddrof(CPlayerSkin::EndFrontendSkinEdit));
}

int addrof(CPlayerSkin::GetSkinTexture) = ADDRESS_BY_VERSION(0x59B9F0, 0x59BCB0, 0x598DA0);
int gaddrof(CPlayerSkin::GetSkinTexture) = GLOBAL_ADDRESS_BY_VERSION(0x59B9F0, 0x59BCB0, 0x598DA0);

RwTexture *CPlayerSkin::GetSkinTexture(char const *name) {
    return plugin::CallAndReturnDynGlobal<RwTexture *, char const *>(gaddrof(CPlayerSkin::GetSkinTexture), name);
}

int addrof(CPlayerSkin::Initialise) = ADDRESS_BY_VERSION(0x59B9B0, 0x59BC70, 0x598D60);
int gaddrof(CPlayerSkin::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x59B9B0, 0x59BC70, 0x598D60);

void CPlayerSkin::Initialise() {
    plugin::CallDynGlobal(gaddrof(CPlayerSkin::Initialise));
}

int addrof(CPlayerSkin::RenderFrontendSkinEdit) = ADDRESS_BY_VERSION(0x59BCE0, 0x59BFA0, 0x599090);
int gaddrof(CPlayerSkin::RenderFrontendSkinEdit) = GLOBAL_ADDRESS_BY_VERSION(0x59BCE0, 0x59BFA0, 0x599090);

void CPlayerSkin::RenderFrontendSkinEdit() {
    plugin::CallDynGlobal(gaddrof(CPlayerSkin::RenderFrontendSkinEdit));
}

int addrof(CPlayerSkin::Shutdown) = ADDRESS_BY_VERSION(0x59B9E0, 0x59BCA0, 0x598D90);
int gaddrof(CPlayerSkin::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x59B9E0, 0x59BCA0, 0x598D90);

void CPlayerSkin::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CPlayerSkin::Shutdown));
}

int addrof(FindPlayerDff) = ADDRESS_BY_VERSION(0x59BB20, 0x59BDE0, 0x598ED0);
int gaddrof(FindPlayerDff) = GLOBAL_ADDRESS_BY_VERSION(0x59BB20, 0x59BDE0, 0x598ED0);

void FindPlayerDff(unsigned int &offset, unsigned int &size) {
    plugin::CallDynGlobal<unsigned int &, unsigned int &>(gaddrof(FindPlayerDff), offset, size);
}

int addrof(LoadPlayerDff) = ADDRESS_BY_VERSION(0x59BBA0, 0x59BE60, 0x598F50);
int gaddrof(LoadPlayerDff) = GLOBAL_ADDRESS_BY_VERSION(0x59BBA0, 0x59BE60, 0x598F50);

void LoadPlayerDff() {
    plugin::CallDynGlobal(gaddrof(LoadPlayerDff));
}
