/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPathFind.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector &CPathFind::CoorsXFormed = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x623588, 0x623588, 0x633588));
PLUGIN_VARIABLE int &TempListLength = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x623580, 0x623580, 0x633580));
PLUGIN_VARIABLE CPathNode *(&apNodesToBeCleared)[4995] = *reinterpret_cast<CPathNode *(*)[4995]>(GLOBAL_ADDRESS_BY_VERSION(0x623594, 0x623594, 0x633594));
PLUGIN_VARIABLE int &gMaxEntries = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x6283A0, 0x6283A0, 0x6383A0));
PLUGIN_VARIABLE CPathNode *(&pNodeList)[32] = *reinterpret_cast<CPathNode *(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x6FAAE0, 0x6FAAE0, 0x70AC20));
PLUGIN_VARIABLE CTempDetachedNode *&DetachedNodesCars = *reinterpret_cast<CTempDetachedNode **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2824, 0x8E27D4, 0x8F2914));
PLUGIN_VARIABLE CTempDetachedNode *&DetachedNodesPeds = *reinterpret_cast<CTempDetachedNode **>(GLOBAL_ADDRESS_BY_VERSION(0x8E28A0, 0x8E2850, 0x8F2990));
PLUGIN_VARIABLE CPathInfoForObject *&InfoForTileCars = *reinterpret_cast<CPathInfoForObject **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A8C, 0x8F1B40, 0x901C80));
PLUGIN_VARIABLE CPathInfoForObject *&InfoForTilePeds = *reinterpret_cast<CPathInfoForObject **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AE4, 0x8F1B98, 0x901CD8));
PLUGIN_VARIABLE CPathFind &ThePaths = *reinterpret_cast<CPathFind *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6754, 0x8F690C, 0x906A4C));

int addrof(CPathFind::AddNodeToList) = ADDRESS_BY_VERSION(0x42CBE0, 0x42CBE0, 0x42CBE0);
int gaddrof(CPathFind::AddNodeToList) = GLOBAL_ADDRESS_BY_VERSION(0x42CBE0, 0x42CBE0, 0x42CBE0);

void CPathFind::AddNodeToList(CPathNode *node, int listId) {
    plugin::CallMethodDynGlobal<CPathFind *, CPathNode *, int>(gaddrof(CPathFind::AddNodeToList), this, node, listId);
}

int addrof(CPathFind::AllocatePathFindInfoMem) = ADDRESS_BY_VERSION(0x42D580, 0x42D580, 0x42D580);
int gaddrof(CPathFind::AllocatePathFindInfoMem) = GLOBAL_ADDRESS_BY_VERSION(0x42D580, 0x42D580, 0x42D580);

void CPathFind::AllocatePathFindInfoMem(short numPathGroups) {
    plugin::CallMethodDynGlobal<CPathFind *, short>(gaddrof(CPathFind::AllocatePathFindInfoMem), this, numPathGroups);
}

int addrof(CPathFind::CalcNodeCoors) = ADDRESS_BY_VERSION(0x429560, 0x429560, 0x429560);
int gaddrof(CPathFind::CalcNodeCoors) = GLOBAL_ADDRESS_BY_VERSION(0x429560, 0x429560, 0x429560);

void CPathFind::CalcNodeCoors(short x, short y, short z, int id, CVector *out) {
    plugin::CallMethodDynGlobal<CPathFind *, short, short, short, int, CVector *>(gaddrof(CPathFind::CalcNodeCoors), this, x, y, z, id, out);
}

int addrof(CPathFind::CalcRoadDensity) = ADDRESS_BY_VERSION(0x42C990, 0x42C990, 0x42C990);
int gaddrof(CPathFind::CalcRoadDensity) = GLOBAL_ADDRESS_BY_VERSION(0x42C990, 0x42C990, 0x42C990);

float CPathFind::CalcRoadDensity(float x, float y) {
    return plugin::CallMethodAndReturnDynGlobal<float, CPathFind *, float, float>(gaddrof(CPathFind::CalcRoadDensity), this, x, y);
}

int addrof(CPathFind::CountFloodFillGroups) = ADDRESS_BY_VERSION(0x42B810, 0x42B810, 0x42B810);
int gaddrof(CPathFind::CountFloodFillGroups) = GLOBAL_ADDRESS_BY_VERSION(0x42B810, 0x42B810, 0x42B810);

