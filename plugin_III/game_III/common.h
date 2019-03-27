/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPlayerPed.h"
#include "CVehicle.h"
#include "CTrain.h"
#include "CAnimBlendClumpData.h"

class CAnimBlendAssociation;

// returns player angle in radians
float FindPlayerHeading();
// gets player coords with skipping sniper shift
CVector& FindPlayerCentreOfWorld_NoSniperShift();
// gets player coords
CVector& FindPlayerCentreOfWorld(int playerId);
// returns player ped
CPlayerPed* FindPlayerPed();
// returns player train
CTrain* FindPlayerTrain();
// returns player ped or player vehicle if he's driving
CEntity* FindPlayerEntity();
// returns player vehicle
CVehicle* FindPlayerVehicle();
// returns player speed
CVector& FindPlayerSpeed();
// returns player coors
CVector& FindPlayerCoors();

RwTexture* GetFirstTexture(RwTexDictionary* texDictionary);
RwObject* GetFirstObject(RwFrame* frame);
RpAtomic* GetFirstAtomic(RpClump* clump);
RwFrame* GetFirstChild(RwFrame* frame);
RpAtomic* GetFirstAtomicCallback(RpAtomic* atomic, void* data);
RwObject* GetFirstObjectCallback(RwObject* object, void* data);
RwFrame* GetFirstFrameCallback(RwFrame* frame, void* data);
RwTexture* GetFirstTextureCallback(RwTexture* texture, void* data);

void WorldReplaceScorchedLightsWithNormal(RpWorld* world);
// dummy function
void CreateDebugFont();
// dummy function                                                            
void DestroyDebugFont();
// dummy function                                                            
void FlushObrsPrintfs();
void DefinedState();
CAnimBlendClumpData* RpAnimBlendAllocateData(RpClump* clump);
AnimBlendFrameData* RpAnimBlendClumpFindFrame(RpClump* clump, char const* name);
CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump* clump, unsigned int animId);
CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump);
CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump* clump, unsigned int flags);
CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, CAnimBlendAssociation** pAssociation, float* blendAmount);
CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump* clump, int n);
CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump);
CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump* clump, int n);
void RpAnimBlendClumpInit(RpClump* clump);
bool RpAnimBlendClumpIsInitialized(RpClump* clump);
void RpAnimBlendClumpRemoveAllAssociations(RpClump* clump);
void RpAnimBlendClumpRemoveAssociations(RpClump* clump, unsigned int flags);
void RpAnimBlendClumpSetBlendDeltas(RpClump* clump, unsigned int flags, float delta);
void RpAnimBlendClumpUpdateAnimations(RpClump* clump, float step, bool onScreen);
CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association);
CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation* association, unsigned int flags);
bool RpAnimBlendPluginAttach();
RpClump* AnimBlendClumpDestroy(RpClump* clump);
void SetAmbientColours(RwRGBAReal* colours);
void SetAmbientColoursForPedsCarsAndObjects();
void SetAmbientColours();
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

extern uint32_t &ClumpOffset;
extern AnimBlendFrameData **pFrameDataFound;