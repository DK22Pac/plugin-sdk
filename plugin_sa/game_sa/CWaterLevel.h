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

enum eBeachToy : int32_t {
    BEACHTOY_BEACHBALL = 0x1,
    BEACHTOY_LOUNGE_WOOD_UP = 0x2,
    BEACHTOY_LOUNGE_TOWEL_UP = 0x3,
    BEACHTOY_LOUNGE_WOOD_DN = 0x4,
    BEACHTOY_LOUNGE_ANY = 0x5,
    BEACHTOY_LOTION = 0x6,
    BEACHTOY_BEACHTOWEL01 = 0x7,
    BEACHTOY_BEACHTOWEL02 = 0x8,
    BEACHTOY_BEACHTOWEL03 = 0x9,
    BEACHTOY_BEACHTOWEL04 = 0xA,
    BEACHTOY_BEACHTOWEL_ANY = 0xB,
};

class CWaterLevel {
public:
    static int& m_nNumOfWaterTriangles;
    static int& m_nNumOfWaterQuads;
    static int& m_nNumOfWaterVertices;
    static int& m_nWaterConfiguration;
    static int& m_nNumWaterZonePolys;
    static std::array<CWaterVertex, 1021>& m_aVertices;
    static int& DETAILEDWATERDIST;

public:
    static void AddWaveToResult(float x, float y, float* pWaterZ, float BigWavesAmpl, float SmallWavesAmpl, CVector* pNormal);
    static void AddWaveToResult(int32_t x, int32_t y, float* pWaterZ, float BigWavesAmpl, float SmallWavesAmpl);
    static void BlockHit(int32_t BlockX, int32_t BlockY);
    static void CalculateWavesOnlyForCoordinate(int32_t X, int32_t Y, float BigWavesAmpl, float SmallWavesAmpl, float* pResultHeight);
    static void ChangeWaterConfiguration(int32_t NewWaterConfig);
    static CObject* CreateBeachToy(const CVector* pos, eBeachToy beachToy);
    static void FindNearestWaterAndItsFlow();
    static bool GetWaterLevel(
        float x,
        float y,
        float z,
        float* pWaterZ,
        bool bForceResult,
        CVector* pNormal);
    static bool GetWaterLevelNoWaves(float x, float y, float z, float* pWaterZ);
    static void PreRenderWater();
    static void RenderAndEmptyRenderBuffer();

    static void RenderTransparentWater();

    static void RenderWater();

    static void RenderWaterFog();
    static void ScanThroughBlocks();
    static void SetCameraRange();
	static void WaterLevelInitialise();
    static void Shutdown();
};

extern RwTexture* TexWaterClear256;
extern RwTexture* TexSeabd32;
extern RwTexture* TexWaterWake;
