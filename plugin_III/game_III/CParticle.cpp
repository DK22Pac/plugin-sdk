/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CParticle.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float(&CParticle::ms_afRandTable)[20] = *reinterpret_cast<float(*)[20]>(GLOBAL_ADDRESS_BY_VERSION(0x6E98C8, 0x6E98C8, 0x6F9A08));
PLUGIN_VARIABLE float(&CParticle::m_CosTable)[1024] = *reinterpret_cast<float(*)[1024]>(GLOBAL_ADDRESS_BY_VERSION(0x70DA18, 0x70DA18, 0x71DB58));
PLUGIN_VARIABLE float(&CParticle::m_SinTable)[1024] = *reinterpret_cast<float(*)[1024]>(GLOBAL_ADDRESS_BY_VERSION(0x877358, 0x877308, 0x887448));
PLUGIN_VARIABLE CParticle *&CParticle::m_pUnusedListHead = *reinterpret_cast<CParticle **>(GLOBAL_ADDRESS_BY_VERSION(0x8F3958, 0x8F3A0C, 0x903B4C));
PLUGIN_VARIABLE CParticle(&gParticleArray)[1000] = *reinterpret_cast<CParticle(*)[1000]>(GLOBAL_ADDRESS_BY_VERSION(0x62F88C, 0x62F88C, 0x63F88C));
PLUGIN_VARIABLE RwTexture *&gpFlame1Tex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x648ECC, 0x648ECC, 0x658ECC));
PLUGIN_VARIABLE RwRaster *&gpFlame1Raster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x648ED0, 0x648ED0, 0x658ED0));
PLUGIN_VARIABLE RwTexture *&gpFlame5Tex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x648ED4, 0x648ED4, 0x658ED4));
PLUGIN_VARIABLE RwRaster *&gpFlame5Raster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x648ED8, 0x648ED8, 0x658ED8));
PLUGIN_VARIABLE RwTexture *(&gpSmokeTex)[5] = *reinterpret_cast<RwTexture *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648EDC, 0x648EDC, 0x658EDC));
PLUGIN_VARIABLE RwRaster *(&gpSmokeRaster)[5] = *reinterpret_cast<RwRaster *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648EF0, 0x648EF0, 0x658EF0));
PLUGIN_VARIABLE RwTexture *(&gpSmoke2Tex)[5] = *reinterpret_cast<RwTexture *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648F04, 0x648F04, 0x658F04));
PLUGIN_VARIABLE RwRaster *(&gpSmoke2Raster)[5] = *reinterpret_cast<RwRaster *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648F18, 0x648F18, 0x658F18));
PLUGIN_VARIABLE RwTexture *(&gpGunFlashTex)[4] = *reinterpret_cast<RwTexture *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x648F2C, 0x648F2C, 0x658F2C));
PLUGIN_VARIABLE RwRaster *(&gpGunFlashRaster)[4] = *reinterpret_cast<RwRaster *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x648F3C, 0x648F3C, 0x658F3C));
PLUGIN_VARIABLE RwTexture *&gpBloodTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x648F4C, 0x648F4C, 0x658F4C));
PLUGIN_VARIABLE RwRaster *&gpBloodRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x648F50, 0x648F50, 0x658F50));
PLUGIN_VARIABLE RwTexture *&gpPointlightTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x648F54, 0x648F54, 0x658F54));
PLUGIN_VARIABLE RwTexture *(&gpRubberTex)[5] = *reinterpret_cast<RwTexture *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648F58, 0x648F58, 0x658F58));
PLUGIN_VARIABLE RwRaster *(&gpRubberRaster)[5] = *reinterpret_cast<RwRaster *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648F6C, 0x648F6C, 0x658F6C));
PLUGIN_VARIABLE RwTexture *(&gpRainSplashTex)[5] = *reinterpret_cast<RwTexture *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648F80, 0x648F80, 0x658F80));
PLUGIN_VARIABLE RwRaster *(&gpRainSplashRaster)[5] = *reinterpret_cast<RwRaster *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x648F94, 0x648F94, 0x658F94));
PLUGIN_VARIABLE RwTexture *(&gpWatersprayTex)[3] = *reinterpret_cast<RwTexture *(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x648FA8, 0x648FA8, 0x658FA8));
PLUGIN_VARIABLE RwRaster *(&gpWatersprayRaster)[3] = *reinterpret_cast<RwRaster *(*)[3]>(GLOBAL_ADDRESS_BY_VERSION(0x648FB4, 0x648FB4, 0x658FB4));
PLUGIN_VARIABLE RwTexture *(&gpCarSplashTex)[4] = *reinterpret_cast<RwTexture *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x648FC0, 0x648FC0, 0x658FC0));
PLUGIN_VARIABLE RwRaster *(&gpCarSplashRaster)[4] = *reinterpret_cast<RwRaster *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x648FD0, 0x648FD0, 0x658FD0));
PLUGIN_VARIABLE RwTexture *&gpRainDropSmallTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x648FE0, 0x648FE0, 0x658FE0));
PLUGIN_VARIABLE RwRaster *&gpRainDropSmallRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x648FE4, 0x648FE4, 0x658FE4));
PLUGIN_VARIABLE RwTexture *(&gpRainSplashupTex)[2] = *reinterpret_cast<RwTexture *(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x648FE8, 0x648FE8, 0x658FE8));
PLUGIN_VARIABLE RwRaster *(&gpRainSplashupRaster)[2] = *reinterpret_cast<RwRaster *(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x648FF0, 0x648FF0, 0x658FF0));
PLUGIN_VARIABLE RwTexture *&gpLeafTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x648FF8, 0x648FF8, 0x658FF8));
PLUGIN_VARIABLE RwRaster *&gpLeafRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x648FFC, 0x648FFC, 0x658FFC));
PLUGIN_VARIABLE RwTexture *&gpGungeTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x649000, 0x649000, 0x659000));
PLUGIN_VARIABLE RwRaster *&gpGungeRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x649004, 0x649004, 0x659004));
PLUGIN_VARIABLE RwTexture *(&gpExplosionMediumTex)[6] = *reinterpret_cast<RwTexture *(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x649008, 0x649008, 0x659008));
PLUGIN_VARIABLE RwRaster *(&gpExplosionMediumRaster)[6] = *reinterpret_cast<RwRaster *(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x649020, 0x649020, 0x659020));
PLUGIN_VARIABLE RwTexture *&gpCloudTex1 = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x649038, 0x649038, 0x659038));
PLUGIN_VARIABLE RwRaster *&gpCloudRaster1 = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x64903C, 0x64903C, 0x65903C));
PLUGIN_VARIABLE RwTexture *&gpCloudTex4 = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x649040, 0x649040, 0x659040));
PLUGIN_VARIABLE RwRaster *&gpCloudRaster4 = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x649044, 0x649044, 0x659044));
PLUGIN_VARIABLE RwTexture *&gpBloodSmallTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x649048, 0x649048, 0x659048));
PLUGIN_VARIABLE RwRaster *&gpBloodSmallRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x64904C, 0x64904C, 0x65904C));
PLUGIN_VARIABLE RwTexture *&gpBulletHitTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x649050, 0x649050, 0x659050));
PLUGIN_VARIABLE RwRaster *&gpBulletHitRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x649054, 0x649054, 0x659054));
PLUGIN_VARIABLE RwTexture *&gpCollisionSmokeTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x649058, 0x649058, 0x659058));
PLUGIN_VARIABLE RwRaster *&gpCollisionSmokeRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x64905C, 0x64905C, 0x65905C));
PLUGIN_VARIABLE RwTexture *(&gpCarDebrisTex)[4] = *reinterpret_cast<RwTexture *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x649060, 0x649060, 0x659060));
PLUGIN_VARIABLE RwRaster *(&gpCarDebrisRaster)[4] = *reinterpret_cast<RwRaster *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x649070, 0x649070, 0x659070));
PLUGIN_VARIABLE RwTexture *(&gpBirdfrontTex)[4] = *reinterpret_cast<RwTexture *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x649080, 0x649080, 0x659080));
PLUGIN_VARIABLE RwRaster *(&gpBirdfrontRaster)[4] = *reinterpret_cast<RwRaster *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x649090, 0x649090, 0x659090));
PLUGIN_VARIABLE RwTexture *&gpGunShellTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x6490A0, 0x6490A0, 0x6590A0));
PLUGIN_VARIABLE RwRaster *&gpGunShellRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x6490A4, 0x6490A4, 0x6590A4));
PLUGIN_VARIABLE RwTexture *&gpWakeOldTex = *reinterpret_cast<RwTexture **>(GLOBAL_ADDRESS_BY_VERSION(0x6490A8, 0x6490A8, 0x6590A8));
PLUGIN_VARIABLE RwRaster *&gpWakeOldRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x6490AC, 0x6490AC, 0x6590AC));
PLUGIN_VARIABLE RwRaster *(&gpRainDropRaster)[4] = *reinterpret_cast<RwRaster *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x87BEE0, 0x87BE90, 0x88BFD0));
PLUGIN_VARIABLE RwTexture *(&gpRainDropTex)[4] = *reinterpret_cast<RwTexture *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x880660, 0x880610, 0x890750));
PLUGIN_VARIABLE RwRaster *&gpPointlightRaster = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FE0, 0x8F6094, 0x9061D4));

