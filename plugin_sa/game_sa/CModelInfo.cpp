/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

CBaseModelInfo** CModelInfo::ms_modelInfoPtrs = *(CBaseModelInfo***)0x40CD67; // limit adjusters support - get from CStreaming::RequestModelStream
const int& CModelInfo::ms_modelInfoCount = *(const int*)0x40CD58; // limit adjusters support - get from CStreaming::RequestModelStream

void CModelInfo::Initialise() {
    ((void (__cdecl*)())0x4C6810)();
}

void CModelInfo::ReInit2dEffects() {
    ((void (__cdecl*)())0x4C63B0)();
}

void CModelInfo::ShutDown() {
    ((void (__cdecl*)())0x4C63E0)();
}

CAtomicModelInfo* CModelInfo::AddAtomicModel(int modelId) {
    return ((CAtomicModelInfo* (__cdecl*)(int))0x4C6620)(modelId);
}

CDamageAtomicModelInfo* CModelInfo::AddDamageAtomicModel(int modelId) {
    return ((CDamageAtomicModelInfo* (__cdecl*)(int))0x4C6650)(modelId);
}

CLodAtomicModelInfo* CModelInfo::AddLodAtomicModel(int modelId) {
    return ((CLodAtomicModelInfo* (__cdecl*)(int))0x4C6680)(modelId);
}

CTimeModelInfo* CModelInfo::AddTimeModel(int modelId) {
    return ((CTimeModelInfo* (__cdecl*)(int))0x4C66B0)(modelId);
}

CLodTimeModelInfo* CModelInfo::AddLodTimeModel(int modelId) {
    return ((CLodTimeModelInfo* (__cdecl*)(int))0x4C66E0)(modelId);
}

CWeaponModelInfo* CModelInfo::AddWeaponModel(int modelId) {
    return ((CWeaponModelInfo* (__cdecl*)(int))0x4C6710)(modelId);
}

CClumpModelInfo* CModelInfo::AddClumpModel(int modelId) {
    return ((CClumpModelInfo* (__cdecl*)(int))0x4C6740)(modelId);
}

CVehicleModelInfo* CModelInfo::AddVehicleModel(int modelId) {
    return ((CVehicleModelInfo* (__cdecl*)(int))0x4C6770)(modelId);
}

CPedModelInfo* CModelInfo::AddPedModel(int modelId) {
    return ((CPedModelInfo* (__cdecl*)(int))0x4C67A0)(modelId);
}

int* CModelInfo::Get2dEffectStore() {
    return ((int* (__cdecl*)())0x4C5A60)();
}

CBaseModelInfo* CModelInfo::GetModelInfo(int modelId) {
    return modelId < ms_modelInfoCount ? ms_modelInfoPtrs[modelId] : nullptr;
}

CBaseModelInfo* CModelInfo::GetModelInfo(const char* name, int* modelId) {
    return ((CBaseModelInfo* (__cdecl*)(const char*, int*))0x4C5940)(name, modelId);
}

CBaseModelInfo* CModelInfo::GetModelInfo(const char* name, int minmodelId, int maxInedx) {
    return ((CBaseModelInfo* (__cdecl*)(const char*, int, int))0x4C5A20)(name, minmodelId, maxInedx);
}

CBaseModelInfo* CModelInfo::GetModelInfoFromHashKey(unsigned int arg0, int* modelId) {
    return ((CBaseModelInfo* (__cdecl*)(unsigned int, int*))0x4C59B0)(arg0, modelId);
}

CBaseModelInfo* CModelInfo::GetModelInfoUInt16(const char* name, int* modelId) {
    return ((CBaseModelInfo* (__cdecl*)(const char*, int*))0x4C59F0)(name, modelId);
}

int CModelInfo::FindNextModel(eModelInfoType type, int startModelId, bool searchForward, bool warpAround) {
    const auto minId = 0;
    const auto maxId = CModelInfo::ms_modelInfoCount - 1;

    int modelId = startModelId;
    while (true)
    {
        modelId += searchForward ? 1 : -1;

        if (modelId < minId || modelId > maxId)
        {
            if (warpAround)
                modelId = searchForward ? minId : maxId;
            else
                break;
        }

        if (modelId == startModelId)
            break; // all models checked

        if (CModelInfo::ms_modelInfoPtrs[modelId] && CModelInfo::ms_modelInfoPtrs[modelId]->GetModelType() == type)
            return static_cast<eModelID>(modelId); // found
    }

    return eModelID::MODEL_INVALID; // not found
}

bool CModelInfo::IsPedModel(int modelId) {
    return modelId < ms_modelInfoCount && ms_modelInfoPtrs[modelId] && ms_modelInfoPtrs[modelId]->GetModelType() == MODEL_INFO_PED;
}

bool CModelInfo::IsVehicleModel(int modelId) {
    return modelId < ms_modelInfoCount && ms_modelInfoPtrs[modelId] && ms_modelInfoPtrs[modelId]->GetModelType() == MODEL_INFO_VEHICLE;
}

eVehicleType CModelInfo::GetVehicleModelType(int modelId) {
    if (modelId >= ms_modelInfoCount ||
        ms_modelInfoPtrs[modelId] == nullptr ||
        ms_modelInfoPtrs[modelId]->GetModelType() != MODEL_INFO_VEHICLE)
    {
        return eVehicleType::VEHICLE_INVALID;
    }

    return reinterpret_cast<CVehicleModelInfo*>(ms_modelInfoPtrs[modelId])->m_nVehicleType;
}

bool CModelInfo::IsBikeModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5B60)(modelId);
}

bool CModelInfo::IsBmxModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5C20)(modelId);
}

bool CModelInfo::IsBoatModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5A70)(modelId);
}

bool CModelInfo::IsCarModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5AA0)(modelId);
}

bool CModelInfo::IsHeliModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5B00)(modelId);
}

static bool IsMonsterTruckModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5BC0)(modelId);
}

bool CModelInfo::IsPlaneModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5B30)(modelId);
}

bool CModelInfo::IsQuadBikeModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5BF0)(modelId);
}

bool CModelInfo::IsTrailerModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5C50)(modelId);
}

bool CModelInfo::IsTrainModel(int modelId) {
    return ((bool (__cdecl*)(int))0x4C5AD0)(modelId);
}
