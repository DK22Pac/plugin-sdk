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
	UInt16 m_wNumBlendNodes;
	Int16 m_wAnimGroup;
	class CAnimBlendNode *m_pAnimBlendNodeArray;
	class CAnimBlendHierarchy *m_pAnimBlendHierarchy;
	Float m_fBlendAmount;
	Float m_fBlendDelta;
	Float m_fCurrentTime;
	Float m_fSpeed;
	Float m_fTimeStep;
	Int16 m_wAnimID;
	UInt16 m_wFlags;
	UInt32 m_dwCallbackType;
	void *m_pCallbackFunc;
	void *m_pCallbackData;
};
#pragma pack(pop)

VALIDATE_SIZE(CAnimBlendAssociation, 0x3C);