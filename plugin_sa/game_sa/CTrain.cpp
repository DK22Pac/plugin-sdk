/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTrain.h"

unsigned int& CTrain::GenTrain_Track = *(unsigned int *)0xC37FFC;
unsigned int& CTrain::GenTrain_TrainConfig = *(unsigned int *)0xC38000;
unsigned char& CTrain::GenTrain_Direction = *(unsigned char *)0xC38004;
unsigned int& CTrain::GenTrain_GenerationNode = *(unsigned int *)0xC38008;
unsigned int& CTrain::GenTrain_Status = *(unsigned int *)0xC3800C;
bool& CTrain::bDisableRandomTrains = *(bool *)0xC38010;
CVector *CTrain::aStationCoors = (CVector *)0x8D48F8;
unsigned int *NumTrackNodes = (unsigned int *)0xC38014;
CTrainNode **pTrackNodes = (CTrainNode **)0xC38024;
float *StationDist = (float *)0xC38034;

// Converted from thiscall void CTrain::CTrain(int modelIndex,uchar createdBy) 0x6F6030
CTrain::CTrain(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    ((void(__thiscall *)(CTrain*, int, unsigned char))0x6F6030)(this, modelIndex, createdBy);
}

// Converted from cdecl void CTrain::ReadAndInterpretTrackFile(char *filename,CTrainNode **nodes,int *lineCount,float *totalDist,int skipStations) 0x6F55D0
void CTrain::ReadAndInterpretTrackFile(char* filename, CTrainNode** nodes, int* lineCount, float* totalDist, int skipStations) {
    ((void(__cdecl *)(char*, CTrainNode**, int*, float*, int))0x6F55D0)(filename, nodes, lineCount, totalDist, skipStations);
}

// Converted from cdecl void CTrain::Shutdown(void) 0x6F58D0
void CTrain::Shutdown() {
    ((void(__cdecl *)())0x6F58D0)();
}

// Converted from cdecl void CTrain::UpdateTrains(void) 0x6F5900
void CTrain::UpdateTrains() {
    ((void(__cdecl *)())0x6F5900)();
}

// Converted from cdecl void ProcessTrainAnnouncements(void) 0x6F5910
void ProcessTrainAnnouncements() {
    ((void(__cdecl *)())0x6F5910)();
}

// Converted from cdecl void PlayAnnouncement(uchar,uchar) 0x6F5920
void PlayAnnouncement(unsigned char arg0, unsigned char arg1) {
    ((void(__cdecl *)(unsigned char, unsigned char))0x6F5920)(arg0, arg1);
}

// Converted from cdecl void CTrain::FindCoorsFromPositionOnTrack(float railDistance,int trackId,CVector *outCoors) 0x6F59E0
void CTrain::FindCoorsFromPositionOnTrack(float railDistance, int trackId, CVector* outCoors) {
    ((void(__cdecl *)(float, int, CVector*))0x6F59E0)(railDistance, trackId, outCoors);
}

// Converted from thiscall bool CTrain::FindMaximumSpeedToStopAtStations(float *speed) 0x6F5BA0
bool CTrain::FindMaximumSpeedToStopAtStations(float* speed) {
    return ((bool(__thiscall *)(CTrain*, float*))0x6F5BA0)(this, speed);
}

// Converted from thiscall uint CTrain::FindNumCarriagesPulled(void) 0x6F5CD0
unsigned int CTrain::FindNumCarriagesPulled() {
    return ((unsigned int(__thiscall *)(CTrain*))0x6F5CD0)(this);
}

// Converted from cdecl void TrainHitStuff(CPtrList &ptrList,CEntity *entity) 0x6F5CF0
void TrainHitStuff(CPtrList& ptrList, CEntity* entity) {
    ((void(__cdecl *)(CPtrList&, CEntity*))0x6F5CF0)(ptrList, entity);
}

// Converted from thiscall void CTrain::OpenTrainDoor(float state) 0x6F5D80
void CTrain::OpenTrainDoor(float state) {
    ((void(__thiscall *)(CTrain*, float))0x6F5D80)(this, state);
}

