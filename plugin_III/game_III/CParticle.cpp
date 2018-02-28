/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CParticle.h"

// Converted from cdecl void CParticle::ReloadConfig(void) 0x50C430
void CParticle::ReloadConfig() {
    plugin::Call<0x50C430>();
}

// Converted from cdecl void CParticle::Initialise(void) 0x50C570
void CParticle::Initialise() {
    plugin::Call<0x50C570>();
}

// Converted from cdecl void CParticle::Shutdown(void) 0x50CF40
void CParticle::Shutdown() {
    plugin::Call<0x50CF40>();
}

// Converted from cdecl CParticle* CParticle::AddParticle(tParticleType type,CVector const&posn,CVector const&direction,CEntity *entity,float size,int rotationSpeed,int rotation,int currentFrame,int lifeSpan) 0x50D140
CParticle* CParticle::AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, int rotationSpeed, int rotation, int currentFrame, int lifeSpan) {
    return plugin::CallAndReturn<CParticle*, 0x50D140, tParticleType, CVector const&, CVector const&, CEntity*, float, int, int, int, int>(type, posn, direction, entity, size, rotationSpeed, rotation, currentFrame, lifeSpan);
}

// Converted from cdecl CParticle* CParticle::AddParticle(tParticleType type,CVector const&posn,CVector const&direction,CEntity *entity,float,RwRGBA const&color,int rotationSpeed,int rotation,int currentFrame,int lifeSpan) 0x50D190
CParticle* CParticle::AddParticle(tParticleType type, CVector const& posn, CVector const& direction, CEntity* entity, float size, RwRGBA const& color, int rotationSpeed, int rotation, int currentFrame, int lifeSpan) {
    return plugin::CallAndReturn<CParticle*, 0x50D190, tParticleType, CVector const&, CVector const&, CEntity*, float, RwRGBA const&, int, int, int, int>(type, posn, direction, entity, size, color, rotationSpeed, rotation, currentFrame, lifeSpan);
}

// Converted from cdecl void CParticle::Update(void) 0x50DCF0
void CParticle::Update() {
    plugin::Call<0x50DCF0>();
}

// Converted from cdecl void CParticle::Render(void) 0x50EE20
void CParticle::Render() {
    plugin::Call<0x50EE20>();
}

// Converted from cdecl void CParticle::RemovePSystem(tParticleType particleType) 0x50F6E0
void CParticle::RemovePSystem(tParticleType particleType) {
    plugin::Call<0x50F6E0, tParticleType>(particleType);
}

// Converted from cdecl void CParticle::RemoveParticle(CParticle* particle,CParticle* previousParticle,tParticleSystemData *particleSystem) 0x50F720
void CParticle::RemoveParticle(CParticle* particle, CParticle* previousParticle, tParticleSystemData* particleSystem) {
    plugin::Call<0x50F720, CParticle*, CParticle*, tParticleSystemData*>(particle, previousParticle, particleSystem);
}

// Converted from cdecl void CParticle::AddJetExplosion(CVector const& posn,float power,float size) 0x50F760
void CParticle::AddJetExplosion(CVector const& posn, float power, float size) {
    plugin::Call<0x50F760, CVector const&, float, float>(posn, power, size);
}

// Converted from cdecl void CParticle::AddYardieDoorSmoke(CVector const& posn,CMatrix const& matrix) 0x50FAA0
void CParticle::AddYardieDoorSmoke(CVector const& posn, CMatrix const& matrix) {
    plugin::Call<0x50FAA0, CVector const&, CMatrix const&>(posn, matrix);
}