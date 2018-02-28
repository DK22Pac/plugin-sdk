/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPlayerInfo.h"

// Converted from void __thiscall CPlayerInfo::Clear(void) 0x4BE870
void CPlayerInfo::Clear()
{
	((void (__thiscall *)(CPlayerInfo*))0x4BE870)(this);
}

// Converted from void __thiscall CPlayerInfo::Process(void) 0x4BCA90
void CPlayerInfo::Process()
{
	((void (__thiscall *)(CPlayerInfo*))0x4BCA90)(this);
}

// Converted from bool __thiscall CPlayerInfo::IsPlayerInRemoteMode(void) 0x4BCA60
bool CPlayerInfo::IsPlayerInRemoteMode()
{
	return ((bool (__thiscall *)(CPlayerInfo*))0x4BCA60)(this);
}

// Converted from void __thiscall CPlayerInfo::SavePlayerInfo(unsigned char *bufferPointer, unsigned int *structSize) 0x4BC800
void CPlayerInfo::SavePlayerInfo(unsigned char* bufferPointer, unsigned int* structSize)
{
	((void (__thiscall *)(CPlayerInfo*, unsigned char*, unsigned int*))0x4BC800)(this, bufferPointer, structSize);
}

// Converted from void __thiscall CPlayerInfo::LoadPlayerInfo(unsigned char *bufferPointer, unsigned int structSize) 0x4BC5B0
void CPlayerInfo::LoadPlayerInfo(unsigned char* bufferPointer, unsigned int structSize)
{
	((void (__thiscall *)(CPlayerInfo*, unsigned char*, unsigned int))0x4BC5B0)(this, bufferPointer, structSize);
}

// Converted from void __thiscall CPlayerInfo::FindClosestCarSectorList(CPtrList &ptrList, CPed *ped, float conrerAX, float cornerAY, float cornerBX, float cornerBY, float *dist, CVehicle **closestCar) 0x4BC2F0
void CPlayerInfo::FindClosestCarSectorList(CPtrList& ptrList, CPed* ped, float conrerAX, float cornerAY, float cornerBX, float cornerBY, float* dist, CVehicle** closestCar)
{
	((void (__thiscall *)(CPlayerInfo*, CPtrList&, CPed*, float, float, float, float, float*, CVehicle**))0x4BC2F0)(this, ptrList, ped, conrerAX, cornerAY, cornerBX, cornerBY, dist, closestCar);
}

// Converted from CVector __thiscall CPlayerInfo::GetPos(void) 0x4BC2A0
CVector CPlayerInfo::GetPos()
{
	return ((CVector (__thiscall *)(CPlayerInfo*))0x4BC2A0)(this);
}

// Converted from bool __thiscall CPlayerInfo::IsRestartingAfterDeath(void) 0x4BBF50
bool CPlayerInfo::IsRestartingAfterDeath()
{
	return ((bool (__thiscall *)(CPlayerInfo*))0x4BBF50)(this);
}

// Converted from bool __thiscall CPlayerInfo::IsRestartingAfterArrest(void) 0x4BBF30
bool CPlayerInfo::IsRestartingAfterArrest()
{
	return ((bool (__thiscall *)(CPlayerInfo*))0x4BBF30)(this);
}

// Converted from void __thiscall CPlayerInfo::KillPlayer(void) 0x4BBEE0
void CPlayerInfo::KillPlayer()
{
	((void (__thiscall *)(CPlayerInfo*))0x4BBEE0)(this);
}

// Converted from void __thiscall CPlayerInfo::ArrestPlayer(void) 0x4BBE90
void CPlayerInfo::ArrestPlayer()
{
	((void (__thiscall *)(CPlayerInfo*))0x4BBE90)(this);
}

// Converted from void __thiscall CPlayerInfo::CancelPlayerEnteringCars(CVehicle *vehicle) 0x4BBE40
void CPlayerInfo::CancelPlayerEnteringCars(CVehicle* vehicle)
{
	((void (__thiscall *)(CPlayerInfo*, CVehicle*))0x4BBE40)(this, vehicle);
}

// Converted from void __thiscall CPlayerInfo::MakePlayerSafe(bool safe) 0x4BBC10
void CPlayerInfo::MakePlayerSafe(bool safe)
{
	((void (__thiscall *)(CPlayerInfo*, bool))0x4BBC10)(this, safe);
}

// Converted from void __thiscall CPlayerInfo::BlowUpRCBuggy(bool blowUp) 0x4BBBC0
void CPlayerInfo::BlowUpRCBuggy(bool blowUp)
{
	((void (__thiscall *)(CPlayerInfo*, bool))0x4BBBC0)(this, blowUp);
}

// Converted from void __thiscall CPlayerInfo::SetPlayerSkin(char const *skinName) 0x4BBB70
void CPlayerInfo::SetPlayerSkin(char const* skinName)
{
	((void (__thiscall *)(CPlayerInfo*, char const*))0x4BBB70)(this, skinName);
}

// Converted from void __thiscall CPlayerInfo::LoadPlayerSkin(void) 0x4BBB30
void CPlayerInfo::LoadPlayerSkin()
{
	((void (__thiscall *)(CPlayerInfo*))0x4BBB30)(this);
}

// Converted from void __thiscall CPlayerInfo::DeletePlayerSkin(void) 0x4BBB10
void CPlayerInfo::DeletePlayerSkin()
{
	((void (__thiscall *)(CPlayerInfo*))0x4BBB10)(this);
}