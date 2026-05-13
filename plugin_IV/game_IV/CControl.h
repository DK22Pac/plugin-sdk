/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

class CControl : rage::datBase {
public:
	static int32_t& m_UsingMouse;

public:
    uint8_t field_1972[1972];
    rage::ioMapper m_onFootMap;
    rage::ioMapper m_meleeMap;
    rage::ioMapper m_inVehicleMap;
    rage::ioMapper m_unkMap;
    rage::ioValue m_inputs[187];
    uint8_t field_2084[2084];
    int32_t timeInMilliseconds;
    int8_t field_16000[20];

public:
	void Clear(int32_t arg1);
};
VALIDATE_OFFSET(CControl, field_1972, 0x4);
VALIDATE_OFFSET(CControl, m_onFootMap, 0x7B8);
VALIDATE_OFFSET(CControl, m_meleeMap, 0xF70);
VALIDATE_OFFSET(CControl, m_inVehicleMap, 0x1728);
VALIDATE_OFFSET(CControl, m_unkMap, 0x1EE0);
VALIDATE_OFFSET(CControl, m_inputs, 0x2698);
VALIDATE_OFFSET(CControl, field_2084, 0x3248);
VALIDATE_OFFSET(CControl, timeInMilliseconds, 0x3A6C);
VALIDATE_OFFSET(CControl, field_16000, 0x3A70);
VALIDATE_SIZE(CControl, 0x3A84);

