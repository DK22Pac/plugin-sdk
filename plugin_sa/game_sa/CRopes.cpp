/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRopes.h"

int& CRopes::ms_bPlayerControlsCrane = *(int*)0xB76898;
unsigned int& CRopes::m_nRopeIdCreationCounter = *(unsigned int*)0xB781F8;
CRope(&CRopes::ms_aRopes)[8] = *reinterpret_cast<CRope(*)[MAX_NUM_ROPES]>(0xB768B8);

void CRopes::Init()
{
    ((void(__cdecl *)())0x555DC0)();
}

void CRopes::Shutdown()
{
    ((void(__cdecl *)())0x556B10)();
}

void CRopes::Update()
{
    ((void(__cdecl *)())0x558D70)();
}

void CRopes::Render()
{
    ((void(__cdecl *)())0x556AE0)();
}

bool CRopes::RegisterRope(unsigned int ropeId, unsigned int ropeType, CVector startPos, bool expires, unsigned char segmentCount, unsigned char flags, CEntity* holder, unsigned int timeExpire)
{
    return ((bool(__cdecl *)(unsigned int, unsigned int, CVector, bool, unsigned char, unsigned char, CEntity*, unsigned int))0x556B40)(ropeId, ropeType, startPos, expires, segmentCount, flags, holder, timeExpire);
}

float CRopes::FindPickupHeight(CEntity* entity)
{
    return ((float(__cdecl *)(CEntity*))0x556760)(entity);
}

unsigned int CRopes::FindRope(unsigned int ropeId)
{
    return ((int(__cdecl *)(unsigned int))0x556000)(ropeId);
}

bool CRopes::FindCoorsAlongRope(unsigned int ropeId, float dist, CVector* outPosn, CVector* outSpeed)
{
    return ((bool(__cdecl *)(unsigned int, float, CVector*, CVector*))0x555E40)(ropeId, dist, outPosn, outSpeed);
}

unsigned int CRopes::CreateRopeForSwatPed(const CVector& startPos)
{
    return ((unsigned int(__cdecl *)(const CVector&))0x558D10)(startPos);
}

bool CRopes::IsCarriedByRope(CEntity* entity)
{
    return ((bool(__cdecl *)(CEntity*))0x555F80)(entity);
}

void CRopes::SetSpeedOfTopNode(unsigned int ropeId, CVector dirSpeed)
{
    ((void(__cdecl *)(unsigned int, CVector))0x555DF0)(ropeId, dirSpeed);
}
