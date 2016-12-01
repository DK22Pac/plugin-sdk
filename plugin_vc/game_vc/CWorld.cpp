/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "game_vc\CWorld.h"

unsigned int MAX_PLAYERS = 1;
// variables
CPlayerInfo *CWorld::Players = (CPlayerInfo *)0x94AD28;
unsigned char &CWorld::PlayerInFocus = *(unsigned char *)0xA10AFB;
CPtrList *CWorld::ms_listMovingEntityPtrs = (CPtrList *)0x9B48A8;
CPtrList *CWorld::ms_bigBuildingsList[3] = { (CPtrList *)0x9785FC };
bool &CWorld::bDoingCarCollisions = *(bool *)0x9B6E58;
int &CWorld::ms_nCurrentScanCode = *(int *)0xA1098E;
bool &CWorld::bIncludeDeadPeds = *(bool *)0xA10AEE;
bool &CWorld::bProcessCutsceneOnly = *(bool *)0xA10B1C;
CEntity** CWorld::pIgnoreEntity = (CEntity**)0xA10B29;
bool &CWorld::bIncludeBikers = *(bool *)0xA10B48;
bool &CWorld::bNoMoreCollisionTorque = *(bool *)0xA10B49;
bool &CWorld::bForceProcessControl = *(bool *)0xA10B4A;
bool &CWorld::bSecondShift = *(bool *)0xA10B70;
bool &CWorld::bIncludeCarTyres = *(bool *)0xA10B96;
CSector *CWorld::ms_aSectors[6400] = { (CSector *)0x792D30 };

// Converted from cdecl void CWorld::Add(CEntity *entity) 0x4DB3F0
void CWorld::Add(CEntity* entity) {
    plugin::Call<0x4DB3F0, CEntity*>(entity);
}

// Converted from cdecl void CWorld::AddParticles(void) 0x4D4BB0
void CWorld::AddParticles() {
    plugin::Call<0x4D4BB0>();
}

// Converted from cdecl void CWorld::CallOffChaseForArea(float,float,float,float) 0x4D3200
void CWorld::CallOffChaseForArea(float arg0, float arg1, float arg2, float arg3) {
    plugin::Call<0x4D3200, float, float, float, float>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList &ptrlist,float,float,float,float,float,float,float,float) 0x4D2DF0
