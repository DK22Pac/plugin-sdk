/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CAreaName {
public:
	uint8_t field_1[6];
	wchar_t m_CurrName[128];
	wchar_t m_PrevName[128];

public:
	bool Compare();
};
VALIDATE_OFFSET(CAreaName, field_1, 0x0);
VALIDATE_OFFSET(CAreaName, m_CurrName, 0x6);
VALIDATE_OFFSET(CAreaName, m_PrevName, 0x106);
VALIDATE_SIZE(CAreaName, 0x206);

class CStreetName {
public:
	uint8_t field_1[128];
	wchar_t m_CurrName[128];
	wchar_t m_PrevName[128];

public:
	bool Compare();
};	
VALIDATE_OFFSET(CStreetName, field_1, 0x0);
VALIDATE_OFFSET(CStreetName, m_CurrName, 0x80);
VALIDATE_OFFSET(CStreetName, m_PrevName, 0x180);
VALIDATE_SIZE(CStreetName, 0x280);

class CVehicleName {
public:
	uint8_t field_1[4];
	wchar_t m_CurrName[128];
	wchar_t m_PrevName[128];

public:
	bool Compare();
};
VALIDATE_OFFSET(CVehicleName, field_1, 0x0);
VALIDATE_OFFSET(CVehicleName, m_CurrName, 0x4);
VALIDATE_OFFSET(CVehicleName, m_PrevName, 0x104);
VALIDATE_SIZE(CVehicleName, 0x204);

class CUserDisplay {
public:
	static CAreaName& DisplayAreaName;
	static CStreetName& DisplayStreetName;
	static CVehicleName& DisplayVehicleName;
};
VALIDATE_SIZE(CUserDisplay, 0x1);

