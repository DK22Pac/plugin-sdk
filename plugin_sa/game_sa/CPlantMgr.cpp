/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlantMgr.h"

void CPlantMgr::UpdateAmbientColor() {
    plugin::CallDynGlobal(0x5DB310);
}

float CPlantMgr::CalculateWindBending() {
    return plugin::CallAndReturnDynGlobal<float>(0x5DB3D0);
}

void CPlantMgr::SetPlantFriendlyFlagInAtomicMI(CAtomicModelInfo* mi) {
    plugin::CallDynGlobal(0x5DB650, mi);
}

void CPlantMgr::Shutdown() {
    plugin::CallDynGlobal(0x5DB940);
}

void CPlantMgr::Render() {
    plugin::CallDynGlobal(0x5DBAE0);
}

void CPlantMgr::_ProcessEntryCollisionDataSections_RemoveLocTris(CPlantColEntEntry* col, const CVector& camPos, int triProcessSkipMask, int colStartIndex, int colEndIndex) {
    plugin::CallDynGlobal(0x5DBF20, col, &camPos, triProcessSkipMask, colStartIndex, colEndIndex);
}

void CPlantMgr::_ColEntityCache_Update(const CVector& camPos, uint8_t quickUpdate) {
    plugin::CallDynGlobal(0x5DC510, &camPos, quickUpdate);
}

void CPlantMgr::_ProcessEntryCollisionDataSections_AddLocTris(CPlantColEntEntry* col, const CVector& camPos, int processSkipMask, int colStartIndex, int colEndIndex) {
    plugin::CallDynGlobal(0x5DC8B0, col, &camPos, processSkipMask, colStartIndex, colEndIndex);
}

void CPlantMgr::_ProcessEntryCollisionDataSections(CPlantColEntEntry* col, const CVector& camPos, int processSkipMask) {
    plugin::CallDynGlobal(0x5DCD80, col, &camPos, processSkipMask);
}

void CPlantMgr::_UpdateLocTris(const CVector& camPos, int processSkipMask) {
    plugin::CallDynGlobal(0x5DCF00, &camPos, processSkipMask);
}

void CPlantMgr::PreUpdateOnceForNewCameraPos(const CVector& camPos) {
    plugin::CallDynGlobal(0x5DCF30, &camPos);
}

void CPlantMgr::Update(const CVector& camPos) {
    plugin::CallDynGlobal(0x5DCFA0, &camPos);
}

bool CPlantMgr::ReloadConfig() {
    return plugin::CallAndReturnDynGlobal<bool>(0x5DD780);
}

bool CPlantMgr::Initialise() {
    return plugin::CallAndReturnDynGlobal<bool>(0x5DD910);
}
