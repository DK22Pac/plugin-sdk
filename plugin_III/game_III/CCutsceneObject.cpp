/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneObject.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CCutsceneObject) = ADDRESS_BY_VERSION(0x4BA910, 0x4BAA00, 0x4BA990);
int ctor_gaddr(CCutsceneObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BA910, 0x4BAA00, 0x4BA990);

int dtor_addr(CCutsceneObject) = ADDRESS_BY_VERSION(0x4BA960, 0x4BAA50, 0x4BA9E0);
int dtor_gaddr(CCutsceneObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BA960, 0x4BAA50, 0x4BA9E0);

int del_dtor_addr(CCutsceneObject) = ADDRESS_BY_VERSION(0x4BAAB0, 0x4BABA0, 0x4BAB30);
int del_dtor_gaddr(CCutsceneObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAAB0, 0x4BABA0, 0x4BAB30);

int addrof(CCutsceneObject::SetModelIndex) = ADDRESS_BY_VERSION(0x4BA980, 0x4BAA70, 0x4BAA00);
int gaddrof(CCutsceneObject::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x4BA980, 0x4BAA70, 0x4BAA00);

void CCutsceneObject::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CCutsceneObject *, unsigned int>(this, modelIndex);
}

int addrof(CCutsceneObject::ProcessControl) = ADDRESS_BY_VERSION(0x4BA9C0, 0x4BAAB0, 0x4BAA40);
int gaddrof(CCutsceneObject::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4BA9C0, 0x4BAAB0, 0x4BAA40);

void CCutsceneObject::ProcessControl() {
    plugin::CallVirtualMethod<8, CCutsceneObject *>(this);
}

int addrof(CCutsceneObject::PreRender) = ADDRESS_BY_VERSION(0x4BAA40, 0x4BAB30, 0x4BAAC0);
int gaddrof(CCutsceneObject::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x4BAA40, 0x4BAB30, 0x4BAAC0);

void CCutsceneObject::PreRender() {
    plugin::CallVirtualMethod<12, CCutsceneObject *>(this);
}

int addrof(CCutsceneObject::Render) = ADDRESS_BY_VERSION(0x4BAAA0, 0x4BAB90, 0x4BAB20);
int gaddrof(CCutsceneObject::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4BAAA0, 0x4BAB90, 0x4BAB20);

void CCutsceneObject::Render() {
    plugin::CallVirtualMethod<13, CCutsceneObject *>(this);
}

int addrof(CCutsceneObject::SetupLighting) = ADDRESS_BY_VERSION(0x4A7E70, 0x4A7F60, 0x4A7EF0);
int gaddrof(CCutsceneObject::SetupLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7E70, 0x4A7F60, 0x4A7EF0);

bool CCutsceneObject::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CCutsceneObject *>(this);
}

int addrof(CCutsceneObject::RemoveLighting) = ADDRESS_BY_VERSION(0x4A7F00, 0x4A7FF0, 0x4A7F80);
int gaddrof(CCutsceneObject::RemoveLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7F00, 0x4A7FF0, 0x4A7F80);

void CCutsceneObject::RemoveLighting(bool resetWorldColors) {
    plugin::CallVirtualMethod<15, CCutsceneObject *, bool>(this, resetWorldColors);
}