void CPathFind::CountFloodFillGroups(unsigned char type) {
    plugin::CallMethodDynGlobal<CPathFind *, unsigned char>(gaddrof(CPathFind::CountFloodFillGroups), this, type);
}

int addrof(CPathFind::DoPathSearch) = ADDRESS_BY_VERSION(0x42B040, 0x42B040, 0x42B040);
int gaddrof(CPathFind::DoPathSearch) = GLOBAL_ADDRESS_BY_VERSION(0x42B040, 0x42B040, 0x42B040);

void CPathFind::DoPathSearch(unsigned char type, CVector start, int startNodeId, CVector target, CPathNode **nodes, short *numNodes, short maxNumNodes, CVehicle *vehicle, float *dist, float distLimit, int forcedTargetNode) {
    plugin::CallMethodDynGlobal<CPathFind *, unsigned char, CVector, int, CVector, CPathNode **, short *, short, CVehicle *, float *, float, int>(gaddrof(CPathFind::DoPathSearch), this, type, start, startNodeId, target, nodes, numNodes, maxNumNodes, vehicle, dist, distLimit, forcedTargetNode);
}

int addrof(CPathFind::FindNextNodeWandering) = ADDRESS_BY_VERSION(0x42B9F0, 0x42B9F0, 0x42B9F0);
int gaddrof(CPathFind::FindNextNodeWandering) = GLOBAL_ADDRESS_BY_VERSION(0x42B9F0, 0x42B9F0, 0x42B9F0);

void CPathFind::FindNextNodeWandering(unsigned char type, CVector coors, CPathNode **lastNode, CPathNode **nextNode, unsigned char curDir, unsigned char *nextDir) {
    plugin::CallMethodDynGlobal<CPathFind *, unsigned char, CVector, CPathNode **, CPathNode **, unsigned char, unsigned char *>(gaddrof(CPathFind::FindNextNodeWandering), this, type, coors, lastNode, nextNode, curDir, nextDir);
}

int addrof(CPathFind::FindNodeClosestToCoors) = ADDRESS_BY_VERSION(0x42CC30, 0x42CC30, 0x42CC30);
int gaddrof(CPathFind::FindNodeClosestToCoors) = GLOBAL_ADDRESS_BY_VERSION(0x42CC30, 0x42CC30, 0x42CC30);

int CPathFind::FindNodeClosestToCoors(CVector coors, unsigned char type, float distLimit, bool ignoreDisabled, bool ignoreBetweenLevels) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPathFind *, CVector, unsigned char, float, bool, bool>(gaddrof(CPathFind::FindNodeClosestToCoors), this, coors, type, distLimit, ignoreDisabled, ignoreBetweenLevels);
}

int addrof(CPathFind::FindNodeClosestToCoorsFavourDirection) = ADDRESS_BY_VERSION(0x42CDC0, 0x42CDC0, 0x42CDC0);
int gaddrof(CPathFind::FindNodeClosestToCoorsFavourDirection) = GLOBAL_ADDRESS_BY_VERSION(0x42CDC0, 0x42CDC0, 0x42CDC0);

int CPathFind::FindNodeClosestToCoorsFavourDirection(CVector coors, unsigned char type, float dirX, float dirY) {
    return plugin::CallMethodAndReturnDynGlobal<int, CPathFind *, CVector, unsigned char, float, float>(gaddrof(CPathFind::FindNodeClosestToCoorsFavourDirection), this, coors, type, dirX, dirY);
}

int addrof(CPathFind::FindNodeOrientationForCarPlacement) = ADDRESS_BY_VERSION(0x42CFC0, 0x42CFC0, 0x42CFC0);
int gaddrof(CPathFind::FindNodeOrientationForCarPlacement) = GLOBAL_ADDRESS_BY_VERSION(0x42CFC0, 0x42CFC0, 0x42CFC0);

float CPathFind::FindNodeOrientationForCarPlacement(unsigned int nodeId) {
    return plugin::CallMethodAndReturnDynGlobal<float, CPathFind *, unsigned int>(gaddrof(CPathFind::FindNodeOrientationForCarPlacement), this, nodeId);
}

