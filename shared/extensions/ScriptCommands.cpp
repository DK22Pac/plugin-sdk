/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTASA_UNREAL)
#include "ScriptCommands.h"
#include "Error.h"
#include "CPools.h"

using namespace plugin;

#ifdef GTASA
#define SCRIPT_COMMANDS_LVAR_MAX_INDEX 31
#else
#define SCRIPT_COMMANDS_LVAR_MAX_INDEX 15
#endif

scripting::ScriptCode::VarToSet::VarToSet(unsigned int _varIndex, void *_pVar, ScriptResultVarType _varType) {
    varIndex = _varIndex;
    pVar = _pVar;
    varType = _varType;
}

scripting::ScriptCode::ScriptCode(short commandId) {
    capacity = 32;
    data = new unsigned char[32];
    size = 0;
    varIndexCounter = 0;
    if (commandId != -1) {
        AddBytes(reinterpret_cast<unsigned char *>(&commandId), 2);
    }
}

scripting::ScriptCode::~ScriptCode() {
    delete[] data;
}

void scripting::ScriptCode::AddParameterDescription(unsigned char paramType) {
    AddBytes(&paramType, 1);
}

void scripting::ScriptCode::AddBytes(unsigned char *bytes, unsigned int count) {
    unsigned int newSize = size + count;
    if (newSize > capacity) {
        while (newSize > capacity)
            capacity += 32;
        unsigned char *newData = new unsigned char[capacity];
        memcpy(newData, data, size);
        delete[] data;
        data = newData;
    }
    memcpy(&data[size], bytes, count);
    size = newSize;
}

unsigned char *scripting::ScriptCode::GetData() { return data; };

#ifndef RAGE
void scripting::ScriptCode::SaveResultVariables(CRunningScript *script) {
#define LocalVar (*(tScriptParam*)&script->m_aLocalVars[varToSet.varIndex])
    for (auto &varToSet : varsToSet) {
        if (varToSet.varType == SCRIPT_RESULT_VAR_NUMBER) {
            *reinterpret_cast<unsigned int *>(varToSet.pVar) = LocalVar.uParam;
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_STRING) {
            char *pStr = reinterpret_cast<char *>(varToSet.pVar);
            strncpy(pStr, reinterpret_cast<char *>(&LocalVar.iParam), 15);
            pStr[15] = '\0';
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_PED) {
            CPed *result = nullptr;
            if (LocalVar.iParam != -1)
                result = CPools::GetPed(LocalVar.iParam);
            *reinterpret_cast<CPed **>(varToSet.pVar) = result;
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_VEHICLE) {
            CVehicle *result = nullptr;
            if (LocalVar.iParam != -1)
                result = CPools::GetVehicle(LocalVar.iParam);
            *reinterpret_cast<CVehicle **>(varToSet.pVar) = result;
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_OBJECT) {
            CObject *result = nullptr;
            if (LocalVar.iParam != -1)
                result = CPools::GetObject(LocalVar.iParam);
            *reinterpret_cast<CObject **>(varToSet.pVar) = result;
        }
    }
}
#endif

