/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlane.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &TotalDurationOfFlightPath = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFB8, 0x64CFB8, 0x65CFC0));
PLUGIN_VARIABLE float &TotalLengthOfFlightPath2 = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFBC, 0x64CFBC, 0x65CFC4));
PLUGIN_VARIABLE float &TotalDurationOfFlightPath2 = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFC0, 0x64CFC0, 0x65CFC8));
PLUGIN_VARIABLE float(&PlanePath2Position)[3] = *reinterpret_cast<float(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x64CFC4, 0x64CFC4, 0x65CFCC));
PLUGIN_VARIABLE float &TotalLengthOfFlightPath3 = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFD0, 0x64CFD0, 0x65CFD8));
PLUGIN_VARIABLE float &TotalDurationOfFlightPath3 = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFD4, 0x64CFD4, 0x65CFDC));
PLUGIN_VARIABLE float &PlanePath3Position = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFD8, 0x64CFD8, 0x65CFE0));
PLUGIN_VARIABLE float &TotalLengthOfFlightPath4 = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFDC, 0x64CFDC, 0x65CFE4));
PLUGIN_VARIABLE float &TotalDurationOfFlightPath4 = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFE0, 0x64CFE0, 0x65CFE8));
PLUGIN_VARIABLE float &PlanePath4Position = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFE4, 0x64CFE4, 0x65CFEC));
PLUGIN_VARIABLE int &CesnaMissionStatus = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFE8, 0x64CFE8, 0x65CFF0));
PLUGIN_VARIABLE int &CesnaMissionStartTime = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFEC, 0x64CFEC, 0x65CFF4));
PLUGIN_VARIABLE int &DropOffCesnaMissionStatus = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFF0, 0x64CFF0, 0x65CFF8));
PLUGIN_VARIABLE int &DropOffCesnaMissionStartTime = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x64CFF4, 0x64CFF4, 0x65CFFC));
PLUGIN_VARIABLE CPlaneInterpolationLine(&aPlaneLineBits)[6] = *reinterpret_cast<CPlaneInterpolationLine(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x734168, 0x734168, 0x7442A8));
PLUGIN_VARIABLE CPlaneNode *&pPath4Nodes = *reinterpret_cast<CPlaneNode **>(GLOBAL_ADDRESS_BY_VERSION(0x885AD8, 0x885A88, 0x895BC8));
PLUGIN_VARIABLE CPlaneNode *&pPath3Nodes = *reinterpret_cast<CPlaneNode **>(GLOBAL_ADDRESS_BY_VERSION(0x885B78, 0x885B28, 0x895C68));
PLUGIN_VARIABLE CPlaneNode *&pPath2Nodes = *reinterpret_cast<CPlaneNode **>(GLOBAL_ADDRESS_BY_VERSION(0x885B8C, 0x885B3C, 0x895C7C));
PLUGIN_VARIABLE float &TakeOffPoint = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E28A4, 0x8E2854, 0x8F2994));
PLUGIN_VARIABLE CPlane *&pDropOffCesna = *reinterpret_cast<CPlane **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A38, 0x8E29E8, 0x8F2B28));
PLUGIN_VARIABLE float(&PlanePath2Speed)[3] = *reinterpret_cast<float(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A54, 0x8F1B08, 0x901C48));
PLUGIN_VARIABLE float &PlanePath3Speed = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A94, 0x8F1B48, 0x901C88));
PLUGIN_VARIABLE float &PlanePath4Speed = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AFC, 0x8F1BB0, 0x901CF0));
PLUGIN_VARIABLE CPlaneNode *&pPathNodes = *reinterpret_cast<CPlaneNode **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B68, 0x8F1C1C, 0x901D5C));
PLUGIN_VARIABLE int &NumPathNodes = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BE4, 0x8F2C98, 0x902DD8));
PLUGIN_VARIABLE float &TotalLengthOfFlightPath = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C6C, 0x8F2D20, 0x902E60));
PLUGIN_VARIABLE float &LandingPoint = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C7C, 0x8F2D30, 0x902E70));
PLUGIN_VARIABLE CPlane *&pDrugRunCesna = *reinterpret_cast<CPlane **>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F80, 0x8F6034, 0x906174));
PLUGIN_VARIABLE float(&OldPlanePathPosition)[3] = *reinterpret_cast<float(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FBC, 0x8F6070, 0x9061B0));
PLUGIN_VARIABLE float(&PlanePathPosition)[3] = *reinterpret_cast<float(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FC8, 0x8F607C, 0x9061BC));
PLUGIN_VARIABLE int &NumPath4Nodes = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9412C8, 0x941480, 0x9515C0));
PLUGIN_VARIABLE int &NumPath2Nodes = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x941498, 0x941650, 0x951790));
PLUGIN_VARIABLE int &NumPath3Nodes = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9414D8, 0x941690, 0x9517D0));
PLUGIN_VARIABLE float(&PlanePathSpeed)[3] = *reinterpret_cast<float(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x941538, 0x9416F0, 0x951830));

