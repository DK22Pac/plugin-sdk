#include "CBulletTraces.h"

CBulletTrace *CBulletTraces::aTraces = (CBulletTrace *)0xC7C748;

void CBulletTraces::AddTrace(CVector *start, CVector *end, float radius, unsigned int time, unsigned char transparency)
{
	((void (__cdecl *)(CVector *, CVector *, float, unsigned int, unsigned char))0x723750)(start, end, radius, time, transparency);
}

void CBulletTraces::Render()
{
	((void (__cdecl *)())0x723C10)();
}

void CBulletTraces::Update()
{
	((void (__cdecl *)())0x723FB0)();
}