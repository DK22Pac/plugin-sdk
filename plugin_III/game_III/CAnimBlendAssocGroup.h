/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimBlendAssociation.h"
#include "RenderWare.h"
#include "CBaseModelInfo.h"

class PLUGIN_API CAnimBlendAssocGroup {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAnimBlendAssocGroup)

public:
    CAnimBlendAssociation *m_pAssociations;
    unsigned int m_nNumAssociations;

    SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *CopyAnimation(char const *name);
    SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *CopyAnimation(unsigned int id);
    SUPPORTED_10EN_11EN_STEAM void CreateAssociations(char const *name);
    SUPPORTED_10EN_11EN_STEAM void CreateAssociations(char const *blockName, RpClump *clump, char **animNames, int numAssocs);
    SUPPORTED_10EN_11EN_STEAM void DestroyAssociations();
    SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *GetAnimation(char const *name);
    SUPPORTED_10EN_11EN_STEAM CAnimBlendAssociation *GetAnimation(unsigned int id);
};

SUPPORTED_10EN_11EN_STEAM bool strcmpIgnoringDigits(char const *s1, char const *s2);
SUPPORTED_10EN_11EN_STEAM CBaseModelInfo *GetModelFromName(char const *name);

VALIDATE_SIZE(CAnimBlendAssocGroup, 0x8);

#include "meta/meta.CAnimBlendAssocGroup.h"