int addrof(CPathFind::FindNodeOrientationForCarPlacementFacingDestination) = ADDRESS_BY_VERSION(0x42D060, 0x42D060, 0x42D060);
int gaddrof(CPathFind::FindNodeOrientationForCarPlacementFacingDestination) = GLOBAL_ADDRESS_BY_VERSION(0x42D060, 0x42D060, 0x42D060);

float CPathFind::FindNodeOrientationForCarPlacementFacingDestination(unsigned int nodeId, float x, float y, bool towards) {
    return plugin::CallMethodAndReturnDynGlobal<float, CPathFind *, unsigned int, float, float, bool>(gaddrof(CPathFind::FindNodeOrientationForCarPlacementFacingDestination), this, nodeId, x, y, towards);
}

int addrof(CPathFind::FindRoadObjectClosestToCoors) = ADDRESS_BY_VERSION(0x42D2A0, 0x42D2A0, 0x42D2A0);
int gaddrof(CPathFind::FindRoadObjectClosestToCoors) = GLOBAL_ADDRESS_BY_VERSION(0x42D2A0, 0x42D2A0, 0x42D2A0);

CTreadable *CPathFind::FindRoadObjectClosestToCoors(CVector coors, unsigned char type) {
    return plugin::CallMethodAndReturnDynGlobal<CTreadable *, CPathFind *, CVector, unsigned char>(gaddrof(CPathFind::FindRoadObjectClosestToCoors), this, coors, type);
}

int addrof(CPathFind::GeneratePedCreationCoors) = ADDRESS_BY_VERSION(0x42C1E0, 0x42C1E0, 0x42C1E0);
int gaddrof(CPathFind::GeneratePedCreationCoors) = GLOBAL_ADDRESS_BY_VERSION(0x42C1E0, 0x42C1E0, 0x42C1E0);

bool CPathFind::GeneratePedCreationCoors(float x, float y, float minDist, float maxDist, float minDistOffScreen, float maxDistOffScreen, CVector *posn, int *pNode1, int *pNode2, float *positionBetweenNodes, CMatrix *camMatrix) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPathFind *, float, float, float, float, float, float, CVector *, int *, int *, float *, CMatrix *>(gaddrof(CPathFind::GeneratePedCreationCoors), this, x, y, minDist, maxDist, minDistOffScreen, maxDistOffScreen, posn, pNode1, pNode2, positionBetweenNodes, camMatrix);
}

int addrof(CPathFind::Init) = ADDRESS_BY_VERSION(0x4294A0, 0x4294A0, 0x4294A0);
int gaddrof(CPathFind::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4294A0, 0x4294A0, 0x4294A0);

void CPathFind::Init() {
    plugin::CallMethodDynGlobal<CPathFind *>(gaddrof(CPathFind::Init), this);
}

int addrof(CPathFind::Load) = ADDRESS_BY_VERSION(0x42E550, 0x42E550, 0x42E550);
int gaddrof(CPathFind::Load) = GLOBAL_ADDRESS_BY_VERSION(0x42E550, 0x42E550, 0x42E550);

void CPathFind::Load(unsigned char *buf, unsigned int size) {
    plugin::CallMethodDynGlobal<CPathFind *, unsigned char *, unsigned int>(gaddrof(CPathFind::Load), this, buf, size);
}

int addrof(CPathFind::MarkRoadsBetweenLevelsInArea) = ADDRESS_BY_VERSION(0x42DF50, 0x42DF50, 0x42DF50);
int gaddrof(CPathFind::MarkRoadsBetweenLevelsInArea) = GLOBAL_ADDRESS_BY_VERSION(0x42DF50, 0x42DF50, 0x42DF50);

void CPathFind::MarkRoadsBetweenLevelsInArea(float x1, float x2, float y1, float y2, float z1, float z2) {
    plugin::CallMethodDynGlobal<CPathFind *, float, float, float, float, float, float>(gaddrof(CPathFind::MarkRoadsBetweenLevelsInArea), this, x1, x2, y1, y2, z1, z2);
}

int addrof(CPathFind::MarkRoadsBetweenLevelsNodeAndNeighbours) = ADDRESS_BY_VERSION(0x42E140, 0x42E140, 0x42E140);
int gaddrof(CPathFind::MarkRoadsBetweenLevelsNodeAndNeighbours) = GLOBAL_ADDRESS_BY_VERSION(0x42E140, 0x42E140, 0x42E140);

