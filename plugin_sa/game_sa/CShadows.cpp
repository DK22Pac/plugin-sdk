#include "CShadows.h"

// Converted from static void CShadows::AddPermanentShadow(uchar type,RwTexture *texture,CVector *posn,float x1,float y1,float x2,float y2,short intensity,uchar red,uchar green,uchar blue,float zDistance,uint time,float scale) 0x706F60
void CShadows::AddPermanentShadow(unsigned char type, RwTexture* texture, CVector* posn, float x1, float y1, float x2, float y2, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, unsigned int time, float scale)
{
	((void (__cdecl *)(unsigned char, RwTexture*, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, unsigned int, float))0x706F60)(type, texture, posn, x1, y1, x2, y2, intensity, red, green, blue, zDistance, time, scale);
}

// Converted from static void CShadows::StoreShadowToBeRendered(uchar type,RwTexture *texture,CVector *posn,float x1,float y1,float x2,float y2,short intensity,uchar red,uchar green,uchar blue,float zDistance,bool bDrawOnWater,float scale,CRealTimeShadow *shadowData,bool bDrawOnBuildings) 0x707390
void CShadows::StoreShadowToBeRendered(unsigned char type, RwTexture* texture, CVector* posn, float x1, float y1, float x2, float y2, short intensity, unsigned char red, unsigned char green, unsigned char blue, float zDistance, bool bDrawOnWater, float scale, CRealTimeShadow* shadowData, bool bDrawOnBuildings)
{
	((void (__cdecl *)(unsigned char, RwTexture*, CVector*, float, float, float, float, short, unsigned char, unsigned char, unsigned char, float, bool, float, CRealTimeShadow*, bool))0x707390)(type, texture, posn, x1, y1, x2, y2, intensity, red, green, blue, zDistance, bDrawOnWater, scale, shadowData, bDrawOnBuildings);
}