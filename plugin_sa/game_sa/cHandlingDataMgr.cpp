/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cHandlingDataMgr.h"

cHandlingDataMgr& gHandlingDataMgr = *(cHandlingDataMgr*)0xC2B9C8;

cHandlingDataMgr::cHandlingDataMgr()
{
	((void (__thiscall *)(cHandlingDataMgr *))0x6F5330)(this);
};

void cHandlingDataMgr::Initialise()
{
	((void (__thiscall *)(cHandlingDataMgr *))0x5BF3D0)(this);
};

void cHandlingDataMgr::LoadHandlingData()
{
	((void (__thiscall *)(cHandlingDataMgr *))0x5BD830)(this);
};

int cHandlingDataMgr::FindExactWord(char *line, char *nameTable, int entrySize, int entryCount)
{
	return ((int (__thiscall *)(cHandlingDataMgr *, char *, char *, int, int))0x6F4F30)(this, line, nameTable, entrySize, entryCount);
};

bool cHandlingDataMgr::IsNotRearDriveVehicle(unsigned char handlingId)
{
	return ((bool (__thiscall *)(cHandlingDataMgr *, unsigned char))0x6A0480)(this, handlingId);
};

bool cHandlingDataMgr::IsNotFrontDriveVehicle(unsigned char handlingId)
{
	return ((bool (__thiscall *)(cHandlingDataMgr *, unsigned char))0x6A04B0)(this, handlingId);
};

int cHandlingDataMgr::GetHandlingId(char *name)
{
	return ((int (__thiscall *)(cHandlingDataMgr *, char *))0x6F4FD0)(this, name);
};

void cHandlingDataMgr::ConvertDataToWorldUnits(tHandlingData *handling)
{
	((void (__thiscall *)(cHandlingDataMgr *, tHandlingData *))0x6F5010)(this, handling);
};

void cHandlingDataMgr::ConvertDataToGameUnits(tHandlingData *handling)
{
	((void (__thiscall *)(cHandlingDataMgr *, tHandlingData *))0x6F5080)(this, handling);
};

void cHandlingDataMgr::ConvertBikeDataToWorldUnits(tBikeHandlingData *bikeHandling)
{
	((void (__thiscall *)(cHandlingDataMgr *, tBikeHandlingData *))0x6F5240)(this, bikeHandling);
};

void cHandlingDataMgr::ConvertBikeDataToGameUnits(tBikeHandlingData *bikeHandling)
{
	((void (__thiscall *)(cHandlingDataMgr *, tBikeHandlingData *))0x6F5290)(this, bikeHandling);
};

tFlyingHandlingData *cHandlingDataMgr::GetFlyingPointer(unsigned char handlingId)
{
	return ((tFlyingHandlingData *(__thiscall *)(cHandlingDataMgr *, unsigned char))0x6F52D0)(this, handlingId);
};

tBoatHandlingData *cHandlingDataMgr::GetBoatPointer(unsigned char handlingId)
{
	return ((tBoatHandlingData *(__thiscall *)(cHandlingDataMgr *, unsigned char))0x6F5300)(this, handlingId);
};