/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "common.h"

// Converted from cdecl float FindPlayerHeading(void) 0x4BBF70;
float FindPlayerHeading() {
    return plugin::CallAndReturn<float, 0x4BBF70>();
}

// Converted from cdecl CVector& FindPlayerCentreOfWorld_NoSniperShift(void) 0x4BC020;
CVector& FindPlayerCentreOfWorld_NoSniperShift() {
    return plugin::CallAndReturn<CVector&, 0x4BC020>();
}

// Converted from cdecl CVector& FindPlayerCentreOfWorld(int playerId) 0x4BC0A0;
CVector& FindPlayerCentreOfWorld(int playerId) {
    return plugin::CallAndReturn<CVector&, 0x4BC0A0, int>(playerId);
}

// Converted from cdecl CPlayerPed* FindPlayerPed(void) 0x4BC120;
CPlayerPed* FindPlayerPed() {
    return plugin::CallAndReturn<CPlayerPed*, 0x4BC120>();
}

// Converted from cdecl CTrain* FindPlayerTrain(void) 0x4BC140;
CTrain* FindPlayerTrain() {
    return plugin::CallAndReturn<CTrain*, 0x4BC140>();
}

// Converted from cdecl CEntity* FindPlayerEntity(void) 0x4BC1B0;
CEntity* FindPlayerEntity() {
    return plugin::CallAndReturn<CEntity*, 0x4BC1B0>();
}

// Converted from cdecl CVehicle* FindPlayerVehicle(void) 0x4BC1E0;
CVehicle* FindPlayerVehicle() {
    return plugin::CallAndReturn<CVehicle*, 0x4BC1E0>();
}

// Converted from cdecl CVector& FindPlayerSpeed(void) 0x4BC210;
CVector& FindPlayerSpeed() {
    return plugin::CallAndReturn<CVector&, 0x4BC210>();
}

// Converted from cdecl CVector& FindPlayerCoors(void) 0x4BC240;
CVector FindPlayerCoors() {
    CVector result;
    plugin::Call<0x4BC240, CVector*>(&result);
    return result;
}

// Converted from cdecl RwTexture* GetFirstTexture(RwTexDictionary *texDictionary) 0x57F900
RwTexture* GetFirstTexture(RwTexDictionary* texDictionary) {
    return plugin::CallAndReturn<RwTexture*, 0x57F900, RwTexDictionary*>(texDictionary);
}

// Converted from cdecl RwObject* GetFirstObject(RwFrame *frame) 0x57F940
RwObject* GetFirstObject(RwFrame* frame) {
    return plugin::CallAndReturn<RwObject*, 0x57F940, RwFrame*>(frame);
}

// Converted from cdecl RpAtomic* GetFirstAtomic(RpClump *clump) 0x57F980
RpAtomic* GetFirstAtomic(RpClump* clump) {
    return plugin::CallAndReturn<RpAtomic*, 0x57F980, RpClump*>(clump);
}

// Converted from cdecl void SetAmbientColours(RwRGBAReal *colours) 0x57FAD0
void SetAmbientColours(RwRGBAReal* colours) {
    plugin::Call<0x57FAD0, RwRGBAReal*>(colours);
}

// Converted from cdecl void SetAmbientColoursForPedsCarsAndObjects(void) 0x57FAF0
void SetAmbientColoursForPedsCarsAndObjects() {
    plugin::Call<0x57FAF0>();
}

// Converted from cdecl void SetAmbientColours(void) 0x57FB10
void SetAmbientColours() {
    plugin::Call<0x57FB10>();
}

// Converted from cdecl void SetFullAmbient(void) 0x57FB30
void SetFullAmbient() {
    plugin::Call<0x57FB30>();
}

// Converted from cdecl void ActivateDirectional(void) 0x57FB50
void ActivateDirectional() {
    plugin::Call<0x57FB50>();
}

// Converted from cdecl void DeActivateDirectional(void) 0x57FB60
void DeActivateDirectional() {
    plugin::Call<0x57FB60>();
}

// Converted from cdecl void ReSetAmbientAndDirectionalColours(void) 0x57FB70
void ReSetAmbientAndDirectionalColours() {
    plugin::Call<0x57FB70>();
}

// Converted from cdecl void SetBrightMarkerColours(float power) 0x57FBA0
void SetBrightMarkerColours(float power) {
    plugin::Call<0x57FBA0, float>(power);
}

