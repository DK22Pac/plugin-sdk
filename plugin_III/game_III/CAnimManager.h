/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CAnimationStyleDescriptor.h"
#include "CAnimBlendAssocGroup.h"
#include "CLinkList.h"
#include "CAnimBlock.h"

class PLUGIN_API CAnimManager {
public:
    SUPPORTED_10EN_11EN_STEAM static CAnimationStyleDescriptor(&ms_aAnimAssocDefinitions)[25]; // static CAnimationStyleDescriptor ms_aAnimAssocDefinitions[25]
    SUPPORTED_10EN_11EN_STEAM static CAnimBlock(&ms_aAnimBlocks)[2]; // static CAnimBlock ms_aAnimBlocks[2]
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendHierarchy(&ms_aAnimations)[250]; // static CAnimBlendHierarchy ms_aAnimations[250]
    SUPPORTED_10EN_11EN_STEAM static int &ms_numAnimBlocks;
    SUPPORTED_10EN_11EN_STEAM static int &ms_numAnimations;
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssocGroup *&ms_aAnimAssocGroups;
    SUPPORTED_10EN_11EN_STEAM static CLinkList<CAnimBlendHierarchy *> &ms_animCache;

    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssociation *AddAnimation(RpClump *clump, AssocGroupId groupId, AnimationId animId);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssociation *AddAnimationAndSync(RpClump *clump, CAnimBlendAssociation *association, AssocGroupId groupId, AnimationId animId);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssociation *BlendAnimation(RpClump *clump, AssocGroupId groupId, AnimationId animId, float delta);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssociation *CreateAnimAssociation(AssocGroupId groupId, AnimationId animId);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssociation *GetAnimAssociation(AssocGroupId groupId, AnimationId animId);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendAssociation *GetAnimAssociation(AssocGroupId groupId, char const *name);
    SUPPORTED_10EN_11EN_STEAM static char const *GetAnimGroupName(AssocGroupId groupId);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlendHierarchy *GetAnimation(char const *name, CAnimBlock *animBlock);
    SUPPORTED_10EN_11EN_STEAM static CAnimBlock *GetAnimationBlock(char const *name);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadAnimFile(char const *name);
    SUPPORTED_10EN_11EN_STEAM static void LoadAnimFile(int fileHandle, bool compress);
    SUPPORTED_10EN_11EN_STEAM static void LoadAnimFiles();
    SUPPORTED_10EN_11EN_STEAM static void RemoveLastAnimFile();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void UncompressAnimation(CAnimBlendHierarchy *hier);
};

#include "meta/meta.CAnimManager.h"
