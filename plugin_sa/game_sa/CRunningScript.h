/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "ePedType.h"
#include "eScriptCommands.h"
#include "eWeaponType.h"
#include "CPed.h"

#define FUNC_CRunningScript__Init 0x4648E0
#define FUNC_CRunningScript__ReadArrayInformation 0x463CF0
#define FUNC_CRunningScript__GetIndexOfGlobalVariable 0x464700
#define FUNC_CRunningScript__GetPointerToScriptVariable 0x464790
#define FUNC_CRunningScript__GetPointerToLocalArrayElement 0x463CC0

#define FUNC_CRunningScript__ProcessOneCommand 0x469EB0
#define FUNC_CRunningScript__CollectParameters 0x464080
#define FUNC_CRunningScript__ReadTextLabelFromScript 0x463D50
#define FUNC_CRunningScript__StoreParameters 0x464370
#define FUNC_CRunningScript__ReadParametersForNewlyStartedScript 0x464500
#define FUNC_CRunningScript__Process 0x469F00
#define FUNC_CRunningScript__DoDeatharrestCheck 0x485A50
#define FUNC_CRunningScript__CollectNextParameterWithoutIncreasingPC 0x464250
#define FUNC_CRunningScript__UpdatePC 0x464DA0
#define FUNC_CRunningScript__UpdateCompareFlag 0x4859D0
#define FUNC_CRunningScript__AddScriptToList 0x464C00
#define FUNC_CRunningScript__RemoveScriptFromList 0x464BD0
#define FUNC_CRunningScript__GetPadState 0x485B10
#define FUNC_CRunningScript__ShutDownThisScript 0x465AA0

#define FUNC_CRunningScript__CheckDamagedWeaponType 0x43D9E0
#define FUNC_CRunningScript__CarInAreaCheckCommand 0x488EC0
#define FUNC_CRunningScript__CharInAreaCheckCommand 0x488B50
#define FUNC_CRunningScript__LocateCarCommand 0x487A20
#define FUNC_CRunningScript__LocateCharCarCommand 0x487420
#define FUNC_CRunningScript__LocateCharCharCommand 0x4870F0
#define FUNC_CRunningScript__LocateCharCommand 0x486D80
#define FUNC_CRunningScript__LocateCharObjectCommand 0x487720
#define FUNC_CRunningScript__LocateObjectCommand 0x487D10
#define FUNC_CRunningScript__ObjectInAreaCheckCommand 0x489150
#define FUNC_CRunningScript__ThisIsAValidRandomPed 0x489490

// Command handlers
#define FUNC_CRunningScript__ProcessCommands_0To99 0x465E60
#define FUNC_CRunningScript__ProcessCommands_100To199 0x466DE0
#define FUNC_CRunningScript__ProcessCommands_200To299 0x469390
#define FUNC_CRunningScript__ProcessCommands_300To399 0x47C100
#define FUNC_CRunningScript__ProcessCommands_400To499 0x47D210
#define FUNC_CRunningScript__ProcessCommands_500To599 0x47E090
#define FUNC_CRunningScript__ProcessCommands_600To699 0x47F370
#define FUNC_CRunningScript__ProcessCommands_700To799 0x47FA30
#define FUNC_CRunningScript__ProcessCommands_800To899 0x481300
#define FUNC_CRunningScript__ProcessCommands_900To999 0x483BD0
#define FUNC_CRunningScript__ProcessCommands_1000To1099 0x489500
#define FUNC_CRunningScript__ProcessCommands_1100To1199 0x48A320
#define FUNC_CRunningScript__ProcessCommands_1200To1299 0x48B590
#define FUNC_CRunningScript__ProcessCommands_1300To1399 0x48CDD0
#define FUNC_CRunningScript__ProcessCommands_1400To1499 0x48EAA0
#define FUNC_CRunningScript__ProcessCommands_1500To1599 0x490DB0
#define FUNC_CRunningScript__ProcessCommands_1600To1699 0x493FE0
#define FUNC_CRunningScript__ProcessCommands_1700To1799 0x496E00
#define FUNC_CRunningScript__ProcessCommands_1800To1899 0x46D050
#define FUNC_CRunningScript__ProcessCommands_1900To1999 0x46B460
#define FUNC_CRunningScript__ProcessCommands_2000To2099 0x472310
#define FUNC_CRunningScript__ProcessCommands_2100To2199 0x470A90
#define FUNC_CRunningScript__ProcessCommands_2200To2299 0x474900
#define FUNC_CRunningScript__ProcessCommands_2300To2399 0x4762D0
#define FUNC_CRunningScript__ProcessCommands_2400To2499 0x478000
#define FUNC_CRunningScript__ProcessCommands_2500To2599 0x47A760
#define FUNC_CRunningScript__ProcessCommands_2600To2699 0x479DA0

