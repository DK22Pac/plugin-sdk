/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eVehicleHandlingModelFlags : unsigned int {
    VEHICLE_FLAGS_1G_BOOST = 0x1,
    VEHICLE_FLAGS_2G_BOOST = 0x2,
    VEHICLE_FLAGS_REV_BONNET = 0x4,
    VEHICLE_FLAGS_HANGING_BOOT = 0x8,
    VEHICLE_FLAGS_NO_DOORS = 0x10,
    VEHICLE_FLAGS_IS_VAN = 0x20,
    VEHICLE_FLAGS_IS_BUS = 0x40,
    VEHICLE_FLAGS_IS_LOW = 0x80,
    VEHICLE_FLAGS_DBL_EXHAUST = 0x100,
    VEHICLE_FLAGS_TAILGATE_BOOT = 0x200,
    VEHICLE_FLAGS_NOSWING_BOOT = 0x400,
    VEHICLE_FLAGS_NONPLAYER_STABILISER = 0x800,
    VEHICLE_FLAGS_NEUTRALHANDLING = 0x1000,
    VEHICLE_FLAGS_HAS_NO_ROOF = 0x2000,
    VEHICLE_FLAGS_IS_BIG = 0x4000,
    VEHICLE_FLAGS_HALOGEN_LIGHTS = 0x8000
};
