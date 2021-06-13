/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CAnimationStyleDescriptor(&CAnimManager::ms_aAnimAssocDefinitions)[25] = *reinterpret_cast<CAnimationStyleDescriptor(*)[25]>(GLOBAL_ADDRESS_BY_VERSION(0x5EB724, 0x5EB724, 0x5F8724));
PLUGIN_VARIABLE CAnimBlock(&CAnimManager::ms_aAnimBlocks)[2] = *reinterpret_cast<CAnimBlock(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x6F01A0, 0x6F01A0, 0x7002E0));
PLUGIN_VARIABLE CAnimBlendHierarchy(&CAnimManager::ms_aAnimations)[250] = *reinterpret_cast<CAnimBlendHierarchy(*)[250]>(GLOBAL_ADDRESS_BY_VERSION(0x70F430, 0x70F430, 0x71F570));
PLUGIN_VARIABLE int &CAnimManager::ms_numAnimBlocks = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885AF8, 0x885AA8, 0x895BE8));
PLUGIN_VARIABLE int &CAnimManager::ms_numAnimations = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2DD4, 0x8E2E88, 0x8F2FC8));
PLUGIN_VARIABLE CAnimBlendAssocGroup *&CAnimManager::ms_aAnimAssocGroups = *reinterpret_cast<CAnimBlendAssocGroup **>(GLOBAL_ADDRESS_BY_VERSION(0x8F583C, 0x8F58F0, 0x905A30));
PLUGIN_VARIABLE CLinkList<CAnimBlendHierarchy *> &CAnimManager::ms_animCache = *reinterpret_cast<CLinkList<CAnimBlendHierarchy *> *>(GLOBAL_ADDRESS_BY_VERSION(0x9414DC, 0x941694, 0x9517D4));

int addrof(CAnimManager::AddAnimation) = ADDRESS_BY_VERSION(0x403620, 0x403620, 0x403620);
int gaddrof(CAnimManager::AddAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x403620, 0x403620, 0x403620);

CAnimBlendAssociation *CAnimManager::AddAnimation(RpClump *clump, AssocGroupId groupId, AnimationId animId) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, AssocGroupId, AnimationId>(gaddrof(CAnimManager::AddAnimation), clump, groupId, animId);
}

int addrof(CAnimManager::AddAnimationAndSync) = ADDRESS_BY_VERSION(0x4036A0, 0x4036A0, 0x4036A0);
int gaddrof(CAnimManager::AddAnimationAndSync) = GLOBAL_ADDRESS_BY_VERSION(0x4036A0, 0x4036A0, 0x4036A0);

CAnimBlendAssociation *CAnimManager::AddAnimationAndSync(RpClump *clump, CAnimBlendAssociation *association, AssocGroupId groupId, AnimationId animId) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, CAnimBlendAssociation *, AssocGroupId, AnimationId>(gaddrof(CAnimManager::AddAnimationAndSync), clump, association, groupId, animId);
}

int addrof(CAnimManager::BlendAnimation) = ADDRESS_BY_VERSION(0x403710, 0x403710, 0x403710);
int gaddrof(CAnimManager::BlendAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x403710, 0x403710, 0x403710);

CAnimBlendAssociation *CAnimManager::BlendAnimation(RpClump *clump, AssocGroupId groupId, AnimationId animId, float delta) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, AssocGroupId, AnimationId, float>(gaddrof(CAnimManager::BlendAnimation), clump, groupId, animId, delta);
}

int addrof(CAnimManager::CreateAnimAssociation) = ADDRESS_BY_VERSION(0x4035C0, 0x4035C0, 0x4035C0);
int gaddrof(CAnimManager::CreateAnimAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4035C0, 0x4035C0, 0x4035C0);

CAnimBlendAssociation *CAnimManager::CreateAnimAssociation(AssocGroupId groupId, AnimationId animId) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, AssocGroupId, AnimationId>(gaddrof(CAnimManager::CreateAnimAssociation), groupId, animId);
}

int addrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation *(*)(AssocGroupId, AnimationId)) = ADDRESS_BY_VERSION(0x4035E0, 0x4035E0, 0x4035E0);
int gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation *(*)(AssocGroupId, AnimationId)) = GLOBAL_ADDRESS_BY_VERSION(0x4035E0, 0x4035E0, 0x4035E0);

CAnimBlendAssociation *CAnimManager::GetAnimAssociation(AssocGroupId groupId, AnimationId animId) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, AssocGroupId, AnimationId>(gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation *(*)(AssocGroupId, AnimationId)), groupId, animId);
}

int addrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation *(*)(AssocGroupId, char const *)) = ADDRESS_BY_VERSION(0x403600, 0x403600, 0x403600);
int gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation *(*)(AssocGroupId, char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x403600, 0x403600, 0x403600);