enum eScriptArgumentType {
    SCRIPTARG_END_OF_ARGUMENTS,
    SCRIPTARG_STATIC_INT_32BITS,
    SCRIPTARG_GLOBAL_NUMBER_VARIABLE,
    SCRIPTARG_LOCAL_NUMBER_VARIABLE,
    SCRIPTARG_STATIC_INT_8BITS,
    SCRIPTARG_STATIC_INT_16BITS,
    SCRIPTARG_STATIC_FLOAT,

    // Types below are only available in GTA SA
    SCRIPTARG_INTRODUCED_IN_GTASA,

    // Number arrays
    SCRIPTARG_GLOBAL_NUMBER_ARRAY = SCRIPTARG_INTRODUCED_IN_GTASA,

    SCRIPTARG_LOCAL_NUMBER_ARRAY,
    SCRIPTARG_STATIC_SHORT_STRING,
    SCRIPTARG_GLOBAL_SHORT_STRING_VARIABLE,
    SCRIPTARG_LOCAL_SHORT_STRING_VARIABLE,
    SCRIPTARG_GLOBAL_SHORT_STRING_ARRAY,
    SCRIPTARG_LOCAL_SHORT_STRING_ARRAY,
    SCRIPTARG_STATIC_PASCAL_STRING,
    SCRIPTARG_STATIC_LONG_STRING,
    SCRIPTARG_GLOBAL_LONG_STRING_VARIABLE,
    SCRIPTARG_LOCAL_LONG_STRING_VARIABLE,
    SCRIPTARG_GLOBAL_LONG_STRING_ARRAY,
    SCRIPTARG_LOCAL_LONG_STRING_ARRAY,
};

union tScriptVarValue {
    unsigned int uParam;
    int iParam;
    float fParam;
    void *pParam;
    char *szParam;
};

VALIDATE_SIZE(tScriptVarValue, 0x4);

class PLUGIN_API CRunningScript {
public:
    CRunningScript *m_pNext;
    CRunningScript *m_pPrev;
    char            m_szName[8];
    unsigned char  *m_pBaseIP;
    unsigned char  *m_pCurrentIP;
    unsigned char  *m_apStack[8];
    unsigned short  m_nSP;
private:
    char _pad3A[2];
public:
    tScriptVarValue	m_aLocalVars[32];
    int             m_anTimers[2];
    bool            m_bIsActive;
    bool            m_bCondResult;
    bool            m_bUseMissionCleanup;
    bool            m_bIsExternal;
    bool            m_bTextBlockOverride;
private:
    char _padC9[3];
public:
    int             m_nWakeTime;
    unsigned short  m_nLogicalOp;
    bool            m_bNotFlag;
    bool            m_bWastedBustedCheck;
    bool            m_bWastedOrBusted;
private:
    char _padD5[3];
public:
    unsigned char  *m_pSceneSkipIP;
    bool            m_bIsMission;
private:
    char _padDD[3];
public:

    // Initializes member variables.
    void Init();

    // Processes running script
    void Process();

    // Processes one command
    char ProcessOneCommand();

    // Performs death arrest check
    void DoDeatharrestCheck();

    /////// USED HEAVILY IN COMMANDS //////

    // Reads array offset and value from array index variable.
    void ReadArrayInformation(short *pOffset, int *pIdx);

    // Returns offset of global variable
    short GetIndexOfGlobalVariable();

    // Returns pointer to script variable of any type.
    tScriptVarValue* GetPointerToScriptVariable(unsigned char variableType);

