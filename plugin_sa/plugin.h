/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

/*
 GTASA C++ SDK
 See README.md for more details
 DK22Pac, 2015

 Plugin-SDK main features/goals
  -Event-based hooking
  -Extend game objects (attach your own data to vehicles, peds and objects)
  -Easy D3D using with D3D Lost/Reset events. Compatibility with Ryosuke's plugins
*/

#pragma once

#include "plbase\PluginBase_SA.h"
#include "events\Events_SA.h"
#include "extender\PedExtender_SA.h"
#include "extender\VehicleExtender_SA.h"
#include "extender\ObjectExtender_SA.h"
#include "..\shared\Error.h"
#include "..\shared\Other.h"
#include "..\shared\Patch.h"
#include "..\shared\paths\Paths.h"
#include "extensions\Screen.h"
#include "extensions\Config.h"
#include "comp\PluginsCompatibility.h"