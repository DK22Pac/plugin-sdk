/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCover.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned int &CCover::m_NumPoints = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xC197A4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CCoverPoint(&CCover::m_aPoints)[100] = *reinterpret_cast<CCoverPoint(*)[100]>(GLOBAL_ADDRESS_BY_VERSION(0xC197C8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CPtrListDoubleLink &CCover::m_ListOfProcessedBuildings = *reinterpret_cast<CPtrListDoubleLink *>(GLOBAL_ADDRESS_BY_VERSION(0xC1A2B8, 0, 0, 0, 0, 0));

int addrof(CCover::AddCoverPoint) = ADDRESS_BY_VERSION(0x698F30, 0, 0, 0, 0, 0);
int gaddrof(CCover::AddCoverPoint) = GLOBAL_ADDRESS_BY_VERSION(0x698F30, 0, 0, 0, 0, 0);

void CCover::AddCoverPoint(int maxPeds, CEntity *coverEntity, CVector *position, char coverType, unsigned char direction) {
    plugin::CallDynGlobal<int, CEntity *, CVector *, char, unsigned char>(gaddrof(CCover::AddCoverPoint), maxPeds, coverEntity, position, coverType, direction);
}

int addrof(CCover::CalculateHorizontalSize) = ADDRESS_BY_VERSION(0x6987F0, 0, 0, 0, 0, 0);
int gaddrof(CCover::CalculateHorizontalSize) = GLOBAL_ADDRESS_BY_VERSION(0x6987F0, 0, 0, 0, 0, 0);

float CCover::CalculateHorizontalSize(CColTriangle *triangle, CVector *vertPositions) {
    return plugin::CallAndReturnDynGlobal<float, CColTriangle *, CVector *>(gaddrof(CCover::CalculateHorizontalSize), triangle, vertPositions);
}

int addrof(CCover::DoLineCheckWithinObject) = ADDRESS_BY_VERSION(0x698990, 0, 0, 0, 0, 0);
int gaddrof(CCover::DoLineCheckWithinObject) = GLOBAL_ADDRESS_BY_VERSION(0x698990, 0, 0, 0, 0, 0);

char CCover::DoLineCheckWithinObject(CColTriangle *triangle, int a2, CVector *a3, CVector *a4, CVector a5, CVector a6) {
    return plugin::CallAndReturnDynGlobal<char, CColTriangle *, int, CVector *, CVector *, CVector, CVector>(gaddrof(CCover::DoLineCheckWithinObject), triangle, a2, a3, a4, a5, a6);
}

int addrof(CCover::DoesCoverPointStillProvideCover) = ADDRESS_BY_VERSION(0x698DD0, 0, 0, 0, 0, 0);
int gaddrof(CCover::DoesCoverPointStillProvideCover) = GLOBAL_ADDRESS_BY_VERSION(0x698DD0, 0, 0, 0, 0, 0);

bool CCover::DoesCoverPointStillProvideCover(CCoverPoint *point, CVector position) {
    return plugin::CallAndReturnDynGlobal<bool, CCoverPoint *, CVector>(gaddrof(CCover::DoesCoverPointStillProvideCover), point, position);
}

int addrof(CCover::Find2HighestPoints) = ADDRESS_BY_VERSION(0x6988E0, 0, 0, 0, 0, 0);
int gaddrof(CCover::Find2HighestPoints) = GLOBAL_ADDRESS_BY_VERSION(0x6988E0, 0, 0, 0, 0, 0);

void CCover::Find2HighestPoints(CColTriangle *triangle, CVector *vertPositions, int &outPoint1, int &outPoint2) {
    plugin::CallDynGlobal<CColTriangle *, CVector *, int &, int &>(gaddrof(CCover::Find2HighestPoints), triangle, vertPositions, outPoint1, outPoint2);
}

int addrof(CCover::FindAndReserveCoverPoint) = ADDRESS_BY_VERSION(0x6992B0, 0, 0, 0, 0, 0);
int gaddrof(CCover::FindAndReserveCoverPoint) = GLOBAL_ADDRESS_BY_VERSION(0x6992B0, 0, 0, 0, 0, 0);

CCoverPoint *CCover::FindAndReserveCoverPoint(CPed *ped, CVector &position, bool a3) {
    return plugin::CallAndReturnDynGlobal<CCoverPoint *, CPed *, CVector &, bool>(gaddrof(CCover::FindAndReserveCoverPoint), ped, position, a3);
}

int addrof(CCover::FindCoordinatesCoverPoint) = ADDRESS_BY_VERSION(0x699570, 0, 0, 0, 0, 0);
int gaddrof(CCover::FindCoordinatesCoverPoint) = GLOBAL_ADDRESS_BY_VERSION(0x699570, 0, 0, 0, 0, 0);

bool CCover::FindCoordinatesCoverPoint(CCoverPoint *point, CPed *ped, CVector &position, CVector &outCoordinates) {
    return plugin::CallAndReturnDynGlobal<bool, CCoverPoint *, CPed *, CVector &, CVector &>(gaddrof(CCover::FindCoordinatesCoverPoint), point, ped, position, outCoordinates);
}

int addrof(CCover::FindCoverPointsForThisBuilding) = ADDRESS_BY_VERSION(0x699120, 0, 0, 0, 0, 0);
int gaddrof(CCover::FindCoverPointsForThisBuilding) = GLOBAL_ADDRESS_BY_VERSION(0x699120, 0, 0, 0, 0, 0);

void CCover::FindCoverPointsForThisBuilding(CBuilding *building) {
    plugin::CallDynGlobal<CBuilding *>(gaddrof(CCover::FindCoverPointsForThisBuilding), building);
}

int addrof(CCover::FindDirFromVector) = ADDRESS_BY_VERSION(0x698D40, 0, 0, 0, 0, 0);
int gaddrof(CCover::FindDirFromVector) = GLOBAL_ADDRESS_BY_VERSION(0x698D40, 0, 0, 0, 0, 0);

unsigned char CCover::FindDirFromVector(float x, float y) {
    return plugin::CallAndReturnDynGlobal<unsigned char, float, float>(gaddrof(CCover::FindDirFromVector), x, y);
}

int addrof(CCover::FindVectorFromDir) = ADDRESS_BY_VERSION(0x698D60, 0, 0, 0, 0, 0);
int gaddrof(CCover::FindVectorFromDir) = GLOBAL_ADDRESS_BY_VERSION(0x698D60, 0, 0, 0, 0, 0);

CVector CCover::FindVectorFromDir(unsigned char direction) {
    CVector ret_vec;
    plugin::CallDynGlobal<CVector *, unsigned char>(gaddrof(CCover::FindVectorFromDir), &ret_vec, direction);
    return ret_vec;
}

int addrof(CCover::FindVectorFromFirstToMissingVertex) = ADDRESS_BY_VERSION(0x698790, 0, 0, 0, 0, 0);
int gaddrof(CCover::FindVectorFromFirstToMissingVertex) = GLOBAL_ADDRESS_BY_VERSION(0x698790, 0, 0, 0, 0, 0);

CVector CCover::FindVectorFromFirstToMissingVertex(CColTriangle *triangle, int *a3, CVector *vertPositions) {
    CVector ret_vec;
    plugin::CallDynGlobal<CVector *, CColTriangle *, int *, CVector *>(gaddrof(CCover::FindVectorFromFirstToMissingVertex), &ret_vec, triangle, a3, vertPositions);
    return ret_vec;
}

int addrof(CCover::Init) = ADDRESS_BY_VERSION(0x698710, 0, 0, 0, 0, 0);
int gaddrof(CCover::Init) = GLOBAL_ADDRESS_BY_VERSION(0x698710, 0, 0, 0, 0, 0);

void CCover::Init() {
    plugin::CallDynGlobal(gaddrof(CCover::Init));
}

int addrof(CCover::RemoveCoverPointIfEntityLost) = ADDRESS_BY_VERSION(0x698DB0, 0, 0, 0, 0, 0);
int gaddrof(CCover::RemoveCoverPointIfEntityLost) = GLOBAL_ADDRESS_BY_VERSION(0x698DB0, 0, 0, 0, 0, 0);

void CCover::RemoveCoverPointIfEntityLost(CCoverPoint *point) {
    plugin::CallDynGlobal<CCoverPoint *>(gaddrof(CCover::RemoveCoverPointIfEntityLost), point);
}

int addrof(CCover::RemoveCoverPointsForThisEntity) = ADDRESS_BY_VERSION(0x698740, 0, 0, 0, 0, 0);
int gaddrof(CCover::RemoveCoverPointsForThisEntity) = GLOBAL_ADDRESS_BY_VERSION(0x698740, 0, 0, 0, 0, 0);

void CCover::RemoveCoverPointsForThisEntity(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CCover::RemoveCoverPointsForThisEntity), entity);
}

int addrof(CCover::ShouldThisBuildingHaveItsCoverPointsCreated) = ADDRESS_BY_VERSION(0x699230, 0, 0, 0, 0, 0);
int gaddrof(CCover::ShouldThisBuildingHaveItsCoverPointsCreated) = GLOBAL_ADDRESS_BY_VERSION(0x699230, 0, 0, 0, 0, 0);

bool CCover::ShouldThisBuildingHaveItsCoverPointsCreated(CBuilding *building) {
    return plugin::CallAndReturnDynGlobal<bool, CBuilding *>(gaddrof(CCover::ShouldThisBuildingHaveItsCoverPointsCreated), building);
}

int addrof(CCover::Update) = ADDRESS_BY_VERSION(0x6997E0, 0, 0, 0, 0, 0);
int gaddrof(CCover::Update) = GLOBAL_ADDRESS_BY_VERSION(0x6997E0, 0, 0, 0, 0, 0);

void CCover::Update() {
    plugin::CallDynGlobal(gaddrof(CCover::Update));
}
