/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

struct tImage {
    BYTE field_0;
    BYTE field_1;
    BYTE field_2;
    BYTE field_3;
    DWORD field_4;
    DWORD field_8;
    WORD width;
    WORD height;
    BYTE field_10;
    BYTE field_11;
    DWORD field_12;
};
VALIDATE_OFFSET(tImage, field_0, 0x0);
VALIDATE_OFFSET(tImage, field_1, 0x1);
VALIDATE_OFFSET(tImage, field_2, 0x2);
VALIDATE_OFFSET(tImage, field_3, 0x3);
VALIDATE_OFFSET(tImage, field_4, 0x4);
VALIDATE_OFFSET(tImage, field_8, 0x8);
VALIDATE_OFFSET(tImage, width, 0xC);
VALIDATE_OFFSET(tImage, height, 0xE);
VALIDATE_OFFSET(tImage, field_10, 0x10);
VALIDATE_OFFSET(tImage, field_11, 0x11);
VALIDATE_OFFSET(tImage, field_12, 0x14);
VALIDATE_SIZE(tImage, 0x18);
