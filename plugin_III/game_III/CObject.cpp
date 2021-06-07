/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CObject.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE short &CObject::nBodyCastHealth = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x5F7D4C, 0x5F7B34, 0x604B2C));
PLUGIN_VARIABLE short &CObject::nNoTempObjects = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CCA2, 0x95CE5A, 0x96CF9A));

int ctor_addr(CObject) = ADDRESS_BY_VERSION(0x4BABD0, 0x4BACC0, 0x4BAC50);
int ctor_gaddr(CObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BABD0, 0x4BACC0, 0x4BAC50);

int ctor_addr_o(CObject, void(CDummyObject *)) = ADDRESS_BY_VERSION(0x4BAD50, 0x4BAE40, 0x4BADD0);
int ctor_gaddr_o(CObject, void(CDummyObject *)) = GLOBAL_ADDRESS_BY_VERSION(0x4BAD50, 0x4BAE40, 0x4BADD0);

int ctor_addr_o(CObject, void(int, bool)) = ADDRESS_BY_VERSION(0x4BACE0, 0x4BADD0, 0x4BAD60);
int ctor_gaddr_o(CObject, void(int, bool)) = GLOBAL_ADDRESS_BY_VERSION(0x4BACE0, 0x4BADD0, 0x4BAD60);

int dtor_addr(CObject) = ADDRESS_BY_VERSION(0x4BAE00, 0x4BAEF0, 0x4BAE80);
int dtor_gaddr(CObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAE00, 0x4BAEF0, 0x4BAE80);

int op_new_addr(CObject) = ADDRESS_BY_VERSION(0x4BAE70, 0x4BAF60, 0x4BAEF0);
int op_new_gaddr(CObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAE70, 0x4BAF60, 0x4BAEF0);

int op_new_addr_o(CObject, void *(unsigned int, int)) = ADDRESS_BY_VERSION(0x4BAE80, 0x4BAF70, 0x4BAF00);
int op_new_gaddr_o(CObject, void *(unsigned int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x4BAE80, 0x4BAF70, 0x4BAF00);

int op_delete_addr(CObject) = ADDRESS_BY_VERSION(0x4BAEA0, 0x4BAF90, 0x4BAF20);
int op_delete_gaddr(CObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAEA0, 0x4BAF90, 0x4BAF20);

int del_dtor_addr(CObject) = ADDRESS_BY_VERSION(0x404B00, 0x404B00, 0x404B00);
int del_dtor_gaddr(CObject) = GLOBAL_ADDRESS_BY_VERSION(0x404B00, 0x404B00, 0x404B00);

int addrof(CObject::ProcessControl) = ADDRESS_BY_VERSION(0x4BB040, 0x4BB130, 0x4BB0C0);
int gaddrof(CObject::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4BB040, 0x4BB130, 0x4BB0C0);

void CObject::ProcessControl() {
    plugin::CallVirtualMethod<8, CObject *>(this);
}

int addrof(CObject::Teleport) = ADDRESS_BY_VERSION(0x4BBDA0, 0x4BBE90, 0x4BBE20);
int gaddrof(CObject::Teleport) = GLOBAL_ADDRESS_BY_VERSION(0x4BBDA0, 0x4BBE90, 0x4BBE20);

void CObject::Teleport(CVector pos) {
    plugin::CallVirtualMethod<11, CObject *, CVector>(this, pos);
}

int addrof(CObject::Render) = ADDRESS_BY_VERSION(0x4BB1E0, 0x4BB2D0, 0x4BB260);
int gaddrof(CObject::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4BB1E0, 0x4BB2D0, 0x4BB260);

void CObject::Render() {
    plugin::CallVirtualMethod<13, CObject *>(this);
}

int addrof(CObject::SetupLighting) = ADDRESS_BY_VERSION(0x4A7C90, 0x4A7D80, 0x4A7D10);
int gaddrof(CObject::SetupLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7C90, 0x4A7D80, 0x4A7D10);

bool CObject::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CObject *>(this);
}