int ctor_addr(CParticle) = ADDRESS_BY_VERSION(0x50C410, 0x50C500, 0x50C490);
int ctor_gaddr(CParticle) = GLOBAL_ADDRESS_BY_VERSION(0x50C410, 0x50C500, 0x50C490);

int dtor_addr(CParticle) = ADDRESS_BY_VERSION(0x50C420, 0x50C510, 0x50C4A0);
int dtor_gaddr(CParticle) = GLOBAL_ADDRESS_BY_VERSION(0x50C420, 0x50C510, 0x50C4A0);

int addrof(CParticle::AddJetExplosion) = ADDRESS_BY_VERSION(0x50F760, 0x50F950, 0x50F8E0);
int gaddrof(CParticle::AddJetExplosion) = GLOBAL_ADDRESS_BY_VERSION(0x50F760, 0x50F950, 0x50F8E0);

void CParticle::AddJetExplosion(CVector const &pos, float power, float size) {
    plugin::CallDynGlobal<CVector const &, float, float>(gaddrof(CParticle::AddJetExplosion), pos, power, size);
}

int addrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int)) = ADDRESS_BY_VERSION(0x50D140, 0x50D330, 0x50D2C0);
int gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x50D140, 0x50D330, 0x50D2C0);

CParticle *CParticle::AddParticle(tParticleType type, CVector const &pos, CVector const &direction, CEntity *entity, float size, int rotationSpeed, int rotation, int currentFrame, int lifeSpan) {
    return plugin::CallAndReturnDynGlobal<CParticle *, tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int>(gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, int, int, int, int)), type, pos, direction, entity, size, rotationSpeed, rotation, currentFrame, lifeSpan);
}

int addrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const &, int, int, int, int)) = ADDRESS_BY_VERSION(0x50D190, 0x50D380, 0x50D310);
int gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const &, int, int, int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x50D190, 0x50D380, 0x50D310);

CParticle *CParticle::AddParticle(tParticleType type, CVector const &pos, CVector const &direction, CEntity *entity, float size, RwRGBA const &color, int rotationSpeed, int rotation, int currentFrame, int lifeSpan) {
    return plugin::CallAndReturnDynGlobal<CParticle *, tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const &, int, int, int, int>(gaddrof_o(CParticle::AddParticle, CParticle *(*)(tParticleType, CVector const &, CVector const &, CEntity *, float, RwRGBA const &, int, int, int, int)), type, pos, direction, entity, size, color, rotationSpeed, rotation, currentFrame, lifeSpan);
}

int addrof(CParticle::AddYardieDoorSmoke) = ADDRESS_BY_VERSION(0x50FAA0, 0x50FC90, 0x50FC20);
int gaddrof(CParticle::AddYardieDoorSmoke) = GLOBAL_ADDRESS_BY_VERSION(0x50FAA0, 0x50FC90, 0x50FC20);

void CParticle::AddYardieDoorSmoke(CVector const &pos, CMatrix const &matrix) {
    plugin::CallDynGlobal<CVector const &, CMatrix const &>(gaddrof(CParticle::AddYardieDoorSmoke), pos, matrix);
}