void CPathFind::MarkRoadsBetweenLevelsNodeAndNeighbours(int nodeId) {
    plugin::CallMethodDynGlobal<CPathFind *, int>(gaddrof(CPathFind::MarkRoadsBetweenLevelsNodeAndNeighbours), this, nodeId);
}

int addrof(CPathFind::NewGenerateCarCreationCoors) = ADDRESS_BY_VERSION(0x42BF10, 0x42BF10, 0x42BF10);
int gaddrof(CPathFind::NewGenerateCarCreationCoors) = GLOBAL_ADDRESS_BY_VERSION(0x42BF10, 0x42BF10, 0x42BF10);

bool CPathFind::NewGenerateCarCreationCoors(float x, float y, float dirX, float dirY, float spawnDist, float angleLimit, bool forward, CVector *posn, int *pNode1, int *pNode2, float *positionBetweenNodes, bool ignoreDisabled) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPathFind *, float, float, float, float, float, float, bool, CVector *, int *, int *, float *, bool>(gaddrof(CPathFind::NewGenerateCarCreationCoors), this, x, y, dirX, dirY, spawnDist, angleLimit, forward, posn, pNode1, pNode2, positionBetweenNodes, ignoreDisabled);
}

int addrof(CPathFind::PedMarkRoadsBetweenLevelsInArea) = ADDRESS_BY_VERSION(0x42E040, 0x42E040, 0x42E040);
int gaddrof(CPathFind::PedMarkRoadsBetweenLevelsInArea) = GLOBAL_ADDRESS_BY_VERSION(0x42E040, 0x42E040, 0x42E040);

void CPathFind::PedMarkRoadsBetweenLevelsInArea(float x1, float x2, float y1, float y2, float z1, float z2) {
    plugin::CallMethodDynGlobal<CPathFind *, float, float, float, float, float, float>(gaddrof(CPathFind::PedMarkRoadsBetweenLevelsInArea), this, x1, x2, y1, y2, z1, z2);
}

int addrof(CPathFind::PreparePathData) = ADDRESS_BY_VERSION(0x429610, 0x429610, 0x429610);
int gaddrof(CPathFind::PreparePathData) = GLOBAL_ADDRESS_BY_VERSION(0x429610, 0x429610, 0x429610);

void CPathFind::PreparePathData() {
    plugin::CallMethodDynGlobal<CPathFind *>(gaddrof(CPathFind::PreparePathData), this);
}

int addrof(CPathFind::PreparePathDataForType) = ADDRESS_BY_VERSION(0x429C20, 0x429C20, 0x429C20);
int gaddrof(CPathFind::PreparePathDataForType) = GLOBAL_ADDRESS_BY_VERSION(0x429C20, 0x429C20, 0x429C20);

void CPathFind::PreparePathDataForType(unsigned char type, CTempNode *tempNodes, CPathInfoForObject *info, float maxDist, CTempDetachedNode *detachedNodes, int numDetached) {
    plugin::CallMethodDynGlobal<CPathFind *, unsigned char, CTempNode *, CPathInfoForObject *, float, CTempDetachedNode *, int>(gaddrof(CPathFind::PreparePathDataForType), this, type, tempNodes, info, maxDist, detachedNodes, numDetached);
}

int addrof(CPathFind::RegisterMapObject) = ADDRESS_BY_VERSION(0x429540, 0x429540, 0x429540);
int gaddrof(CPathFind::RegisterMapObject) = GLOBAL_ADDRESS_BY_VERSION(0x429540, 0x429540, 0x429540);

void CPathFind::RegisterMapObject(CTreadable *mapObject) {
    plugin::CallMethodDynGlobal<CPathFind *, CTreadable *>(gaddrof(CPathFind::RegisterMapObject), this, mapObject);
}

int addrof(CPathFind::RemoveBadStartNode) = ADDRESS_BY_VERSION(0x42B790, 0x42B790, 0x42B790);
int gaddrof(CPathFind::RemoveBadStartNode) = GLOBAL_ADDRESS_BY_VERSION(0x42B790, 0x42B790, 0x42B790);

