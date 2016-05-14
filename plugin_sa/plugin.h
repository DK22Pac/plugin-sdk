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

#include "plbase\PluginBase.h"
#include "events\EventList.h"
#include "extender\PedExtender.h"
#include "extender\VehicleExtender.h"
#include "additional\Error.h"
#include "additional\Other.h"