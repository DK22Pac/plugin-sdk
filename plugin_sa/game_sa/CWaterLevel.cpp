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

void CWaterLevel::AddWaveToResult(float x, float y, float* pWaterZ, float BigWavesAmpl, float SmallWavesAmpl, CVector* pNormal) {
    plugin::CallDynGlobal(0x6E81E0, x, y, pWaterZ, BigWavesAmpl, SmallWavesAmpl, pNormal);
}

void CWaterLevel::AddWaveToResult(int32_t x, int32_t y, float* pWaterZ, float BigWavesAmpl, float SmallWavesAmpl) {
    plugin::CallDynGlobal(0x6E8550, x, y, pWaterZ, BigWavesAmpl, SmallWavesAmpl);
}

void CWaterLevel::BlockHit(int32_t BlockX, int32_t BlockY) {
    plugin::CallDynGlobal(0x6E6CA0, BlockX, BlockY);
}

void CWaterLevel::CalculateWavesOnlyForCoordinate(int32_t X, int32_t Y, float BigWavesAmpl, float SmallWavesAmpl, float* pResultHeight) {
    plugin::CallDynGlobal(0x6E7210, X, Y, BigWavesAmpl, SmallWavesAmpl, pResultHeight);
}

void CWaterLevel::ChangeWaterConfiguration(int32_t NewWaterConfig) {
    plugin::CallDynGlobal(0x6EDDA0, NewWaterConfig);
}

CObject* CWaterLevel::CreateBeachToy(const CVector* pos, eBeachToy beachToy) {
    return plugin::CallAndReturnDynGlobal<CObject*>(0x6EABA0, pos, beachToy);
}

void CWaterLevel::FindNearestWaterAndItsFlow() {
    plugin::CallDynGlobal(0x6E9D70);
}

bool CWaterLevel::GetWaterLevel(
    float x,
    float y,
    float z,
    float* pWaterZ,
    bool bForceResult,
    CVector* pNormal) {
    return plugin::CallAndReturnDynGlobal<bool>(0x6EB690, x, y, z, pWaterZ, bForceResult, pNormal);
}

bool CWaterLevel::GetWaterLevelNoWaves(float x, float y, float z, float* pWaterZ) {
	return plugin::CallAndReturnDynGlobal<bool>(0x6E8580, x, y, z, pWaterZ, 0, 0);
}

void CWaterLevel::PreRenderWater() {
    plugin::Call<0x6EB710>();
}

void CWaterLevel::RenderAndEmptyRenderBuffer() {
    plugin::CallDynGlobal(0x6ED9A0);
}

void CWaterLevel::RenderTransparentWater() {
    plugin::CallDynGlobal(0x6E7670);
}

void CWaterLevel::RenderWater() {
    plugin::Call<0x6EF650>();
}

void CWaterLevel::RenderWaterFog() {
    plugin::CallDynGlobal(0x6E7760);
}

void CWaterLevel::ScanThroughBlocks() {
    plugin::CallDynGlobal(0x6E6D10);
}

void CWaterLevel::SetCameraRange() {
    plugin::CallDynGlobal(0x6E9C80);
}

void CWaterLevel::WaterLevelInitialise() {
    plugin::CallDynGlobal(0x6EAE80);
}

void CWaterLevel::Shutdown() {
    plugin::CallDynGlobal(0x6E59E0);
}
