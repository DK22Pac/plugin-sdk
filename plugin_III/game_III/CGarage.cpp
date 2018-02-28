/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGarage.h"

unsigned int *gaCarsToCollectInCraigsGarages = (unsigned int *)0x5ECDD4;

// Converted from thiscall void CGarage::BuildRotatedDoorMatrix(CEntity *door,float angle) 0x4267C0
void CGarage::BuildRotatedDoorMatrix(CEntity* door, float angle) {
    plugin::CallMethod<0x4267C0, CGarage *, CEntity*, float>(this, door, angle);
}

// Converted from thiscall float CGarage::CalcDistToGarageRectangleSquared(float x,float y) 0x426F50 
float CGarage::CalcDistToGarageRectangleSquared(float x, float y) {
    return plugin::CallMethodAndReturn<float, 0x426F50, CGarage *, float, float>(this, x, y);
}

// Converted from thiscall float CGarage::CalcSmallestDistToGarageDoorSquared(float x,float y) 0x426FE0 
float CGarage::CalcSmallestDistToGarageDoorSquared(float x, float y) {
    return plugin::CallMethodAndReturn<float, 0x426FE0, CGarage *, float, float>(this, x, y);
}

// Converted from thiscall bool CGarage::CenterCarInGarage(CVehicle *vehicle) 0x428000
bool CGarage::CenterCarInGarage(CVehicle* vehicle) {
    return plugin::CallMethodAndReturn<bool, 0x428000, CGarage *, CVehicle*>(this, vehicle);
}

// Converted from thiscall eGarageState CGarage::CloseThisGarage(void) 0x426F40
eGarageState CGarage::CloseThisGarage() {
    eGarageState result;
    plugin::CallMethodAndReturn<eGarageState, 0x426F40, CGarage *, eGarageState*>(this, &result);
    return result;
}

// Converted from thiscall int CGarage::CountCarsWithCenterPointWithinGarage(CEntity *vehicle) 0x426130
int CGarage::CountCarsWithCenterPointWithinGarage(CEntity* vehicle) {
    return plugin::CallMethodAndReturn<int, 0x426130, CGarage *, CEntity*>(this, vehicle);
}

// Converted from thiscall bool CGarage::DoesCraigNeedThisCar(int modelIndex) 0x426D90
bool CGarage::DoesCraigNeedThisCar(int modelIndex) {
    return plugin::CallMethodAndReturn<bool, 0x426D90, CGarage *, int>(this, modelIndex);
}

// Converted from thiscall bool CGarage::EntityHasASphereWayOutsideGarage(CEntity *entity,float radius) 0x425B30
bool CGarage::EntityHasASphereWayOutsideGarage(CEntity* entity, float radius) {
    return plugin::CallMethodAndReturn<bool, 0x425B30, CGarage *, CEntity*, float>(this, entity, radius);
}

// Converted from thiscall void CGarage::FindDoorsEntities(void) 0x427060 
void CGarage::FindDoorsEntities() {
    plugin::CallMethod<0x427060, CGarage *>(this);
}

// Converted from thiscall char CGarage::FindDoorsEntitiesSectorList(CPtrList &list,bool) 0x427300
char CGarage::FindDoorsEntitiesSectorList(CPtrList& list, bool arg1) {
    return plugin::CallMethodAndReturn<char, 0x427300, CGarage *, CPtrList&, bool>(this, list, arg1);
}

// Converted from thiscall bool CGarage::HasCraigCollectedThisCar(int modelIndex) 0x426DF0
bool CGarage::HasCraigCollectedThisCar(int modelIndex) {
    return plugin::CallMethodAndReturn<bool, 0x426DF0, CGarage *, int>(this, modelIndex);
}

// Converted from thiscall bool CGarage::IsAnyCarBlockingDoor(void) 0x425FB0 
bool CGarage::IsAnyCarBlockingDoor() {
    return plugin::CallMethodAndReturn<bool, 0x425FB0, CGarage *>(this);
}

// Converted from thiscall bool CGarage::IsAnyOtherCarTouchingGarage(CVehicle *vehicle) 0x425C90
bool CGarage::IsAnyOtherCarTouchingGarage(CVehicle* vehicle) {
    return plugin::CallMethodAndReturn<bool, 0x425C90, CGarage *, CVehicle*>(this, vehicle);
}

// Converted from thiscall bool CGarage::IsAnyOtherPedTouchingGarage(CPed *ped) 0x425E20 
bool CGarage::IsAnyOtherPedTouchingGarage(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x425E20, CGarage *, CPed*>(this, ped);
}

// Converted from thiscall bool CGarage::IsEntityEntirelyInside(CEntity *entity) 0x425370
bool CGarage::IsEntityEntirelyInside(CEntity* entity) {
    return plugin::CallMethodAndReturn<bool, 0x425370, CGarage *, CEntity*>(this, entity);
}

// Converted from thiscall bool CGarage::IsEntityEntirelyInside3D(CEntity *entity,float radius) 0x4254F0
bool CGarage::IsEntityEntirelyInside3D(CEntity* entity, float radius) {
    return plugin::CallMethodAndReturn<bool, 0x4254F0, CGarage *, CEntity*, float>(this, entity, radius);
}