CAnimBlendAssociation *CAnimManager::GetAnimAssociation(AssocGroupId groupId, char const *name) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, AssocGroupId, char const *>(gaddrof_o(CAnimManager::GetAnimAssociation, CAnimBlendAssociation *(*)(AssocGroupId, char const *)), groupId, name);
}

int addrof(CAnimManager::GetAnimGroupName) = ADDRESS_BY_VERSION(0x4035B0, 0x4035B0, 0x4035B0);
int gaddrof(CAnimManager::GetAnimGroupName) = GLOBAL_ADDRESS_BY_VERSION(0x4035B0, 0x4035B0, 0x4035B0);

char const *CAnimManager::GetAnimGroupName(AssocGroupId groupId) {
    return plugin::CallAndReturnDynGlobal<char const *, AssocGroupId>(gaddrof(CAnimManager::GetAnimGroupName), groupId);
}

int addrof(CAnimManager::GetAnimation) = ADDRESS_BY_VERSION(0x4034F0, 0x4034F0, 0x4034F0);
int gaddrof(CAnimManager::GetAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x4034F0, 0x4034F0, 0x4034F0);

CAnimBlendHierarchy *CAnimManager::GetAnimation(char const *name, CAnimBlock *animBlock) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendHierarchy *, char const *, CAnimBlock *>(gaddrof(CAnimManager::GetAnimation), name, animBlock);
}

int addrof(CAnimManager::GetAnimationBlock) = ADDRESS_BY_VERSION(0x4034A0, 0x4034A0, 0x4034A0);
int gaddrof(CAnimManager::GetAnimationBlock) = GLOBAL_ADDRESS_BY_VERSION(0x4034A0, 0x4034A0, 0x4034A0);

CAnimBlock *CAnimManager::GetAnimationBlock(char const *name) {
    return plugin::CallAndReturnDynGlobal<CAnimBlock *, char const *>(gaddrof(CAnimManager::GetAnimationBlock), name);
}

int addrof(CAnimManager::Initialise) = ADDRESS_BY_VERSION(0x403380, 0x403380, 0x403380);
int gaddrof(CAnimManager::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x403380, 0x403380, 0x403380);

void CAnimManager::Initialise() {
    plugin::CallDynGlobal(gaddrof(CAnimManager::Initialise));
}

int addrof_o(CAnimManager::LoadAnimFile, void (*)(char const *)) = ADDRESS_BY_VERSION(0x403A10, 0x403A10, 0x403A10);
int gaddrof_o(CAnimManager::LoadAnimFile, void (*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x403A10, 0x403A10, 0x403A10);

void CAnimManager::LoadAnimFile(char const *name) {
    plugin::CallDynGlobal<char const *>(gaddrof_o(CAnimManager::LoadAnimFile, void (*)(char const *)), name);
}

int addrof_o(CAnimManager::LoadAnimFile, void (*)(int, bool)) = ADDRESS_BY_VERSION(0x403A40, 0x403A40, 0x403A40);
int gaddrof_o(CAnimManager::LoadAnimFile, void (*)(int, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x403A40, 0x403A40, 0x403A40);

void CAnimManager::LoadAnimFile(int fileHandle, bool compress) {
    plugin::CallDynGlobal<int, bool>(gaddrof_o(CAnimManager::LoadAnimFile, void (*)(int, bool)), fileHandle, compress);
}

int addrof(CAnimManager::LoadAnimFiles) = ADDRESS_BY_VERSION(0x4038F0, 0x4038F0, 0x4038F0);
int gaddrof(CAnimManager::LoadAnimFiles) = GLOBAL_ADDRESS_BY_VERSION(0x4038F0, 0x4038F0, 0x4038F0);

void CAnimManager::LoadAnimFiles() {
    plugin::CallDynGlobal(gaddrof(CAnimManager::LoadAnimFiles));
}

int addrof(CAnimManager::RemoveLastAnimFile) = ADDRESS_BY_VERSION(0x404320, 0x404320, 0x404320);
int gaddrof(CAnimManager::RemoveLastAnimFile) = GLOBAL_ADDRESS_BY_VERSION(0x404320, 0x404320, 0x404320);

void CAnimManager::RemoveLastAnimFile() {
    plugin::CallDynGlobal(gaddrof(CAnimManager::RemoveLastAnimFile));
}

int addrof(CAnimManager::Shutdown) = ADDRESS_BY_VERSION(0x4033B0, 0x4033B0, 0x4033B0);
int gaddrof(CAnimManager::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4033B0, 0x4033B0, 0x4033B0);

void CAnimManager::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CAnimManager::Shutdown));
}

int addrof(CAnimManager::UncompressAnimation) = ADDRESS_BY_VERSION(0x403410, 0x403410, 0x403410);
int gaddrof(CAnimManager::UncompressAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x403410, 0x403410, 0x403410);

void CAnimManager::UncompressAnimation(CAnimBlendHierarchy *hier) {
    plugin::CallDynGlobal<CAnimBlendHierarchy *>(gaddrof(CAnimManager::UncompressAnimation), hier);
}
