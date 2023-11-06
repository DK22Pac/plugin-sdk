/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

struct CRenPar {
    float z;
    float bigWaves;
    float smallWaves;
    char flowX;
    char flowY;
};

struct CWaterVertex {
    short x;
    short y;
    CRenPar rp;
};

class CWaterLevel {
public:
    static int& m_nNumOfWaterTriangles;
    static int& m_nNumOfWaterQuads;
    static int& m_nNumOfWaterVertices;
    static int& m_nWaterConfiguration;
    static int& m_nNumWaterZonePolys;
    static std::array<CWaterVertex, 1021>& m_aVertices;
	static bool GetWaterLevelNoWaves(float x, float y, float z, float* pOutWaterLevel, float* fUnkn1, float* fUnkn2);
    static int& DETAILEDWATERDIST;

public:

};

extern RwTexture* TexWaterClear256;
extern RwTexture* TexSeabd32;
extern RwTexture* TexWaterWake;