// Converted from cdecl void SetAmbientAndDirectionalColours(float power) 0x57FC50
void SetAmbientAndDirectionalColours(float power) {
    plugin::Call<0x57FC50, float>(power);
}

// Converted from cdecl void RemoveExtraDirectionalLights(RpWorld *world) 0x57FCD0
void RemoveExtraDirectionalLights(RpWorld* world) {
    plugin::Call<0x57FCD0, RpWorld*>(world);
}

// Converted from cdecl void AddAnExtraDirectionalLight(RpWorld *world,float x,float y,float z,float red,float green,float blue) 0x57FD00
void AddAnExtraDirectionalLight(RpWorld* world, float x, float y, float z, float red, float green, float blue) {
    plugin::Call<0x57FD00, RpWorld*, float, float, float, float, float, float>(world, x, y, z, red, green, blue);
}

// Converted from cdecl void WorldReplaceNormalLightsWithScorched(RpWorld *world,float intensity) 0x57FE40
void WorldReplaceNormalLightsWithScorched(RpWorld* world, float intensity) {
    plugin::Call<0x57FE40, RpWorld*, float>(world, intensity);
}

// Converted from cdecl RpWorld* LightsDestroy(RpWorld *world) 0x57FE80
RpWorld* LightsDestroy(RpWorld* world) {
    return plugin::CallAndReturn<RpWorld*, 0x57FE80, RpWorld*>(world);
}

// Converted from cdecl RpWorld* LightsCreate(RpWorld *world) 0x57FF50
RpWorld* LightsCreate(RpWorld* world) {
    return plugin::CallAndReturn<RpWorld*, 0x57FF50, RpWorld*>(world);
}

// Converted from cdecl void SetLightsWithTimeOfDayColour(RpWorld *world) 0x5800F0
void SetLightsWithTimeOfDayColour(RpWorld* world) {
    plugin::Call<0x5800F0, RpWorld*>(world);
}

// Converted from cdecl RpAtomic* GetCurrentAtomicObjectCB(RwObject *object, void *data) 0x59F1E0
RpAtomic* GetCurrentAtomicObjectCB(RwObject* object, void* data)
{
    return ((RpAtomic* (__cdecl *)(RwObject*, void*))0x59F1E0)(object, data);
}

CAnimBlendClumpData* RpAnimBlendAllocateData(RpClump* clump) {
    return plugin::CallAndReturn<CAnimBlendClumpData*, 0x407520, RpClump*>(clump);
}

void RpAnimBlendClumpFillFrameArray(RpClump* clump, AnimBlendFrameData** frameData) {
    plugin::Call<0x407AC0, RpClump*, AnimBlendFrameData**>(clump, frameData);
}

CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, unsigned int animId) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x407780, RpClump*, unsigned int>(clump, animId);
}

CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x402E20, RpClump*>(clump);
}

CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump, unsigned int flags) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4075F0, RpClump*, unsigned int>(clump, flags);
}

CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, int n) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x407660, RpClump*, int>(clump, n);
}

CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump, int n) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x407620, RpClump*, int>(clump, n);
}

void RpAnimBlendClumpInit(RpClump* clump) {
    plugin::Call<0x407890, RpClump*>(clump);
}

bool RpAnimBlendClumpIsInitialized(RpClump* clump) {
    return plugin::CallAndReturn<bool, 0x407870, RpClump*>(clump);
}

void RpAnimBlendClumpRemoveAllAssociations(RpClump* clump) {
    plugin::Call<0x407800, RpClump*>(clump);
}

void RpAnimBlendClumpRemoveAssociations(RpClump* clump, unsigned int flags) {
    plugin::Call<0x4077B0, RpClump*, unsigned int>(clump, flags);
}

void RpAnimBlendClumpSetBlendDeltas(RpClump* clump, unsigned int flags, float delta) {
    plugin::Call<0x407830, RpClump*, unsigned int, float>(clump, flags, delta);
}

void RpAnimBlendClumpUpdateAnimations(RpClump* clump, float step, bool onScreen) {
    plugin::Call<0x404690, RpClump*, float, bool>(clump, step, onScreen);
}

CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association) {
    return plugin::CallAndReturn<CAnimBlendAssociation*, 0x4075D0, CAnimBlendAssociation*>(association);
}

bool RpAnimBlendPluginAttach() {
    return plugin::CallAndReturn<bool, 0x4074D0>();
}