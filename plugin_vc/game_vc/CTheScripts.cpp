/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

unsigned int MAX_SCRIPT_SPACE_SIZE = 260512;

unsigned char *CTheScripts::ScriptSpace = (unsigned char *)0x821280;
int CTheScripts::HighlightImportantArea(int a1, float a2, float a3, float a5, float a6){
     return plugin::CallAndReturn<int, 0x44FE30, int, int, int, int, int, int>(a1, a2, a3, a4, a5, a6);
}