int ctor_addr_o(CPlane, void(int, unsigned char)) = ADDRESS_BY_VERSION(0x54B170, 0x54B2F0, 0x54B2A0);
int ctor_gaddr_o(CPlane, void(int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x54B170, 0x54B2F0, 0x54B2A0);

int dtor_addr(CPlane) = ADDRESS_BY_VERSION(0x54B270, 0x54B3F0, 0x54B3A0);
int dtor_gaddr(CPlane) = GLOBAL_ADDRESS_BY_VERSION(0x54B270, 0x54B3F0, 0x54B3A0);

int del_dtor_addr(CPlane) = ADDRESS_BY_VERSION(0x54E100, 0x54E240, 0x54E1F0);
int del_dtor_gaddr(CPlane) = GLOBAL_ADDRESS_BY_VERSION(0x54E100, 0x54E240, 0x54E1F0);

int addrof(CPlane::SetModelIndex) = ADDRESS_BY_VERSION(0x54B290, 0x54B410, 0x54B3C0);
int gaddrof(CPlane::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x54B290, 0x54B410, 0x54B3C0);

void CPlane::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CPlane *, unsigned int>(this, modelIndex);
}

int addrof(CPlane::DeleteRwObject) = ADDRESS_BY_VERSION(0x54B2A0, 0x54B420, 0x54B3D0);
int gaddrof(CPlane::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x54B2A0, 0x54B420, 0x54B3D0);

void CPlane::DeleteRwObject() {
    plugin::CallVirtualMethod<6, CPlane *>(this);
}

int addrof(CPlane::ProcessControl) = ADDRESS_BY_VERSION(0x54C1D0, 0x54C350, 0x54C300);
int gaddrof(CPlane::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x54C1D0, 0x54C350, 0x54C300);

void CPlane::ProcessControl() {
    plugin::CallVirtualMethod<8, CPlane *>(this);
}

int addrof(CPlane::PreRender) = ADDRESS_BY_VERSION(0x54B2F0, 0x54B470, 0x54B420);
int gaddrof(CPlane::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x54B2F0, 0x54B470, 0x54B420);

void CPlane::PreRender() {
    plugin::CallVirtualMethod<12, CPlane *>(this);
}

int addrof(CPlane::Render) = ADDRESS_BY_VERSION(0x54B810, 0x54B990, 0x54B940);
int gaddrof(CPlane::Render) = GLOBAL_ADDRESS_BY_VERSION(0x54B810, 0x54B990, 0x54B940);

void CPlane::Render() {
    plugin::CallVirtualMethod<13, CPlane *>(this);
}

int addrof(CPlane::FlagToDestroyWhenNextProcessed) = ADDRESS_BY_VERSION(0x54DFC0, 0x54E140, 0x54E0F0);
int gaddrof(CPlane::FlagToDestroyWhenNextProcessed) = GLOBAL_ADDRESS_BY_VERSION(0x54DFC0, 0x54E140, 0x54E0F0);

void CPlane::FlagToDestroyWhenNextProcessed() {
    plugin::CallVirtualMethod<16, CPlane *>(this);
}

int addrof(CPlane::CreateDropOffCesna) = ADDRESS_BY_VERSION(0x54E160, 0x54E2A0, 0x54E250);
int gaddrof(CPlane::CreateDropOffCesna) = GLOBAL_ADDRESS_BY_VERSION(0x54E160, 0x54E2A0, 0x54E250);

void CPlane::CreateDropOffCesna() {
    plugin::CallDynGlobal(gaddrof(CPlane::CreateDropOffCesna));
}

int addrof(CPlane::FindDropOffCesnaCoordinates) = ADDRESS_BY_VERSION(0x54E260, 0x54E3A0, 0x54E350);
int gaddrof(CPlane::FindDropOffCesnaCoordinates) = GLOBAL_ADDRESS_BY_VERSION(0x54E260, 0x54E3A0, 0x54E350);

CVector CPlane::FindDropOffCesnaCoordinates() {
    CVector ret_coors;
    plugin::CallDynGlobal<CVector *>(gaddrof(CPlane::FindDropOffCesnaCoordinates), &ret_coors);
    return ret_coors;
}