void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList& ptrlist, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8) {
    plugin::Call<0x4D2DF0, CPtrList&, float, float, float, float, float, float, float, float>(ptrlist, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList &ptrlist,float,float,float,float,float,float,float,float) 0x4D2F50
void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList& ptrlist, float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8) {
    plugin::Call<0x4D2F50, CPtrList&, float, float, float, float, float, float, float, float>(ptrlist, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::ClearCarsFromArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4D3700
void CWorld::ClearCarsFromArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x4D3700, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CWorld::ClearExcitingStuffFromArea(CVector const&,float,uchar) 0x4D38F0
void CWorld::ClearExcitingStuffFromArea(CVector const& arg0, float arg1, unsigned char arg2) {
    plugin::Call<0x4D38F0, CVector const&, float, unsigned char>(arg0, arg1, arg2);
}

// Converted from cdecl void CWorld::ClearForRestart(void) 0x4DB4A0
void CWorld::ClearForRestart() {
    plugin::Call<0x4DB4A0>();
}

// Converted from cdecl void CWorld::ClearPedsFromArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4D35C0
void CWorld::ClearPedsFromArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x4D35C0, float, float, float, float, float, float>(x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CWorld::ClearScanCodes(void) 0x4D7460
void CWorld::ClearScanCodes() {
    plugin::Call<0x4D7460>();
}

// Converted from cdecl void CWorld::ExtinguishAllCarFiresInArea(CVector position,float radius) 0x4D3480
void CWorld::ExtinguishAllCarFiresInArea(CVector position, float radius) {
    plugin::Call<0x4D3480, CVector, float>(position, radius);
}

// Converted from cdecl float CWorld::FindGroundZFor3DCoord(float x,float y,float z,bool *) 0x4D53A0
float CWorld::FindGroundZFor3DCoord(float x, float y, float z, bool* arg3) {
    return plugin::CallAndReturn<float, 0x4D53A0, float, float, float, bool*>(x, y, z, arg3);
}

// Converted from cdecl float CWorld::FindGroundZForCoord(float x,float y) 0x4D5540
float CWorld::FindGroundZForCoord(float x, float y) {
    return plugin::CallAndReturn<float, 0x4D5540, float, float>(x, y);
}

// Converted from cdecl int CWorld::FindMissionEntitiesIntersectingCube(CVector const&,CVector const&,short *,short,CEntity **,bool,bool,bool) 0x4D5800
int CWorld::FindMissionEntitiesIntersectingCube(CVector const& arg0, CVector const& arg1, short* arg2, short arg3, CEntity** arg4, bool arg5, bool arg6, bool arg7) {
    return plugin::CallAndReturn<int, 0x4D5800, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList &ptrlist,CVector const&,CVector const&,short *,short,CEntity **,bool,bool,bool) 0x4D56B0
void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList& ptrlist, CVector const& arg1, CVector const& arg2, short* arg3, short arg4, CEntity** arg5, bool arg6, bool arg7, bool arg8) {
    plugin::Call<0x4D56B0, CPtrList&, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool>(ptrlist, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl int CWorld::FindObjectsInRange(CVector const&,float,bool,short *,short,CEntity **,bool,bool,bool,bool,bool) 0x4D6B90
int CWorld::FindObjectsInRange(CVector const& arg0, float arg1, bool arg2, short* arg3, short arg4, CEntity** arg5, bool arg6, bool arg7, bool arg8, bool arg9, bool arg10) {
    return plugin::CallAndReturn<int, 0x4D6B90, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

// Converted from cdecl void CWorld::FindObjectsInRangeSectorList(CPtrList &ptrlist,CVector const&,float,bool,short *,short,CEntity **) 0x4D6AD0
void CWorld::FindObjectsInRangeSectorList(CPtrList& ptrlist, CVector const& arg1, float arg2, bool arg3, short* arg4, short arg5, CEntity** arg6) {
    plugin::Call<0x4D6AD0, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(ptrlist, arg1, arg2, arg3, arg4, arg5, arg6);
}

// Converted from cdecl int CWorld::FindObjectsIntersectingAngledCollisionBox(CBox const&,CMatrix const&,CVector const&,float,float,float,float,short *,short,CEntity **,bool,bool,bool,bool,bool) 0x4D5B90 
int CWorld::FindObjectsIntersectingAngledCollisionBox(CBox const& arg0, CMatrix const& arg1, CVector const& arg2, float arg3, float arg4, float arg5, float arg6, short* arg7, short arg8, CEntity** arg9, bool arg10, bool arg11, bool arg12, bool arg13, bool arg14) {
    return plugin::CallAndReturn<int, 0x4D5B90, CBox const&, CMatrix const&, CVector const&, float, float, float, float, short*, short, CEntity**, bool, bool, bool, bool, bool>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList &ptrlist,CBox const&,CMatrix const&,CVector const&,short *,short,CEntity **) 0x4D5A90
void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList& ptrlist, CBox const& arg1, CMatrix const& arg2, CVector const& arg3, short* arg4, short arg5, CEntity** arg6) {
    plugin::Call<0x4D5A90, CPtrList&, CBox const&, CMatrix const&, CVector const&, short*, short, CEntity**>(ptrlist, arg1, arg2, arg3, arg4, arg5, arg6);
}

// Converted from cdecl int CWorld::FindObjectsIntersectingCube(CVector const&,CVector const&,short *,short,CEntity **,bool,bool,bool,bool,bool) 0x4D5FB0 
int CWorld::FindObjectsIntersectingCube(CVector const& arg0, CVector const& arg1, short* arg2, short arg3, CEntity** arg4, bool arg5, bool arg6, bool arg7, bool arg8, bool arg9) {
    return plugin::CallAndReturn<int, 0x4D5FB0, CVector const&, CVector const&, short*, short, CEntity**, bool, bool, bool, bool, bool>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// Converted from cdecl void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList &ptrlist,CVector const&,CVector const&,short *,short,CEntity **) 0x4D5EA0
void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList& ptrlist, CVector const& arg1, CVector const& arg2, short* arg3, short arg4, CEntity** arg5) {
    plugin::Call<0x4D5EA0, CPtrList&, CVector const&, CVector const&, short*, short, CEntity**>(ptrlist, arg1, arg2, arg3, arg4, arg5);
}

// Converted from cdecl int CWorld::FindObjectsKindaColliding(CVector const&,float,bool,short *,short,CEntity **,bool,bool,bool,bool,bool) 0x4D6370 
int CWorld::FindObjectsKindaColliding(CVector const& arg0, float arg1, bool arg2, short* arg3, short arg4, CEntity** arg5, bool arg6, bool arg7, bool arg8, bool arg9, bool arg10) {
    return plugin::CallAndReturn<int, 0x4D6370, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

// Converted from cdecl void CWorld::FindObjectsKindaCollidingSectorList(CPtrList &ptrlist,CVector const&,float,bool,short *,short,CEntity **) 0x4D6280
void CWorld::FindObjectsKindaCollidingSectorList(CPtrList& ptrlist, CVector const& arg1, float arg2, bool arg3, short* arg4, short arg5, CEntity** arg6) {
    plugin::Call<0x4D6280, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(ptrlist, arg1, arg2, arg3, arg4, arg5, arg6);
}

// Converted from cdecl int CWorld::FindObjectsOfTypeInRange(uint,CVector const&,float,bool,short *,short,CEntity **,bool,bool,bool,bool,bool) 0x4D6770 
int CWorld::FindObjectsOfTypeInRange(unsigned int arg0, CVector const& arg1, float arg2, bool arg3, short* arg4, short arg5, CEntity** arg6, bool arg7, bool arg8, bool arg9, bool arg10, bool arg11) {
    return plugin::CallAndReturn<int, 0x4D6770, unsigned int, CVector const&, float, bool, short*, short, CEntity**, bool, bool, bool, bool, bool>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// Converted from cdecl void CWorld::FindObjectsOfTypeInRangeSectorList(uint,CPtrList &ptrlist,CVector const&,float,bool,short *,short,CEntity **) 0x4D66A0
void CWorld::FindObjectsOfTypeInRangeSectorList(unsigned int arg0, CPtrList& ptrlist, CVector const& arg2, float arg3, bool arg4, short* arg5, short arg6, CEntity** arg7) {
    plugin::Call<0x4D66A0, unsigned int, CPtrList&, CVector const&, float, bool, short*, short, CEntity**>(arg0, ptrlist, arg2, arg3, arg4, arg5, arg6, arg7);
}

// Converted from cdecl float CWorld::FindRoofZFor3DCoord(float x,float y,float z,bool *) 0x4D51D0 
float CWorld::FindRoofZFor3DCoord(float x, float y, float z, bool* arg3) {
    return plugin::CallAndReturn<float, 0x4D51D0, float, float, float, bool*>(x, y, z, arg3);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightClear(CVector const& origin,CVector const& target,bool,bool,bool,bool,bool,bool,bool) 0x4DA560
bool CWorld::GetIsLineOfSightClear(CVector const& origin, CVector const& target, bool arg2, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8) {
    return plugin::CallAndReturn<bool, 0x4DA560, CVector const&, CVector const&, bool, bool, bool, bool, bool, bool, bool>(origin, target, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl bool CWorld::GetIsLineOfSightSectorClear(CSector &,CColLine const& colLine,bool,bool,bool,bool,bool,bool,bool) 0x4D6EC0
bool CWorld::GetIsLineOfSightSectorClear(CSector& arg0, CColLine const& colLine, bool arg2, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8) {
    return plugin::CallAndReturn<bool, 0x4D6EC0, CSector&, CColLine const&, bool, bool, bool, bool, bool, bool, bool>(arg0, colLine, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::Initialise(void) 0x4DB9A0 
void CWorld::Initialise() {
    plugin::Call<0x4DB9A0>();
}

// Converted from cdecl bool CWorld::IsWanderPathClear(CVector const&,CVector const&,float,int) 0x4D2620 
bool CWorld::IsWanderPathClear(CVector const& arg0, CVector const& arg1, float arg2, int arg3) {
    return plugin::CallAndReturn<bool, 0x4D2620, CVector const&, CVector const&, float, int>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl void CWorld::Process(void) 0x4D7500 
void CWorld::Process() {
    plugin::Call<0x4D7500>();
}

// Converted from cdecl bool CWorld::ProcessLineOfSight(CVector const& origin,CVector const& target,CColPoint &colPoint,CEntity *&colEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool seeThrough,bool cameraObjects,bool shootThrough) 0x4D92D0
bool CWorld::ProcessLineOfSight(CVector const& origin, CVector const& target, CColPoint& colPoint, CEntity*& colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, bool cameraObjects, bool shootThrough) {
    return plugin::CallAndReturn<bool, 0x4D92D0, CVector const&, CVector const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, bool, bool>(origin, target, colPoint, colEntity, buildings, vehicles, peds, objects, dummies, seeThrough, cameraObjects, shootThrough);
}

// Converted from cdecl bool CWorld::ProcessLineOfSightSector(CSector &,CColLine const& colLine,CColPoint &colPoint,float &,CEntity *&colEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool seeThrough,bool cameraObjects,bool shootThrough) 0x4D9060
bool CWorld::ProcessLineOfSightSector(CSector& arg0, CColLine const& colLine, CColPoint& colPoint, float& arg3, CEntity*& colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, bool cameraObjects, bool shootThrough) {
    return plugin::CallAndReturn<bool, 0x4D9060, CSector&, CColLine const&, CColPoint&, float&, CEntity*&, bool, bool, bool, bool, bool, bool, bool, bool>(arg0, colLine, colPoint, arg3, colEntity, buildings, vehicles, peds, objects, dummies, seeThrough, cameraObjects, shootThrough);
}

// Converted from cdecl bool CWorld::ProcessLineOfSightSectorList(CPtrList &ptrlist,CColLine const&,CColPoint &colPoint,float &,CEntity *&colEntity,bool,bool,bool) 0x4D8C60
bool CWorld::ProcessLineOfSightSectorList(CPtrList& ptrlist, CColLine const& arg1, CColPoint& colPoint, float& arg3, CEntity*& colEntity, bool arg5, bool arg6, bool arg7) {
    return plugin::CallAndReturn<bool, 0x4D8C60, CPtrList&, CColLine const&, CColPoint&, float&, CEntity*&, bool, bool, bool>(ptrlist, arg1, colPoint, arg3, colEntity, arg5, arg6, arg7);
}

// Converted from cdecl bool CWorld::ProcessVerticalLine(CVector const& origin,float distance,CColPoint &colPoint,CEntity *&colEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool seeThrough,CStoredCollPoly *poly) 0x4D8B00
bool CWorld::ProcessVerticalLine(CVector const& origin, float distance, CColPoint& colPoint, CEntity*& colEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool seeThrough, CStoredCollPoly* poly) {
    return plugin::CallAndReturn<bool, 0x4D8B00, CVector const&, float, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*>(origin, distance, colPoint, colEntity, buildings, vehicles, peds, objects, dummies, seeThrough, poly);
}

// Converted from cdecl bool CWorld::ProcessVerticalLineSector(CSector &,CColLine const& colLine,CColPoint &colPoint,CEntity *&colEntity,bool,bool,bool,bool,bool,bool,CStoredCollPoly *poly) 0x4D84D0
bool CWorld::ProcessVerticalLineSector(CSector& arg0, CColLine const& colLine, CColPoint& colPoint, CEntity*& colEntity, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8, bool arg9, CStoredCollPoly* poly) {
    return plugin::CallAndReturn<bool, 0x4D84D0, CSector&, CColLine const&, CColPoint&, CEntity*&, bool, bool, bool, bool, bool, bool, CStoredCollPoly*>(arg0, colLine, colPoint, colEntity, arg4, arg5, arg6, arg7, arg8, arg9, poly);
}

// Converted from cdecl void CWorld::Remove(CEntity *entity) 0x4DB310
void CWorld::Remove(CEntity* entity) {
    plugin::Call<0x4DB310, CEntity*>(entity);
}

// Converted from cdecl void CWorld::RemoveFallenCars(void) 0x4D48A0 
void CWorld::RemoveFallenCars() {
    plugin::Call<0x4D48A0>();
}

// Converted from cdecl void CWorld::RemoveFallenPeds(void) 0x4D4A40 
void CWorld::RemoveFallenPeds() {
    plugin::Call<0x4D4A40>();
}

// Converted from cdecl void CWorld::RemoveReferencesToDeletedObject(CEntity *entity) 0x4D5090
void CWorld::RemoveReferencesToDeletedObject(CEntity* entity) {
    plugin::Call<0x4D5090, CEntity*>(entity);
}

// Converted from cdecl CBaseModelInfo* CWorld::RepositionCertainDynamicObjects(void) 0x4D4850
CBaseModelInfo* CWorld::RepositionCertainDynamicObjects() {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x4D4850>();
}

// Converted from cdecl CBaseModelInfo* CWorld::RepositionOneObject(CEntity *entity) 0x4D43A0
CBaseModelInfo* CWorld::RepositionOneObject(CEntity* entity) {
    return plugin::CallAndReturn<CBaseModelInfo*, 0x4D43A0, CEntity*>(entity);
}

// Converted from cdecl void CWorld::SetAllCarsCanBeDamaged(bool) 0x4D3550 
void CWorld::SetAllCarsCanBeDamaged(bool arg0) {
    plugin::Call<0x4D3550, bool>(arg0);
}

// Converted from cdecl void CWorld::SetCarsOnFire(float x,float y,float z,float radius,CEntity *vehicles) 0x4D4C30
void CWorld::SetCarsOnFire(float x, float y, float z, float radius, CEntity* vehicles) {
    plugin::Call<0x4D4C30, float, float, float, float, CEntity*>(x, y, z, radius, vehicles);
}

// Converted from cdecl void CWorld::SetPedsChoking(float x,float y,float z,float radius,CEntity *peds) 0x4D4D90
void CWorld::SetPedsChoking(float x, float y, float z, float radius, CEntity* peds) {
    plugin::Call<0x4D4D90, float, float, float, float, CEntity*>(x, y, z, radius, peds);
}

// Converted from cdecl void CWorld::SetPedsOnFire(float x,float y,float z,float radius,CEntity *peds) 0x4D4F30
void CWorld::SetPedsOnFire(float x, float y, float z, float radius, CEntity* peds) {
    plugin::Call<0x4D4F30, float, float, float, float, CEntity*>(x, y, z, radius, peds);
}

// Converted from cdecl void CWorld::ShutDown(void) 0x4DB590 
void CWorld::ShutDown() {
    plugin::Call<0x4DB590>();
}

// Converted from cdecl void CWorld::StopAllLawEnforcersInTheirTracks(void) 0x4D25B0 
void CWorld::StopAllLawEnforcersInTheirTracks() {
    plugin::Call<0x4D25B0>();
}

// Converted from cdecl void CWorld::TestSphereAgainstSectorList(CPtrList &ptrlist,CVector,float,CEntity *entity,bool) 0x4D3C40
void CWorld::TestSphereAgainstSectorList(CPtrList& ptrlist, CVector arg1, float arg2, CEntity* entity, bool arg4) {
    plugin::Call<0x4D3C40, CPtrList&, CVector, float, CEntity*, bool>(ptrlist, arg1, arg2, entity, arg4);
}

// Converted from cdecl void CWorld::TestSphereAgainstWorld(CVector,float,CEntity *entity,bool,bool,bool,bool,bool,bool) 0x4D3F40
void CWorld::TestSphereAgainstWorld(CVector arg0, float arg1, CEntity* entity, bool arg3, bool arg4, bool arg5, bool arg6, bool arg7, bool arg8) {
    plugin::Call<0x4D3F40, CVector, float, CEntity*, bool, bool, bool, bool, bool, bool>(arg0, arg1, entity, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CWorld::TriggerExplosion(CVector const&,float,float,CEntity *entity,bool) 0x4D82D0
void CWorld::TriggerExplosion(CVector const& arg0, float arg1, float arg2, CEntity* entity, bool arg4) {
    plugin::Call<0x4D82D0, CVector const&, float, float, CEntity*, bool>(arg0, arg1, arg2, entity, arg4);
}

// Converted from cdecl void CWorld::TriggerExplosionSectorList(CPtrList &ptrlist,CVector const&,float,float,CEntity *entity,bool) 0x4D7B90
void CWorld::TriggerExplosionSectorList(CPtrList& ptrlist, CVector const& arg1, float arg2, float arg3, CEntity* entity, bool arg5) {
    plugin::Call<0x4D7B90, CPtrList&, CVector const&, float, float, CEntity*, bool>(ptrlist, arg1, arg2, arg3, entity, arg5);
}

// Converted from cdecl void CWorld::UseDetonator(CEntity *entity) 0x4D42F0
void CWorld::UseDetonator(CEntity* entity) {
    plugin::Call<0x4D42F0, CEntity*>(entity);
}