// Converted from thiscall void CTrain::AddPassenger(CPed *ped) 0x6F5D90
void CTrain::AddPassenger(CPed* ped) {
    ((void(__thiscall *)(CTrain*, CPed*))0x6F5D90)(this, ped);
}

// Converted from thiscall void CTrain::RemovePassenger(CPed *ped) 0x6F5DA0
void CTrain::RemovePassenger(CPed* ped) {
    ((void(__thiscall *)(CTrain*, CPed*))0x6F5DA0)(this, ped);
}

// Converted from cdecl void CTrain::DisableRandomTrains(bool disable) 0x6F5DB0
void CTrain::DisableRandomTrains(bool disable) {
    ((void(__cdecl *)(bool))0x6F5DB0)(disable);
}

// Converted from cdecl void CTrain::RemoveOneMissionTrain(CTrain* train) 0x6F5DC0
void CTrain::RemoveOneMissionTrain(CTrain* train) {
    ((void(__cdecl *)(CTrain*))0x6F5DC0)(train);
}

// Converted from cdecl void CTrain::ReleaseOneMissionTrain(CTrain* train) 0x6F5DF0
void CTrain::ReleaseOneMissionTrain(CTrain* train) {
    ((void(__cdecl *)(CTrain*))0x6F5DF0)(train);
}

// Converted from cdecl void CTrain::SetTrainSpeed(CTrain* train,float speed) 0x6F5E20
void CTrain::SetTrainSpeed(CTrain* train, float speed) {
    ((void(__cdecl *)(CTrain*, float))0x6F5E20)(train, speed);
}

// Converted from cdecl void CTrain::SetTrainCruiseSpeed(CTrain*,float cruiseSpeed) 0x6F5E50
void CTrain::SetTrainCruiseSpeed(CTrain* arg0, float cruiseSpeed) {
    ((void(__cdecl *)(CTrain*, float))0x6F5E50)(arg0, cruiseSpeed);
}

// Converted from cdecl CTrain* CTrain::FindCaboose(CTrain* train) 0x6F5E70
CTrain* CTrain::FindCaboose(CTrain* train) {
    return ((CTrain* (__cdecl *)(CTrain*))0x6F5E70)(train);
}

// Converted from cdecl CTrain* CTrain::FindEngine(CTrain* train) 0x6F5E90
CTrain* CTrain::FindEngine(CTrain* train) {
    return ((CTrain* (__cdecl *)(CTrain*))0x6F5E90)(train);
}

// Converted from cdecl CTrain* CTrain::FindCarriage(CTrain* train,uchar carriage) 0x6F5EB0
CTrain* CTrain::FindCarriage(CTrain* train, unsigned char carriage) {
    return ((CTrain* (__cdecl *)(CTrain*, unsigned char))0x6F5EB0)(train, carriage);
}

// Converted from thiscall bool CTrain::FindSideStationIsOn(void) 0x6F5EF0
bool CTrain::FindSideStationIsOn() {
    return ((bool(__thiscall *)(CTrain*))0x6F5EF0)(this);
}

// Converted from cdecl void CTrain::FindNextStationPositionInDirection(bool clockwiseDirection,float distance,float *distanceToStation,int *numStations) 0x6F5F00
void CTrain::FindNextStationPositionInDirection(bool clockwiseDirection, float distance, float* distanceToStation, int* numStations) {
    ((void(__cdecl *)(bool, float, float*, int*))0x6F5F00)(clockwiseDirection, distance, distanceToStation, numStations);
}

// Converted from thiscall bool CTrain::IsInTunnel(void) 0x6F6320
bool CTrain::IsInTunnel() {
    return ((bool(__thiscall *)(CTrain*))0x6F6320)(this);
}

