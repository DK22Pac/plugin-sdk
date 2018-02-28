/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "NodeName.h"

// Converted from cdecl char* GetFrameNodeName(RwFrame *frame) 0x580600
char* GetFrameNodeName(RwFrame* frame) {
    return ((char* (__cdecl *)(RwFrame*))0x580600)(frame);
}

// Converted from cdecl char* GetNodeNameFromNodeId(int index) 0x405E70
const char* GetNodeNameFromNodeId(int index) {
    return ((const char* (__cdecl *)(int))0x405E70)(index);
}

// Converted from cdecl bool NodeNamePluginAttach(void) 0x580620
bool NodeNamePluginAttach() {
    return ((bool(__cdecl *)())0x580620)();
}

// Converted from cdecl int NodeNameStreamGetSize(int) 0x580670
int NodeNameStreamGetSize(int arg0) {
    return ((int (__cdecl *)(int))0x580670)(arg0);
}

// Converted from cdecl RwStream* NodeNameStreamRead(RwStream *stream, int length, int object) 0x5806A0
RwStream* NodeNameStreamRead(RwStream* stream, int length, int object) {
    return ((RwStream*(__cdecl *)(RwStream*, int, int))0x5806A0)(stream, length, object);
}

// Converted from cdecl RwStream* NodeNameStreamWrite(RwStream *stream, int length, int object) 0x5806D0
RwStream* NodeNameStreamWrite(RwStream* stream, int length, int object) {
    return ((RwStream*(__cdecl *)(RwStream*, int, int))0x5806D0)(stream, length, object);
}