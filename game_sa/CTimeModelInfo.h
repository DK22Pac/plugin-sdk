#pragma once
#include "plugin\plugin.h"
#include "CAtomicModelInfo.h"

class PLUGIN_API CTimeModelInfo : public CAtomicModelInfo
{
public:
	tTimeInfo m_timeInfo;

	//

	CTimeModelInfo();
	~CTimeModelInfo();

	//

	void FindOtherTimeModel(char *modelName);
};

VALIDATE_SIZE(CTimeModelInfo, 0x24);