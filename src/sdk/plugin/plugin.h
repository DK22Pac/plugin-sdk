/*
 * Copyright (c) 2013-2014 Dmitry K. <>
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 * 
 */
#pragma once
#include <cstddef>
#include <cstdint>

#define PLUGIN_API
#define _PLUGIN_VERSION 0x00000002

// Forward some structures
class CVehicle;
class CPed;
struct RwRaster;

// Structure validation macros
#if 1
#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")
#endif

// Basic types for structures describing
typedef unsigned __int8 Bool;

// Plugin SDK Types
namespace plugin
{
    typedef void (__cdecl* tRegisteredFunction)();
    
    enum eFuncType
    {
        FUNC_DUMMY,                             // The zero from the list (may be useful some day)
        FUNC_BEFORE_RESET,                      // Before D3D9 Reset
        FUNC_AFTER_RESET,                       // After D3D9 Reset
        FUNC_DRAWING,                           // calls at 0x53E293
        FUNC_MENU_DRAWING,                      // calls at 0x57C2B5
        FUNC_PRERENDER_BEFORE,                  // NOT IMPLEMENTED
        FUNC_PRERENDER_AFTER,                   // ???
        FUNC_INITIALISE_RW,                     // when RenderWare is initialising
        FUNC_SHUTDOWN_RW,                       // when RenderWare is closing
        FUNC_INIT_GAME,                         // when game is loading in first
        FUNC_RE_INIT_GAME,                      // when game is re-loading (also when game is running first time)
        FUNC_GAME_PROCESS,                      // when game is processing (each frame)
        FUNC_GAME_PROCESS_BEFORE_SCRIPTS,       // before scripts processing
        FUNC_GAME_PROCESS_AFTER_SCRIPTS,        // after scripts processing
        FUNC_DRAWING_BEFORE_BLIPS,              // before CRadar::DrawBlips
        FUNC_DRAWING_AFTER_BLIPS,               // after CRadar::DrawBlips
        FUNC_REGISTER_RW_PLUGIN,
        FUNC_INITIALISE_SCRIPTS,                // CTheScripts::Init
        FUNC_DRAWING_BEFORE_HUD,
        FUNC_DRAWING_AFTER_HUD,
        FUNC_POST_PROCESS_DRAWING,
        FUNC_VEHICLE_CONSTRUCTOR,
        FUNC_VEHICLE_DESTRUCTOR,
        FUNC_PED_CONSTRUCTOR,
        FUNC_PED_DESTRUCTOR,
        FUNC_BEFORE_POOLS_INITIALISATION,
        FUNC_AFTER_POOLS_INITIALISATION,
        FUNC_REGISTER_STRUCT_PLUGIN = FUNC_AFTER_POOLS_INITIALISATION
    };

    enum eGame
    {
        GAME_SA_1_0_US = 1
    };

    #pragma pack(push, 1)
    struct CPlugin
    {
        char name[16];
        char author[32];
        char fileName[32];
        char version[8];
        unsigned int versionId;
        unsigned int game;
        void *additionalData;
        int reserved[2];
    };
    #pragma pack(pop)
};


// Main Library
namespace plugin
{
    // Plugin Registration
	namespace System
	{
		PLUGIN_API const CPlugin* RegisterPlugin(const char *name, const char *author, const char *filename, const char *version, unsigned int versionId, 
			unsigned int game, void *additionalData);
		PLUGIN_API const CPlugin* GetPluginByName(const char *name);
	};
    
    // Core functionalities
	namespace Core
	{
		PLUGIN_API uint32_t GetVersion();
		PLUGIN_API void RegisterFunc(eFuncType type, tRegisteredFunction func);
	};
    
    // Additional data for entities
	namespace StructPlugins
	{
        // Ped Plugins
		PLUGIN_API uint32_t RegisterPedPlugin(uint32_t size, uint32_t userid, void *constructor, void *destructor);
		PLUGIN_API void*    GetPedPlugin(CPed *ped, uint32_t index);
		PLUGIN_API void*    FindPedPluginByUserId(CPed *ped, uint32_t userid);
        
        // Vehicle Plugins
		PLUGIN_API uint32_t RegisterVehiclePlugin(uint32_t size, uint32_t userid, void *constructor, void *destructor);
		PLUGIN_API void*    GetVehiclePlugin(CVehicle *vehicle, uint32_t index);
		PLUGIN_API void*    FindVehiclePluginByUserId(CVehicle *vehicle, uint32_t userid);
	};
    
    // Post processing effects
	namespace PostProcess
	{
		PLUGIN_API void PostProcessCreate();
		PLUGIN_API void PostProcessDestroy();
		PLUGIN_API RwRaster* GetGameScreenRaster();
	};
};



// Tricks library -- Used internally for some dirty tricks
namespace plugin
{
    struct dummy_func_t { };                // Dummy func tag type
    static const dummy_func_t dummy_func;   // Dummy func tag object

    // Gets the virtual method table from the object @self
    inline void** GetVMT(const void* self)
    {
        return *(void***)(self);
    }

    // Gets the virtual method from @self in the table index @index 
    inline void* GetVMT(const void* self, size_t index)
    {
        return GetVMT(self)[index];
    }
}

using plugin::GetVMT;


// Backward compatibility with stuff compile from version 1
#ifdef PLUGIN_SDK_BACKWARD_1
using plugin::CPlugin;
using plugin::eGame;
using plugin::eFuncType;
using plugin::tRegisteredFunction;
#endif
