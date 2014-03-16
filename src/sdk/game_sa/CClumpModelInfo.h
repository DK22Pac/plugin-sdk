#pragma once
#include <plugin/plugin.h>
#include "CBaseModelInfo.h"
#include "RwObjectNameIdAssocation.h"

#pragma pack(push, 4)
class PLUGIN_API CClumpModelInfo : public CBaseModelInfo
{
public:
	union{
		char *m_animFileName;
		unsigned __int32 m_dwAnimFileIndex;
	};

	// vtable

	CBox *GetBoundingBox();
	void SetClump(RpClump *clump);

	// static functions

	static void SetAtomicRendererCB(RpAtomic *atomic, void *renderFunc);
	/* struct tSearchData { char *name; RwFrame *result; };
	  returns 0 if we found frame, or last frame if we need to continue searching */
	static RwFrame *FindFrameFromNameCB(RwFrame *frame, void *searchData);
	static RwFrame *FindFrameFromNameWithoutIdCB(RwFrame *frame, void *searchData);
	static RwFrame *FindFrameFromIdCB(RwFrame *frame, void *searchData);
	static RwFrame *FillFrameArrayCB(RwFrame *frame, void *data);
	static RwFrame *GetFrameFromId(RpClump *clump, int id);
	static RwFrame *GetFrameFromName(RpClump *clump, char *name);
	static void FillFrameArray(RpClump *clump, RwFrame **frames);
	static void SetFrameIds(RwObjectNameIdAssocation *data);

	//

	CClumpModelInfo();
	~CClumpModelInfo();
};
#pragma pack(pop)

VALIDATE_SIZE(CClumpModelInfo, 0x24);