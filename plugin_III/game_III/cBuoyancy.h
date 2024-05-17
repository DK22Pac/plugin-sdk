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

extern cBuoyancy& mod_Buoyancy;
