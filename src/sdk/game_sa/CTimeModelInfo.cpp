#include "CTimeModelInfo.h"
#include "CClumpModelInfo.h"

CTimeModelInfo::CTimeModelInfo() : CAtomicModelInfo(plugin::dummy_func)
{
    ((void (__thiscall *)(CTimeModelInfo *))0x4C5640)(this);
}

CTimeModelInfo::~CTimeModelInfo()
{
    // 0x4C5680
}

void CTimeModelInfo::FindOtherTimeModel(char *modelName)
{
	((void (__thiscall *)(CTimeModelInfo *, char *))0x4C47E0)(this, modelName);
}