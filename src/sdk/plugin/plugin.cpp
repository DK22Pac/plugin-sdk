/*
 * Copyright (c) 2013-2014 Dmitry K. <>
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 * 
 */
#include <cstdio>
#include "plugin.h"
#include "injector/hooking.hpp"
#include "shared/SharedData.hpp"
#include "internal/CallbackManager.hpp"
#include "internal/CallbackResetDevice.hpp"
#include "internal/CallbackPostFX.hpp"
#include "internal/PedPluginManager.hpp"
#include "internal/VehPluginManager.hpp"

using namespace injector;
using namespace plugin;

// Shared Block Between Plugins
static ControllerBlockManager& cbm = ControllerBlockManager::GetInstance();

// Callback Managers
static CallbackManager5C<0x440A0D, 0x53BCC9, 0x53BE8D, 0x53BFC7, 0x618F05>   GameProcessScriptsFunc;
static CallbackManager1C<0x53EA03>              PreRenderAfterFunc;
static CallbackManager1C<0x5BD779>              InitialiseRwFunc;
static CallbackManager1C<0x53BC21>              ShutdownRwFunc;
static CallbackManager1C<0x748CFB>              InitGameFunc;
static CallbackManager2C<0x748E09, 0x748E48>    ReInitGameFunc;
static CallbackManager1C<0x53E981>              ProcessGameFunc;
static CallbackManager1J<0x58AA2D>              DrawBlipsFunc;
static CallbackManager1C<0x53ECA1>              RegisterRwPluginFunc;
static CallbackManager1C<0x46937B>              InitialiseTheScriptsFunc;
static CallbackManager1C<0x53E4FF>              DrawHUDFunc;
static CallbackManager1C<0x5BF85B>              PoolsInitialisationFunc;
static CallbackManager1C<0x53EAD3>              PostProcessFunc;
static CallbackManager1C<0x53E293>              DefaultDrawingFunc;
static CallbackResetDevice                      DeviceResetFunc;
static CallbackPostFX<0x53EAD3>                 PostFXFunc;
static CallbackManagerThis1C<0x6D5F2F>          VehicleCtorFunc;
static CallbackManagerThis1C<0x6E2D35>          VehicleDtorFunc;
static CallbackManagerThis1C<0x5E8052>          PedCtorFunc;
static CallbackManagerThis1C<0x5E880C>          PedDtorFunc;
static CallbackManagerThis1J<0x57C324>          MenuDrawingFunc;


// Entity Plugins
static PedPluginManager     pped;
static VehiclePluginManager pveh;





// Gets the SDK version
uint32_t plugin::Core::GetVersion()
{
    return _PLUGIN_VERSION;
}

// Registers a new plugin
const CPlugin* plugin::System::RegisterPlugin(  const char *name, 
                                                const char *author, 
                                                const char *filename, 
                                                const char *version, 
                                                unsigned int versionId, 
                                                unsigned int game, 
                                                void *additionalData)
{
    // Allocate the plugin
	auto* plugin = (CPlugin*) ControllerBlockManager::GetInstance().Alloc(sizeof(CPlugin));
    
    // Setup strings
    strcpy(plugin->author, author);
    strcpy(plugin->fileName, filename);
    strcpy(plugin->name, name);
    strcpy(plugin->version, version);
    
    // Setup other data
    plugin->game = game;
    plugin->additionalData = additionalData;
    plugin->versionId = versionId;
    
    // Push the plugin into the shared object
    ControllerBlockManager::GetInterface(0)->plugins.push_back(plugin);
    
    return plugin;
}

// Gets a plugin from it's name
const CPlugin* plugin::System::GetPluginByName(const char *name)
{
    auto& plugins = ControllerBlockManager::GetInterface(0)->plugins;
    
    // Try to find the plugin in the list by the name
    for(auto i = plugins.begin(); i != plugins.end(); ++i)
        if(!strcmp((*i)->name, name)) return *i;
    
    return nullptr;
}

// Gets a reference to the game screen raster used for PostFX
RwRaster*& plugin::PostProcess::GetGameScreenRaster()
{
    return ControllerBlockManager::GetInterface(0)->gameScreenRaster;
}

