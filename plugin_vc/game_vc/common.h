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
#include "CPlayerPed.h"

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
void RpAnimBlendClumpFillFrameArray(RpClump* clump, AnimBlendFrameData** frameData);
CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, unsigned int animId);
CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump);
CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump, unsigned int flags);
CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, int n);
CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump, int n);
void RpAnimBlendClumpInit(RpClump* clump);
bool RpAnimBlendClumpIsInitialized(RpClump* clump);
void RpAnimBlendClumpRemoveAllAssociations(RpClump* clump);
void RpAnimBlendClumpRemoveAssociations(RpClump* clump, unsigned int flags);
void RpAnimBlendClumpSetBlendDeltas(RpClump* clump, unsigned int flags, float delta);
void RpAnimBlendClumpUpdateAnimations(RpClump* clump, float step, bool onScreen = false);
CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association);
bool RpAnimBlendPluginAttach();
void DefinedState();
