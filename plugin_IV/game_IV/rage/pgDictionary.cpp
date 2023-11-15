/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "pgDictionary.h"
#include "grcTexture.h"

template class rage::pgDictionary<rage::grcTexturePC>;

template<typename T>
T* rage::pgDictionary<T>::Get(int32_t hash) {
    return plugin::CallMethodAndReturnDyn<T*>(gpattern("53 55 56 57 8B F9 85 FF 74 3F"), this, hash);
}