// Converted from thiscall bool CGarage::IsEntityEntirelyOutside(CEntity *entity,float radius) 0x425740
bool CGarage::IsEntityEntirelyOutside(CEntity* entity, float radius) {
    return plugin::CallMethodAndReturn<bool, 0x425740, CGarage *, CEntity*, float>(this, entity, radius);
}

// Converted from thiscall bool CGarage::IsEntityTouching3D(CEntity *entity) 0x425950
bool CGarage::IsEntityTouching3D(CEntity* entity) {
    return plugin::CallMethodAndReturn<bool, 0x425950, CGarage *, CEntity*>(this, entity);
}

// Converted from thiscall bool CGarage::IsGarageEmpty(void) 0x425890 
bool CGarage::IsGarageEmpty() {
    return plugin::CallMethodAndReturn<bool, 0x425890, CGarage *>(this);
}

// Converted from thiscall bool CGarage::IsPlayerOutsideGarage(void) 0x425910 
bool CGarage::IsPlayerOutsideGarage() {
    return plugin::CallMethodAndReturn<bool, 0x425910, CGarage *>(this);
}

// Converted from thiscall bool CGarage::IsStaticPlayerCarEntirelyInside(void) 0x4251C0 
bool CGarage::IsStaticPlayerCarEntirelyInside() {
    return plugin::CallMethodAndReturn<bool, 0x4251C0, CGarage *>(this);
}

// Converted from thiscall void CGarage::Load(uchar *bufferPointer,uint structSize) 0x4288E0
void CGarage::Load(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::CallMethod<0x4288E0, CGarage *, unsigned char*, unsigned int>(this, bufferPointer, structSize);
}

// Converted from thiscall bool CGarage::MarkThisCarAsCollectedForCraig(int modelIndex) 0x426E50
bool CGarage::MarkThisCarAsCollectedForCraig(int modelIndex) {
    return plugin::CallMethodAndReturn<bool, 0x426E50, CGarage *, int>(this, modelIndex);
}

// Converted from thiscall eGarageState CGarage::OpenThisGarage(void) 0x426F20
eGarageState CGarage::OpenThisGarage() {
    eGarageState result;
    plugin::CallMethodAndReturn<eGarageState, 0x426F20, CGarage *, eGarageState*>(this, &result);
    return result;
}

// Converted from thiscall void CGarage::PlayerArrestedOrDied(void) 0x427FC0 
void CGarage::PlayerArrestedOrDied() {
    plugin::CallMethod<0x427FC0, CGarage *>(this);
}

// Converted from thiscall void CGarage::RefreshDoorPointers(bool) 0x426980 
void CGarage::RefreshDoorPointers(bool arg0) {
    plugin::CallMethod<0x426980, CGarage *, bool>(this, arg0);
}

// Converted from thiscall void CGarage::RemoveCarsBlockingDoorNotInside(void) 0x4261F0 
void CGarage::RemoveCarsBlockingDoorNotInside() {
    plugin::CallMethod<0x4261F0, CGarage *>(this);
}

// Converted from thiscall bool CGarage::RestoreCarsForThisHideOut(CStoredCar *car) 0x427A40
bool CGarage::RestoreCarsForThisHideOut(CStoredCar* car) {
    return plugin::CallMethodAndReturn<bool, 0x427A40, CGarage *, CStoredCar*>(this, car);
}

// Converted from thiscall void CGarage::StoreAndRemoveCarsForThisHideOut(CStoredCar *car,int count) 0x427840
void CGarage::StoreAndRemoveCarsForThisHideOut(CStoredCar* car, int count) {
    plugin::CallMethod<0x427840, CGarage *, CStoredCar*, int>(this, car, count);
}

// Converted from thiscall void CGarage::TidyUpGarage(void) 0x427C30 
void CGarage::TidyUpGarage() {
    plugin::CallMethod<0x427C30, CGarage *>(this);
}

// Converted from thiscall void CGarage::TidyUpGarageClose(void) 0x427D90 
void CGarage::TidyUpGarageClose() {
    plugin::CallMethod<0x427D90, CGarage *>(this);
}

// Converted from thiscall void CGarage::Update(void) 0x4222D0 
void CGarage::Update() {
    plugin::CallMethod<0x4222D0, CGarage *>(this);
}

// Converted from thiscall void CGarage::UpdateCrusherAngle(void) 0x4268A0 
void CGarage::UpdateCrusherAngle() {
    plugin::CallMethod<0x4268A0, CGarage *>(this);
}

// Converted from thiscall void CGarage::UpdateCrusherShake(float x,float y) 0x4268E0 
void CGarage::UpdateCrusherShake(float x, float y) {
    plugin::CallMethod<0x4268E0, CGarage *, float, float>(this, x, y);
}

// Converted from thiscall void CGarage::UpdateDoorsHeight(void) 0x426730 
void CGarage::UpdateDoorsHeight() {
    plugin::CallMethod<0x426730, CGarage *>(this);
}
