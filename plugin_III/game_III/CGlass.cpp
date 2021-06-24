/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGlass.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CFallingGlassPane(&CGlass::aGlassPanes)[45] = *reinterpret_cast<CFallingGlassPane(*)[45]>(GLOBAL_ADDRESS_BY_VERSION(0x6EE480, 0x6EE480, 0x6FE5C0));
PLUGIN_VARIABLE CEntity *(&CGlass::apEntitiesToBeRendered)[32] = *reinterpret_cast<CEntity *(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x6FA8E0, 0x6FA8E0, 0x70AA20));
PLUGIN_VARIABLE unsigned int &CGlass::NumGlassEntities = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B5C, 0x885B0C, 0x895C4C));

int addrof(CGlass::AskForObjectToBeRenderedInGlass) = ADDRESS_BY_VERSION(0x5033F0, 0x5034D0, 0x503460);
int gaddrof(CGlass::AskForObjectToBeRenderedInGlass) = GLOBAL_ADDRESS_BY_VERSION(0x5033F0, 0x5034D0, 0x503460);

void CGlass::AskForObjectToBeRenderedInGlass(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CGlass::AskForObjectToBeRenderedInGlass), entity);
}

int addrof(CGlass::CalcAlphaWithNormal) = ADDRESS_BY_VERSION(0x503C90, 0x503D70, 0x503D00);
int gaddrof(CGlass::CalcAlphaWithNormal) = GLOBAL_ADDRESS_BY_VERSION(0x503C90, 0x503D70, 0x503D00);

int CGlass::CalcAlphaWithNormal(CVector *normal) {
    return plugin::CallAndReturnDynGlobal<int, CVector *>(gaddrof(CGlass::CalcAlphaWithNormal), normal);
}

int addrof(CGlass::FindFreePane) = ADDRESS_BY_VERSION(0x502490, 0x502570, 0x502500);
int gaddrof(CGlass::FindFreePane) = GLOBAL_ADDRESS_BY_VERSION(0x502490, 0x502570, 0x502500);

CFallingGlassPane *CGlass::FindFreePane() {
    return plugin::CallAndReturnDynGlobal<CFallingGlassPane *>(gaddrof(CGlass::FindFreePane));
}

int addrof(CGlass::GeneratePanesForWindow) = ADDRESS_BY_VERSION(0x502AC0, 0x502BA0, 0x502B30);
int gaddrof(CGlass::GeneratePanesForWindow) = GLOBAL_ADDRESS_BY_VERSION(0x502AC0, 0x502BA0, 0x502B30);

void CGlass::GeneratePanesForWindow(unsigned int type, CVector pos, CVector at, CVector right, CVector speed, CVector point, float moveSpeed, bool cracked, bool explosion) {
    plugin::CallDynGlobal<unsigned int, CVector, CVector, CVector, CVector, CVector, float, bool, bool>(gaddrof(CGlass::GeneratePanesForWindow), type, pos, at, right, speed, point, moveSpeed, cracked, explosion);
}

int addrof(CGlass::Init) = ADDRESS_BY_VERSION(0x501F20, 0x502000, 0x501F90);
int gaddrof(CGlass::Init) = GLOBAL_ADDRESS_BY_VERSION(0x501F20, 0x502000, 0x501F90);

void CGlass::Init() {
    plugin::CallDynGlobal(gaddrof(CGlass::Init));
}

int addrof(CGlass::Render) = ADDRESS_BY_VERSION(0x502350, 0x502430, 0x5023C0);
int gaddrof(CGlass::Render) = GLOBAL_ADDRESS_BY_VERSION(0x502350, 0x502430, 0x5023C0);

void CGlass::Render() {
    plugin::CallDynGlobal(gaddrof(CGlass::Render));
}

int addrof(CGlass::RenderEntityInGlass) = ADDRESS_BY_VERSION(0x503420, 0x503500, 0x503490);
int gaddrof(CGlass::RenderEntityInGlass) = GLOBAL_ADDRESS_BY_VERSION(0x503420, 0x503500, 0x503490);

void CGlass::RenderEntityInGlass(CEntity *entity) {
    plugin::CallDynGlobal<CEntity *>(gaddrof(CGlass::RenderEntityInGlass), entity);
}

