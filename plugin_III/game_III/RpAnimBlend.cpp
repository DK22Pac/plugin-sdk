/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "RpAnimBlend.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CAnimBlendClumpData *&gpAnimBlendClump = *reinterpret_cast<CAnimBlendClumpData **>(GLOBAL_ADDRESS_BY_VERSION(0x621000, 0x621000, 0x631000));
PLUGIN_VARIABLE AnimBlendFrameData *&pFrameDataFound = *reinterpret_cast<AnimBlendFrameData **>(GLOBAL_ADDRESS_BY_VERSION(0x621028, 0x621028, 0x631028));
PLUGIN_VARIABLE RwInt32 &ClumpOffset = *reinterpret_cast<RwInt32 *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B84, 0x8F1C38, 0x901D78));

int addrof(RpAnimBlendClumpUpdateAnimations) = ADDRESS_BY_VERSION(0x4024B0, 0x4024B0, 0x4024B0);
int gaddrof(RpAnimBlendClumpUpdateAnimations) = GLOBAL_ADDRESS_BY_VERSION(0x4024B0, 0x4024B0, 0x4024B0);

void RpAnimBlendClumpUpdateAnimations(RpClump *clump, float timeDelta) {
    plugin::CallDynGlobal<RpClump *, float>(gaddrof(RpAnimBlendClumpUpdateAnimations), clump, timeDelta);
}

int addrof(FrameUpdateCallBack) = ADDRESS_BY_VERSION(0x4025F0, 0x4025F0, 0x4025F0);
int gaddrof(FrameUpdateCallBack) = GLOBAL_ADDRESS_BY_VERSION(0x4025F0, 0x4025F0, 0x4025F0);

void FrameUpdateCallBack(AnimBlendFrameData *frames, void *data) {
    plugin::CallDynGlobal<AnimBlendFrameData *, void *>(gaddrof(FrameUpdateCallBack), frames, data);
}

int addrof(FrameUpdateCallBackWithVelocityExtraction) = ADDRESS_BY_VERSION(0x4028B0, 0x4028B0, 0x4028B0);
int gaddrof(FrameUpdateCallBackWithVelocityExtraction) = GLOBAL_ADDRESS_BY_VERSION(0x4028B0, 0x4028B0, 0x4028B0);

void FrameUpdateCallBackWithVelocityExtraction(AnimBlendFrameData *frames, void *data) {
    plugin::CallDynGlobal<AnimBlendFrameData *, void *>(gaddrof(FrameUpdateCallBackWithVelocityExtraction), frames, data);
}

int addrof(FrameUpdateCallBackWith3dVelocityExtraction) = ADDRESS_BY_VERSION(0x402D40, 0x402D40, 0x402D40);
int gaddrof(FrameUpdateCallBackWith3dVelocityExtraction) = GLOBAL_ADDRESS_BY_VERSION(0x402D40, 0x402D40, 0x402D40);

void FrameUpdateCallBackWith3dVelocityExtraction(AnimBlendFrameData *frames, void *data) {
    plugin::CallDynGlobal<AnimBlendFrameData *, void *>(gaddrof(FrameUpdateCallBackWith3dVelocityExtraction), frames, data);
}

int addrof_o(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *)) = ADDRESS_BY_VERSION(0x4031B0, 0x4031B0, 0x4031B0);
int gaddrof_o(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *)) = GLOBAL_ADDRESS_BY_VERSION(0x4031B0, 0x4031B0, 0x4031B0);

CAnimBlendAssociation *RpAnimBlendClumpGetFirstAssociation(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *>(gaddrof_o(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *)), clump);
}

int addrof(AnimBlendClumpDestroy) = ADDRESS_BY_VERSION(0x405240, 0x405240, 0x405240);
int gaddrof(AnimBlendClumpDestroy) = GLOBAL_ADDRESS_BY_VERSION(0x405240, 0x405240, 0x405240);

void *AnimBlendClumpDestroy(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(AnimBlendClumpDestroy), object, offsetInObject, sizeInObject);
}

int addrof(AnimBlendClumpCreate) = ADDRESS_BY_VERSION(0x405280, 0x405280, 0x405280);
int gaddrof(AnimBlendClumpCreate) = GLOBAL_ADDRESS_BY_VERSION(0x405280, 0x405280, 0x405280);

