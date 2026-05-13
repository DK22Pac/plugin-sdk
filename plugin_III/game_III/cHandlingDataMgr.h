/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "cTransmission.h"
#include "eHandlingIndex.h"
#include "tHandlingData.h"

class cHandlingDataMgr {
public:
	float field_0;
	float fWheelFriction;
	float field_8;
	float field_C;
	float field_10;
	tHandlingData HandlingData[57];
	unsigned int field_302C;

public:
	int GetHandlingId(const char* name);
};
VALIDATE_OFFSET(cHandlingDataMgr, field_0, 0x0);
VALIDATE_OFFSET(cHandlingDataMgr, fWheelFriction, 0x4);
VALIDATE_OFFSET(cHandlingDataMgr, field_8, 0x8);
VALIDATE_OFFSET(cHandlingDataMgr, field_C, 0xC);
VALIDATE_OFFSET(cHandlingDataMgr, field_10, 0x10);
VALIDATE_OFFSET(cHandlingDataMgr, HandlingData, 0x14);
VALIDATE_OFFSET(cHandlingDataMgr, field_302C, 0x302C);
VALIDATE_SIZE(cHandlingDataMgr, 0x3030);

extern cHandlingDataMgr& mod_HandlingManager;