int addrof(CPlane::FindDrugPlaneCoordinates) = ADDRESS_BY_VERSION(0x54E280, 0x54E3C0, 0x54E370);
int gaddrof(CPlane::FindDrugPlaneCoordinates) = GLOBAL_ADDRESS_BY_VERSION(0x54E280, 0x54E3C0, 0x54E370);

CVector CPlane::FindDrugPlaneCoordinates() {
    CVector ret_coors;
    plugin::CallDynGlobal<CVector *>(gaddrof(CPlane::FindDrugPlaneCoordinates), &ret_coors);
    return ret_coors;
}

int addrof(CPlane::HasCesnaBeenDestroyed) = ADDRESS_BY_VERSION(0x54E150, 0x54E290, 0x54E240);
int gaddrof(CPlane::HasCesnaBeenDestroyed) = GLOBAL_ADDRESS_BY_VERSION(0x54E150, 0x54E290, 0x54E240);

bool CPlane::HasCesnaBeenDestroyed() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CPlane::HasCesnaBeenDestroyed));
}

int addrof(CPlane::HasCesnaLanded) = ADDRESS_BY_VERSION(0x54E140, 0x54E280, 0x54E230);
int gaddrof(CPlane::HasCesnaLanded) = GLOBAL_ADDRESS_BY_VERSION(0x54E140, 0x54E280, 0x54E230);

bool CPlane::HasCesnaLanded() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CPlane::HasCesnaLanded));
}

int addrof(CPlane::HasDropOffCesnaBeenShotDown) = ADDRESS_BY_VERSION(0x54E250, 0x54E390, 0x54E340);
int gaddrof(CPlane::HasDropOffCesnaBeenShotDown) = GLOBAL_ADDRESS_BY_VERSION(0x54E250, 0x54E390, 0x54E340);

bool CPlane::HasDropOffCesnaBeenShotDown() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CPlane::HasDropOffCesnaBeenShotDown));
}

int addrof(CPlane::InitPlanes) = ADDRESS_BY_VERSION(0x54B820, 0x54B9A0, 0x54B950);
int gaddrof(CPlane::InitPlanes) = GLOBAL_ADDRESS_BY_VERSION(0x54B820, 0x54B9A0, 0x54B950);

void CPlane::InitPlanes() {
    plugin::CallDynGlobal(gaddrof(CPlane::InitPlanes));
}

int addrof(CPlane::LoadPath) = ADDRESS_BY_VERSION(0x54BD50, 0x54BED0, 0x54BE80);
int gaddrof(CPlane::LoadPath) = GLOBAL_ADDRESS_BY_VERSION(0x54BD50, 0x54BED0, 0x54BE80);

CPlaneNode *CPlane::LoadPath(char const *filename, int *numNodes, float *totalLength, bool loop) {
    return plugin::CallAndReturnDynGlobal<CPlaneNode *, char const *, int *, float *, bool>(gaddrof(CPlane::LoadPath), filename, numNodes, totalLength, loop);
}

int addrof(CPlane::Shutdown) = ADDRESS_BY_VERSION(0x54BCD0, 0x54BE50, 0x54BE00);
int gaddrof(CPlane::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x54BCD0, 0x54BE50, 0x54BE00);

void CPlane::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CPlane::Shutdown));
}

int addrof(CPlane::TestRocketCollision) = ADDRESS_BY_VERSION(0x54DE90, 0x54E010, 0x54DFC0);
int gaddrof(CPlane::TestRocketCollision) = GLOBAL_ADDRESS_BY_VERSION(0x54DE90, 0x54E010, 0x54DFC0);

bool CPlane::TestRocketCollision(CVector *coors) {
    return plugin::CallAndReturnDynGlobal<bool, CVector *>(gaddrof(CPlane::TestRocketCollision), coors);
}

int addrof(CPlane::UpdatePlanes) = ADDRESS_BY_VERSION(0x54BEC0, 0x54C040, 0x54BFF0);
int gaddrof(CPlane::UpdatePlanes) = GLOBAL_ADDRESS_BY_VERSION(0x54BEC0, 0x54C040, 0x54BFF0);

void CPlane::UpdatePlanes() {
    plugin::CallDynGlobal(gaddrof(CPlane::UpdatePlanes));
}

int addrof(CreateIncomingCesna) = ADDRESS_BY_VERSION(0x54E000, 0x54E150, 0x54E100);
int gaddrof(CreateIncomingCesna) = GLOBAL_ADDRESS_BY_VERSION(0x54E000, 0x54E150, 0x54E100);

void CreateIncomingCesna() {
    plugin::CallDynGlobal(gaddrof(CreateIncomingCesna));
}
