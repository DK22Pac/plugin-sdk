/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "NodeName.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &gPluginOffset = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x77F470, 0x77F470, 0x77E470));

int addrof(GetFrameNodeName) = ADDRESS_BY_VERSION(0x580600, 0x580620, 0x580430);
int gaddrof(GetFrameNodeName) = GLOBAL_ADDRESS_BY_VERSION(0x580600, 0x580620, 0x580430);

char *GetFrameNodeName(RwFrame *frame) {
    return plugin::CallAndReturnDynGlobal<char *, RwFrame *>(gaddrof(GetFrameNodeName), frame);
}

int addrof(NodeNamePluginAttach) = ADDRESS_BY_VERSION(0x580620, 0x580640, 0x580450);
int gaddrof(NodeNamePluginAttach) = GLOBAL_ADDRESS_BY_VERSION(0x580620, 0x580640, 0x580450);

RwBool NodeNamePluginAttach() {
    return plugin::CallAndReturnDynGlobal<RwBool>(gaddrof(NodeNamePluginAttach));
}

int addrof(NodeNameStreamGetSize) = ADDRESS_BY_VERSION(0x580670, 0x580690, 0x5804A0);
int gaddrof(NodeNameStreamGetSize) = GLOBAL_ADDRESS_BY_VERSION(0x580670, 0x580690, 0x5804A0);

RwInt32 NodeNameStreamGetSize(void const *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<RwInt32, void const *, RwInt32, RwInt32>(gaddrof(NodeNameStreamGetSize), object, offsetInObject, sizeInObject);
}

int addrof(NodeNameStreamRead) = ADDRESS_BY_VERSION(0x5806A0, 0x5806C0, 0x5804D0);
int gaddrof(NodeNameStreamRead) = GLOBAL_ADDRESS_BY_VERSION(0x5806A0, 0x5806C0, 0x5804D0);

RwStream *NodeNameStreamRead(RwStream *stream, RwInt32 binaryLength, void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<RwStream *, RwStream *, RwInt32, void *, RwInt32, RwInt32>(gaddrof(NodeNameStreamRead), stream, binaryLength, object, offsetInObject, sizeInObject);
}

int addrof(NodeNameStreamWrite) = ADDRESS_BY_VERSION(0x5806D0, 0x5806F0, 0x580500);
int gaddrof(NodeNameStreamWrite) = GLOBAL_ADDRESS_BY_VERSION(0x5806D0, 0x5806F0, 0x580500);

RwStream *NodeNameStreamWrite(RwStream *stream, RwInt32 binaryLength, void const *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<RwStream *, RwStream *, RwInt32, void const *, RwInt32, RwInt32>(gaddrof(NodeNameStreamWrite), stream, binaryLength, object, offsetInObject, sizeInObject);
}

int addrof(NodeNameCopy) = ADDRESS_BY_VERSION(0x580700, 0x580720, 0x580530);
int gaddrof(NodeNameCopy) = GLOBAL_ADDRESS_BY_VERSION(0x580700, 0x580720, 0x580530);

void *NodeNameCopy(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, void const *, RwInt32, RwInt32>(gaddrof(NodeNameCopy), dstObject, srcObject, offsetInObject, sizeInObject);
}

int addrof(NodeNameDestructor) = ADDRESS_BY_VERSION(0x580730, 0x580750, 0x580560);
int gaddrof(NodeNameDestructor) = GLOBAL_ADDRESS_BY_VERSION(0x580730, 0x580750, 0x580560);

void *NodeNameDestructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(NodeNameDestructor), object, offsetInObject, sizeInObject);
}

int addrof(NodeNameConstructor) = ADDRESS_BY_VERSION(0x580740, 0x580760, 0x580570);
int gaddrof(NodeNameConstructor) = GLOBAL_ADDRESS_BY_VERSION(0x580740, 0x580760, 0x580570);

void *NodeNameConstructor(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(NodeNameConstructor), object, offsetInObject, sizeInObject);
}
