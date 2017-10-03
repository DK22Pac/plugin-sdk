/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"
#include "CAnimBlendStaticAssociation.h"
#include "CAnimBlendNode.h"
#include "CAnimBlendClumpData.h"

enum eAnimBlendFlags {
    ANIM_PLAYING = 1,
    ANIM_LOOP = 2,
    ANIM_PARTIAL = 16
};


class CAnimBlendAssociation {
protected:
	void *vtable;

public:
	void *m_pPrev;
	CAnimBlendClumpData *m_pAnimBlendClumpData;
	uint16_t m_wNumBlendNodes;
	int16_t m_wAnimGroup;
	CAnimBlendNode *m_pAnimBlendNodeArray;
	CAnimBlendHierarchy *m_pAnimBlendHierarchy;
	float m_fBlendAmount;
	float m_fBlendDelta;
	float m_fCurrentTime;
	float m_fSpeed;
	float m_fTimeStep;
	int16_t m_wAnimID;
	uint16_t m_wFlags;
	uint32_t m_dwCallbackType;
	void *m_pCallbackFunc;
	void *m_pCallbackData;

	//funcs
	CAnimBlendNode* AllocateAnimBlendNodeArray(int numBlendNodes);
	CAnimBlendAssociation(CAnimBlendStaticAssociation& arg1);
	CAnimBlendAssociation(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier);
	CAnimBlendNode* GetNode(int index);
	void Init(CAnimBlendStaticAssociation& arg1);
	void Init(RpClump* pClump, CAnimBlendHierarchy* pAnimBlendHier);
	void ReferenceAnimBlock();
	void SetBlend(float fBlendAmount, float fBlendDelta);
	void SetCurrentTime(float currentTime);
	void SetDeleteCallback(void* func, void* data);
	void SetFinishCallback(void* func, void* data);
	void Start(float currentTime);
	void SyncAnimation(CAnimBlendAssociation* arg1);
	bool UpdateBlend(float BlendDeltaMult);
	void UpdateTime();
	//~CAnimBlendAssociation();
	//virtual ~CAnimBlendAssociation();
};


VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);