// Converted from cdecl void MarkSurroundingEntitiesForCollisionWithTrain(CVector,float,CEntity *,bool) 0x6F6640
void MarkSurroundingEntitiesForCollisionWithTrain(CVector arg0, float arg1, CEntity* arg2, bool arg3) {
    ((void(__cdecl *)(CVector, float, CEntity*, bool))0x6F6640)(arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CTrain::RemoveRandomPassenger(void) 0x6F6850
void CTrain::RemoveRandomPassenger() {
    ((void(__thiscall *)(CTrain*))0x6F6850)(this);
}

// Converted from cdecl void CTrain::RemoveMissionTrains(void) 0x6F6A20
void CTrain::RemoveMissionTrains() {
    ((void(__cdecl *)())0x6F6A20)();
}

// Converted from cdecl void CTrain::RemoveAllTrains(void) 0x6F6AA0
void CTrain::RemoveAllTrains() {
    ((void(__cdecl *)())0x6F6AA0)();
}

// Converted from cdecl void CTrain::ReleaseMissionTrains(void) 0x6F6B60
void CTrain::ReleaseMissionTrains() {
    ((void(__cdecl *)())0x6F6B60)();
}

// Converted from cdecl int CTrain::FindClosestTrackNode(CVector posn,int *outTrackId) 0x6F6BD0
int CTrain::FindClosestTrackNode(CVector posn, int* outTrackId) {
    return ((int(__cdecl *)(CVector, int*))0x6F6BD0)(posn, outTrackId);
}

// Converted from thiscall void CTrain::FindPositionOnTrackFromCoors(void) 0x6F6CC0
void CTrain::FindPositionOnTrackFromCoors() {
    ((void(__thiscall *)(CTrain*))0x6F6CC0)(this);
}

// Converted from cdecl CTrain* CTrain::FindNearestTrain(CVector posn,bool mustBeMainTrain) 0x6F7090
CTrain* CTrain::FindNearestTrain(CVector posn, bool mustBeMainTrain) {
    return ((CTrain* (__cdecl *)(CVector, bool))0x6F7090)(posn, mustBeMainTrain);
}

// Converted from cdecl void CTrain::SetNewTrainPosition(CTrain* train,CVector posn) 0x6F7140
void CTrain::SetNewTrainPosition(CTrain* train, CVector posn) {
    ((void(__cdecl *)(CTrain*, CVector))0x6F7140)(train, posn);
}

// Converted from cdecl bool CTrain::IsNextStationAllowed(CTrain* train) 0x6F7260
bool CTrain::IsNextStationAllowed(CTrain* train) {
    return ((bool(__cdecl *)(CTrain*))0x6F7260)(train);
}

// Converted from cdecl void CTrain::SkipToNextAllowedStation(CTrain* train) 0x6F72F0
void CTrain::SkipToNextAllowedStation(CTrain* train) {
    ((void(__cdecl *)(CTrain*))0x6F72F0)(train);
}

// Converted from cdecl void CTrain::InitTrains(void) 0x6F7440
void CTrain::InitTrains() {
    ((void(__cdecl *)())0x6F7440)();
}

// Converted from cdecl void CTrain::CreateMissionTrain(CVector posn,bool clockwiseDirection,uint trainType,CTrain**outFirstCarriage,CTrain**outLastCarriage,int nodeIndex,int trackId,bool isMissionTrain) 0x6F7550
void CTrain::CreateMissionTrain(CVector posn, bool clockwiseDirection, unsigned int trainType, CTrain**outFirstCarriage, CTrain**outLastCarriage, int nodeIndex, int trackId, bool isMissionTrain) {
    ((void(__cdecl *)(CVector, bool, unsigned int, CTrain**, CTrain**, int, int, bool))0x6F7550)(posn, clockwiseDirection, trainType, outFirstCarriage, outLastCarriage, nodeIndex, trackId, isMissionTrain);
}

// Converted from cdecl void CTrain::DoTrainGenerationAndRemoval(void) 0x6F7900
void CTrain::DoTrainGenerationAndRemoval() {
    ((void(__cdecl *)())0x6F7900)();
}

// Converted from thiscall void CTrain::AddNearbyPedAsRandomPassenger(void) 0x6F8170
void CTrain::AddNearbyPedAsRandomPassenger() {
    ((void(__thiscall *)(CTrain*))0x6F8170)(this);
}