void CPathFind::RemoveBadStartNode(CVector pos, CPathNode **nodes, short *nodeCount) {
    plugin::CallMethodDynGlobal<CPathFind *, CVector, CPathNode **, short *>(gaddrof(CPathFind::RemoveBadStartNode), this, pos, nodes, nodeCount);
}

int addrof(CPathFind::RemoveNodeFromList) = ADDRESS_BY_VERSION(0x42CBB0, 0x42CBB0, 0x42CBB0);
int gaddrof(CPathFind::RemoveNodeFromList) = GLOBAL_ADDRESS_BY_VERSION(0x42CBB0, 0x42CBB0, 0x42CBB0);

void CPathFind::RemoveNodeFromList(CPathNode *node) {
    plugin::CallMethodDynGlobal<CPathFind *, CPathNode *>(gaddrof(CPathFind::RemoveNodeFromList), this, node);
}

int addrof(CPathFind::Save) = ADDRESS_BY_VERSION(0x42E450, 0x42E450, 0x42E450);
int gaddrof(CPathFind::Save) = GLOBAL_ADDRESS_BY_VERSION(0x42E450, 0x42E450, 0x42E450);

void CPathFind::Save(unsigned char *buf, unsigned int *size) {
    plugin::CallMethodDynGlobal<CPathFind *, unsigned char *, unsigned int *>(gaddrof(CPathFind::Save), this, buf, size);
}

int addrof(CPathFind::SetLinksBridgeLights) = ADDRESS_BY_VERSION(0x42E3B0, 0x42E3B0, 0x42E3B0);
int gaddrof(CPathFind::SetLinksBridgeLights) = GLOBAL_ADDRESS_BY_VERSION(0x42E3B0, 0x42E3B0, 0x42E3B0);

void CPathFind::SetLinksBridgeLights(float x1, float y1, float x2, float y2, bool enable) {
    plugin::CallMethodDynGlobal<CPathFind *, float, float, float, float, bool>(gaddrof(CPathFind::SetLinksBridgeLights), this, x1, y1, x2, y2, enable);
}

int addrof(CPathFind::StoreNodeInfoCar) = ADDRESS_BY_VERSION(0x42D690, 0x42D690, 0x42D690);
int gaddrof(CPathFind::StoreNodeInfoCar) = GLOBAL_ADDRESS_BY_VERSION(0x42D690, 0x42D690, 0x42D690);

void CPathFind::StoreNodeInfoCar(short id, short node, char type, char next, short x, short y, short z, short width, char numLeft, char numRight) {
    plugin::CallMethodDynGlobal<CPathFind *, short, short, char, char, short, short, short, short, char, char>(gaddrof(CPathFind::StoreNodeInfoCar), this, id, node, type, next, x, y, z, width, numLeft, numRight);
}

int addrof(CPathFind::StoreNodeInfoPed) = ADDRESS_BY_VERSION(0x42D7E0, 0x42D7E0, 0x42D7E0);
int gaddrof(CPathFind::StoreNodeInfoPed) = GLOBAL_ADDRESS_BY_VERSION(0x42D7E0, 0x42D7E0, 0x42D7E0);

void CPathFind::StoreNodeInfoPed(short id, short node, char type, char next, short x, short y, short z, short width, bool crossing) {
    plugin::CallMethodDynGlobal<CPathFind *, short, short, char, char, short, short, short, short, bool>(gaddrof(CPathFind::StoreNodeInfoPed), this, id, node, type, next, x, y, z, width, crossing);
}

int addrof(CPathFind::SwitchOffNodeAndNeighbours) = ADDRESS_BY_VERSION(0x42DED0, 0x42DED0, 0x42DED0);
int gaddrof(CPathFind::SwitchOffNodeAndNeighbours) = GLOBAL_ADDRESS_BY_VERSION(0x42DED0, 0x42DED0, 0x42DED0);

void CPathFind::SwitchOffNodeAndNeighbours(int nodeId, bool disable) {
    plugin::CallMethodDynGlobal<CPathFind *, int, bool>(gaddrof(CPathFind::SwitchOffNodeAndNeighbours), this, nodeId, disable);
}

