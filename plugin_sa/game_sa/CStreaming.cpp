#include "CStreaming.h"

int &CStreaming::ms_currentZoneType = *(int *)0x8E4C20;
unsigned int &CStreaming::ms_streamingBufferSize = *(unsigned int *)0x8E4CA8;
unsigned int &CStreaming::ms_memoryUsed = *(unsigned int *)0x8E4CB4;
unsigned int &CStreaming::ms_numModelsRequested = *(unsigned int *)0x8E4CB8;
bool &CStreaming::ms_disableStreaming = *(bool *)0x9654B0;

void CStreaming::ImGonnaUseStreamingMemory()
{
	((void (__cdecl *)())0x407BE0)();
}

void CStreaming::IHaveUsedStreamingMemory()
{
	((void (__cdecl *)())0x407BF0)();
}

void CStreaming::MakeSpaceFor(unsigned int size)
{
	((void (__cdecl *)(unsigned int))0x40E120)(size);
}

void CStreaming::DisableCopBikes(bool bDisable)
{
    ((void(__cdecl *)(bool))0x407D10)(bDisable);
}

unsigned int CStreaming::GetDefaultMedicModel()
{
    return ((unsigned int(__cdecl *)())0x407D20)();
}

unsigned int CStreaming::GetDefaultAmbulanceModel()
{
    return ((unsigned int(__cdecl *)())0x407D30)();
}

unsigned int CStreaming::GetDefaultFiremanModel()
{
    return ((unsigned int(__cdecl *)())0x407D40)();
}

unsigned int CStreaming::GetDefaultFireEngineModel()
{
    return ((unsigned int(__cdecl *)())0x407DC0)();
}

unsigned int CStreaming::GetDefaultCopModel()
{
    return ((unsigned int(__cdecl *)())0x407C00)();
}

unsigned int CStreaming::GetDefaultCopCarModel(unsigned int arg0)
{
    return ((unsigned int(__cdecl *)())0x407C50)();
}

void CStreaming::LoadAllRequestedModels(bool bOnlyQuickRequests)
{
    ((void(__cdecl *)(bool))0x40EA10)(bOnlyQuickRequests);
}

// Used for loading player clothes
void CStreaming::LoadRequestedModels()
{
    ((void(__cdecl *)())0x40E3A0)();
}

void CStreaming::RemoveAllUnusedModels()
{
    ((void(__cdecl *)())0x40CF80)();
}

void CStreaming::RemoveModel(int modelIndex)
{
    ((void(__cdecl *)(int))0x4089A0)(modelIndex);
}

void CStreaming::RequestModel(int modelIndex, int flags)
{
    ((void(__cdecl *)(int, int))0x4087E0)(modelIndex, flags);
}

void CStreaming::SetModelIsDeletable(int modelIndex)
{
    ((void(__cdecl *)(int))0x409C10)(modelIndex);
}

void CStreaming::SetMissionDoesntRequireModel(int modelIndex)
{
    ((void(__cdecl *)(int))0x409C90)(modelIndex);
}

void CStreaming::LoadScene(CVector const& point)
{
    ((void(__cdecl *)(CVector const&))0x40ED80)(point);
}

void CStreaming::LoadSceneCollision(CVector const& coord)
{
    ((void(__cdecl *)(CVector const&))0x40ED80)(coord);
}