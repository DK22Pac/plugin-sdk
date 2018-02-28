/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDummyObject.h"

// Converted from thiscall void CDummyObject::CDummyObject(CObject *object) 0x4BAB10
CDummyObject::CDummyObject(CObject* object) : CDummy(plugin::dummy) {
    ((void(__thiscall *)(CDummyObject*, CObject*))0x4BAB10)(this, object);
}

// Converted from thiscall void CDummyObject::CDummyObject(void) 0x4BAAF0
CDummyObject::CDummyObject() : CDummy(plugin::dummy) {
    ((void(__thiscall *)(CDummyObject*))0x4BAAF0)(this);
}