// Adds a callback function
void plugin::Core::RegisterFunc(eFuncType type, tRegisteredFunction func)
{
    switch(type)
    {
        case FUNC_BEFORE_RESET:
            DeviceResetFunc.RegisterFuncBefore(func);
            break;
        case FUNC_AFTER_RESET:
            DeviceResetFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_DRAWING:
            DefaultDrawingFunc.RegisterFuncAfter(func);
            break;

        case FUNC_MENU_DRAWING:
            MenuDrawingFunc.RegisterFuncAfter(func);
            break;
        
        case FUNC_PRERENDER_AFTER:
            PreRenderAfterFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_INITIALISE_RW:
            InitialiseRwFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_SHUTDOWN_RW:
            ShutdownRwFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_INIT_GAME:
            InitGameFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_RE_INIT_GAME:
            ReInitGameFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_GAME_PROCESS:
            ProcessGameFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_GAME_PROCESS_BEFORE_SCRIPTS:
            GameProcessScriptsFunc.RegisterFuncBefore(func);
            break;
            
        case FUNC_GAME_PROCESS_AFTER_SCRIPTS:
            GameProcessScriptsFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_DRAWING_BEFORE_BLIPS:
            DrawBlipsFunc.RegisterFuncBefore(func);
            break;
            
        case FUNC_DRAWING_AFTER_BLIPS:
            DrawBlipsFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_REGISTER_RW_PLUGIN:
            RegisterRwPluginFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_INITIALISE_SCRIPTS:
            InitialiseTheScriptsFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_DRAWING_BEFORE_HUD:
            DrawHUDFunc.RegisterFuncBefore(func);
            break;
        case FUNC_DRAWING_AFTER_HUD:
            DrawHUDFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_VEHICLE_CONSTRUCTOR:
            VehicleCtorFunc.RegisterFuncAfter(func);
            break;
        case FUNC_VEHICLE_DESTRUCTOR:
            VehicleDtorFunc.RegisterFuncAfter(func);
            break;
            
        case FUNC_PED_CONSTRUCTOR:
            PedCtorFunc.RegisterFuncAfter(func);
            break;
        case FUNC_PED_DESTRUCTOR:
            PedDtorFunc.RegisterFuncAfter(func);
            break;
         
        case FUNC_BEFORE_POOLS_INITIALISATION:
            PoolsInitialisationFunc.RegisterFuncBefore(func);
            break;
        case FUNC_AFTER_POOLS_INITIALISATION:
            PoolsInitialisationFunc.RegisterFuncAfter(func);
            break;

        case FUNC_POST_PROCESS_DRAWING:
            PostFXFunc.RegisterFuncAfter(func);
            break;
    }
}


/*
 *  Ped Structure Plugins
 */
uint32_t plugin::StructPlugins::RegisterPedPlugin(uint32_t size, uint32_t userid, void *constructor, void *destructor)
{
    return pped.RegisterPlugin(size, userid, auto_ptr_cast(constructor), auto_ptr_cast(destructor));
}

void* plugin::StructPlugins::GetPedPlugin(CPed *ped, uint32_t index)
{
    return pped.GetPlugin(ped, index);
}

void* plugin::StructPlugins::FindPedPluginByUserId(CPed *ped, uint32_t userid)
{
    return pped.GetPluginFromUserId(ped, userid);
}

/*
 *  Vehicle Structure Plugins
 */
uint32_t plugin::StructPlugins::RegisterVehiclePlugin(uint32_t size, uint32_t userid, void *constructor, void *destructor)
{
    return pveh.RegisterPlugin(size, userid, auto_ptr_cast(constructor), auto_ptr_cast(destructor));
}

void* plugin::StructPlugins::GetVehiclePlugin(CVehicle *ped, uint32_t index)
{
    return pveh.GetPlugin(ped, index);
}

void* plugin::StructPlugins::FindVehiclePluginByUserId(CVehicle *ped, uint32_t userid)
{
    return pveh.GetPluginFromUserId(ped, userid);
}
