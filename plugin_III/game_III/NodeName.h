/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

SUPPORTED_10EN_11EN_STEAM extern int &gPluginOffset;

SUPPORTED_10EN_11EN_STEAM void *NodeNameConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM void *NodeNameDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM void *NodeNameCopy(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM RwStream *NodeNameStreamWrite(RwStream *stream, RwInt32 binaryLength, void const *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM RwStream *NodeNameStreamRead(RwStream *stream, RwInt32 binaryLength, void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM RwInt32 NodeNameStreamGetSize(void const *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
SUPPORTED_10EN_11EN_STEAM RwBool NodeNamePluginAttach();
SUPPORTED_10EN_11EN_STEAM char *GetFrameNodeName(RwFrame *frame);

#include "meta/meta.NodeName.h"
