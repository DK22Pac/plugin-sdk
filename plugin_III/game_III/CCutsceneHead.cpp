/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneHead.h"

// Converted from thiscall void CCutsceneHead::PlayAnimation(char const* name) 0x4BA6A0 
void CCutsceneHead::PlayAnimation(char const* name) {
    plugin::CallMethod<0x4BA6A0, CCutsceneHead *, char const*>(this, name);
}

// Converted from thiscall void CCutsceneHead::CCutsceneHead(CObject *object) 0x4BA5E0
CCutsceneHead::CCutsceneHead(CObject* object) {
    plugin::CallMethod<0x4BA5E0, CCutsceneHead *, CObject*>(this, object);
}
