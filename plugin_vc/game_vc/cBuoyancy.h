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
VALIDATE_OFFSET(cBuoyancy, m_vecPosition, 0x0);
VALIDATE_OFFSET(cBuoyancy, m_Matrix, 0xC);
VALIDATE_OFFSET(cBuoyancy, m_field_54, 0x54);
VALIDATE_OFFSET(cBuoyancy, m_vecPositionZ, 0x58);
VALIDATE_OFFSET(cBuoyancy, m_fWaterlevel, 0x64);
VALIDATE_OFFSET(cBuoyancy, m_fWaterLevelInc, 0x68);
VALIDATE_OFFSET(cBuoyancy, m_fBuoyancy, 0x6C);
VALIDATE_OFFSET(cBuoyancy, m_vecDimMax, 0x70);
VALIDATE_OFFSET(cBuoyancy, m_vecDimMin, 0x7C);
VALIDATE_OFFSET(cBuoyancy, m_fNumPartialVolumes, 0x88);
VALIDATE_OFFSET(cBuoyancy, m_field_8C, 0x8C);
VALIDATE_OFFSET(cBuoyancy, m_field_90, 0x90);
VALIDATE_OFFSET(cBuoyancy, m_field_94, 0x94);
VALIDATE_OFFSET(cBuoyancy, m_bHaveVolume, 0x98);
VALIDATE_OFFSET(cBuoyancy, m_vecStep, 0x9C);
VALIDATE_OFFSET(cBuoyancy, m_vecStepRatio, 0xA8);
VALIDATE_OFFSET(cBuoyancy, m_fNumSteps, 0xB4);
VALIDATE_OFFSET(cBuoyancy, m_bFlipAverage, 0xB8);
VALIDATE_OFFSET(cBuoyancy, m_field_B9, 0xB9);
VALIDATE_OFFSET(cBuoyancy, m_bIsBoat, 0xBA);
VALIDATE_OFFSET(cBuoyancy, m_fVolumeUnderWater, 0xBC);
VALIDATE_OFFSET(cBuoyancy, m_vecImpulsePoint, 0xC0);
VALIDATE_SIZE(cBuoyancy, 0xCC);

extern cBuoyancy& mod_Buoyancy;