void *AnimBlendClumpCreate(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, RwInt32, RwInt32>(gaddrof(AnimBlendClumpCreate), object, offsetInObject, sizeInObject);
}

int addrof(RpAnimBlendAllocateData) = ADDRESS_BY_VERSION(0x4052A0, 0x4052A0, 0x4052A0);
int gaddrof(RpAnimBlendAllocateData) = GLOBAL_ADDRESS_BY_VERSION(0x4052A0, 0x4052A0, 0x4052A0);

void RpAnimBlendAllocateData(RpClump *clump) {
    plugin::CallDynGlobal<RpClump *>(gaddrof(RpAnimBlendAllocateData), clump);
}

int addrof(AnimBlendClumpCopy) = ADDRESS_BY_VERSION(0x4052C0, 0x4052C0, 0x4052C0);
int gaddrof(AnimBlendClumpCopy) = GLOBAL_ADDRESS_BY_VERSION(0x4052C0, 0x4052C0, 0x4052C0);

void *AnimBlendClumpCopy(void *dstObject, void const *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject) {
    return plugin::CallAndReturnDynGlobal<void *, void *, void const *, RwInt32, RwInt32>(gaddrof(AnimBlendClumpCopy), dstObject, srcObject, offsetInObject, sizeInObject);
}

int addrof(RpAnimBlendPluginAttach) = ADDRESS_BY_VERSION(0x4052D0, 0x4052D0, 0x4052D0);
int gaddrof(RpAnimBlendPluginAttach) = GLOBAL_ADDRESS_BY_VERSION(0x4052D0, 0x4052D0, 0x4052D0);

RwBool RpAnimBlendPluginAttach() {
    return plugin::CallAndReturnDynGlobal<RwBool>(gaddrof(RpAnimBlendPluginAttach));
}

int addrof(FrameForAllChildrenCountCBnonskin) = ADDRESS_BY_VERSION(0x405310, 0x405310, 0x405310);
int gaddrof(FrameForAllChildrenCountCBnonskin) = GLOBAL_ADDRESS_BY_VERSION(0x405310, 0x405310, 0x405310);

RwFrame *FrameForAllChildrenCountCBnonskin(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(FrameForAllChildrenCountCBnonskin), frame, data);
}

int addrof(FrameForAllChildrenFillFrameArrayCBnonskin) = ADDRESS_BY_VERSION(0x405330, 0x405330, 0x405330);
int gaddrof(FrameForAllChildrenFillFrameArrayCBnonskin) = GLOBAL_ADDRESS_BY_VERSION(0x405330, 0x405330, 0x405330);

RwFrame *FrameForAllChildrenFillFrameArrayCBnonskin(RwFrame *frame, void *data) {
    return plugin::CallAndReturnDynGlobal<RwFrame *, RwFrame *, void *>(gaddrof(FrameForAllChildrenFillFrameArrayCBnonskin), frame, data);
}

int addrof(FrameInitCBnonskin) = ADDRESS_BY_VERSION(0x405360, 0x405360, 0x405360);
int gaddrof(FrameInitCBnonskin) = GLOBAL_ADDRESS_BY_VERSION(0x405360, 0x405360, 0x405360);

void FrameInitCBnonskin(AnimBlendFrameData *frames, void *data) {
    plugin::CallDynGlobal<AnimBlendFrameData *, void *>(gaddrof(FrameInitCBnonskin), frames, data);
}

int addrof(FrameFindByNameCBnonskin) = ADDRESS_BY_VERSION(0x405380, 0x405380, 0x405380);
int gaddrof(FrameFindByNameCBnonskin) = GLOBAL_ADDRESS_BY_VERSION(0x405380, 0x405380, 0x405380);

void FrameFindByNameCBnonskin(AnimBlendFrameData *frames, void *data) {
    plugin::CallDynGlobal<AnimBlendFrameData *, void *>(gaddrof(FrameFindByNameCBnonskin), frames, data);
}

int addrof(FillFrameArrayCBnonskin) = ADDRESS_BY_VERSION(0x405410, 0x405410, 0x405410);
int gaddrof(FillFrameArrayCBnonskin) = GLOBAL_ADDRESS_BY_VERSION(0x405410, 0x405410, 0x405410);

