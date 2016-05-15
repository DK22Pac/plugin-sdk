#pragma once
#include "plbase/PluginBase.h"
#include "CBaseModelInfo.h"

class PLUGIN_API CAtomicModelInfo : public CBaseModelInfo {
public:
	// vtable

	void SetAtomic(struct RpAtomic *atomic);

	struct RpAtomic *GetAtomicFromDistance(float distance);
};

VALIDATE_SIZE(CAtomicModelInfo, 0x20);