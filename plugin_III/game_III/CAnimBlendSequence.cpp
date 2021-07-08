/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAnimBlendSequence.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CAnimBlendSequence) = ADDRESS_BY_VERSION(0x4022D0, 0x4022D0, 0x4022D0);
int ctor_gaddr(CAnimBlendSequence) = GLOBAL_ADDRESS_BY_VERSION(0x4022D0, 0x4022D0, 0x4022D0);

int dtor_addr(CAnimBlendSequence) = ADDRESS_BY_VERSION(0x402300, 0x402300, 0x402300);
int dtor_gaddr(CAnimBlendSequence) = GLOBAL_ADDRESS_BY_VERSION(0x402300, 0x402300, 0x402300);

int del_dtor_addr(CAnimBlendSequence) = ADDRESS_BY_VERSION(0x402470, 0x402470, 0x402470);
int del_dtor_gaddr(CAnimBlendSequence) = GLOBAL_ADDRESS_BY_VERSION(0x402470, 0x402470, 0x402470);

int addrof(CAnimBlendSequence::RemoveQuaternionFlips) = ADDRESS_BY_VERSION(0x4023A0, 0x4023A0, 0x4023A0);
int gaddrof(CAnimBlendSequence::RemoveQuaternionFlips) = GLOBAL_ADDRESS_BY_VERSION(0x4023A0, 0x4023A0, 0x4023A0);

void CAnimBlendSequence::RemoveQuaternionFlips() {
    plugin::CallMethodDynGlobal<CAnimBlendSequence *>(gaddrof(CAnimBlendSequence::RemoveQuaternionFlips), this);
}

int addrof(CAnimBlendSequence::SetName) = ADDRESS_BY_VERSION(0x402330, 0x402330, 0x402330);
int gaddrof(CAnimBlendSequence::SetName) = GLOBAL_ADDRESS_BY_VERSION(0x402330, 0x402330, 0x402330);

void CAnimBlendSequence::SetName(char const *name) {
    plugin::CallMethodDynGlobal<CAnimBlendSequence *, char const *>(gaddrof(CAnimBlendSequence::SetName), this, name);
}

int addrof(CAnimBlendSequence::SetNumFrames) = ADDRESS_BY_VERSION(0x402350, 0x402350, 0x402350);
int gaddrof(CAnimBlendSequence::SetNumFrames) = GLOBAL_ADDRESS_BY_VERSION(0x402350, 0x402350, 0x402350);

void CAnimBlendSequence::SetNumFrames(int numFrames, bool translation) {
    plugin::CallMethodDynGlobal<CAnimBlendSequence *, int, bool>(gaddrof(CAnimBlendSequence::SetNumFrames), this, numFrames, translation);
}
