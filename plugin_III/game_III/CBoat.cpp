/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBoat.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CBoat *(&CBoat::apFrameWakeGeneratingBoats)[4] = *reinterpret_cast<CBoat *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x8620E0, 0x862090, 0x8721D0));
PLUGIN_VARIABLE float &MAX_WAKE_LENGTH = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x600CC4, 0x600AAC, 0x60DAA4));
PLUGIN_VARIABLE float &MIN_WAKE_INTERVAL = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x600CC8, 0x600AB0, 0x60DAA8));
PLUGIN_VARIABLE float &WAKE_LIFETIME = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x600CCC, 0x600AB4, 0x60DAAC));
PLUGIN_VARIABLE float &fShapeLength = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x600E78, 0x600C60, 0x60DC58));
PLUGIN_VARIABLE float &fShapeTime = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x600E7C, 0x600C64, 0x60DC5C));
PLUGIN_VARIABLE float &fRangeMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x600E80, 0x600C68, 0x60DC60));
PLUGIN_VARIABLE RwImVertexIndex(&KeepWaterOutIndices)[6] = *reinterpret_cast<RwImVertexIndex(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x64CEA0, 0x64CEA0, 0x65CEA8));
PLUGIN_VARIABLE RwIm3DVertex(&KeepWaterOutVertices)[4] = *reinterpret_cast<RwIm3DVertex(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x64CEAC, 0x64CEAC, 0x65CEB4));
PLUGIN_VARIABLE float &fTimeMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x943008, 0x9431C0, 0x953300));

int ctor_addr_o(CBoat, void(int, unsigned char)) = ADDRESS_BY_VERSION(0x53E3E0, 0x53E620, 0x53E5D0);
int ctor_gaddr_o(CBoat, void(int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x53E3E0, 0x53E620, 0x53E5D0);

int dtor_addr(CBoat) = ADDRESS_BY_VERSION(0x53E790, 0x53E9D0, 0x53E980);
int dtor_gaddr(CBoat) = GLOBAL_ADDRESS_BY_VERSION(0x53E790, 0x53E9D0, 0x53E980);

int del_dtor_addr(CBoat) = ADDRESS_BY_VERSION(0x5425E0, 0x542820, 0x5427D0);
int del_dtor_gaddr(CBoat) = GLOBAL_ADDRESS_BY_VERSION(0x5425E0, 0x542820, 0x5427D0);

int addrof(CBoat::SetModelIndex) = ADDRESS_BY_VERSION(0x53E7B0, 0x53E9F0, 0x53E9A0);
int gaddrof(CBoat::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x53E7B0, 0x53E9F0, 0x53E9A0);

void CBoat::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CBoat *, unsigned int>(this, modelIndex);
}

int addrof(CBoat::ProcessControl) = ADDRESS_BY_VERSION(0x53EF10, 0x53F150, 0x53F100);
int gaddrof(CBoat::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x53EF10, 0x53F150, 0x53F100);

void CBoat::ProcessControl() {
    plugin::CallVirtualMethod<8, CBoat *>(this);
}

int addrof(CBoat::Teleport) = ADDRESS_BY_VERSION(0x541970, 0x541BB0, 0x541B60);
int gaddrof(CBoat::Teleport) = GLOBAL_ADDRESS_BY_VERSION(0x541970, 0x541BB0, 0x541B60);

void CBoat::Teleport(CVector point) {
    plugin::CallVirtualMethod<11, CBoat *, CVector>(this, point);
}

int addrof(CBoat::PreRender) = ADDRESS_BY_VERSION(0x53E880, 0x53EAC0, 0x53EA70);
int gaddrof(CBoat::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x53E880, 0x53EAC0, 0x53EA70);

void CBoat::PreRender() {
    plugin::CallVirtualMethod<12, CBoat *>(this);
}

int addrof(CBoat::Render) = ADDRESS_BY_VERSION(0x53E890, 0x53EAD0, 0x53EA80);
int gaddrof(CBoat::Render) = GLOBAL_ADDRESS_BY_VERSION(0x53E890, 0x53EAD0, 0x53EA80);

void CBoat::Render() {
    plugin::CallVirtualMethod<13, CBoat *>(this);
}

int addrof(CBoat::ProcessControlInputs) = ADDRESS_BY_VERSION(0x53EC70, 0x53EEB0, 0x53EE60);
int gaddrof(CBoat::ProcessControlInputs) = GLOBAL_ADDRESS_BY_VERSION(0x53EC70, 0x53EEB0, 0x53EE60);

void CBoat::ProcessControlInputs(unsigned char padNumber) {
    plugin::CallVirtualMethod<18, CBoat *, unsigned char>(this, padNumber);
}

int addrof(CBoat::GetComponentWorldPosition) = ADDRESS_BY_VERSION(0x53E810, 0x53EA50, 0x53EA00);
int gaddrof(CBoat::GetComponentWorldPosition) = GLOBAL_ADDRESS_BY_VERSION(0x53E810, 0x53EA50, 0x53EA00);

