/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTraces.h"

CBulletTrace *CBulletTraces::aTraces = (CBulletTrace *)0x8118D0;

// Converted from cdecl void CBulletTraces::AddTrace(CVector * start,CVector * end,float radius,uint time,uchar transparency) 0x573910
void CBulletTraces::AddTrace(CVector* start, CVector* end, float radius, unsigned int time, unsigned char transparency) {
    plugin::Call<0x573910, CVector*, CVector*, float, unsigned int, unsigned char>(start, end, radius, time, transparency);
}

// Converted from cdecl void CBulletTraces::AddTrace(CVector * start,CVector * end,int weaponType,CEntity * entity) 0x573D40
void CBulletTraces::AddTrace(CVector* start, CVector* end, int weaponType, CEntity* entity) {
    plugin::Call<0x573D40, CVector*, CVector*, int, CEntity*>(start, end, weaponType, entity);
}

// Converted from cdecl void CBulletTraces::Init(void) 0x573E80 
void CBulletTraces::Init() {
    plugin::Call<0x573E80>();
}

// Converted from cdecl void CBulletTraces::Render(void) 0x5729F0 
void CBulletTraces::Render() {
    plugin::Call<0x5729F0>();
}

// Converted from thiscall void CBulletTrace::CBulletTrace(void) 0x575190 
CBulletTrace::CBulletTrace() {
    plugin::CallMethod<0x575190, CBulletTrace *>(this);
}
