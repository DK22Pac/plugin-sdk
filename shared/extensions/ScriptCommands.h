/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV) || defined(GTASA_UNREAL)

#include "scripting/ScriptCommandNames.h"
#include <vector>
#include <string.h>

#ifndef RAGE
#include "CRunningScript.h"
#endif

class CPed;
class CVehicle;
class CObject;

namespace plugin {

class scripting {

public:
#ifndef RAGE
enum ScriptCommandEndParameter {
    END_PARAMETER
};

private:

enum ScriptResultVarType {
    SCRIPT_RESULT_VAR_NUMBER,
    SCRIPT_RESULT_VAR_STRING,
    SCRIPT_RESULT_VAR_PED,
    SCRIPT_RESULT_VAR_VEHICLE,
    SCRIPT_RESULT_VAR_OBJECT
};

class ScriptCode {
    unsigned char *data;
    unsigned int capacity;
    unsigned int size;

    struct VarToSet {
        unsigned int varIndex;
        void *pVar;
        ScriptResultVarType varType;

        VarToSet(unsigned int _varIndex, void *_pVar, ScriptResultVarType _varType);
    };

    std::vector<VarToSet> varsToSet;
    unsigned short varIndexCounter;

public:
    ScriptCode(short commandId = -1);
    ~ScriptCode();
    void AddParameterDescription(unsigned char paramType);
    void AddBytes(unsigned char *bytes, unsigned int count);
    unsigned char *GetData();

    void SaveResultVariables(CRunningScript *script);
    void operator<<(char n);
    void operator<<(unsigned char n);
    void operator<<(short n);
    void operator<<(unsigned short n);
    void operator<<(int n);
    void operator<<(unsigned int n);
    void operator<<(float n);
    void operator<<(double n);
    void operator<<(ScriptCommandEndParameter);
    void operator<<(char *str);
    void operator<<(const char *str);
    void operator<<(float *p);
    void operator<<(int *p);
    void operator<<(unsigned int *p);
#ifdef GTASA
    void operator<<(char(*p)[16]);
#endif
    void operator<<(CPed *n);
    void operator<<(CVehicle *n);
    void operator<<(CObject *n);
    void operator<<(CPed **p);
    void operator<<(CVehicle **p);
    void operator<<(CObject **p);

    template <typename T>
    void Pack(T value) {
        operator<<(value);
    }

    template <typename First, typename... Rest>
    void Pack(First firstValue, Rest... rest) {
        Pack(firstValue);
        Pack(rest...);
    }

    void Pack() {}
};
#endif

public:

#ifdef RAGE
template<typename Ret, typename... ArgTypes>
static Ret CallCommandById(unsigned int commandId, ArgTypes... arguments) {
#else
template<typename... ArgTypes>
static bool CallCommandById(unsigned int commandId, ArgTypes... arguments) {
#endif
#ifdef RAGE
    rage::scrThread::InfoWithBuf info;
    (info.Fill(arguments), ...);

    auto fun = rage::scr_resolver(commandId);
    fun(&info);

    if constexpr (!std::is_void_v<Ret>)
        return *reinterpret_cast<Ret*>(info.ResultPtr);

#elif defined(RW) || (UNREAL)
    // create our 'script' object
    static CRunningScript script;
    memset(&script, 0, sizeof(CRunningScript));
#if defined(GTASA) || defined(GTASA_UNREAL)
    script.Init();
#else
    script.m_bWastedBustedCheck = true;
#endif
    strcpy(script.m_szName, "plg-sdk");
    script.m_bIsMission = false;
    script.m_bUseMissionCleanup = false;
    script.m_bNotFlag = (commandId >> 15) & 1;
    // our script code
    ScriptCode code(commandId);
    // for all arguments: add them to script code
    code.Pack(arguments...);
#if defined(GTASA) || defined(GTASA_UNREAL)
    script.m_pBaseIP = script.m_pCurrentIP = code.GetData();
#else
    script.m_nIp = reinterpret_cast<int>(code.GetData()) - reinterpret_cast<int>(CRunningScript::GetScriptSpaceBase());
#endif
    script.ProcessOneCommand();
    code.SaveResultVariables(&script);
    return script.m_bCondResult ? true : false;
#endif
}

#ifdef RAGE
template<typename Ret, typename... ArgTypes>
static Ret CallCommandById(plugin::Commands commandId, ArgTypes... arguments) {
    return CallCommandById<Ret>(static_cast<unsigned int>(commandId), arguments...);
}
#else
template<typename... ArgTypes>
static bool CallCommandById(plugin::Commands commandId, ArgTypes... arguments) {
    return CallCommandById(static_cast<unsigned int>(commandId) - 0x10000, arguments...);
}
#endif

};

#ifdef RAGE
template <typename Ret, plugin::Commands CommandId, typename... ArgTypes>
Ret Command(ArgTypes... arguments) {
    return scripting::CallCommandById<Ret>(static_cast<unsigned int>(CommandId), arguments...);
}

template <typename Ret, int CommandId, typename... ArgTypes>
Ret Command(ArgTypes... arguments) {
    return scripting::CallCommandById<Ret>(CommandId, arguments...);
}
#else
template <plugin::Commands CommandId, typename... ArgTypes>
bool Command(ArgTypes... arguments) {
    return scripting::CallCommandById(static_cast<unsigned int>(CommandId) - 0x10000, arguments...);
}

template <int CommandId, typename... ArgTypes>
bool Command(ArgTypes... arguments) {
    return scripting::CallCommandById(CommandId, arguments...);
}
#endif

};

#endif