void scripting::ScriptCode::operator<<(char n) { AddParameterDescription(SCRIPTPARAM_STATIC_INT_8BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 1); }
void scripting::ScriptCode::operator<<(unsigned char n) { AddParameterDescription(SCRIPTPARAM_STATIC_INT_8BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 1); }
void scripting::ScriptCode::operator<<(short n) { AddParameterDescription(SCRIPTPARAM_STATIC_INT_16BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 2); }
void scripting::ScriptCode::operator<<(unsigned short n) { AddParameterDescription(SCRIPTPARAM_STATIC_INT_16BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 2); }
void scripting::ScriptCode::operator<<(int n) { AddParameterDescription(SCRIPTPARAM_STATIC_INT_32BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void scripting::ScriptCode::operator<<(unsigned int n) { AddParameterDescription(SCRIPTPARAM_STATIC_INT_32BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
#ifdef GTA3
void scripting::ScriptCode::operator<<(float n) {
    AddParameterDescription(SCRIPTPARAM_STATIC_FLOAT);
    short s = static_cast<short>(n * 16);
    AddBytes(reinterpret_cast<unsigned char *>(&s), 2);
}

void scripting::ScriptCode::operator<<(double n) {
    AddParameterDescription(SCRIPTPARAM_STATIC_FLOAT);
    short s = static_cast<short>(static_cast<float>(n) * 16);
    AddBytes(reinterpret_cast<unsigned char *>(&s), 2);
}
#else
void scripting::ScriptCode::operator<<(float n) { AddParameterDescription(SCRIPTPARAM_STATIC_FLOAT); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void scripting::ScriptCode::operator<<(double n) { AddParameterDescription(SCRIPTPARAM_STATIC_FLOAT); float f = static_cast<float>(n); AddBytes(reinterpret_cast<unsigned char *>(&f), 4); }
#endif
void scripting::ScriptCode::operator<<(ScriptCommandEndParameter) { AddParameterDescription(SCRIPTPARAM_END_OF_ARGUMENTS); }

#ifdef GTASA
void scripting::ScriptCode::operator<<(char *str) {
    AddParameterDescription(SCRIPTPARAM_STATIC_PASCAL_STRING);
    unsigned int length = strlen(str);
    AddParameterDescription(length);
    AddBytes(reinterpret_cast<unsigned char *>(str), length);
}

void scripting::ScriptCode::operator<<(const char *str) {
    AddParameterDescription(SCRIPTPARAM_STATIC_PASCAL_STRING);
    unsigned int length = strlen(str);
    AddParameterDescription(length);
    AddBytes(reinterpret_cast<unsigned char *>(const_cast<char *>(str)), length);
}

void scripting::ScriptCode::operator<<(char(*p)[16]) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_LONG_STRING_VARIABLE);
    if (varIndexCounter >= 28)
        Error("ScriptCode::operator<<(char **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(*p), SCRIPT_RESULT_VAR_STRING);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    varIndexCounter += 4;
}
#else
void scripting::ScriptCode::operator<<(char *str) {
    static char tmpString[8];
    strncpy(tmpString, str, 7);
    tmpString[7] = '\0';
    AddBytes(reinterpret_cast<unsigned char *>(tmpString), 8);
}

void scripting::ScriptCode::operator<<(const char *str) {
    static char tmpString[8];
    strncpy(tmpString, str, 7);
    tmpString[7] = '\0';
    AddBytes(reinterpret_cast<unsigned char *>(const_cast<char *>(tmpString)), 8);
}
#endif

void scripting::ScriptCode::operator<<(float *p) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= SCRIPT_COMMANDS_LVAR_MAX_INDEX)
        Error("ScriptCode::operator<<(float *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_NUMBER);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(int *p) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= SCRIPT_COMMANDS_LVAR_MAX_INDEX)
        Error("ScriptCode::operator<<(int *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_NUMBER);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(unsigned int *p) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= SCRIPT_COMMANDS_LVAR_MAX_INDEX)
        Error("ScriptCode::operator<<(unsigned int *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_NUMBER);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(CPed *n) {
    if (!n)
        operator<<(-1);
    else
        operator<<(CPools::GetPedRef(n));
}

void scripting::ScriptCode::operator<<(CVehicle *n) {
    if (!n)
        operator<<(-1);
    else
        operator<<(CPools::GetVehicleRef(n));
}

void scripting::ScriptCode::operator<<(CObject *n) {
    if (!n)
        operator<<(-1);
    else
        operator<<(CPools::GetObjectRef(n));
}

void scripting::ScriptCode::operator<<(CPed **p) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= SCRIPT_COMMANDS_LVAR_MAX_INDEX)
        Error("ScriptCode::operator<<(CPed **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_PED);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(CVehicle **p) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= SCRIPT_COMMANDS_LVAR_MAX_INDEX)
        Error("ScriptCode::operator<<(CVehicle **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_VEHICLE);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(CObject **p) {
    AddParameterDescription(SCRIPTPARAM_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= SCRIPT_COMMANDS_LVAR_MAX_INDEX)
        Error("ScriptCode::operator<<(CObject **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_OBJECT);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

#endif
