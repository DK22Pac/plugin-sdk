/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPed.h"
#include "CVehicle.h"
#include "CTrain.h"
#include "CAnimBlendClumpData.h"

class CAnimBlendAssociation;
class CAnimBlendHierarchy;

float FindPlayerHeading();
CVector& FindPlayerCentreOfWorld_NoSniperShift();
CVector& FindPlayerCentreOfWorld(int playerId);
CPlayerPed* FindPlayerPed();
CTrain* FindPlayerTrain();
CEntity* FindPlayerEntity();
CVehicle* FindPlayerVehicle();
CVector& FindPlayerSpeed();
CVector FindPlayerCoors();

RwTexture* GetFirstTexture(RwTexDictionary* texDictionary);
RwObject* GetFirstObject(RwFrame* frame);
RpAtomic* GetFirstAtomic(RpClump* clump);

void SetAmbientColours(RwRGBAReal* colours);
void SetAmbientColoursForPedsCarsAndObjects();
void SetAmbientColours();
void SetFullAmbient();
void ActivateDirectional();
void DeActivateDirectional();
void ReSetAmbientAndDirectionalColours();
void SetBrightMarkerColours(float power);
void SetAmbientAndDirectionalColours(float power);
void RemoveExtraDirectionalLights(RpWorld* world);
void AddAnExtraDirectionalLight(RpWorld* world, float x, float y, float z, float red, float green, float blue);
void WorldReplaceNormalLightsWithScorched(RpWorld* world, float intensity);
RpWorld* LightsDestroy(RpWorld* world);
RpWorld* LightsCreate(RpWorld* world);
void SetLightsWithTimeOfDayColour(RpWorld* world);

RpAtomic* GetCurrentAtomicObjectCB(RwObject* object, void* data);

CAnimBlendClumpData* RpAnimBlendAllocateData(RpClump* clump);
CAnimBlendAssociation* RpAnimBlendClumpAddAssociation(RpClump* clump, CAnimBlendAssociation* association, unsigned int flags, float startTime, float blendAmount);
CAnimBlendAssociation* RpAnimBlendClumpExtractAssociations(RpClump* clump);
void RpAnimBlendClumpFillFrameArray(RpClump* clump, AnimBlendFrameData** frameData);
AnimBlendFrameData* RpAnimBlendClumpFindBone(RpClump* clump, unsigned int id);
AnimBlendFrameData* RpAnimBlendClumpFindFrame(RpClump* clump, char const* name);
AnimBlendFrameData* RpAnimBlendClumpFindFrameFromHashKey(RpClump* clump, unsigned int key);
CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, bool arg1, CAnimBlendHierarchy* hierarchy);
CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, char const* name);
CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, unsigned int animId);
CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump);
CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump, unsigned int flags);
CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, CAnimBlendAssociation** pAssociation, float* blendAmount);
CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation_N(RpClump* clump, int n);
CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump);
CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation_N(RpClump* clump, int n);
unsigned int RpAnimBlendClumpGetNumAssociations(RpClump* clump);
unsigned int RpAnimBlendClumpGetNumNonPartialAssociations(RpClump* clump);
unsigned int RpAnimBlendClumpGetNumPartialAssociations(RpClump* clump);
void RpAnimBlendClumpGiveAssociations(RpClump* clump, CAnimBlendAssociation* association);
void RpAnimBlendClumpInit(RpClump* clump);
bool RpAnimBlendClumpIsInitialized(RpClump* clump);
void RpAnimBlendClumpPauseAllAnimations(RpClump* clump);
void RpAnimBlendClumpRemoveAllAssociations(RpClump* clump);
void RpAnimBlendClumpRemoveAssociations(RpClump* clump, unsigned int flags);
void RpAnimBlendClumpSetBlendDeltas(RpClump* clump, unsigned int flags, float delta);
void RpAnimBlendClumpUnPauseAllAnimations(RpClump* clump);
void RpAnimBlendClumpUpdateAnimations(RpClump* clump, float step, bool onScreen);
RtAnimAnimation* RpAnimBlendCreateAnimationForHierarchy(RpHAnimHierarchy* hierarchy);
char* RpAnimBlendFrameGetName(RwFrame* frame);
void RpAnimBlendFrameSetName(RwFrame* frame, char* name);
CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association);
CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association, unsigned int flags);
void RpAnimBlendKeyFrameInterpolate(void* voidOut, void* voidIn1, void* voidIn2, float time, void* customData);
bool RpAnimBlendPluginAttach();