/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "NodeName.h"

// Converted from cdecl char* GetFrameNodeName(RwFrame *frame) 0x527150
char* GetFrameNodeName(RwFrame* frame) {
    return ((char* (__cdecl *)(RwFrame*))0x527150)(frame);
}

// Converted from cdecl bool NodeNamePluginAttach(void) 0x527100
bool NodeNamePluginAttach() {
    return ((bool(__cdecl *)())0x527100)();
}

// Converted from cdecl int NodeNameStreamGetSize(int) 0x5270D0
int NodeNameStreamGetSize(int arg0) {
    return ((int (__cdecl *)(int))0x5270D0)(arg0);
}

// Converted from cdecl RwStream* NodeNameStreamRead(RwStream *stream, int length, int object) 0x5270A0
RwStream* NodeNameStreamRead(RwStream* stream, int length, int object) {
    return ((RwStream*(__cdecl *)(RwStream*, int, int))0x5270A0)(stream, length, object);
}

// Converted from cdecl RwStream* NodeNameStreamWrite(RwStream *stream, int length, int object) 0x527070
RwStream* NodeNameStreamWrite(RwStream* stream, int length, int object) {
    return ((RwStream*(__cdecl *)(RwStream*, int, int))0x527070)(stream, length, object);
}