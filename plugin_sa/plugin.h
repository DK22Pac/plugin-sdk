/*
 GTASA C++ SDK
 See README.md for more details
 DK22Pac, 2015

 Plugin-SDK main features/goals
  -Event-based hooking
  -Extend game objects (attach your own data to vehicles, peds and objects)
  -Opcode calling (use opcodes in your plugins)
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