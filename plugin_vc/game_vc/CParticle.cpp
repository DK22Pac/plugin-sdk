/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CParticle.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float(&CParticle::ms_afRandTable)[20] = *reinterpret_cast<float(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x7D54A8, 0x7D54B0, 0x7D44B0));
PLUGIN_VARIABLE float(&CParticle::m_CosTable)[1024] = *reinterpret_cast<float(*)[1024]>(GLOBAL_ADDRESS_BY_VERSION(0x7EFE50, 0x7EFE58, 0x7EEE58));
PLUGIN_VARIABLE float(&CParticle::m_SinTable)[1024] = *reinterpret_cast<float(*)[1024]>(GLOBAL_ADDRESS_BY_VERSION(0x943088, 0x943090, 0x942090));
PLUGIN_VARIABLE CParticle *&CParticle::m_pUnusedListHead = *reinterpret_cast<CParticle **>(GLOBAL_ADDRESS_BY_VERSION(0x98002C, 0x980034, 0x97F034));
PLUGIN_VARIABLE int &nParticleCreationInterval = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x698300, 0x698300, 0x697308));
PLUGIN_VARIABLE float &PARTICLE_WIND_TEST_SCALE = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x698304, 0x698304, 0x69730C));
PLUGIN_VARIABLE float &fParticleScaleLimit = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x698308, 0x698308, 0x697310));
PLUGIN_VARIABLE char *&ParticleFilename = *reinterpret_cast<char **>(GLOBAL_ADDRESS_BY_VERSION(0x698780, 0x698780, 0x697788));
PLUGIN_VARIABLE CParticle(&gParticles)[750] = *reinterpret_cast<CParticle(*)[750]>(GLOBAL_ADDRESS_BY_VERSION(0x76E4EC, 0x76E4EC, 0x76D4EC));
PLUGIN_VARIABLE unsigned int &numWaterDropOnScreen = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9753BC, 0x9753C4, 0x9743C4));

int ctor_addr(CParticle) = ADDRESS_BY_VERSION(0x565A90, 0x565AB0, 0x565980);
int ctor_gaddr(CParticle) = GLOBAL_ADDRESS_BY_VERSION(0x565A90, 0x565AB0, 0x565980);

int dtor_addr(CParticle) = ADDRESS_BY_VERSION(0x565A80, 0x565AA0, 0x565970);
int dtor_gaddr(CParticle) = GLOBAL_ADDRESS_BY_VERSION(0x565A80, 0x565AA0, 0x565970);

int addrof(CParticle::AddJetExplosion) = ADDRESS_BY_VERSION(0x5604F0, 0x560510, 0x5603E0);
int gaddrof(CParticle::AddJetExplosion) = GLOBAL_ADDRESS_BY_VERSION(0x5604F0, 0x560510, 0x5603E0);

void CParticle::AddJetExplosion(CVector const &posn, float power, float size) {
    plugin::CallDynGlobal<CVector const &, float, float>(gaddrof(CParticle::AddJetExplosion), posn, power, size);
}

int addrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const *, int, int, int, int)) = ADDRESS_BY_VERSION(0x563CC0, 0x563CE0, 0x563BB0);
int gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const *, int, int, int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x563CC0, 0x563CE0, 0x563BB0);

CParticle *CParticle::AddParticle(tParticleType particleType, CVector const &posn, CVector const &direction, CEntity *entity, float size, RwRGBA const *color, int rotationSpeed, int rotation, int startFrame, int lifeSpan) {
    return plugin::CallAndReturnDynGlobal<CParticle *, tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const *, int, int, int, int>(gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const *, int, int, int, int)), particleType, posn, direction, entity, size, color, rotationSpeed, rotation, startFrame, lifeSpan);
}

int addrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int)) = ADDRESS_BY_VERSION(0x5648F0, 0x564910, 0x5647E0);
int gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x5648F0, 0x564910, 0x5647E0);

CParticle *CParticle::AddParticle(tParticleType particleType, CVector const &posn, CVector const &direction, CEntity *entity, float size, int rotationSpeed, int rotation, int startFrame, int lifeSpan) {
    return plugin::CallAndReturnDynGlobal<CParticle *, tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int>(gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int)), particleType, posn, direction, entity, size, rotationSpeed, rotation, startFrame, lifeSpan);
}

int addrof(CParticle::AddParticlesAlongLine) = ADDRESS_BY_VERSION(0x564940, 0x564960, 0x564830);
int gaddrof(CParticle::AddParticlesAlongLine) = GLOBAL_ADDRESS_BY_VERSION(0x564940, 0x564960, 0x564830);

