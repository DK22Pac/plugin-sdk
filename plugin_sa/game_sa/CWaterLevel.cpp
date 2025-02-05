/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWaterLevel.h"

int& CWaterLevel::m_nNumOfWaterTriangles = *(int*)0xC22884;
int& CWaterLevel::m_nNumOfWaterQuads = *(int*)0xC22888;
int& CWaterLevel::m_nNumOfWaterVertices = *(int*)0xC2288C;
int& CWaterLevel::m_nWaterConfiguration = *(int*)0xC228A0;
int& CWaterLevel::m_nNumWaterZonePolys = *(int*)0xC215F0;
std::array<CWaterVertex, 1021>& CWaterLevel::m_aVertices = *(std::array<CWaterVertex, 1021>*)0xC22910;
int& DETAILEDWATERDIST = *(int*)0x8D37D0; // Default: 48

bool CWaterLevel::GetWaterLevelNoWaves(float x, float y, float z, float* pOutWaterLevel, float* fUnkn1, float* fUnkn2) {
	return plugin::CallAndReturn<bool, 0x6E8580, float, float, float, float*, float*, float*>(x, y, z, pOutWaterLevel, fUnkn1, fUnkn2);
}