void FillFrameArrayCBnonskin(AnimBlendFrameData *frames, void *data) {
    plugin::CallDynGlobal<AnimBlendFrameData *, void *>(gaddrof(FillFrameArrayCBnonskin), frames, data);
}

int addrof(RpAnimBlendClumpFindFrame) = ADDRESS_BY_VERSION(0x405430, 0x405430, 0x405430);
int gaddrof(RpAnimBlendClumpFindFrame) = GLOBAL_ADDRESS_BY_VERSION(0x405430, 0x405430, 0x405430);

AnimBlendFrameData *RpAnimBlendClumpFindFrame(RpClump *clump, char const *name) {
    return plugin::CallAndReturnDynGlobal<AnimBlendFrameData *, RpClump *, char const *>(gaddrof(RpAnimBlendClumpFindFrame), clump, name);
}

int addrof(RpAnimBlendClumpFillFrameArray) = ADDRESS_BY_VERSION(0x405460, 0x405460, 0x405460);
int gaddrof(RpAnimBlendClumpFillFrameArray) = GLOBAL_ADDRESS_BY_VERSION(0x405460, 0x405460, 0x405460);

void RpAnimBlendClumpFillFrameArray(RpClump *clump, AnimBlendFrameData **frames) {
    plugin::CallDynGlobal<RpClump *, AnimBlendFrameData **>(gaddrof(RpAnimBlendClumpFillFrameArray), clump, frames);
}

int addrof(RpAnimBlendClumpInit) = ADDRESS_BY_VERSION(0x405480, 0x405480, 0x405480);
int gaddrof(RpAnimBlendClumpInit) = GLOBAL_ADDRESS_BY_VERSION(0x405480, 0x405480, 0x405480);

void RpAnimBlendClumpInit(RpClump *clump) {
    plugin::CallDynGlobal<RpClump *>(gaddrof(RpAnimBlendClumpInit), clump);
}

int addrof(RpAnimBlendClumpIsInitialized) = ADDRESS_BY_VERSION(0x405500, 0x405500, 0x405500);
int gaddrof(RpAnimBlendClumpIsInitialized) = GLOBAL_ADDRESS_BY_VERSION(0x405500, 0x405500, 0x405500);

bool RpAnimBlendClumpIsInitialized(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<bool, RpClump *>(gaddrof(RpAnimBlendClumpIsInitialized), clump);
}

int addrof(RpAnimBlendClumpSetBlendDeltas) = ADDRESS_BY_VERSION(0x405520, 0x405520, 0x405520);
int gaddrof(RpAnimBlendClumpSetBlendDeltas) = GLOBAL_ADDRESS_BY_VERSION(0x405520, 0x405520, 0x405520);

void RpAnimBlendClumpSetBlendDeltas(RpClump *clump, unsigned int mask, float delta) {
    plugin::CallDynGlobal<RpClump *, unsigned int, float>(gaddrof(RpAnimBlendClumpSetBlendDeltas), clump, mask, delta);
}

int addrof(RpAnimBlendClumpRemoveAllAssociations) = ADDRESS_BY_VERSION(0x405560, 0x405560, 0x405560);
int gaddrof(RpAnimBlendClumpRemoveAllAssociations) = GLOBAL_ADDRESS_BY_VERSION(0x405560, 0x405560, 0x405560);

void RpAnimBlendClumpRemoveAllAssociations(RpClump *clump) {
    plugin::CallDynGlobal<RpClump *>(gaddrof(RpAnimBlendClumpRemoveAllAssociations), clump);
}

int addrof(RpAnimBlendClumpRemoveAssociations) = ADDRESS_BY_VERSION(0x405570, 0x405570, 0x405570);
int gaddrof(RpAnimBlendClumpRemoveAssociations) = GLOBAL_ADDRESS_BY_VERSION(0x405570, 0x405570, 0x405570);

void RpAnimBlendClumpRemoveAssociations(RpClump *clump, unsigned int mask) {
    plugin::CallDynGlobal<RpClump *, unsigned int>(gaddrof(RpAnimBlendClumpRemoveAssociations), clump, mask);
}

int addrof(RpAnimBlendClumpGetAssociation) = ADDRESS_BY_VERSION(0x4055C0, 0x4055C0, 0x4055C0);
int gaddrof(RpAnimBlendClumpGetAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4055C0, 0x4055C0, 0x4055C0);

