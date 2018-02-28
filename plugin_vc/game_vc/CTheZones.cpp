/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTheZones.h"

// Variables
eLevelName& CTheZones::m_CurrLevel = *(eLevelName*)0x97F204;
short& CTheZones::TotalNumberOfMapZones = *(short*)0xA10A32;
short& CTheZones::TotalNumberOfInfoZones = *(short*)0xA1096A;
short& CTheZones::TotalNumberOfNavigationZones = *(short*)0xA10A58;
short& CTheZones::NumberOfAudioZones = *(short*)0xA10A46;
short& CTheZones::FindIndex = *(short*)0xA1096C;
CZone* CTheZones::ZoneInfoArray = (CZone*)0x7FA370;
CZone* CTheZones::MapZoneArray = (CZone*)0x78BD20;
CZone* CTheZones::NavigationZoneArray = (CZone*)0x94B990;
CZone* CTheZones::AudioZoneArray = (CZone*)0x9787B8;

// Converted from cdecl void CTheZones::CreateZone(char *name,eZoneType type,float posX1,float posY1,float posZ1,float posX2,float posY2, float posZ2,eLevelName island) 0x4DDB80
void CTheZones::CreateZone(char* name, eZoneType type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, eLevelName island) {
    plugin::Call<0x4DDB80, char*, eZoneType, float, float, float, float, float, float, eLevelName>(name, type, posX1, posY1, posZ1, posX2, posY2, posZ2, island);
}

// Converted from cdecl CZone* CTheZones::FindAudioZone(CVector *point) 0x4DC370
CZone* CTheZones::FindAudioZone(CVector* point) {
    return plugin::CallAndReturn<CZone*, 0x4DC370, CVector*>(point);
}

// Converted from cdecl int CTheZones::FindInformationZoneForPosition(CVector const* pPoint) 0x4DD160
int CTheZones::FindInformationZoneForPosition(CVector const* pPoint) {
    return plugin::CallAndReturn<int, 0x4DD160, CVector const*>(pPoint);
}

// Converted from cdecl short CTheZones::FindNextZoneByLabelAndReturnIndex(char *name,eZoneType type) 0x4DD4A0
short CTheZones::FindNextZoneByLabelAndReturnIndex(char* name, eZoneType type) {
    return plugin::CallAndReturn<short, 0x4DD4A0, char*, eZoneType>(name, type);
}

// Converted from cdecl int CTheZones::FindSmallestNavigationZoneForPosition(CVector const* pPoint,bool,bool) 0x4DD060
int CTheZones::FindSmallestNavigationZoneForPosition(CVector const* pPoint, bool arg1, bool arg2) {
    return plugin::CallAndReturn<int, 0x4DD060, CVector const*, bool, bool>(pPoint, arg1, arg2);
}

// Converted from cdecl short CTheZones::FindZoneByLabelAndReturnIndex(char *name,eZoneType type) 0x4DD5F0
short CTheZones::FindZoneByLabelAndReturnIndex(char* name, eZoneType type) {
    return plugin::CallAndReturn<short, 0x4DD5F0, char*, eZoneType>(name, type);
}

// Converted from cdecl eLevelName CTheZones::GetLevelFromPosition(CVector const* pPoint) 0x4DD300
eLevelName CTheZones::GetLevelFromPosition(CVector const* pPoint) {
    eLevelName result;
    plugin::CallAndReturn<eLevelName, 0x4DD300, eLevelName*, CVector const*>(&result, pPoint);
    return result;
}

// Converted from cdecl int CTheZones::GetNavigationZone(ushort) 0x4DCC20 
int CTheZones::GetNavigationZone(unsigned short arg0) {
    return plugin::CallAndReturn<int, 0x4DCC20, unsigned short>(arg0);
}

// Converted from cdecl CZone* CTheZones::GetZoneInfo(CVector const* pPoint,uchar) 0x4DCEA0
CZone* CTheZones::GetZoneInfo(CVector const* pPoint, unsigned char arg1) {
    return plugin::CallAndReturn<CZone*, 0x4DCEA0, CVector const*, unsigned char>(pPoint, arg1);
}

// Converted from cdecl short CTheZones::GetZoneInfoForTimeOfDay(CVector const* pPoint,CZoneInfo *zoneInfo) 0x4DC500
short CTheZones::GetZoneInfoForTimeOfDay(CVector const* pPoint, CZoneInfo* zoneInfo) {
    return plugin::CallAndReturn<short, 0x4DC500, CVector const*, CZoneInfo*>(pPoint, zoneInfo);
}

// Converted from cdecl void CTheZones::Init(void) 0x4DDFA0 
void CTheZones::Init() {
    plugin::Call<0x4DDFA0>();
}

