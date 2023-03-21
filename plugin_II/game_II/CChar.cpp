/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CChar.h"

CChar** gCharManager = (CChar**)0x5E5BC0;

CChar* GetCharManager() {
    return *gCharManager;
}

CPed* CChar::CreatePed(CEncodedVector pos, char remap, int rotation) {
    return plugin::CallMethodAndReturn<CPed*, 0x43DB40, CChar*, CEncodedVector, char, int>(this, pos, remap, rotation);
}

CPed* CChar::FindPed(int id) {
    return plugin::CallMethodAndReturn<CPed*, 0x43AE10, CChar*, int>(this, id);
}
