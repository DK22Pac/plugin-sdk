/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "CZone.h"

struct CZoneInfo; 

class CTheZones {
public:

    // Variables
    static eLevelName& m_CurrLevel;
    static short& TotalNumberOfMapZones;
    static short& TotalNumberOfInfoZones;
    static short& TotalNumberOfNavigationZones;
    static short& NumberOfAudioZones;
    static short& FindIndex;
    static CZone* ZoneInfoArray;
    static CZone* MapZoneArray;
    static CZone* NavigationZoneArray;
    static CZone* AudioZoneArray;

    //funcs
    // Creates a zone
    static void CreateZone(char* name, eZoneType type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, eLevelName island);
    static CZone* FindAudioZone(CVector* point);
    static int FindInformationZoneForPosition(CVector const* pPoint);
    // Returns pointer to zone by index
    static short FindNextZoneByLabelAndReturnIndex(char* name, eZoneType type);
    static int FindSmallestNavigationZoneForPosition(CVector const* pPoint, bool arg1, bool arg2);
    // Returns pointer to zone by index
    static short FindZoneByLabelAndReturnIndex(char* name, eZoneType type);
    // Returns eLevelName from position
    static eLevelName GetLevelFromPosition(CVector const* pPoint);
    static int GetNavigationZone(unsigned short arg0);
    // Returns pointer to zone
    static CZone* GetZoneInfo(CVector const* pPoint, unsigned char arg1);
    static short GetZoneInfoForTimeOfDay(CVector const* pPoint, CZoneInfo* zoneInfo);
    // Initializes CTheZones
    static void Init();
    static void InitialiseAudioZoneArray();
    static bool InsertZoneIntoZoneHierRecursive(CZone* currentZona, CZone* otherZone);
    static void LoadAllZones(unsigned char* arg0, unsigned int arg1);
    static void LoadOneZone(CZone* pZone, unsigned char** arg1, unsigned int* arg2, eZoneType type);
    // Returns true if point lies within zone
    static bool PointLiesWithinZone(CVector const* pPoint, CZone* pZone);
    static char PostZoneCreation();
    static void SaveAllZones(unsigned char* arg0, unsigned int* arg1);
    static void SaveOneZone(CZone* pZone, unsigned char** arg1, unsigned int* arg2, eZoneType type);
    static void SetPedGroup(unsigned short arg0, unsigned char arg1, unsigned short arg2);
    static void SetZoneCarInfo(int arg0, unsigned char arg1, short arg2, short arg3, short const* arg4);
    static void SetZoneCivilianCarInfo(int arg0, unsigned char arg1, short const* arg2, short const* arg3);
    static void SetZonePedInfo(int arg0, unsigned char arg1, short arg2, short arg3, short arg4, short arg5, short arg6, short arg7, short arg8, short arg9, short arg10, short arg11, short arg12);
    // Updates CTheZones info
    static void Update();
    static bool ZoneIsEntirelyContainedWithinOtherZone(CZone* currentZona, CZone* otherZone);
};