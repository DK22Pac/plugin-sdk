/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPointLights.h"

// Converted from cdecl void CPointLights::AddLight(uchar lightType,CVector origin,CVector direction,float radius,float red,float green,float blue,uchar fogType,bool generateExtraShadows,CEntity *entityAffected) 0x7000E0
void CPointLights::AddLight(unsigned char lightType, CVector origin, CVector direction, float radius, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows, CEntity* entityAffected)
{
	((void (__cdecl *)(unsigned char, CVector, CVector, float, float, float, float, unsigned char, bool, CEntity*))0x7000E0)(lightType, origin, direction, radius, red, green, blue, fogType, generateExtraShadows, entityAffected);
}