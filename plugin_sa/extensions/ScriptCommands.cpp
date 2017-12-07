/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "ScriptCommands.h"
#include "..\shared\Error.h"
#include "game_sa\CPools.h"

using namespace plugin;

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

void scripting::ScriptCode::SaveResultVariables(CRunningScript *script) {
    for (auto &varToSet : varsToSet) {
        if (varToSet.varType == SCRIPT_RESULT_VAR_NUMBER) {
            *reinterpret_cast<unsigned int *>(varToSet.pVar) = script->m_aLocalVars[varToSet.varIndex].uParam;
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_STRING) {
            char *pStr = reinterpret_cast<char *>(varToSet.pVar);
            strncpy(pStr, reinterpret_cast<char *>(&script->m_aLocalVars[varToSet.varIndex].iParam), 15);
            pStr[15] = '\0';
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_PED) {
            CPed *result = nullptr;
            if (script->m_aLocalVars[varToSet.varIndex].iParam != -1)
                result = CPools::GetPed(script->m_aLocalVars[varToSet.varIndex].iParam);
            *reinterpret_cast<CPed **>(varToSet.pVar) = result;
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_VEHICLE) {
            CVehicle *result = nullptr;
            if (script->m_aLocalVars[varToSet.varIndex].iParam != -1)
                result = CPools::GetVehicle(script->m_aLocalVars[varToSet.varIndex].iParam);
            *reinterpret_cast<CVehicle **>(varToSet.pVar) = result;
        }
        else if (varToSet.varType == SCRIPT_RESULT_VAR_OBJECT) {
            CObject *result = nullptr;
            if (script->m_aLocalVars[varToSet.varIndex].iParam != -1)
                result = CPools::GetObject(script->m_aLocalVars[varToSet.varIndex].iParam);
            *reinterpret_cast<CObject **>(varToSet.pVar) = result;
        }
    }
}

void scripting::ScriptCode::operator<<(char n) { AddParameterDescription(SCRIPTARG_STATIC_INT_8BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 1); }
void scripting::ScriptCode::operator<<(unsigned char n) { AddParameterDescription(SCRIPTARG_STATIC_INT_8BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 1); }
void scripting::ScriptCode::operator<<(short n) { AddParameterDescription(SCRIPTARG_STATIC_INT_16BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 2); }
void scripting::ScriptCode::operator<<(unsigned short n) { AddParameterDescription(SCRIPTARG_STATIC_INT_16BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 2); }
void scripting::ScriptCode::operator<<(int n) { AddParameterDescription(SCRIPTARG_STATIC_INT_32BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void scripting::ScriptCode::operator<<(unsigned int n) { AddParameterDescription(SCRIPTARG_STATIC_INT_32BITS); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void scripting::ScriptCode::operator<<(float n) { AddParameterDescription(SCRIPTARG_STATIC_FLOAT); AddBytes(reinterpret_cast<unsigned char *>(&n), 4); }
void scripting::ScriptCode::operator<<(double n) { AddParameterDescription(SCRIPTARG_STATIC_FLOAT); float f = static_cast<float>(n); AddBytes(reinterpret_cast<unsigned char *>(&f), 4); }
void scripting::ScriptCode::operator<<(ScriptCommandEndParameter) { AddParameterDescription(SCRIPTARG_END_OF_ARGUMENTS); }

void scripting::ScriptCode::operator<<(char *str) {
    AddParameterDescription(SCRIPTARG_STATIC_PASCAL_STRING);
    unsigned int length = strlen(str);
    AddParameterDescription(length);
    AddBytes(reinterpret_cast<unsigned char *>(str), length);
}

void scripting::ScriptCode::operator<<(const char *str) {
    AddParameterDescription(SCRIPTARG_STATIC_PASCAL_STRING);
    unsigned int length = strlen(str);
    AddParameterDescription(length);
    AddBytes(reinterpret_cast<unsigned char *>(const_cast<char *>(str)), length);
}

void scripting::ScriptCode::operator<<(float *p) {
    AddParameterDescription(SCRIPTARG_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= 31)
        Error("ScriptCode::operator<<(float *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_NUMBER);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(int *p) {
    AddParameterDescription(SCRIPTARG_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= 31)
        Error("ScriptCode::operator<<(int *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_NUMBER);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(unsigned int *p) {
    AddParameterDescription(SCRIPTARG_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= 31)
        Error("ScriptCode::operator<<(unsigned int *p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_NUMBER);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(char(*p)[16]) {
    AddParameterDescription(SCRIPTARG_LOCAL_LONG_STRING_VARIABLE);
    if (varIndexCounter >= 28)
        Error("ScriptCode::operator<<(char **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(*p), SCRIPT_RESULT_VAR_STRING);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    varIndexCounter += 4;
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
    AddParameterDescription(SCRIPTARG_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= 31)
        Error("ScriptCode::operator<<(CPed **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_PED);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(CVehicle **p) {
    AddParameterDescription(SCRIPTARG_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= 31)
        Error("ScriptCode::operator<<(CVehicle **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_VEHICLE);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}

void scripting::ScriptCode::operator<<(CObject **p) {
    AddParameterDescription(SCRIPTARG_LOCAL_NUMBER_VARIABLE);
    if (varIndexCounter >= 31)
        Error("ScriptCode::operator<<(CObject **p): reached local var limit");
    varsToSet.emplace_back(varIndexCounter, reinterpret_cast<void *>(p), SCRIPT_RESULT_VAR_OBJECT);
    AddBytes(reinterpret_cast<unsigned char *>(&varIndexCounter), 2);
    ++varIndexCounter;
}
