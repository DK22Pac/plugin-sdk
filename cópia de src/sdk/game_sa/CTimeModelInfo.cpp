#include "CTimeModelInfo.h"

CTimeModelInfo::CTimeModelInfo()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTimeModelInfo *))0x4C5640)(this);
}

CTimeModelInfo::~CTimeModelInfo()
{
	PREPARE_FOR_REDIRECTION();
	//((void (__thiscall *)(CTimeModelInfo *))0x4C5680)(this);
}

void CTimeModelInfo::FindOtherTimeModel(char *modelName)
{
	((void (__thiscall *)(CTimeModelInfo *, char *))0x4C47E0)(this, modelName);
}