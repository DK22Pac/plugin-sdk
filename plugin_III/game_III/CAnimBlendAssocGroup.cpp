/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendAssocGroup.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendAssocGroup) = ADDRESS_BY_VERSION(0x401000, 0x401000, 0x401000);
int ctor_gaddr(CAnimBlendAssocGroup) = GLOBAL_ADDRESS_BY_VERSION(0x401000, 0x401000, 0x401000);

int dtor_addr(CAnimBlendAssocGroup) = ADDRESS_BY_VERSION(0x401010, 0x401010, 0x401010);
int dtor_gaddr(CAnimBlendAssocGroup) = GLOBAL_ADDRESS_BY_VERSION(0x401010, 0x401010, 0x401010);

int addrof_o(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *)) = ADDRESS_BY_VERSION(0x4013E0, 0x401420, 0x401420);
int gaddrof_o(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x4013E0, 0x401420, 0x401420);

CAnimBlendAssociation *CAnimBlendAssocGroup::CopyAnimation(char const *name) {
    return plugin::CallMethodAndReturnDynGlobal<CAnimBlendAssociation *, CAnimBlendAssocGroup *, char const *>(gaddrof_o(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *)), this, name);
}

int addrof_o(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int)) = ADDRESS_BY_VERSION(0x401420, 0x4013E0, 0x4013E0);
int gaddrof_o(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x401420, 0x4013E0, 0x4013E0);

CAnimBlendAssociation *CAnimBlendAssocGroup::CopyAnimation(unsigned int id) {
    return plugin::CallMethodAndReturnDynGlobal<CAnimBlendAssociation *, CAnimBlendAssocGroup *, unsigned int>(gaddrof_o(CAnimBlendAssocGroup::CopyAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int)), this, id);
}

int addrof_o(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *)) = ADDRESS_BY_VERSION(0x401130, 0x401130, 0x401130);
int gaddrof_o(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x401130, 0x401130, 0x401130);

void CAnimBlendAssocGroup::CreateAssociations(char const *name) {
    plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *, char const *>(gaddrof_o(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *)), this, name);
}

int addrof_o(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *, RpClump *, char **, int)) = ADDRESS_BY_VERSION(0x401220, 0x401220, 0x401220);
int gaddrof_o(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *, RpClump *, char **, int)) = GLOBAL_ADDRESS_BY_VERSION(0x401220, 0x401220, 0x401220);

void CAnimBlendAssocGroup::CreateAssociations(char const *blockName, RpClump *clump, char **animNames, int numAssocs) {
    plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *, char const *, RpClump *, char **, int>(gaddrof_o(CAnimBlendAssocGroup::CreateAssociations, void (CAnimBlendAssocGroup::*)(char const *, RpClump *, char **, int)), this, blockName, clump, animNames, numAssocs);
}

int addrof(CAnimBlendAssocGroup::DestroyAssociations) = ADDRESS_BY_VERSION(0x4012D0, 0x4012D0, 0x4012D0);
int gaddrof(CAnimBlendAssocGroup::DestroyAssociations) = GLOBAL_ADDRESS_BY_VERSION(0x4012D0, 0x4012D0, 0x4012D0);

void CAnimBlendAssocGroup::DestroyAssociations() {
    plugin::CallMethodDynGlobal<CAnimBlendAssocGroup *>(gaddrof(CAnimBlendAssocGroup::DestroyAssociations), this);
}

int addrof_o(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *)) = ADDRESS_BY_VERSION(0x401300, 0x401300, 0x401300);
int gaddrof_o(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x401300, 0x401300, 0x401300);

CAnimBlendAssociation *CAnimBlendAssocGroup::GetAnimation(char const *name) {
    return plugin::CallMethodAndReturnDynGlobal<CAnimBlendAssociation *, CAnimBlendAssocGroup *, char const *>(gaddrof_o(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(char const *)), this, name);
}

int addrof_o(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int)) = ADDRESS_BY_VERSION(0x4013D0, 0x4013D0, 0x4013D0);
int gaddrof_o(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x4013D0, 0x4013D0, 0x4013D0);

CAnimBlendAssociation *CAnimBlendAssocGroup::GetAnimation(unsigned int id) {
    return plugin::CallMethodAndReturnDynGlobal<CAnimBlendAssociation *, CAnimBlendAssocGroup *, unsigned int>(gaddrof_o(CAnimBlendAssocGroup::GetAnimation, CAnimBlendAssociation *(CAnimBlendAssocGroup::*)(unsigned int)), this, id);
}

int addrof(strcmpIgnoringDigits) = ADDRESS_BY_VERSION(0x401020, 0x401020, 0x401020);
int gaddrof(strcmpIgnoringDigits) = GLOBAL_ADDRESS_BY_VERSION(0x401020, 0x401020, 0x401020);

bool strcmpIgnoringDigits(char const *s1, char const *s2) {
    return plugin::CallAndReturnDynGlobal<bool, char const *, char const *>(gaddrof(strcmpIgnoringDigits), s1, s2);
}

int addrof(GetModelFromName) = ADDRESS_BY_VERSION(0x4010D0, 0x4010D0, 0x4010D0);
int gaddrof(GetModelFromName) = GLOBAL_ADDRESS_BY_VERSION(0x4010D0, 0x4010D0, 0x4010D0);

CBaseModelInfo *GetModelFromName(char const *name) {
    return plugin::CallAndReturnDynGlobal<CBaseModelInfo *, char const *>(gaddrof(GetModelFromName), name);
}