    // Collects parameters
    void CollectParameters(short count);

    // Collects parameter and returns it.
    tScriptVarValue CollectNextParameterWithoutIncreasingPC();

    // Collects string parameter
    void ReadTextLabelFromScript(char *pBuffer, unsigned char nBufferLength);

    // Stores parameters
    void StoreParameters(short count);

    // Collects parameters and puts them to local variables of new script
    void ReadParametersForNewlyStartedScript(CRunningScript* pNewScript);

    // Sets instruction pointer, used in GOTO-like commands
    void UpdatePC(int newIP);

    // Updates comparement flag, used in conditional commands
    void UpdateCompareFlag(bool state);

    // Terminates a script
    void ShutDownThisScript();

    ///////////////////

    // Returns condition result
    bool GetConditionResult();

    // Returns pointer to local variable pointed by offset and array index as well as multiplier.
    void GetPointerToLocalArrayElement(short off, short idx, unsigned char mul);

    // Adds script to list
    void AddScriptToList(CRunningScript ** list);

    // Removes script from list
    void RemoveScriptFromList(CRunningScript ** list);

    // Returns state of pad button.
    short GetPadState(unsigned short playerIndex, unsigned short buttonID);

    // Command handlers
    char ProcessCommands_0To99(int commandID);
    char ProcessCommands_100To199(int commandID);
    char ProcessCommands_200To299(int commandID);
    char ProcessCommands_300To399(int commandID);
    char ProcessCommands_400To499(int commandID);
    char ProcessCommands_500To599(int commandID);
    char ProcessCommands_600To699(int commandID);
    char ProcessCommands_700To799(int commandID);
    char ProcessCommands_800To899(int commandID);
    char ProcessCommands_900To999(int commandID);
    char ProcessCommands_1000To1099(int commandID);
    char ProcessCommands_1100To1199(int commandID);
    char ProcessCommands_1200To1299(int commandID);
    char ProcessCommands_1300To1399(int commandID);
    char ProcessCommands_1400To1499(int commandID);
    char ProcessCommands_1500To1599(int commandID);
    char ProcessCommands_1600To1699(int commandID);
    char ProcessCommands_1700To1799(int commandID);
    char ProcessCommands_1800To1899(int commandID);
    char ProcessCommands_1900To1999(int commandID);
    char ProcessCommands_2000To2099(int commandID);
    char ProcessCommands_2100To2199(int commandID);
    char ProcessCommands_2200To2299(int commandID);
    char ProcessCommands_2300To2399(int commandID);
    char ProcessCommands_2400To2499(int commandID);
    char ProcessCommands_2500To2599(int commandID);
    char ProcessCommands_2600To2699(int commandID);

    // Processes commands that check if car is in specified area.
    void CarInAreaCheckCommand(int commandID);

    // Processes commands that check if char is in specified area.
    void CharInAreaCheckCommand(int commandID);

    // Processes commands that locate a vehicle
    void LocateCarCommand(int commandID);

    // Processes commands where char locates car
    void LocateCharCarCommand(int commandID);

    // Processes commands where char locates another char
    void LocateCharCharCommand(int commandID);

    // Processes commands where char locates map point
    void LocateCharCommand(int commandID);

    // Processes commands where char locates object
    void LocateCharObjectCommand(int commandID);

    // Processes commands where object locates map point
    void LocateObjectCommand(int commandID);

    // Processes commands that check if object is in area
    void ObjectInAreaCheckCommand(int commandID);

    // Checks if ped type conforms to valid ped types.
    bool ThisIsAValidRandomPed(ePedType pedType, bool civilian, bool gang, bool criminal);

    char* GetPointerToLocalVariable(unsigned int varid);
    bool IsPedDead(CPed* pPed);
    void SetCharCoordinates(CPed* pPed, float x_coord, float y_coord, float z_coord, bool bWarpGang, bool bOffset);
    void GivePedScriptedTask(int ped, CTask* task, int opcode);
    void PlayAnimScriptCommand(int opcodeid);

    static void GetCorrectPedModelIndexForEmergencyServiceType(ePedType pedtype, int* pModelId);
};

VALIDATE_SIZE(CRunningScript, 0xE0);
