/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CExplosion.h"

CExplosion *gaExplosion = (CExplosion *)0x64E208;

// Converted from cdecl bool CExplosion::AddExplosion(CEntity *victim,CEntity *creator,eExplosionType explosionType,CVector const&posn,uint time) 0x5591C0
bool CExplosion::AddExplosion(CEntity* victim, CEntity* creator, eExplosionType explosionType, CVector const& posn, unsigned int time) {
    return plugin::CallAndReturn<bool, 0x5591C0, CEntity*, CEntity*, eExplosionType, CVector const&, unsigned int>(victim, creator, explosionType, posn, time);
}

// Converted from thiscall void CExplosion::CExplosion(void) 0x55ADE0
CExplosion::CExplosion() {
    plugin::CallMethod<0x55ADE0, CExplosion *>(this);
}

// Converted from cdecl uchar CExplosion::GetExplosionActiveCounter(uchar index) 0x559140
unsigned char CExplosion::GetExplosionActiveCounter(unsigned char index) {
    return plugin::CallAndReturn<unsigned char, 0x559140, unsigned char>(index);
}

// Converted from cdecl CVector* CExplosion::GetExplosionPosition(uchar index) 0x5591A0
CVector* CExplosion::GetExplosionPosition(unsigned char index) {
    return plugin::CallAndReturn<CVector*, 0x5591A0, unsigned char>(index);
}

// Converted from cdecl eExplosionType CExplosion::GetExplosionType(uchar index) 0x559180
eExplosionType CExplosion::GetExplosionType(unsigned char index) {
    eExplosionType result;
    plugin::CallAndReturn<eExplosionType, 0x559180, eExplosionType*, unsigned char>(&result, index);
    return result;
}

// Converted from cdecl void CExplosion::Initialise(void) 0x559030
void CExplosion::Initialise() {
    plugin::Call<0x559030>();
}

// Converted from cdecl void CExplosion::RemoveAllExplosionsInArea(CVector posn,float radius) 0x55AD40
void CExplosion::RemoveAllExplosionsInArea(CVector posn, float radius) {
    plugin::Call<0x55AD40, CVector, float>(posn, radius);
}

// Converted from cdecl void CExplosion::ResetExplosionActiveCounter(uchar index) 0x559160
void CExplosion::ResetExplosionActiveCounter(unsigned char index) {
    plugin::Call<0x559160, unsigned char>(index);
}

// Converted from cdecl void CExplosion::Shutdown(void) 0x559100
void CExplosion::Shutdown() {
    plugin::Call<0x559100>();
}

// Converted from cdecl bool CExplosion::TestForExplosionInArea(eExplosionType explosionType,float x1,float y1,float z1,float x2,float y2,float z2) 0x55AC80
bool CExplosion::TestForExplosionInArea(eExplosionType explosionType, float x1, float y1, float z1, float x2, float y2, float z2) {
    return plugin::CallAndReturn<bool, 0x55AC80, eExplosionType, float, float, float, float, float, float>(explosionType, x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CExplosion::Update(void) 0x55A0C0
void CExplosion::Update() {
    plugin::Call<0x55A0C0>();
}
