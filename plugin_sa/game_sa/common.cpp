#include "common.h"

CVector FindPlayerCoors(int playerId)
{
	return ((CVector (__cdecl *)(int))0x56E010)(playerId);
}

CVector const& FindPlayerSpeed(int playerId)
{
	return ((CVector const& (__cdecl *)(int))0x56E090)(playerId);
}

CEntity * FindPlayerEntity(int playerId)
{
	return ((CEntity *(__cdecl *)(int))0x56E120)(playerId);
}

CVector const& FindPlayerCentreOfWorld(int playerId)
{
	return ((CVector const& (__cdecl *)(int))0x56E250)(playerId);
}

CVector const& FindPlayerCentreOfWorld_NoSniperShift(int playerId)
{
	return ((CVector const& (__cdecl *)(int))0x56E320)(playerId);
}

CVector FindPlayerCentreOfWorld_NoInteriorShift(int playerId)
{
	return ((CVector (__cdecl *)(int))0x56E400)(playerId);
}

float FindPlayerHeading(int playerId)
{
	return ((float (__cdecl *)(int))0x56E450)(playerId);
}

float FindPlayerHeight()
{
	return ((float (__cdecl *)())0x56E520)();
}

CPed * FindPlayerPed(int playerId)
{
	return ((CPed *(__cdecl *)(int))0x56E210)(playerId);
}

CVehicle * FindPlayerVehicle(int playerId, bool bIncludeRemote)
{
	return ((CVehicle *(__cdecl *)(int, bool))0x56E0D0)(playerId, bIncludeRemote);
}

bool InTwoPlayersMode()
{
	return ((bool (__cdecl *)())0x441390)();
}

CVector VectorSub(CVector const& from, CVector const& what)
{
	return ((CVector (__cdecl *)(CVector const&, CVector const&))0x40FE60)(from, what);
}

CVector Multiply3x3(CMatrix  const& matrix, CVector  const& vec)
{
	return ((CVector (__cdecl *)(CMatrix  const&, CVector  const&))0x59C790)(matrix, vec);
}

RpHAnimHierarchy *GetAnimHierarchyFromSkinClump(RpClump *clump)
{
	return ((RpHAnimHierarchy *(__cdecl *)(RpClump *))0x734A40)(clump);
}

uint32_t &ClumpOffset = *(uint32_t *)0xB5F878;

AnimBlendFrameData *RpAnimBlendClumpFindFrame(RpClump *clump, char *name)
{
	return ((AnimBlendFrameData *(__cdecl *)(RpClump *, char *))0x4D62A0)(clump, name);
}

char *MakeUpperCase(char *dest, char *src)
{
	return ((char *(__cdecl *)(char *, char *))0x7186E0)(dest, src);
}