CAnimBlendAssociation *RpAnimBlendClumpGetAssociation(RpClump *clump, unsigned int id) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, unsigned int>(gaddrof(RpAnimBlendClumpGetAssociation), clump, id);
}

int addrof(RpAnimBlendClumpGetMainAssociation) = ADDRESS_BY_VERSION(0x4055F0, 0x4055F0, 0x4055F0);
int gaddrof(RpAnimBlendClumpGetMainAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x4055F0, 0x4055F0, 0x4055F0);

CAnimBlendAssociation *RpAnimBlendClumpGetMainAssociation(RpClump *clump, CAnimBlendAssociation **assocRet, float *blendRet) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, CAnimBlendAssociation **, float *>(gaddrof(RpAnimBlendClumpGetMainAssociation), clump, assocRet, blendRet);
}

int addrof(RpAnimBlendClumpGetMainPartialAssociation) = ADDRESS_BY_VERSION(0x405680, 0x405680, 0x405680);
int gaddrof(RpAnimBlendClumpGetMainPartialAssociation) = GLOBAL_ADDRESS_BY_VERSION(0x405680, 0x405680, 0x405680);

CAnimBlendAssociation *RpAnimBlendClumpGetMainPartialAssociation(RpClump *clump) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *>(gaddrof(RpAnimBlendClumpGetMainPartialAssociation), clump);
}

int addrof(RpAnimBlendClumpGetMainAssociation_N) = ADDRESS_BY_VERSION(0x4056D0, 0x4056D0, 0x4056D0);
int gaddrof(RpAnimBlendClumpGetMainAssociation_N) = GLOBAL_ADDRESS_BY_VERSION(0x4056D0, 0x4056D0, 0x4056D0);

CAnimBlendAssociation *RpAnimBlendClumpGetMainAssociation_N(RpClump *clump, int n) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, int>(gaddrof(RpAnimBlendClumpGetMainAssociation_N), clump, n);
}

int addrof(RpAnimBlendClumpGetMainPartialAssociation_N) = ADDRESS_BY_VERSION(0x405710, 0x405710, 0x405710);
int gaddrof(RpAnimBlendClumpGetMainPartialAssociation_N) = GLOBAL_ADDRESS_BY_VERSION(0x405710, 0x405710, 0x405710);

CAnimBlendAssociation *RpAnimBlendClumpGetMainPartialAssociation_N(RpClump *clump, int n) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, int>(gaddrof(RpAnimBlendClumpGetMainPartialAssociation_N), clump, n);
}

int addrof_o(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *, unsigned int)) = ADDRESS_BY_VERSION(0x405750, 0x405750, 0x405750);
int gaddrof_o(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x405750, 0x405750, 0x405750);

CAnimBlendAssociation *RpAnimBlendClumpGetFirstAssociation(RpClump *clump, unsigned int mask) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, RpClump *, unsigned int>(gaddrof_o(RpAnimBlendClumpGetFirstAssociation, CAnimBlendAssociation *(*)(RpClump *, unsigned int)), clump, mask);
}

int addrof_o(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *)) = ADDRESS_BY_VERSION(0x405780, 0x405780, 0x405780);
int gaddrof_o(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *)) = GLOBAL_ADDRESS_BY_VERSION(0x405780, 0x405780, 0x405780);

CAnimBlendAssociation *RpAnimBlendGetNextAssociation(CAnimBlendAssociation *assoc) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation *>(gaddrof_o(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *)), assoc);
}

int addrof_o(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *, unsigned int)) = ADDRESS_BY_VERSION(0x4057A0, 0x4057A0, 0x4057A0);
int gaddrof_o(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x4057A0, 0x4057A0, 0x4057A0);

CAnimBlendAssociation *RpAnimBlendGetNextAssociation(CAnimBlendAssociation *assoc, unsigned int mask) {
    return plugin::CallAndReturnDynGlobal<CAnimBlendAssociation *, CAnimBlendAssociation *, unsigned int>(gaddrof_o(RpAnimBlendGetNextAssociation, CAnimBlendAssociation *(*)(CAnimBlendAssociation *, unsigned int)), assoc, mask);
}
