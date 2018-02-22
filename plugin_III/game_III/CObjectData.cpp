/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CObjectData.h"

// Converted from cdecl void CObjectData::Initialise(char *filename) 0x4BC0E0
void CObjectData::Initialise(char* filename) {
    plugin::Call<0x4BC0E0, char*>(filename);
}

// Converted from cdecl void CObjectData::SetObjectData(int modelIndex,CObject &object) 0x4BC270
void CObjectData::SetObjectData(int modelIndex, CObject& object) {
    plugin::Call<0x4BC270, int, CObject&>(modelIndex, object);
}
