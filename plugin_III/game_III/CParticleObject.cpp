/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CParticleObject.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CAudioHydrant(&CParticleObject::ms_aAudioHydrants)[8] = *reinterpret_cast<CAudioHydrant(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x62DAAC, 0x62DAAC, 0x63DAAC));
PLUGIN_VARIABLE CParticleObject *&CParticleObject::pCloseListHead = *reinterpret_cast<CParticleObject **>(GLOBAL_ADDRESS_BY_VERSION(0x8F4340, 0x8F43F4, 0x904534));
PLUGIN_VARIABLE CParticleObject *&CParticleObject::pUnusedListHead = *reinterpret_cast<CParticleObject **>(GLOBAL_ADDRESS_BY_VERSION(0x94128C, 0x941444, 0x951584));
PLUGIN_VARIABLE CParticleObject *&CParticleObject::pFarListHead = *reinterpret_cast<CParticleObject **>(GLOBAL_ADDRESS_BY_VERSION(0x942F78, 0x943130, 0x953270));

int ctor_addr(CParticleObject) = ADDRESS_BY_VERSION(0x4BC3E0, 0x4BC4D0, 0x4BC460);
int ctor_gaddr(CParticleObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BC3E0, 0x4BC4D0, 0x4BC460);

int dtor_addr(CParticleObject) = ADDRESS_BY_VERSION(0x4BC420, 0x4BC510, 0x4BC4A0);
int dtor_gaddr(CParticleObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BC420, 0x4BC510, 0x4BC4A0);

int del_dtor_addr(CParticleObject) = ADDRESS_BY_VERSION(0x4BFD70, 0x4BFE60, 0x4BFDF0);
int del_dtor_gaddr(CParticleObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BFD70, 0x4BFE60, 0x4BFDF0);

int addrof(CParticleObject::RemoveObject) = ADDRESS_BY_VERSION(0x4BC9F0, 0x4BCAE0, 0x4BCA70);
int gaddrof(CParticleObject::RemoveObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BC9F0, 0x4BCAE0, 0x4BCA70);

void CParticleObject::RemoveObject() {
    plugin::CallMethodDynGlobal<CParticleObject *>(gaddrof(CParticleObject::RemoveObject), this);
}

int addrof(CParticleObject::UpdateClose) = ADDRESS_BY_VERSION(0x4BCA80, 0x4BCB70, 0x4BCB00);
int gaddrof(CParticleObject::UpdateClose) = GLOBAL_ADDRESS_BY_VERSION(0x4BCA80, 0x4BCB70, 0x4BCB00);

void CParticleObject::UpdateClose() {
    plugin::CallMethodDynGlobal<CParticleObject *>(gaddrof(CParticleObject::UpdateClose), this);
}

int addrof(CParticleObject::UpdateFar) = ADDRESS_BY_VERSION(0x4BF9F0, 0x4BFAE0, 0x4BFA70);
int gaddrof(CParticleObject::UpdateFar) = GLOBAL_ADDRESS_BY_VERSION(0x4BF9F0, 0x4BFAE0, 0x4BFA70);

void CParticleObject::UpdateFar() {
    plugin::CallMethodDynGlobal<CParticleObject *>(gaddrof(CParticleObject::UpdateFar), this);
}

int addrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, unsigned char)) = ADDRESS_BY_VERSION(0x4BC4D0, 0x4BC5C0, 0x4BC550);
int gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x4BC4D0, 0x4BC5C0, 0x4BC550);

CParticleObject *CParticleObject::AddObject(unsigned short type, CVector const &pos, unsigned char remove) {
    return plugin::CallAndReturnDynGlobal<CParticleObject *, unsigned short, CVector const &, unsigned char>(gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, unsigned char)), type, pos, remove);
}

int addrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, float, unsigned char)) = ADDRESS_BY_VERSION(0x4BC520, 0x4BC610, 0x4BC5A0);
int gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, float, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x4BC520, 0x4BC610, 0x4BC5A0);

CParticleObject *CParticleObject::AddObject(unsigned short type, CVector const &pos, float size, unsigned char remove) {
    return plugin::CallAndReturnDynGlobal<CParticleObject *, unsigned short, CVector const &, float, unsigned char>(gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, float, unsigned char)), type, pos, size, remove);
}

int addrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned char)) = ADDRESS_BY_VERSION(0x4BC570, 0x4BC660, 0x4BC5F0);
int gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x4BC570, 0x4BC660, 0x4BC5F0);

CParticleObject *CParticleObject::AddObject(unsigned short type, CVector const &pos, CVector const &target, float size, unsigned char remove) {
    return plugin::CallAndReturnDynGlobal<CParticleObject *, unsigned short, CVector const &, CVector const &, float, unsigned char>(gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned char)), type, pos, target, size, remove);
}

int addrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned int, RwRGBA const &, unsigned char)) = ADDRESS_BY_VERSION(0x4BC5B0, 0x4BC6A0, 0x4BC630);
int gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned int, RwRGBA const &, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x4BC5B0, 0x4BC6A0, 0x4BC630);

CParticleObject *CParticleObject::AddObject(unsigned short type, CVector const &pos, CVector const &target, float size, unsigned int lifeTime, RwRGBA const &color, unsigned char remove) {
    return plugin::CallAndReturnDynGlobal<CParticleObject *, unsigned short, CVector const &, CVector const &, float, unsigned int, RwRGBA const &, unsigned char>(gaddrof_o(CParticleObject::AddObject, CParticleObject *(*)(unsigned short, CVector const &, CVector const &, float, unsigned int, RwRGBA const &, unsigned char)), type, pos, target, size, lifeTime, color, remove);
}

int addrof(CParticleObject::Initialise) = ADDRESS_BY_VERSION(0x4BC440, 0x4BC530, 0x4BC4C0);
int gaddrof(CParticleObject::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4BC440, 0x4BC530, 0x4BC4C0);

void CParticleObject::Initialise() {
    plugin::CallDynGlobal(gaddrof(CParticleObject::Initialise));
}

int addrof(CParticleObject::LoadParticle) = ADDRESS_BY_VERSION(0x4BFB30, 0x4BFC20, 0x4BFBB0);
int gaddrof(CParticleObject::LoadParticle) = GLOBAL_ADDRESS_BY_VERSION(0x4BFB30, 0x4BFC20, 0x4BFBB0);

void CParticleObject::LoadParticle(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CParticleObject::LoadParticle), buffer, size);
}

int addrof(CParticleObject::MoveToList) = ADDRESS_BY_VERSION(0x4BFD10, 0x4BFE00, 0x4BFD90);
int gaddrof(CParticleObject::MoveToList) = GLOBAL_ADDRESS_BY_VERSION(0x4BFD10, 0x4BFE00, 0x4BFD90);

void CParticleObject::MoveToList(CParticleObject **from, CParticleObject **to, CParticleObject *object) {
    plugin::CallDynGlobal<CParticleObject **, CParticleObject **, CParticleObject *>(gaddrof(CParticleObject::MoveToList), from, to, object);
}

int addrof(CParticleObject::RemoveAllParticleObjects) = ADDRESS_BY_VERSION(0x4BFC80, 0x4BFD70, 0x4BFD00);
int gaddrof(CParticleObject::RemoveAllParticleObjects) = GLOBAL_ADDRESS_BY_VERSION(0x4BFC80, 0x4BFD70, 0x4BFD00);

void CParticleObject::RemoveAllParticleObjects() {
    plugin::CallDynGlobal(gaddrof(CParticleObject::RemoveAllParticleObjects));
}

int addrof(CParticleObject::SaveParticle) = ADDRESS_BY_VERSION(0x4BFA80, 0x4BFB70, 0x4BFB00);
int gaddrof(CParticleObject::SaveParticle) = GLOBAL_ADDRESS_BY_VERSION(0x4BFA80, 0x4BFB70, 0x4BFB00);

void CParticleObject::SaveParticle(unsigned char *buffer, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CParticleObject::SaveParticle), buffer, size);
}

int addrof(CParticleObject::UpdateAll) = ADDRESS_BY_VERSION(0x4BCA30, 0x4BCB20, 0x4BCAB0);
int gaddrof(CParticleObject::UpdateAll) = GLOBAL_ADDRESS_BY_VERSION(0x4BCA30, 0x4BCB20, 0x4BCAB0);

void CParticleObject::UpdateAll() {
    plugin::CallDynGlobal(gaddrof(CParticleObject::UpdateAll));
}
