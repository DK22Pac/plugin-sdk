/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "NodeName.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &gPluginOffset = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x64C610, 0x64C610, 0x65C610));

int addrof(NodeNameConstructor) = ADDRESS_BY_VERSION(0x527010, 0x527250, 0x5271E0);
int gaddrof(NodeNameConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x527010, 0x527250, 0x5271E0);

void *NodeNameConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(NodeNameConstructor), object, offsetInObject, sizeInObject);
}

int addrof(NodeNameDestructor) = ADDRESS_BY_VERSION(0x527030, 0x527270, 0x527200);
int gaddrof(NodeNameDestructor) = GLOBAL_ADDRESS_BY_VERSION(0x527030, 0x527270, 0x527200);

void *NodeNameDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(NodeNameDestructor), object, offsetInObject, sizeInObject);
}

int addrof(NodeNameCopy) = ADDRESS_BY_VERSION(0x527040, 0x527280, 0x527210);
int gaddrof(NodeNameCopy) = GLOBAL_ADDRESS_BY_VERSION(0x527040, 0x527280, 0x527210);

void *NodeNameCopy(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, void const *, RwInt32, RwInt32>(gaddrof(NodeNameCopy), dstObject, srcObject, offsetInObject, sizeInObject);
}

int addrof(NodeNameStreamWrite) = ADDRESS_BY_VERSION(0x527070, 0x5272B0, 0x527240);
int gaddrof(NodeNameStreamWrite) = GLOBAL_ADDRESS_BY_VERSION(0x527070, 0x5272B0, 0x527240);

RwStream *NodeNameStreamWrite(RwStream *stream, RwInt32 binaryLength, void const *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<RwStream *, RwStream *, RwInt32, void const *, RwInt32, RwInt32>(gaddrof(NodeNameStreamWrite), stream, binaryLength, object, offsetInObject, sizeInObject);
}

int addrof(NodeNameStreamRead) = ADDRESS_BY_VERSION(0x5270A0, 0x5272E0, 0x527270);
int gaddrof(NodeNameStreamRead) = GLOBAL_ADDRESS_BY_VERSION(0x5270A0, 0x5272E0, 0x527270);

RwStream *NodeNameStreamRead(RwStream *stream, RwInt32 binaryLength, void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<RwStream *, RwStream *, RwInt32, void *, RwInt32, RwInt32>(gaddrof(NodeNameStreamRead), stream, binaryLength, object, offsetInObject, sizeInObject);
}

int addrof(NodeNameStreamGetSize) = ADDRESS_BY_VERSION(0x5270D0, 0x527310, 0x5272A0);
int gaddrof(NodeNameStreamGetSize) = GLOBAL_ADDRESS_BY_VERSION(0x5270D0, 0x527310, 0x5272A0);

RwInt32 NodeNameStreamGetSize(void const *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<RwInt32, void const *, RwInt32, RwInt32>(gaddrof(NodeNameStreamGetSize), object, offsetInObject, sizeInObject);
}

int addrof(NodeNamePluginAttach) = ADDRESS_BY_VERSION(0x527100, 0x527340, 0x5272D0);
int gaddrof(NodeNamePluginAttach) = GLOBAL_ADDRESS_BY_VERSION(0x527100, 0x527340, 0x5272D0);

RwBool NodeNamePluginAttach() {
    return plugin::CallAndReturnDynGlobal<RwBool>(gaddrof(NodeNamePluginAttach));
}

int addrof(GetFrameNodeName) = ADDRESS_BY_VERSION(0x527150, 0x527390, 0x527320);
int gaddrof(GetFrameNodeName) = GLOBAL_ADDRESS_BY_VERSION(0x527150, 0x527390, 0x527320);

char *GetFrameNodeName(RwFrame *frame) {
    return plugin::CallAndReturnDynGlobal<char *, RwFrame *>(gaddrof(GetFrameNodeName), frame);
}
