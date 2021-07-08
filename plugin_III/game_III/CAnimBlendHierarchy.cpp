/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendHierarchy.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendHierarchy) = ADDRESS_BY_VERSION(0x401960, 0x401960, 0x401960);
int ctor_gaddr(CAnimBlendHierarchy) = GLOBAL_ADDRESS_BY_VERSION(0x401960, 0x401960, 0x401960);

int dtor_addr(CAnimBlendHierarchy) = ADDRESS_BY_VERSION(0x401990, 0x401990, 0x401990);
int dtor_gaddr(CAnimBlendHierarchy) = GLOBAL_ADDRESS_BY_VERSION(0x401990, 0x401990, 0x401990);

int addrof(CAnimBlendHierarchy::CalcTotalTime) = ADDRESS_BY_VERSION(0x4019E0, 0x4019E0, 0x4019E0);
int gaddrof(CAnimBlendHierarchy::CalcTotalTime) = GLOBAL_ADDRESS_BY_VERSION(0x4019E0, 0x4019E0, 0x4019E0);

void CAnimBlendHierarchy::CalcTotalTime() {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimBlendHierarchy::CalcTotalTime), this);
}

int addrof(CAnimBlendHierarchy::RemoveAnimSequences) = ADDRESS_BY_VERSION(0x401AB0, 0x401AB0, 0x401AB0);
int gaddrof(CAnimBlendHierarchy::RemoveAnimSequences) = GLOBAL_ADDRESS_BY_VERSION(0x401AB0, 0x401AB0, 0x401AB0);

void CAnimBlendHierarchy::RemoveAnimSequences() {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimBlendHierarchy::RemoveAnimSequences), this);
}

int addrof(CAnimBlendHierarchy::RemoveQuaternionFlips) = ADDRESS_BY_VERSION(0x401A80, 0x401A80, 0x401A80);
int gaddrof(CAnimBlendHierarchy::RemoveQuaternionFlips) = GLOBAL_ADDRESS_BY_VERSION(0x401A80, 0x401A80, 0x401A80);

void CAnimBlendHierarchy::RemoveQuaternionFlips() {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimBlendHierarchy::RemoveQuaternionFlips), this);
}

int addrof(CAnimBlendHierarchy::RemoveUncompressedData) = ADDRESS_BY_VERSION(0x401B00, 0x401B00, 0x401B00);
int gaddrof(CAnimBlendHierarchy::RemoveUncompressedData) = GLOBAL_ADDRESS_BY_VERSION(0x401B00, 0x401B00, 0x401B00);

void CAnimBlendHierarchy::RemoveUncompressedData() {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimBlendHierarchy::RemoveUncompressedData), this);
}

int addrof(CAnimBlendHierarchy::SetName) = ADDRESS_BY_VERSION(0x4019C0, 0x4019C0, 0x4019C0);
int gaddrof(CAnimBlendHierarchy::SetName) = GLOBAL_ADDRESS_BY_VERSION(0x4019C0, 0x4019C0, 0x4019C0);

void CAnimBlendHierarchy::SetName(char const *name) {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *, char const *>(gaddrof(CAnimBlendHierarchy::SetName), this, name);
}

int addrof(CAnimBlendHierarchy::Shutdown) = ADDRESS_BY_VERSION(0x4019A0, 0x4019A0, 0x4019A0);
int gaddrof(CAnimBlendHierarchy::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4019A0, 0x4019A0, 0x4019A0);

void CAnimBlendHierarchy::Shutdown() {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimBlendHierarchy::Shutdown), this);
}

int addrof(CAnimBlendHierarchy::Uncompress) = ADDRESS_BY_VERSION(0x401AD0, 0x401AD0, 0x401AD0);
int gaddrof(CAnimBlendHierarchy::Uncompress) = GLOBAL_ADDRESS_BY_VERSION(0x401AD0, 0x401AD0, 0x401AD0);

void CAnimBlendHierarchy::Uncompress() {
    plugin::CallMethodDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimBlendHierarchy::Uncompress), this);
}