int addrof(CPathFind::SwitchPedRoadsOffInArea) = ADDRESS_BY_VERSION(0x42DA50, 0x42DA50, 0x42DA50);
int gaddrof(CPathFind::SwitchPedRoadsOffInArea) = GLOBAL_ADDRESS_BY_VERSION(0x42DA50, 0x42DA50, 0x42DA50);

void CPathFind::SwitchPedRoadsOffInArea(float x1, float x2, float y1, float y2, float z1, float z2, bool disable) {
    plugin::CallMethodDynGlobal<CPathFind *, float, float, float, float, float, float, bool>(gaddrof(CPathFind::SwitchPedRoadsOffInArea), this, x1, x2, y1, y2, z1, z2, disable);
}

int addrof(CPathFind::SwitchRoadsInAngledArea) = ADDRESS_BY_VERSION(0x42DB50, 0x42DB50, 0x42DB50);
int gaddrof(CPathFind::SwitchRoadsInAngledArea) = GLOBAL_ADDRESS_BY_VERSION(0x42DB50, 0x42DB50, 0x42DB50);

void CPathFind::SwitchRoadsInAngledArea(float x1, float y1, float z1, float x2, float y2, float z2, float length, unsigned char type, unsigned char enable) {
    plugin::CallMethodDynGlobal<CPathFind *, float, float, float, float, float, float, float, unsigned char, unsigned char>(gaddrof(CPathFind::SwitchRoadsInAngledArea), this, x1, y1, z1, x2, y2, z2, length, type, enable);
}

int addrof(CPathFind::SwitchRoadsOffInArea) = ADDRESS_BY_VERSION(0x42D960, 0x42D960, 0x42D960);
int gaddrof(CPathFind::SwitchRoadsOffInArea) = GLOBAL_ADDRESS_BY_VERSION(0x42D960, 0x42D960, 0x42D960);

void CPathFind::SwitchRoadsOffInArea(float x1, float x2, float y1, float y2, float z1, float z2, bool disable) {
    plugin::CallMethodDynGlobal<CPathFind *, float, float, float, float, float, float, bool>(gaddrof(CPathFind::SwitchRoadsOffInArea), this, x1, x2, y1, y2, z1, z2, disable);
}

int addrof(CPathFind::TestCoorsCloseness) = ADDRESS_BY_VERSION(0x42C8C0, 0x42C8C0, 0x42C8C0);
int gaddrof(CPathFind::TestCoorsCloseness) = GLOBAL_ADDRESS_BY_VERSION(0x42C8C0, 0x42C8C0, 0x42C8C0);

bool CPathFind::TestCoorsCloseness(CVector target, unsigned char type, CVector start) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPathFind *, CVector, unsigned char, CVector>(gaddrof(CPathFind::TestCoorsCloseness), this, target, type, start);
}

int addrof(CPathFind::TestCrossesRoad) = ADDRESS_BY_VERSION(0x42E340, 0x42E340, 0x42E340);
int gaddrof(CPathFind::TestCrossesRoad) = GLOBAL_ADDRESS_BY_VERSION(0x42E340, 0x42E340, 0x42E340);

bool CPathFind::TestCrossesRoad(CPathNode *node1, CPathNode *node2) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPathFind *, CPathNode *, CPathNode *>(gaddrof(CPathFind::TestCrossesRoad), this, node1, node2);
}

int addrof(CPathFind::TestForPedTrafficLight) = ADDRESS_BY_VERSION(0x42E1B0, 0x42E1B0, 0x42E1B0);
int gaddrof(CPathFind::TestForPedTrafficLight) = GLOBAL_ADDRESS_BY_VERSION(0x42E1B0, 0x42E1B0, 0x42E1B0);

bool CPathFind::TestForPedTrafficLight(CPathNode *node1, CPathNode *node2) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CPathFind *, CPathNode *, CPathNode *>(gaddrof(CPathFind::TestForPedTrafficLight), this, node1, node2);
}

int addrof(CPathFind::LoadPathFindData) = ADDRESS_BY_VERSION(0x429C00, 0x429C00, 0x429C00);
int gaddrof(CPathFind::LoadPathFindData) = GLOBAL_ADDRESS_BY_VERSION(0x429C00, 0x429C00, 0x429C00);

bool CPathFind::LoadPathFindData() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CPathFind::LoadPathFindData));
}
