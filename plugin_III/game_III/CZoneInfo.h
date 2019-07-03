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

VALIDATE_SIZE(CZoneInfo, 0x3A);
