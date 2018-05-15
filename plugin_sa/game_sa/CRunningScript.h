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

enum eScriptParameterType {
    SCRIPTPARAM_END_OF_ARGUMENTS,
    SCRIPTPARAM_STATIC_INT_32BITS,
    SCRIPTPARAM_GLOBAL_NUMBER_VARIABLE,
    SCRIPTPARAM_LOCAL_NUMBER_VARIABLE,
    SCRIPTPARAM_STATIC_INT_8BITS,
    SCRIPTPARAM_STATIC_INT_16BITS,
    SCRIPTPARAM_STATIC_FLOAT,

    // Types below are only available in GTA SA

    // Number arrays
    SCRIPTPARAM_GLOBAL_NUMBER_ARRAY,
    SCRIPTPARAM_LOCAL_NUMBER_ARRAY,
    SCRIPTPARAM_STATIC_SHORT_STRING,
    SCRIPTPARAM_GLOBAL_SHORT_STRING_VARIABLE,
    SCRIPTPARAM_LOCAL_SHORT_STRING_VARIABLE,
    SCRIPTPARAM_GLOBAL_SHORT_STRING_ARRAY,
    SCRIPTPARAM_LOCAL_SHORT_STRING_ARRAY,
    SCRIPTPARAM_STATIC_PASCAL_STRING,
    SCRIPTPARAM_STATIC_LONG_STRING,
    SCRIPTPARAM_GLOBAL_LONG_STRING_VARIABLE,
    SCRIPTPARAM_LOCAL_LONG_STRING_VARIABLE,
    SCRIPTPARAM_GLOBAL_LONG_STRING_ARRAY,
    SCRIPTPARAM_LOCAL_LONG_STRING_ARRAY,
};

enum eButtonID
{
    BUTTON_LEFT_STICK_X,
    BUTTON_LEFT_STICK_Y,
    BUTTON_RIGHT_STICK_X,
    BUTTON_RIGHT_STICK_Y,
    BUTTON_LEFT_SHOULDER1,
    BUTTON_LEFT_SHOULDER2,
    BUTTON_RIGHT_SHOULDER1,
    BUTTON_RIGHT_SHOULDER2,
    BUTTON_DPAD_UP,
    BUTTON_DPAD_DOWN,
    BUTTON_DPAD_LEFT,
    BUTTON_DPAD_RIGHT,
    BUTTON_START,
    BUTTON_SELECT,
    BUTTON_SQUARE,
    BUTTON_TRIANGLE,
    BUTTON_CROSS,
    BUTTON_CIRCLE,
    BUTTON_LEFTSHOCK,
    BUTTON_RIGHTSHOCK,
};

union tScriptParam {
    unsigned int uParam;
    int iParam;
    float fParam;
    void *pParam;
    char *szParam;
};