int addrof(CParticle::Initialise) = ADDRESS_BY_VERSION(0x50C570, 0x50C660, 0x50C5F0);
int gaddrof(CParticle::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x50C570, 0x50C660, 0x50C5F0);

void CParticle::Initialise() {
    plugin::CallDynGlobal(gaddrof(CParticle::Initialise));
}

int addrof(CParticle::ReloadConfig) = ADDRESS_BY_VERSION(0x50C430, 0x50C520, 0x50C4B0);
int gaddrof(CParticle::ReloadConfig) = GLOBAL_ADDRESS_BY_VERSION(0x50C430, 0x50C520, 0x50C4B0);

void CParticle::ReloadConfig() {
    plugin::CallDynGlobal(gaddrof(CParticle::ReloadConfig));
}

int addrof(CParticle::RemovePSystem) = ADDRESS_BY_VERSION(0x50F6E0, 0x50F8D0, 0x50F860);
int gaddrof(CParticle::RemovePSystem) = GLOBAL_ADDRESS_BY_VERSION(0x50F6E0, 0x50F8D0, 0x50F860);

void CParticle::RemovePSystem(tParticleType type) {
    plugin::CallDynGlobal<tParticleType>(gaddrof(CParticle::RemovePSystem), type);
}

int addrof(CParticle::RemoveParticle) = ADDRESS_BY_VERSION(0x50F720, 0x50F910, 0x50F8A0);
int gaddrof(CParticle::RemoveParticle) = GLOBAL_ADDRESS_BY_VERSION(0x50F720, 0x50F910, 0x50F8A0);

void CParticle::RemoveParticle(CParticle *particle, CParticle *previousParticle, tParticleSystemData *particleSystem) {
    plugin::CallDynGlobal<CParticle *, CParticle *, tParticleSystemData *>(gaddrof(CParticle::RemoveParticle), particle, previousParticle, particleSystem);
}

int addrof(CParticle::Render) = ADDRESS_BY_VERSION(0x50EE20, 0x50F010, 0x50EFA0);
int gaddrof(CParticle::Render) = GLOBAL_ADDRESS_BY_VERSION(0x50EE20, 0x50F010, 0x50EFA0);

void CParticle::Render() {
    plugin::CallDynGlobal(gaddrof(CParticle::Render));
}

int addrof(CParticle::Shutdown) = ADDRESS_BY_VERSION(0x50CF40, 0x50D030, 0x50CFC0);
int gaddrof(CParticle::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x50CF40, 0x50D030, 0x50CFC0);

void CParticle::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CParticle::Shutdown));
}

int addrof(CParticle::Update) = ADDRESS_BY_VERSION(0x50DCF0, 0x50DEE0, 0x50DE70);
int gaddrof(CParticle::Update) = GLOBAL_ADDRESS_BY_VERSION(0x50DCF0, 0x50DEE0, 0x50DE70);

void CParticle::Update() {
    plugin::CallDynGlobal(gaddrof(CParticle::Update));
}
