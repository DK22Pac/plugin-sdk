/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CExplosion.h"

CAEExplosionAudioEntity &CExplosion::m_ExplosionAudioEntity = *(CAEExplosionAudioEntity *)0xC888D0;
unsigned int MAX_EXPLOSIONS = 16; // default 16
CExplosion *aExplosions = (CExplosion *)0xC88950;

// Converted from cdecl void CExplosion::ClearAllExplosions(void) 0x736840
void CExplosion::ClearAllExplosions() {
    plugin::Call<0x736840>();
}

// Converted from cdecl void CExplosion::Shutdown(void) 0x7368F0
void CExplosion::Shutdown() {
    plugin::Call<0x7368F0>();
}

// Converted from cdecl uchar CExplosion::GetExplosionActiveCounter(uchar explosionId) 0x736900
unsigned char CExplosion::GetExplosionActiveCounter(unsigned char explosionId) {
    return plugin::CallAndReturn<unsigned char, 0x736900, unsigned char>(explosionId);
}

// Converted from cdecl void CExplosion::ResetExplosionActiveCounter(uchar explosionId) 0x736910
void CExplosion::ResetExplosionActiveCounter(unsigned char explosionId) {
    plugin::Call<0x736910, unsigned char>(explosionId);
}

// Converted from cdecl bool CExplosion::DoesExplosionMakeSound(uchar explosionId) 0x736920
bool CExplosion::DoesExplosionMakeSound(unsigned char explosionId) {
    return plugin::CallAndReturn<bool, 0x736920, unsigned char>(explosionId);
}

// Converted from cdecl uint CExplosion::GetExplosionType(uchar explosionId) 0x736930
unsigned int CExplosion::GetExplosionType(unsigned char explosionId) {
    return plugin::CallAndReturn<unsigned int, 0x736930, unsigned char>(explosionId);
}

// Converted from cdecl CVector* CExplosion::GetExplosionPosition(uchar explosionId) 0x736940
CVector* CExplosion::GetExplosionPosition(unsigned char explosionId) {
    return plugin::CallAndReturn<CVector*, 0x736940, unsigned char>(explosionId);
}

// Converted from cdecl bool CExplosion::TestForExplosionInArea(eExplosionType explosionType,float x1,float y1,float z1,float x2,float y2,float z2) 0x736950
bool CExplosion::TestForExplosionInArea(eExplosionType explosionType, float x1, float y1, float z1, float x2, float y2, float z2) {
    return plugin::CallAndReturn<bool, 0x736950, eExplosionType, float, float, float, float, float, float>(explosionType, x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl void CExplosion::RemoveAllExplosionsInArea(CVector posn,float radius) 0x7369E0
void CExplosion::RemoveAllExplosionsInArea(CVector posn, float radius) {
    plugin::Call<0x7369E0, CVector, float>(posn, radius);
}

// Converted from cdecl void CExplosion::Initialise(void) 0x736A40
void CExplosion::Initialise() {
    plugin::Call<0x736A40>();
}

// Converted from cdecl bool CExplosion::AddExplosion(CEntity *victim,CEntity *creator,eExplosionType explosionType,CVector const&posn,uint time,uchar makeSound,float camShake,uchar visibility) 0x736A50
bool CExplosion::AddExplosion(CEntity* victim, CEntity* creator, eExplosionType explosionType, CVector const& posn, unsigned int time, unsigned char makeSound, float camShake, unsigned char visibility) {
    return plugin::CallAndReturn<bool, 0x736A50, CEntity*, CEntity*, eExplosionType, CVector const&, unsigned int, unsigned char, float, unsigned char>(victim, creator, explosionType, posn, time, makeSound, camShake, visibility);
}

// Converted from cdecl void CExplosion::Update(void) 0x737620
void CExplosion::Update() {
    plugin::Call<0x737620>();
}