int addrof(CObject::RemoveLighting) = ADDRESS_BY_VERSION(0x4A7CD0, 0x4A7DC0, 0x4A7D50);
int gaddrof(CObject::RemoveLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7CD0, 0x4A7DC0, 0x4A7D50);

void CObject::RemoveLighting(bool resetWorldColors) {
    plugin::CallVirtualMethod<15, CObject *, bool>(this, resetWorldColors);
}

int addrof(CObject::CanBeDeleted) = ADDRESS_BY_VERSION(0x4BB010, 0x4BB100, 0x4BB090);
int gaddrof(CObject::CanBeDeleted) = GLOBAL_ADDRESS_BY_VERSION(0x4BB010, 0x4BB100, 0x4BB090);

bool CObject::CanBeDeleted() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CObject *>(gaddrof(CObject::CanBeDeleted), this);
}

int addrof(CObject::Init) = ADDRESS_BY_VERSION(0x4BAEC0, 0x4BAFB0, 0x4BAF40);
int gaddrof(CObject::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4BAEC0, 0x4BAFB0, 0x4BAF40);

void CObject::Init() {
    plugin::CallMethodDynGlobal<CObject *>(gaddrof(CObject::Init), this);
}

int addrof(CObject::ObjectDamage) = ADDRESS_BY_VERSION(0x4BB240, 0x4BB330, 0x4BB2C0);
int gaddrof(CObject::ObjectDamage) = GLOBAL_ADDRESS_BY_VERSION(0x4BB240, 0x4BB330, 0x4BB2C0);

void CObject::ObjectDamage(float amount) {
    plugin::CallMethodDynGlobal<CObject *, float>(gaddrof(CObject::ObjectDamage), this, amount);
}

int addrof(CObject::RefModelInfo) = ADDRESS_BY_VERSION(0x4BBD80, 0x4BBE70, 0x4BBE00);
int gaddrof(CObject::RefModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x4BBD80, 0x4BBE70, 0x4BBE00);

void CObject::RefModelInfo(int modelIndex) {
    plugin::CallMethodDynGlobal<CObject *, int>(gaddrof(CObject::RefModelInfo), this, modelIndex);
}

int addrof(CObject::DeleteAllMissionObjects) = ADDRESS_BY_VERSION(0x4BBE60, 0x4BBF50, 0x4BBEE0);
int gaddrof(CObject::DeleteAllMissionObjects) = GLOBAL_ADDRESS_BY_VERSION(0x4BBE60, 0x4BBF50, 0x4BBEE0);

void CObject::DeleteAllMissionObjects() {
    plugin::CallDynGlobal(gaddrof(CObject::DeleteAllMissionObjects));
}

int addrof(CObject::DeleteAllTempObjects) = ADDRESS_BY_VERSION(0x4BBDF0, 0x4BBEE0, 0x4BBE70);
int gaddrof(CObject::DeleteAllTempObjects) = GLOBAL_ADDRESS_BY_VERSION(0x4BBDF0, 0x4BBEE0, 0x4BBE70);

void CObject::DeleteAllTempObjects() {
    plugin::CallDynGlobal(gaddrof(CObject::DeleteAllTempObjects));
}

int addrof(CObject::DeleteAllTempObjectsInArea) = ADDRESS_BY_VERSION(0x4BBED0, 0x4BBFC0, 0x4BBF50);
int gaddrof(CObject::DeleteAllTempObjectsInArea) = GLOBAL_ADDRESS_BY_VERSION(0x4BBED0, 0x4BBFC0, 0x4BBF50);

void CObject::DeleteAllTempObjectsInArea(CVector point, float radius) {
    plugin::CallDynGlobal<CVector, float>(gaddrof(CObject::DeleteAllTempObjectsInArea), point, radius);
}
