/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cAudioScriptObject.h"

PLUGIN_SOURCE_FILE

int ctor_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x5F94B0, 0x5F94D0, 0x5F9110);
int ctor_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x5F94B0, 0x5F94D0, 0x5F9110);

int dtor_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x5F9480, 0x5F94A0, 0x5F90E0);
int dtor_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x5F9480, 0x5F94A0, 0x5F90E0);

int op_new_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x5F9470, 0x5F9490, 0x5F90D0);
int op_new_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x5F9470, 0x5F9490, 0x5F90D0);

int op_delete_addr(cAudioScriptObject) = ADDRESS_BY_VERSION(0x5F9450, 0x5F9470, 0x5F90B0);
int op_delete_gaddr(cAudioScriptObject) = GLOBAL_ADDRESS_BY_VERSION(0x5F9450, 0x5F9470, 0x5F90B0);

int addrof(cAudioScriptObject::LoadAllAudioScriptObjects) = ADDRESS_BY_VERSION(0x5F9290, 0x5F92B0, 0x5F8EF0);
int gaddrof(cAudioScriptObject::LoadAllAudioScriptObjects) = GLOBAL_ADDRESS_BY_VERSION(0x5F9290, 0x5F92B0, 0x5F8EF0);

void cAudioScriptObject::LoadAllAudioScriptObjects(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(cAudioScriptObject::LoadAllAudioScriptObjects), buffer, size);
}

int addrof(cAudioScriptObject::SaveAllAudioScriptObjects) = ADDRESS_BY_VERSION(0x5F9350, 0x5F9370, 0x5F8FB0);
int gaddrof(cAudioScriptObject::SaveAllAudioScriptObjects) = GLOBAL_ADDRESS_BY_VERSION(0x5F9350, 0x5F9370, 0x5F8FB0);

void cAudioScriptObject::SaveAllAudioScriptObjects(unsigned char *buffer, int *outSize) {
    plugin::CallDynGlobal<unsigned char *, int *>(gaddrof(cAudioScriptObject::SaveAllAudioScriptObjects), buffer, outSize);
}
