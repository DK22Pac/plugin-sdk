/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSpecialPlateHandler.h"

// Converted from thiscall void CSpecialPlateHandler::Init(void) 0x6F2D10
void CSpecialPlateHandler::Init() {
    plugin::CallMethod<0x6F2D10, CSpecialPlateHandler *>(this);
}

// Converted from thiscall int CSpecialPlateHandler::Find(int carGenId,char *outText) 0x6F2D30
int CSpecialPlateHandler::Find(int carGenId, char* outText) {
    return plugin::CallMethodAndReturn<int, 0x6F2D30, CSpecialPlateHandler *, int, char*>(this, carGenId, outText);
}

// Converted from thiscall void CSpecialPlateHandler::Add(int carGenId,char *plateText) 0x6F2D90
void CSpecialPlateHandler::Add(int carGenId, char* plateText) {
    plugin::CallMethod<0x6F2D90, CSpecialPlateHandler *, int, char*>(this, carGenId, plateText);
}

// Converted from thiscall void CSpecialPlateHandler::Remove(int plateTextId) 0x6F2DD0
void CSpecialPlateHandler::Remove(int plateTextId) {
    plugin::CallMethod<0x6F2DD0, CSpecialPlateHandler *, int>(this, plateTextId);
}