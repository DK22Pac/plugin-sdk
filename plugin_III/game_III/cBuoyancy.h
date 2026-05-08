/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CMatrix.h"
#include "CPhysical.h"

enum tWaterLevel {
    FLOATER_ABOVE_WATER,
    FLOATER_IN_WATER,
    FLOATER_UNDER_WATER,
};

class cBuoyancy {
public:
	CVector m_position;
	CMatrix m_matrix;
	int m_field_54;
	CVector m_positionZ;
	float m_waterlevel;
	float m_waterLevelInc;
	float m_buoyancy;
	CVector m_dimMax;
	CVector m_dimMin;
	float m_numPartialVolumes;
	int m_field_8C;
	int m_field_90;
	int m_field_94;
	bool m_haveVolume;
	CVector m_step;
	CVector m_stepRatio;
	float m_numSteps;
	bool m_flipAverage;
	char m_field_B9;
	bool m_isBoat;
	float m_volumeUnderWater;
	CVector m_impulsePoint;

public:
	bool ProcessBuoyancy(CPhysical* phys, float buoyancy, CVector* point, CVector* impulse);

};
VALIDATE_OFFSET(cBuoyancy, m_position, 0x0);
VALIDATE_OFFSET(cBuoyancy, m_matrix, 0xC);
VALIDATE_OFFSET(cBuoyancy, m_field_54, 0x54);
VALIDATE_OFFSET(cBuoyancy, m_positionZ, 0x58);
VALIDATE_OFFSET(cBuoyancy, m_waterlevel, 0x64);
VALIDATE_OFFSET(cBuoyancy, m_waterLevelInc, 0x68);
VALIDATE_OFFSET(cBuoyancy, m_buoyancy, 0x6C);
VALIDATE_OFFSET(cBuoyancy, m_dimMax, 0x70);
VALIDATE_OFFSET(cBuoyancy, m_dimMin, 0x7C);
VALIDATE_OFFSET(cBuoyancy, m_numPartialVolumes, 0x88);
VALIDATE_OFFSET(cBuoyancy, m_field_8C, 0x8C);
VALIDATE_OFFSET(cBuoyancy, m_field_90, 0x90);
VALIDATE_OFFSET(cBuoyancy, m_field_94, 0x94);
VALIDATE_OFFSET(cBuoyancy, m_haveVolume, 0x98);
VALIDATE_OFFSET(cBuoyancy, m_step, 0x9C);
VALIDATE_OFFSET(cBuoyancy, m_stepRatio, 0xA8);
VALIDATE_OFFSET(cBuoyancy, m_numSteps, 0xB4);
VALIDATE_OFFSET(cBuoyancy, m_flipAverage, 0xB8);
VALIDATE_OFFSET(cBuoyancy, m_field_B9, 0xB9);
VALIDATE_OFFSET(cBuoyancy, m_isBoat, 0xBA);
VALIDATE_OFFSET(cBuoyancy, m_volumeUnderWater, 0xBC);
VALIDATE_OFFSET(cBuoyancy, m_impulsePoint, 0xC0);
VALIDATE_SIZE(cBuoyancy, 0xCC);

extern cBuoyancy& mod_Buoyancy;
