/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Image.h"

void plugin::Image::Release() {
    if (pixels)
        delete pixels;

    delete this;
}
