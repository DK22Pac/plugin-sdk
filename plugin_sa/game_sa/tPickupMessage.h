/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRGBA.h"

struct tPickupMessage {
    float x;
    float y;
    float z;
    float width;
    float height;
    CRGBA color;
    unsigned char flags;
    char field_19;
private:
    char _pad1A[2];
public:
    unsigned int price;
    char *messageText;
};
VALIDATE_OFFSET(tPickupMessage, x, 0x0);
VALIDATE_OFFSET(tPickupMessage, y, 0x4);
VALIDATE_OFFSET(tPickupMessage, z, 0x8);
VALIDATE_OFFSET(tPickupMessage, width, 0xC);
VALIDATE_OFFSET(tPickupMessage, height, 0x10);
VALIDATE_OFFSET(tPickupMessage, color, 0x14);
VALIDATE_OFFSET(tPickupMessage, flags, 0x18);
VALIDATE_OFFSET(tPickupMessage, field_19, 0x19);
VALIDATE_OFFSET(tPickupMessage, price, 0x1C);
VALIDATE_OFFSET(tPickupMessage, messageText, 0x20);
VALIDATE_SIZE(tPickupMessage, 0x24);