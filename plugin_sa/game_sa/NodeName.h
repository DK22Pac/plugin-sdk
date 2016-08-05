#pragma once
#include "RenderWare.h"

bool NodeNamePluginAttach();
void SetFrameNodeName(RwFrame* frame, char const* name);
char* GetFrameNodeName(RwFrame* frame);