/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAnimationStyleDescriptor.h"
#include "CAnimBlendAssocGroup.h"
#include "CAnimBlendAssociation.h"
#include "CAnimBlock.h"
#include "CLinkList.h"

class PLUGIN_API CAnimManager {
public:
	static void Initialise(void);
	static void Shutdown(void);
	static void UncompressAnimation(CAnimBlendHierarchy *hier);
	static CAnimBlock *GetAnimationBlock(const char *name);
	static CAnimBlendHierarchy *GetAnimation(const char *name, CAnimBlock *animBlock);
	static const char *GetAnimGroupName(int index);
	static CAnimBlendAssociation *CreateAnimAssociation(int AssocGroupId, int AnimationId);
	static CAnimBlendAssociation *CreateAnimAssociation(int AssocGroupId, int AnimationId, RpClump *clump);
	static CAnimBlendAssociation *GetAnimAssociation(int AssocGroupId, int AnimationId);
	static CAnimBlendAssociation *GetAnimAssociation(int AssocGroupId, const char *name);
	static CAnimBlendAssociation *AddAnimation(RpClump *clump, int AssocGroupId, int AnimationId);
	static CAnimBlendAssociation *AddAnimationAndSync(RpClump *clump, CAnimBlendAssociation *, int AssocGroupId, int AnimationId);
	static CAnimBlendAssociation *BlendAnimation(RpClump *clump, int AssocGroupId, int AnimationId, float clumpAssocBlendData);
	static void LoadAnimFiles(void);
	static void LoadAnimFile(const char*);
	static void LoadAnimFile(int, bool);
	static void RemoveLastAnimFile(void);

	static int &ms_numAnimations;
	static CAnimBlendHierarchy *ms_aAnimations;
	static int &ms_numAnimBlocks;
	static CAnimBlock *ms_aAnimBlocks;
	static CAnimBlendAssocGroup *&ms_aAnimAssocGroups;
	static const int ms_numAnimAssocDefinitions = 25;
	static CAnimationStyleDescriptor *ms_aAnimAssocDefinitions;	// 25
	static CLinkList<CAnimBlendHierarchy*> &ms_animCache;
};

