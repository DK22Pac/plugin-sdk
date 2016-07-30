#include "CDummyObject.h"

// Converted from thiscall void CDummyObject::CDummyObject(CObject *object) 0x4E05D0
CDummyObject::CDummyObject(CObject* object) : CDummy(plugin::dummy) {
    ((void(__thiscall *)(CDummyObject*, CObject*))0x4E05D0)(this, object);
}

// Converted from thiscall void CDummyObject::CDummyObject(void) 0x4E0640
CDummyObject::CDummyObject() : CDummy(plugin::dummy) {
    ((void(__thiscall *)(CDummyObject*))0x4E0640)(this);
}