int addrof(CGlass::RenderHiLightPolys) = ADDRESS_BY_VERSION(0x503D60, 0x503E40, 0x503DD0);
int gaddrof(CGlass::RenderHiLightPolys) = GLOBAL_ADDRESS_BY_VERSION(0x503D60, 0x503E40, 0x503DD0);

void CGlass::RenderHiLightPolys() {
    plugin::CallDynGlobal(gaddrof(CGlass::RenderHiLightPolys));
}

int addrof(CGlass::RenderReflectionPolys) = ADDRESS_BY_VERSION(0x503E70, 0x503F50, 0x503EE0);
int gaddrof(CGlass::RenderReflectionPolys) = GLOBAL_ADDRESS_BY_VERSION(0x503E70, 0x503F50, 0x503EE0);

void CGlass::RenderReflectionPolys() {
    plugin::CallDynGlobal(gaddrof(CGlass::RenderReflectionPolys));
}

int addrof(CGlass::RenderShatteredPolys) = ADDRESS_BY_VERSION(0x503DE0, 0x503EC0, 0x503E50);
int gaddrof(CGlass::RenderShatteredPolys) = GLOBAL_ADDRESS_BY_VERSION(0x503DE0, 0x503EC0, 0x503E50);

void CGlass::RenderShatteredPolys() {
    plugin::CallDynGlobal(gaddrof(CGlass::RenderShatteredPolys));
}

int addrof(CGlass::Update) = ADDRESS_BY_VERSION(0x502050, 0x502130, 0x5020C0);
int gaddrof(CGlass::Update) = GLOBAL_ADDRESS_BY_VERSION(0x502050, 0x502130, 0x5020C0);

void CGlass::Update() {
    plugin::CallDynGlobal(gaddrof(CGlass::Update));
}

int addrof(CGlass::WasGlassHitByBullet) = ADDRESS_BY_VERSION(0x504670, 0x504750, 0x5046E0);
int gaddrof(CGlass::WasGlassHitByBullet) = GLOBAL_ADDRESS_BY_VERSION(0x504670, 0x504750, 0x5046E0);

void CGlass::WasGlassHitByBullet(CEntity *entity, CVector point) {
    plugin::CallDynGlobal<CEntity *, CVector>(gaddrof(CGlass::WasGlassHitByBullet), entity, point);
}

int addrof(CGlass::WindowRespondsToCollision) = ADDRESS_BY_VERSION(0x503F10, 0x503FF0, 0x503F80);
int gaddrof(CGlass::WindowRespondsToCollision) = GLOBAL_ADDRESS_BY_VERSION(0x503F10, 0x503FF0, 0x503F80);

void CGlass::WindowRespondsToCollision(CEntity *entity, float amount, CVector speed, CVector point, bool explosion) {
    plugin::CallDynGlobal<CEntity *, float, CVector, CVector, bool>(gaddrof(CGlass::WindowRespondsToCollision), entity, amount, speed, point, explosion);
}

int addrof(CGlass::WindowRespondsToExplosion) = ADDRESS_BY_VERSION(0x504790, 0x504870, 0x504800);
int gaddrof(CGlass::WindowRespondsToExplosion) = GLOBAL_ADDRESS_BY_VERSION(0x504790, 0x504870, 0x504800);

void CGlass::WindowRespondsToExplosion(CEntity *entity, CVector point) {
    plugin::CallDynGlobal<CEntity *, CVector>(gaddrof(CGlass::WindowRespondsToExplosion), entity, point);
}

int addrof(CGlass::WindowRespondsToSoftCollision) = ADDRESS_BY_VERSION(0x504630, 0x504710, 0x5046A0);
int gaddrof(CGlass::WindowRespondsToSoftCollision) = GLOBAL_ADDRESS_BY_VERSION(0x504630, 0x504710, 0x5046A0);

void CGlass::WindowRespondsToSoftCollision(CEntity *entity, float amount) {
    plugin::CallDynGlobal<CEntity *, float>(gaddrof(CGlass::WindowRespondsToSoftCollision), entity, amount);
}
