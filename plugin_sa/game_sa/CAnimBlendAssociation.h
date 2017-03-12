/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAnimBlendHierarchy.h"

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
	class CAnimBlendClump *m_pAnimBlendClumpData;
	uint16_t m_wNumBlendNodes;
	int16_t m_wAnimGroup;
	class CAnimBlendNode *m_pAnimBlendNodeArray;
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
};

VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);