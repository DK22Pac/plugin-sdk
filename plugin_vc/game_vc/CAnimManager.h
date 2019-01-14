/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
	static int GetNumRefsToAnimBlock(int index);
	static void RemoveAnimBlockRefWithoutDelete(int index);
	static void RemoveAnimBlockRef(int index);
	static void AddAnimBlockRef(int index);
	static void RemoveAnimBlock(int index);
	static void RemoveLastAnimFile(void);
	static void LoadAnimFile(RwStream *stream, bool a2, const char (*a3)[32]);
	static int RegisterAnimBlock(const char *name);
	static void CreateAnimAssocGroups(void);
	static void LoadAnimFiles(void);
	static CAnimBlendAssociation *BlendAnimation(RpClump *clump, int AssocGroupId, int AnimationId, float speed);
	static CAnimBlendAssociation *AddAnimation(RpClump *clump, int AssocGroupId, int AnimationId);
	static CAnimBlendAssociation *GetAnimAssociation(int AssocGroupId, const char *name);
	static CAnimBlendAssociation *GetAnimAssociation(int AssocGroupId, int AnimationId);
	static const char *GetAnimGroupName(int index);
	static CAnimBlendHierarchy *GetAnimation(const char *name, CAnimBlock *animBlock);
	static int GetAnimationBlockIndex(const char *name);
	static CAnimBlock *GetAnimationBlock(const char *name);
	static void RemoveFromUncompressedCache(CAnimBlendHierarchy*);
	static void UncompressAnimation(CAnimBlendHierarchy *hier);
	static void Shutdown(void);
	static void Initialise(void);

	static int &ms_numAnimations;
	static CAnimBlendHierarchy *ms_aAnimations;
	static int &ms_numAnimBlocks;
	static CAnimBlock *ms_aAnimBlocks;
	static CAnimBlendAssocGroup *&ms_aAnimAssocGroups;
	static const int ms_numAnimAssocDefinitions = 61;
	static CAnimationStyleDescriptor *ms_aAnimAssocDefinitions;
	static CLinkList<CAnimBlendHierarchy*> &ms_animCache;
};
