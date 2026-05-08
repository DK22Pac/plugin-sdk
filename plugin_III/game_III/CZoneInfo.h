/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct  CZoneInfo {
    unsigned short carDensity;
    unsigned short carPoorfamily;
    unsigned short carRichfamily;
    unsigned short carExecutive;
    unsigned short carWorker;
    unsigned short carSpecial;
    unsigned short carBig;
    unsigned short carCops;
    unsigned short carLeone;
    unsigned short carTriad;
    unsigned short carDiablo;
    unsigned short carYakuza;
    unsigned short carYardie;
    unsigned short carColombian;
    unsigned short carHood;
    unsigned short carForelli;
    unsigned short carSindacco;
    unsigned short pedDensity;
    unsigned short copDensity;
    unsigned short pedLeone;
    unsigned short pedTriad;
    unsigned short pedDiablo;
    unsigned short pedYakuza;
    unsigned short pedYardie;
    unsigned short pedColombian;
    unsigned short pedHood;
    unsigned short pedForelli;
    unsigned short pedSindacco;
    unsigned short pedgrp;
};
VALIDATE_OFFSET(CZoneInfo, carDensity, 0x0);
VALIDATE_OFFSET(CZoneInfo, carPoorfamily, 0x2);
VALIDATE_OFFSET(CZoneInfo, carRichfamily, 0x4);
VALIDATE_OFFSET(CZoneInfo, carExecutive, 0x6);
VALIDATE_OFFSET(CZoneInfo, carWorker, 0x8);
VALIDATE_OFFSET(CZoneInfo, carSpecial, 0xA);
VALIDATE_OFFSET(CZoneInfo, carBig, 0xC);
VALIDATE_OFFSET(CZoneInfo, carCops, 0xE);
VALIDATE_OFFSET(CZoneInfo, carLeone, 0x10);
VALIDATE_OFFSET(CZoneInfo, carTriad, 0x12);
VALIDATE_OFFSET(CZoneInfo, carDiablo, 0x14);
VALIDATE_OFFSET(CZoneInfo, carYakuza, 0x16);
VALIDATE_OFFSET(CZoneInfo, carYardie, 0x18);
VALIDATE_OFFSET(CZoneInfo, carColombian, 0x1A);
VALIDATE_OFFSET(CZoneInfo, carHood, 0x1C);
VALIDATE_OFFSET(CZoneInfo, carForelli, 0x1E);
VALIDATE_OFFSET(CZoneInfo, carSindacco, 0x20);
VALIDATE_OFFSET(CZoneInfo, pedDensity, 0x22);
VALIDATE_OFFSET(CZoneInfo, copDensity, 0x24);
VALIDATE_OFFSET(CZoneInfo, pedLeone, 0x26);
VALIDATE_OFFSET(CZoneInfo, pedTriad, 0x28);
VALIDATE_OFFSET(CZoneInfo, pedDiablo, 0x2A);
VALIDATE_OFFSET(CZoneInfo, pedYakuza, 0x2C);
VALIDATE_OFFSET(CZoneInfo, pedYardie, 0x2E);
VALIDATE_OFFSET(CZoneInfo, pedColombian, 0x30);
VALIDATE_OFFSET(CZoneInfo, pedHood, 0x32);
VALIDATE_OFFSET(CZoneInfo, pedForelli, 0x34);
VALIDATE_OFFSET(CZoneInfo, pedSindacco, 0x36);
VALIDATE_OFFSET(CZoneInfo, pedgrp, 0x38);
VALIDATE_SIZE(CZoneInfo, 0x3A);
