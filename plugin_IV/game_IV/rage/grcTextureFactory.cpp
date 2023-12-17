/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "grcTextureFactory.h"

rage::grcTextureFactoryPC*& rage::grcTextureFactoryPC::sm_Instance = *gpatternt(rage::grcTextureFactoryPC*, "A3 ? ? ? ? E8 ? ? ? ? 83 EC 0C", 1);

rage::grcTextureFactoryPC::grcTextureFactoryPC() {
    plugin::CallMethodDyn(gpattern("A1 ? ? ? ? 81 EC ? ? ? ? 40"), this);
}
