#pragma once

#include <plugin/plugin.h>

#pragma pack(push, 4)
class PLUGIN_API CAnimBlendAssociation
{
protected:
	void *vtable;

public:
	void *m_pPrev;
	class CAnimBlendClump *m_pAnimBlendClumpData;
	uint16_t m_wNumBlendNodes;
	int16_t m_wAnimGroup;
	class CAnimBlendNode *m_pAnimBlendNodeArray;
	class CAnimBlendHierarchy *m_pAnimBlendHierarchy;
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
#pragma pack(pop)

VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);