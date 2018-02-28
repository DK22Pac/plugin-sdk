/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

#pragma pack(push, 4)
struct tFlyingHandlingData {
    int m_dwVehicleId;
    float float4; 
    float float8; 
    float floatC; 
    float float10; 
    float float14; 
    float float18; 
    float float1C; 
    float float20; 
    float float24; 
    float float28; 
    float float2C; 
    float float30; 
    float float34; 
    float float38; 
    float float3C; 
    float float40; 
    float float44; 
    float float48; 
};
#pragma pack(pop)

VALIDATE_SIZE(tFlyingHandlingData, 0x4C);