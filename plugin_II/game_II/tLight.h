/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

struct tLight {
    int field_0;
    float x;
    float y;
    float z;
    int colour;
};
VALIDATE_OFFSET(tLight, field_0, 0x0);
VALIDATE_OFFSET(tLight, x, 0x4);
VALIDATE_OFFSET(tLight, y, 0x8);
VALIDATE_OFFSET(tLight, z, 0xC);
VALIDATE_OFFSET(tLight, colour, 0x10);
VALIDATE_SIZE(tLight, 0x14);
