/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COcclusion.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE short &COcclusion::FarAwayList = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x6DC420, 0x6DC410, 0x6DB408));
PLUGIN_VARIABLE short &COcclusion::NearbyList = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x6DC424, 0x6DC414, 0x6DB40C));
PLUGIN_VARIABLE short &COcclusion::ListWalkThroughFA = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x6DC428, 0x6DC418, 0x6DB410));
PLUGIN_VARIABLE short &COcclusion::PreviousListWalkThroughFA = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x6DC42C, 0x6DC41C, 0x6DB414));
PLUGIN_VARIABLE CActiveOccluder(&COcclusion::aActiveOccluders)[48] = *reinterpret_cast<CActiveOccluder(*)[48]>(GLOBAL_ADDRESS_BY_VERSION(0x7EE608, 0x7EE610, 0x7ED610));
PLUGIN_VARIABLE COccluder(&COcclusion::aOccluders)[350] = *reinterpret_cast<COccluder(*)[350]>(GLOBAL_ADDRESS_BY_VERSION(0x944148, 0x944150, 0x943150));
PLUGIN_VARIABLE int &COcclusion::NumOccludersOnMap = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97877C, 0x978784, 0x977784));
PLUGIN_VARIABLE int &COcclusion::NumActiveOccluders = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F344, 0x97F34C, 0x97E34C));
PLUGIN_VARIABLE CVector(&gOccluderCoorsOnScreen)[8] = *reinterpret_cast<CVector(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x7D1548, 0x7D1550, 0x7D0550));
PLUGIN_VARIABLE CVector(&gOccluderCoors)[8] = *reinterpret_cast<CVector(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x933B60, 0x933B68, 0x932B68));
PLUGIN_VARIABLE bool(&gOccluderCoorsValid)[8] = *reinterpret_cast<bool(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x94C030, 0x94C038, 0x94B038));
PLUGIN_VARIABLE float &gMaxXInOccluder = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x9B5F10, 0x9B5F18, 0x9B4F18));
PLUGIN_VARIABLE float &gMinXInOccluder = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x9B5F14, 0x9B5F1C, 0x9B4F1C));
PLUGIN_VARIABLE CVector &gCenterOnScreen = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x9B6E10, 0x9B6E18, 0x9B5E18));
PLUGIN_VARIABLE float &gMaxYInOccluder = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xA0DAD0, 0xA0DAD8, 0xA0CAD8));
PLUGIN_VARIABLE float &gMinYInOccluder = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0xA0DAD4, 0xA0DADC, 0xA0CADC));

int addrof(COcclusion::AddOne) = ADDRESS_BY_VERSION(0x636960, 0x6369B0, 0x636620);
int gaddrof(COcclusion::AddOne) = GLOBAL_ADDRESS_BY_VERSION(0x636960, 0x6369B0, 0x636620);

void COcclusion::AddOne(float x, float y, float z, float width, float length, float height, float angle) {
    plugin::CallDynGlobal<float, float, float, float, float, float, float>(gaddrof(COcclusion::AddOne), x, y, z, width, length, height, angle);
}

int addrof(COcclusion::Init) = ADDRESS_BY_VERSION(0x636B30, 0x636B80, 0x6367F0);
int gaddrof(COcclusion::Init) = GLOBAL_ADDRESS_BY_VERSION(0x636B30, 0x636B80, 0x6367F0);

void COcclusion::Init() {
    plugin::CallDynGlobal(gaddrof(COcclusion::Init));
}

int addrof(COcclusion::IsAABoxOccluded) = ADDRESS_BY_VERSION(0x634150, 0x6341A0, 0x633E10);
int gaddrof(COcclusion::IsAABoxOccluded) = GLOBAL_ADDRESS_BY_VERSION(0x634150, 0x6341A0, 0x633E10);

bool COcclusion::IsAABoxOccluded(CVector pos, float width, float length, float height) {
    return plugin::CallAndReturnDynGlobal<bool, CVector, float, float, float>(gaddrof(COcclusion::IsAABoxOccluded), pos, width, length, height);
}

int addrof(COcclusion::IsPositionOccluded) = ADDRESS_BY_VERSION(0x634930, 0x634980, 0x6345F0);
int gaddrof(COcclusion::IsPositionOccluded) = GLOBAL_ADDRESS_BY_VERSION(0x634930, 0x634980, 0x6345F0);

bool COcclusion::IsPositionOccluded(CVector pos, float side) {
    return plugin::CallAndReturnDynGlobal<bool, CVector, float>(gaddrof(COcclusion::IsPositionOccluded), pos, side);
}

int addrof(COcclusion::ProcessBeforeRendering) = ADDRESS_BY_VERSION(0x6363E0, 0x636430, 0x6360A0);
int gaddrof(COcclusion::ProcessBeforeRendering) = GLOBAL_ADDRESS_BY_VERSION(0x6363E0, 0x636430, 0x6360A0);

void COcclusion::ProcessBeforeRendering() {
    plugin::CallDynGlobal(gaddrof(COcclusion::ProcessBeforeRendering));
}

int addrof(COccluder::ProcessLineSegment) = ADDRESS_BY_VERSION(0x635270, 0x6352C0, 0x634F30);
int gaddrof(COccluder::ProcessLineSegment) = GLOBAL_ADDRESS_BY_VERSION(0x635270, 0x6352C0, 0x634F30);

bool COccluder::ProcessLineSegment(int corner1, int corner2, CActiveOccluder *occl) {
    return plugin::CallMethodAndReturnDynGlobal<bool, COccluder *, int, int, CActiveOccluder *>(gaddrof(COccluder::ProcessLineSegment), this, corner1, corner2, occl);
}

int addrof(COccluder::ProcessOneOccluder) = ADDRESS_BY_VERSION(0x6358D0, 0x635920, 0x635590);
int gaddrof(COccluder::ProcessOneOccluder) = GLOBAL_ADDRESS_BY_VERSION(0x6358D0, 0x635920, 0x635590);

bool COccluder::ProcessOneOccluder(CActiveOccluder *occl) {
    return plugin::CallMethodAndReturnDynGlobal<bool, COccluder *, CActiveOccluder *>(gaddrof(COccluder::ProcessOneOccluder), this, occl);
}

int addrof(DoesInfiniteLineTouchScreen) = ADDRESS_BY_VERSION(0x636B60, 0x636BB0, 0x636820);
int gaddrof(DoesInfiniteLineTouchScreen) = GLOBAL_ADDRESS_BY_VERSION(0x636B60, 0x636BB0, 0x636820);

bool DoesInfiniteLineTouchScreen(float lineX, float lineY, float lineDX, float lineDY) {
    return plugin::CallAndReturnDynGlobal<bool, float, float, float, float>(gaddrof(DoesInfiniteLineTouchScreen), lineX, lineY, lineDX, lineDY);
}
