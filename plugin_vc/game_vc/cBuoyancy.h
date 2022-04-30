/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPhysical.h"

class cBuoyancy {
public:
	CVector m_vecPosition;
	CMatrix m_Matrix;
	int m_field_54;
	CVector m_vecPositionZ;
	float m_fWaterlevel;
	float m_fWaterLevelInc;
	float m_fBuoyancy;
	CVector m_vecDimMax;
	CVector m_vecDimMin;
	float m_fNumPartialVolumes;
	int m_field_8C;
	int m_field_90;
	int m_field_94;
	bool m_bHaveVolume;
	CVector m_vecStep;
	CVector m_vecStepRatio;
	float m_fNumSteps;
	bool m_bFlipAverage;
	char m_field_B9;
	bool m_bIsBoat;
	float m_fVolumeUnderWater;
	CVector m_vecImpulsePoint;

public:
    bool ProcessBuoyancy(CPhysical* phys, float buoyancy, CVector* point, CVector* impulse);
};

extern cBuoyancy& mod_Buoyancy;