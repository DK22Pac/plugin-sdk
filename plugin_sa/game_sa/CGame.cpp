/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGame.h"

#define VAR_CGame__currArea 0xB72914

__int32& CGame::currArea = *(__int32*)VAR_CGame__currArea;

void CGame::TidyUpMemory(bool arg1, bool arg2)
{
	((void (__cdecl *)(bool, bool))0x53C500)(arg1, arg2);
}