// Converted from cdecl void CTheZones::InitialiseAudioZoneArray(void) 0x4DC430 
void CTheZones::InitialiseAudioZoneArray() {
    plugin::Call<0x4DC430>();
}

// Converted from cdecl bool CTheZones::InsertZoneIntoZoneHierRecursive(CZone *currentZona, CZone *otherZone) 0x4DD9D0
bool CTheZones::InsertZoneIntoZoneHierRecursive(CZone* currentZona, CZone* otherZone) {
    return plugin::CallAndReturn<bool, 0x4DD9D0, CZone*, CZone*>(currentZona, otherZone);
}

// Converted from cdecl void CTheZones::LoadAllZones(uchar *,uint) 0x4DBCB0 
void CTheZones::LoadAllZones(unsigned char* arg0, unsigned int arg1) {
    plugin::Call<0x4DBCB0, unsigned char*, unsigned int>(arg0, arg1);
}

// Converted from cdecl void CTheZones::LoadOneZone(CZone *pZone,uchar **,uint *,eZoneType type) 0x4DBB80
void CTheZones::LoadOneZone(CZone* pZone, unsigned char** arg1, unsigned int* arg2, eZoneType type) {
    plugin::Call<0x4DBB80, CZone*, unsigned char**, unsigned int*, eZoneType>(pZone, arg1, arg2, type);
}

// Converted from cdecl bool CTheZones::PointLiesWithinZone(CVector const* pPoint,CZone *pZone) 0x4DD750
bool CTheZones::PointLiesWithinZone(CVector const* pPoint, CZone* pZone) {
    return plugin::CallAndReturn<bool, 0x4DD750, CVector const*, CZone*>(pPoint, pZone);
}

// Converted from cdecl char CTheZones::PostZoneCreation(void) 0x4DDA90 
char CTheZones::PostZoneCreation() {
    return plugin::CallAndReturn<char, 0x4DDA90>();
}

// Converted from cdecl void CTheZones::SaveAllZones(uchar *,uint *) 0x4DC090 
void CTheZones::SaveAllZones(unsigned char* arg0, unsigned int* arg1) {
    plugin::Call<0x4DC090, unsigned char*, unsigned int*>(arg0, arg1);
}

// Converted from cdecl void CTheZones::SaveOneZone(CZone *pZone,uchar **,uint *,eZoneType type) 0x4DBF30
void CTheZones::SaveOneZone(CZone* pZone, unsigned char** arg1, unsigned int* arg2, eZoneType type) {
    plugin::Call<0x4DBF30, CZone*, unsigned char**, unsigned int*, eZoneType>(pZone, arg1, arg2, type);
}

// Converted from cdecl void CTheZones::SetPedGroup(ushort,uchar,ushort) 0x4DCC30 
void CTheZones::SetPedGroup(unsigned short arg0, unsigned char arg1, unsigned short arg2) {
    plugin::Call<0x4DCC30, unsigned short, unsigned char, unsigned short>(arg0, arg1, arg2);
}

// Converted from cdecl void CTheZones::SetZoneCarInfo(int,uchar,short,short,short const*) 0x4DCDF0 
void CTheZones::SetZoneCarInfo(int arg0, unsigned char arg1, short arg2, short arg3, short const* arg4) {
    plugin::Call<0x4DCDF0, int, unsigned char, short, short, short const*>(arg0, arg1, arg2, arg3, arg4);
}

// Converted from cdecl void CTheZones::SetZoneCivilianCarInfo(int,uchar,short const*,short const*) 0x4DCD40 
void CTheZones::SetZoneCivilianCarInfo(int arg0, unsigned char arg1, short const* arg2, short const* arg3) {
    plugin::Call<0x4DCD40, int, unsigned char, short const*, short const*>(arg0, arg1, arg2, arg3);
}

// Converted from cdecl void CTheZones::SetZonePedInfo(int,uchar,short,short,short,short,short,short,short,short,short,short,short) 0x4DCC70 
void CTheZones::SetZonePedInfo(int arg0, unsigned char arg1, short arg2, short arg3, short arg4, short arg5, short arg6, short arg7, short arg8, short arg9, short arg10, short arg11, short arg12) {
    plugin::Call<0x4DCC70, int, unsigned char, short, short, short, short, short, short, short, short, short, short, short>(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

// Converted from cdecl void CTheZones::Update(void) 0x4DDDF0 
void CTheZones::Update() {
    plugin::Call<0x4DDDF0>();
}

// Converted from cdecl bool CTheZones::ZoneIsEntirelyContainedWithinOtherZone(CZone *currentZona,CZone *otherZone) 0x4DD7D0
bool CTheZones::ZoneIsEntirelyContainedWithinOtherZone(CZone* currentZona, CZone* otherZone) {
    return plugin::CallAndReturn<bool, 0x4DD7D0, CZone*, CZone*>(currentZona, otherZone);
}