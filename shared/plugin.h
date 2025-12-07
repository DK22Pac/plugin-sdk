/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#define __TO_STR(x) #x
#define TO_STR(x) __TO_STR(x)

#define PLUGIN_SDK_VERSION 1001
#define PLUGIN_SDK_VERSION_STR TO_STR(PLUGIN_SDK_VERSION)

#define PLUGIN_SDK_DATE 2025-12-07 23:52:00
#define PLUGIN_SDK_DATE_STR TO_STR(PLUGIN_SDK_DATE)

#include "PluginBase.h"
#include "Events.h"
#include "GameVersionMessage.h"
#include "extender/PedExtender.h"
#include "extender/VehicleExtender.h"
#include "extender/ObjectExtender.h"
#include "Color.h"
#include "Error.h"
#include "Other.h"
#include "Patch.h"
#include "extensions/Paths.h"
#include "extensions/Screen.h"
#include "extensions/Config.h"
#include "extensions/PoolIterator.h"
#include "extensions/FontPrint.h"
#include "comp/PluginsCompatibility.h"
#include "common_sdk.h"