void CParticle::AddParticlesAlongLine(tParticleType particleType, CVector const *lineStart, CVector const *lineEnd, CVector const &direction, float step, CEntity *entity, float size, int rotationSpeed, int rotation, int startFrame, int lifeSpan) {
    plugin::CallDynGlobal<tParticleType, CVector const *, CVector const *, CVector const &, float, CEntity *, float, int, int, int, int>(gaddrof(CParticle::AddParticlesAlongLine), particleType, lineStart, lineEnd, direction, step, entity, size, rotationSpeed, rotation, startFrame, lifeSpan);
}

int addrof(CParticle::HandleShipsAtHorizonStuff) = ADDRESS_BY_VERSION(0x5BC440, 0x5BC460, 0x5BC270);
int gaddrof(CParticle::HandleShipsAtHorizonStuff) = GLOBAL_ADDRESS_BY_VERSION(0x5BC440, 0x5BC460, 0x5BC270);

void CParticle::HandleShipsAtHorizonStuff() {
    plugin::CallDynGlobal(gaddrof(CParticle::HandleShipsAtHorizonStuff));
}

int addrof(CParticle::HandleShootableBirdsStuff) = ADDRESS_BY_VERSION(0x5D0180, 0x5D01A0, 0x5CFF50);
int gaddrof(CParticle::HandleShootableBirdsStuff) = GLOBAL_ADDRESS_BY_VERSION(0x5D0180, 0x5D01A0, 0x5CFF50);

void CParticle::HandleShootableBirdsStuff(CEntity *entity, CVector const &posn) {
    plugin::CallDynGlobal<CEntity *, CVector const &>(gaddrof(CParticle::HandleShootableBirdsStuff), entity, posn);
}

int addrof(CParticle::Initialise) = ADDRESS_BY_VERSION(0x564EC0, 0x564EE0, 0x564DB0);
int gaddrof(CParticle::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x564EC0, 0x564EE0, 0x564DB0);

void CParticle::Initialise() {
    plugin::CallDynGlobal(gaddrof(CParticle::Initialise));
}

int addrof(CParticle::ReloadConfig) = ADDRESS_BY_VERSION(0x565940, 0x565960, 0x565830);
int gaddrof(CParticle::ReloadConfig) = GLOBAL_ADDRESS_BY_VERSION(0x565940, 0x565960, 0x565830);

void CParticle::ReloadConfig() {
    plugin::CallDynGlobal(gaddrof(CParticle::ReloadConfig));
}

int addrof(CParticle::RemovePSystem) = ADDRESS_BY_VERSION(0x560870, 0x560890, 0x560760);
int gaddrof(CParticle::RemovePSystem) = GLOBAL_ADDRESS_BY_VERSION(0x560870, 0x560890, 0x560760);

void CParticle::RemovePSystem(tParticleType particleType) {
    plugin::CallDynGlobal<tParticleType>(gaddrof(CParticle::RemovePSystem), particleType);
}

int addrof(CParticle::RemoveParticle) = ADDRESS_BY_VERSION(0x560830, 0x560850, 0x560720);
int gaddrof(CParticle::RemoveParticle) = GLOBAL_ADDRESS_BY_VERSION(0x560830, 0x560850, 0x560720);

void CParticle::RemoveParticle(CParticle *particle, CParticle *previousParticle, tParticleSystemData *particleSystsem) {
    plugin::CallDynGlobal<CParticle *, CParticle *, tParticleSystemData *>(gaddrof(CParticle::RemoveParticle), particle, previousParticle, particleSystsem);
}

int addrof(CParticle::Render) = ADDRESS_BY_VERSION(0x5608C0, 0x5608E0, 0x5607B0);
int gaddrof(CParticle::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5608C0, 0x5608E0, 0x5607B0);

void CParticle::Render() {
    plugin::CallDynGlobal(gaddrof(CParticle::Render));
}

int addrof(CParticle::Shutdown) = ADDRESS_BY_VERSION(0x564AE0, 0x564B00, 0x5649D0);
int gaddrof(CParticle::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x564AE0, 0x564B00, 0x5649D0);

void CParticle::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CParticle::Shutdown));
}

int addrof(CParticle::Update) = ADDRESS_BY_VERSION(0x561E10, 0x561E30, 0x561D00);
int gaddrof(CParticle::Update) = GLOBAL_ADDRESS_BY_VERSION(0x561E10, 0x561E30, 0x561D00);

void CParticle::Update() {
    plugin::CallDynGlobal(gaddrof(CParticle::Update));
}
