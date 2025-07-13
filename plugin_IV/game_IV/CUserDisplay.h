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

class CStreetName {
public:
	uint8_t field_1[128];
	wchar_t m_CurrName[128];
	wchar_t m_PrevName[128];

public:
	bool Compare();
};	

class CVehicleName {
public:
	uint8_t field_1[4];
	wchar_t m_CurrName[128];
	wchar_t m_PrevName[128];

public:
	bool Compare();
};

class CUserDisplay {
public:
	static CAreaName& DisplayAreaName;
	static CStreetName& DisplayStreetName;
	static CVehicleName& DisplayVehicleName;
};