VALIDATE_SIZE(tScriptParam, 0x4);

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
    tScriptParam	m_aLocalVars[32];
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

    SUPPORTED_10US static unsigned char(__thiscall **CommandHandlerTable)(CRunningScript *_this,unsigned short commandID); // static unsigned char(__thiscall *CommandHandlerTable[27])(CRunningScript *,unsigned short )

    //! Adds script to list
    SUPPORTED_10US void AddScriptToList(CRunningScript **queuelist);
    SUPPORTED_10US void CarInAreaCheckCommand(int commandID);
    SUPPORTED_10US void CharInAngledAreaCheckCommand(int commandID);
    SUPPORTED_10US void CharInAreaCheckCommand(int commandID);
    //! Collects parameter and returns it.
    SUPPORTED_10US tScriptParam CollectNextParameterWithoutIncreasingPC();
    SUPPORTED_10US void CollectParameters(short count);
    SUPPORTED_10US void DoDeatharrestCheck();
    SUPPORTED_10US void FlameInAngledAreaCheckCommand(int commandID);
    SUPPORTED_10US void GetCorrectPedModelIndexForEmergencyServiceType(ePedType pedType, int *pModelId);
    //! Returns offset of global variable
    SUPPORTED_10US short GetIndexOfGlobalVariable();
    //! Returns state of pad button , see eButtonID.
    SUPPORTED_10US short GetPadState(unsigned short playerIndex, unsigned short buttonID);   
    //! Returns pointer to local variable pointed by offset and array index as well as multiplier.
    SUPPORTED_10US void *GetPointerToLocalArrayElement(int off, unsigned short idx, unsigned char mul);
    SUPPORTED_10US void *GetPointerToLocalVariable(int varId);
    //! Returns pointer to script variable of any type.
    SUPPORTED_10US tScriptParam *GetPointerToScriptVariable(unsigned char variableType);
    SUPPORTED_10US void GivePedScriptedTask(int pedHandle, CTask *task, int commandID);
    SUPPORTED_10US void Init();
    SUPPORTED_10US bool IsPedDead(CPed *pPed);
    SUPPORTED_10US void LocateCarCommand(int commandID);
    SUPPORTED_10US void LocateCharCarCommand(int commandID);
    SUPPORTED_10US void LocateCharCharCommand(int commandID);
    SUPPORTED_10US void LocateCharCommand(int commandID);
    SUPPORTED_10US void LocateCharObjectCommand(int commandID);
    SUPPORTED_10US void LocateObjectCommand(int commandID);
    SUPPORTED_10US void ObjectInAngledAreaCheckCommand(int commandID);
    SUPPORTED_10US void ObjectInAreaCheckCommand(int commandID);
    SUPPORTED_10US void PlayAnimScriptCommand(int commandID);
    SUPPORTED_10US void Process();
    SUPPORTED_10US char ProcessCommands0To99(int commandID);
    SUPPORTED_10US char ProcessCommands1000To1099(int commandID);
    SUPPORTED_10US char ProcessCommands100To199(int commandID);
    SUPPORTED_10US char ProcessCommands1100To1199(int commandID);
    SUPPORTED_10US char ProcessCommands1200To1299(int commandID);
    SUPPORTED_10US char ProcessCommands1300To1399(int commandID);
    SUPPORTED_10US char ProcessCommands1400To1499(int commandID);
    SUPPORTED_10US char ProcessCommands1500To1599(int commandID);
    SUPPORTED_10US char ProcessCommands1600To1699(int commandID);
    SUPPORTED_10US char ProcessCommands1700To1799(int commandID);
    SUPPORTED_10US char ProcessCommands1800To1899(int commandID);
    SUPPORTED_10US char ProcessCommands1900To1999(int commandID);
    SUPPORTED_10US char ProcessCommands2000To2099(int commandID);
    SUPPORTED_10US char ProcessCommands200To299(int commandID);
    SUPPORTED_10US char ProcessCommands2100To2199(int commandID);
    SUPPORTED_10US char ProcessCommands2200To2299(int commandID);
    SUPPORTED_10US char ProcessCommands2300To2399(int commandID);
    SUPPORTED_10US char ProcessCommands2400To2499(int commandID);
    SUPPORTED_10US char ProcessCommands2500To2599(int commandID);
    SUPPORTED_10US char ProcessCommands2600To2699(int commandID);
    SUPPORTED_10US char ProcessCommands300To399(int commandID);
    SUPPORTED_10US char ProcessCommands400To499(int commandID);
    SUPPORTED_10US char ProcessCommands500To599(int commandID);
    SUPPORTED_10US char ProcessCommands600To699(int commandID);
    SUPPORTED_10US char ProcessCommands700To799(int commandID);
    SUPPORTED_10US char ProcessCommands800To899(int commandID);
    SUPPORTED_10US char ProcessCommands900To999(int commandID);
    SUPPORTED_10US void ProcessOneCommand();
    //! Reads array offset and value from array index variable.
    SUPPORTED_10US void ReadArrayInformation(int move, unsigned short *pOffset, int *pIdx);
    //! Collects parameters and puts them to local variables of new script
    SUPPORTED_10US void ReadParametersForNewlyStartedScript(CRunningScript *pNewScript);
    //! Collects string parameter
    SUPPORTED_10US void ReadTextLabelFromScript(char *pBuffer, unsigned char nBufferLength);
    //! Removes script from list
    SUPPORTED_10US void RemoveScriptFromList(CRunningScript **queuelist);
    SUPPORTED_10US void ScriptTaskPickUpObject(int commandID);
    SUPPORTED_10US void SetCharCoordinates(CPed *pPed, float x_coord, float y_coord, float z_coord, bool bWarpGang, bool bOffset);
    //! Terminates a script
    SUPPORTED_10US void ShutdownThisScript();
    SUPPORTED_10US void StoreParameters(short count);
    SUPPORTED_10US bool ThisIsAValidRandomPed(ePedType pedType, bool civilian, bool gang, bool criminal);
    //! Updates comparement flag, used in conditional commands
    SUPPORTED_10US void UpdateCompareFlag(bool state);
    //! Sets instruction pointer, used in GOTO-like commands
    SUPPORTED_10US void UpdatePC(int newIP);
};

#include "meta/meta.CRunningScript.h"

VALIDATE_SIZE(CRunningScript, 0xE0);
