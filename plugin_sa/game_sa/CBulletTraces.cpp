/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTraces.h"

unsigned int MAX_NUM_BULLETTRACES = 16;

CBulletTrace *CBulletTraces::aTraces = (CBulletTrace *)0xC7C748;

// Converted from cdecl void CBulletTraces::AddTrace(CVector * start,CVector * end,int weaponType,CEntity * entity) 0x573D40
void CBulletTraces::AddTrace(CVector* start, CVector* end, int weaponType, CEntity* entity) {
    plugin::Call<0x726AF0, CVector*, CVector*, int, CEntity*>(start, end, weaponType, entity);
}

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

// Converted from cdecl void CBulletTraces::Init(void) 00721D50 
void CBulletTraces::Init() {
    plugin::Call<0x721D50>();
}
