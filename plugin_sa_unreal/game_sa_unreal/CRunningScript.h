/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

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

enum eButtonID {
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
    uint32_t uParam;
    int32_t iParam;
    float fParam;
    void* pParam;
    uint8_t* szParam;
};

VALIDATE_SIZE(tScriptParam, 0x8);

class PLUGIN_API CRunningScript {
public:
    CRunningScript* pNext;
    CRunningScript* m_pPrev;
    char m_szName[8];
    uint8_t* m_pBaseIP;
    uint8_t* m_pCurrentIP;
    uint8_t* m_apStack[8];
    uint16_t m_nSP;
    int32_t m_aLocalVars[42];
    uint8_t m_bIsActive;
    uint8_t m_bCondResult;
    uint8_t m_bUseMissionCleanup;
    uint8_t m_bIsExternal;
    uint8_t m_bTextBlockOverride;
    int8_t m_nScriptBrainType;
    uint32_t m_nWakeTime;
    uint16_t m_nLogicalOp;
    uint8_t m_bNotFlag;
    uint8_t m_bWastedBustedCheck;
    uint8_t m_bWastedOrBusted;
    int32_t m_nEndOfScriptedCutscenePC;
    uint8_t m_bIsMission;

public:
    void ProcessOneCommand();
    void Init();
};

VALIDATE_SIZE(CRunningScript, 0x130);
