/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cAudioScriptObject.h"

PLUGIN_SOURCE_FILE

int ctor_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x57C3C0, 0x57C710, 0x57C610);
int ctor_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57C3C0, 0x57C710, 0x57C610);

int dtor_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x57C3D0, 0x57C720, 0x57C620);
int dtor_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57C3D0, 0x57C720, 0x57C620);

int op_new_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x57C3E0, 0x57C730, 0x57C630);
int op_new_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57C3E0, 0x57C730, 0x57C630);

int op_new_addr_o(cAudioScriptObject, void *(unsigned int, int)) = ADDRESS_BY_VERSION(0x57C3F0, 0x57C740, 0x57C640);
int op_new_gaddr_o(cAudioScriptObject, void *(unsigned int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x57C3F0, 0x57C740, 0x57C640);

int op_delete_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x57C410, 0x57C760, 0x57C660);
int op_delete_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57C410, 0x57C760, 0x57C660);

int addrof(cAudioScriptObject::Reset) = ADDRESS_BY_VERSION(0x57C430, 0x57C780, 0x57C680);
int gaddrof(cAudioScriptObject::Reset) = GLOBAL_ADDRESS_BY_VERSION(0x57C430, 0x57C780, 0x57C680);

void cAudioScriptObject::Reset() {
    plugin::CallMethodDynGlobal<cAudioScriptObject *>(gaddrof(cAudioScriptObject::Reset), this);
}

int addrof(cAudioScriptObject::LoadAllAudioScriptObjects) = ADDRESS_BY_VERSION(0x57C560, 0x57C8B0, 0x57C7B0);
int gaddrof(cAudioScriptObject::LoadAllAudioScriptObjects) = GLOBAL_ADDRESS_BY_VERSION(0x57C560, 0x57C8B0, 0x57C7B0);

void cAudioScriptObject::LoadAllAudioScriptObjects(unsigned char *buf, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(cAudioScriptObject::LoadAllAudioScriptObjects), buf, size);
}

int addrof(cAudioScriptObject::SaveAllAudioScriptObjects) = ADDRESS_BY_VERSION(0x57C460, 0x57C7B0, 0x57C6B0);
int gaddrof(cAudioScriptObject::SaveAllAudioScriptObjects) = GLOBAL_ADDRESS_BY_VERSION(0x57C460, 0x57C7B0, 0x57C6B0);

void cAudioScriptObject::SaveAllAudioScriptObjects(unsigned char *buf, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(cAudioScriptObject::SaveAllAudioScriptObjects), buf, size);
}

int addrof(PlayOneShotScriptObject) = ADDRESS_BY_VERSION(0x57C5F0, 0x57C940, 0x57C840);
int gaddrof(PlayOneShotScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x57C5F0, 0x57C940, 0x57C840);

void PlayOneShotScriptObject(unsigned char id, CVector const &pos) {
    plugin::CallDynGlobal<unsigned char, CVector const &>(gaddrof(PlayOneShotScriptObject), id, pos);
}
