/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneHead.h"

PLUGIN_SOURCE_FILE

int ctor_addr_o(CCutsceneHead, void(CObject *)) = ADDRESS_BY_VERSION(0x4BA5E0, 0x4BA6D0, 0x4BA660);
int ctor_gaddr_o(CCutsceneHead, void(CObject *)) = GLOBAL_ADDRESS_BY_VERSION(0x4BA5E0, 0x4BA6D0, 0x4BA660);

int dtor_addr(CCutsceneHead) = ADDRESS_BY_VERSION(0x4BA8F0, 0x4BA9E0, 0x4BA970);
int dtor_gaddr(CCutsceneHead) = GLOBAL_ADDRESS_BY_VERSION(0x4BA8F0, 0x4BA9E0, 0x4BA970);

int del_dtor_addr(CCutsceneHead) = ADDRESS_BY_VERSION(0x4BA8A0, 0x4BA990, 0x4BA920);
int del_dtor_gaddr(CCutsceneHead) = GLOBAL_ADDRESS_BY_VERSION(0x4BA8A0, 0x4BA990, 0x4BA920);

int addrof(CCutsceneHead::CreateRwObject) = ADDRESS_BY_VERSION(0x4BA650, 0x4BA740, 0x4BA6D0);
int gaddrof(CCutsceneHead::CreateRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BA650, 0x4BA740, 0x4BA6D0);

void CCutsceneHead::CreateRwObject() {
    plugin::CallVirtualMethod<5, CCutsceneHead *>(this);
}

int addrof(CCutsceneHead::DeleteRwObject) = ADDRESS_BY_VERSION(0x4BA690, 0x4BA780, 0x4BA710);
int gaddrof(CCutsceneHead::DeleteRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BA690, 0x4BA780, 0x4BA710);

void CCutsceneHead::DeleteRwObject() {
    plugin::CallVirtualMethod<6, CCutsceneHead *>(this);
}

int addrof(CCutsceneHead::ProcessControl) = ADDRESS_BY_VERSION(0x4BA760, 0x4BA850, 0x4BA7E0);
int gaddrof(CCutsceneHead::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x4BA760, 0x4BA850, 0x4BA7E0);

void CCutsceneHead::ProcessControl() {
    plugin::CallVirtualMethod<8, CCutsceneHead *>(this);
}

int addrof(CCutsceneHead::Render) = ADDRESS_BY_VERSION(0x4BA800, 0x4BA8F0, 0x4BA880);
int gaddrof(CCutsceneHead::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4BA800, 0x4BA8F0, 0x4BA880);

void CCutsceneHead::Render() {
    plugin::CallVirtualMethod<13, CCutsceneHead *>(this);
}

int addrof(CCutsceneHead::PlayAnimation) = ADDRESS_BY_VERSION(0x4BA6A0, 0x4BA790, 0x4BA720);
int gaddrof(CCutsceneHead::PlayAnimation) = GLOBAL_ADDRESS_BY_VERSION(0x4BA6A0, 0x4BA790, 0x4BA720);

void CCutsceneHead::PlayAnimation(char const *name) {
    plugin::CallMethodDynGlobal<CCutsceneHead *, char const *>(gaddrof(CCutsceneHead::PlayAnimation), this, name);
}
