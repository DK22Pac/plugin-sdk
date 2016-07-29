#include "CTheScripts.h"

// VARIABLES
char* CTheScripts::ScriptSpace = (char*)VAR_CTheScripts__ScriptSpace;

tScriptParam *CTheScripts::ScriptParams = (tScriptParam *)0xA43C78;

CRunningScript *&CTheScripts::pIdleScripts = *(CRunningScript **)0xA8B428;
CRunningScript *&CTheScripts::pActiveScripts = *(CRunningScript **)0xA8B42C;