/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "RenderWare.h"

char* GetFrameNodeName(RwFrame* frame);
const char* GetNodeNameFromNodeId(int index);
bool NodeNamePluginAttach();
int NodeNameStreamGetSize(int arg0);
RwStream* NodeNameStreamRead(RwStream* stream, int length, int object);
RwStream* NodeNameStreamWrite(RwStream* stream, int length, int object);