void CBoat::GetComponentWorldPosition(int component, CVector &pos) {
    plugin::CallVirtualMethod<19, CBoat *, int, CVector &>(this, component, pos);
}

int addrof(CBoat::IsComponentPresent) = ADDRESS_BY_VERSION(0x53E870, 0x53EAB0, 0x53EA60);
int gaddrof(CBoat::IsComponentPresent) = GLOBAL_ADDRESS_BY_VERSION(0x53E870, 0x53EAB0, 0x53EA60);

bool CBoat::IsComponentPresent(int component) {
    return plugin::CallVirtualMethodAndReturn<bool, 20, CBoat *, int>(this, component);
}

int addrof(CBoat::BlowUpCar) = ADDRESS_BY_VERSION(0x541CB0, 0x541EF0, 0x541EA0);
int gaddrof(CBoat::BlowUpCar) = GLOBAL_ADDRESS_BY_VERSION(0x541CB0, 0x541EF0, 0x541EA0);

void CBoat::BlowUpCar(CEntity *entity) {
    plugin::CallVirtualMethod<29, CBoat *, CEntity *>(this, entity);
}

int addrof(CBoat::AddWakePoint) = ADDRESS_BY_VERSION(0x542140, 0x542380, 0x542330);
int gaddrof(CBoat::AddWakePoint) = GLOBAL_ADDRESS_BY_VERSION(0x542140, 0x542380, 0x542330);

void CBoat::AddWakePoint(CVector point) {
    plugin::CallMethodDynGlobal<CBoat *, CVector>(gaddrof(CBoat::AddWakePoint), this, point);
}

int addrof(CBoat::ApplyWaterResistance) = ADDRESS_BY_VERSION(0x541A30, 0x541C70, 0x541C20);
int gaddrof(CBoat::ApplyWaterResistance) = GLOBAL_ADDRESS_BY_VERSION(0x541A30, 0x541C70, 0x541C20);

void CBoat::ApplyWaterResistance() {
    plugin::CallMethodDynGlobal<CBoat *>(gaddrof(CBoat::ApplyWaterResistance), this);
}

int addrof(CBoat::PruneWakeTrail) = ADDRESS_BY_VERSION(0x5420D0, 0x542310, 0x5422C0);
int gaddrof(CBoat::PruneWakeTrail) = GLOBAL_ADDRESS_BY_VERSION(0x5420D0, 0x542310, 0x5422C0);

void CBoat::PruneWakeTrail() {
    plugin::CallMethodDynGlobal<CBoat *>(gaddrof(CBoat::PruneWakeTrail), this);
}

int addrof(CBoat::SetupModelNodes) = ADDRESS_BY_VERSION(0x53E7D0, 0x53EA10, 0x53E9C0);
int gaddrof(CBoat::SetupModelNodes) = GLOBAL_ADDRESS_BY_VERSION(0x53E7D0, 0x53EA10, 0x53E9C0);

void CBoat::SetupModelNodes() {
    plugin::CallMethodDynGlobal<CBoat *>(gaddrof(CBoat::SetupModelNodes), this);
}

int addrof(CBoat::FillBoatList) = ADDRESS_BY_VERSION(0x542250, 0x542490, 0x542440);
int gaddrof(CBoat::FillBoatList) = GLOBAL_ADDRESS_BY_VERSION(0x542250, 0x542490, 0x542440);

void CBoat::FillBoatList() {
    plugin::CallDynGlobal(gaddrof(CBoat::FillBoatList));
}

int addrof(CBoat::IsSectorAffectedByWake) = ADDRESS_BY_VERSION(0x542370, 0x5425B0, 0x542560);
int gaddrof(CBoat::IsSectorAffectedByWake) = GLOBAL_ADDRESS_BY_VERSION(0x542370, 0x5425B0, 0x542560);

bool CBoat::IsSectorAffectedByWake(CVector2D sector, float size, CBoat **apBoats) {
    return plugin::CallAndReturnDynGlobal<bool, CVector2D, float, CBoat **>(gaddrof(CBoat::IsSectorAffectedByWake), sector, size, apBoats);
}

int addrof(CBoat::IsVertexAffectedByWake) = ADDRESS_BY_VERSION(0x5424A0, 0x5426E0, 0x542690);
int gaddrof(CBoat::IsVertexAffectedByWake) = GLOBAL_ADDRESS_BY_VERSION(0x5424A0, 0x5426E0, 0x542690);

float CBoat::IsVertexAffectedByWake(CVector vecVertex, CBoat *boat) {
    return plugin::CallAndReturnDynGlobal<float, CVector, CBoat *>(gaddrof(CBoat::IsVertexAffectedByWake), vecVertex, boat);
}

int addrof(GetBoatAtomicObjectCB) = ADDRESS_BY_VERSION(0x53E3C0, 0x53E600, 0x53E5B0);
int gaddrof(GetBoatAtomicObjectCB) = GLOBAL_ADDRESS_BY_VERSION(0x53E3C0, 0x53E600, 0x53E5B0);

RwObject *GetBoatAtomicObjectCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(GetBoatAtomicObjectCB), object, data);
}
