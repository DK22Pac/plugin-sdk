/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAnimManager.h"


int &CAnimManager::ms_numAnimations = *(int*)0x978540;
CAnimBlendHierarchy *CAnimManager::ms_aAnimations = (CAnimBlendHierarchy*)0x7F3D28;
int &CAnimManager::ms_numAnimBlocks = *(int*)0x94DDC4;
CAnimBlock *CAnimManager::ms_aAnimBlocks = (CAnimBlock*)0x7DB428;
CAnimBlendAssocGroup *&CAnimManager::ms_aAnimAssocGroups = *(CAnimBlendAssocGroup**)0x9B5F0C;
CAnimationStyleDescriptor *CAnimManager::ms_aAnimAssocDefinitions = (CAnimationStyleDescriptor*)0x6857B0;
CLinkList<CAnimBlendHierarchy*> &CAnimManager::ms_animCache = *(CLinkList<CAnimBlendHierarchy*>*)0xA0D96C;

int CAnimManager::GetAnimationBlockIndex(const char *name)
{
    return plugin::CallAndReturn<int, 0x4059E0, char const*>(name);
}

CAnimBlock *CAnimManager::GetAnimationBlock(const char *name)
{
    return plugin::CallAndReturn<CAnimBlock*, 0x405A50, char const*>(name);
}

CAnimBlendAssociation *CAnimManager::BlendAnimation(RpClump *clump, int AssocGroupId, int AnimationId, float clumpAssocBlendData)
{
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x405640, RpClump*, int, int, float>(clump, AssocGroupId, AnimationId, clumpAssocBlendData);
}