/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "cTransmission.h"
#include "CVector.h"
#include "eVehicleFlags.h"

enum eVehicleLightsSize : unsigned __int8
{
    LIGHTS_LONG,
    LIGHTS_SMALL,
    LIGHTS_BIG,
    LIGHTS_TALL
};

#pragma pack(push, 4)
struct tHandlingData {
    tHandlingData *index;
    float fMass; 
    float float8; 
    float floatC; 
    float float10; 
    char gap14[4]; 
    float float18; 
    char gap1C[12];
    char byte28;
    float float2C; 
    char gap30[4];
    char char34; 
    char gap35[71];
    char byte7C;
    float float80; 
    float float84; 
    float float88; 
    float float8C; 
    char gap90[56];
    float floatC8;
};
#pragma pack(pop)

VALIDATE_SIZE(tHandlingData, 0xCC);