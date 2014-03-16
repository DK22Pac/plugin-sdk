#pragma once

#include <windows.h>
#include <stddef.h>
#ifndef _SKIP_POST_PROCESS
#include <game_sa/RenderWare.h>
#endif

#ifdef PLUGIN_EXPORT
#define PLUGIN_API __declspec(dllexport)
#else
#define PLUGIN_API __declspec(dllimport)
#pragma comment(lib, "plugin.lib")
#endif

#define _PLUGIN_VERSION 0x00000001

#define FUNC(a) (void (*a)())

//#define PREPARE_FOR_REDIRECTION() const char* __GFDIKGJDSFSF__ = __FUNCTION__; __asm { mov eax, __GFDIKGJDSFSF__ }
#define VALIDATE_SIZE(struc, size) static_assert(sizeof(struc) == size, "Invalid structure size of " #struc)
#define VALIDATE_OFFSET(struc, member, offset) \
	static_assert(offsetof(struc, member) == offset, "The offset of " #member " in " #struc " is not " #offset "...")
#define NOINLINE __declspec(noinline)

// basic types for structures describing
typedef signed __int32 Int32;
typedef unsigned __int32 UInt32;
typedef signed __int16 Int16;
typedef unsigned __int16 UInt16;
typedef signed __int8 Int8;
typedef unsigned __int8 UInt8;
typedef unsigned __int8 Bool;
typedef float Float;

typedef void (__cdecl* tRegisteredFunction)();

enum eFuncType
{
	FUNC_BEFORE_RESET,     // D3D9 Reset
	FUNC_AFTER_RESET,
	FUNC_DRAWING,           /* calls at 0x53E293
							*/
	FUNC_MENU_DRAWING,      /* calls at 0x57C2B5
							*/
	FUNC_PRERENDER_BEFORE,
	FUNC_PRERENDER_AFTER,
	FUNC_INITIALISE_RW,    // when RenderWare is initialising
	FUNC_SHUTDOWN_RW,      // when RenderWare is closing
	FUNC_INIT_GAME,        // when game is loading in first
	FUNC_RE_INIT_GAME,     // when game is re-loading (also when game is running first time)
	FUNC_GAME_PROCESS,     // when game is processing
	FUNC_GAME_PROCESS_BEFORE_SCRIPTS, // before scripts processing
	FUNC_GAME_PROCESS_AFTER_SCRIPTS,   // after scripts processing
	FUNC_DRAWING_BEFORE_BLIPS, // before CRadar::DrawBlips
	FUNC_DRAWING_AFTER_BLIPS,   // after CRadar::DrawBlips
	FUNC_REGISTER_RW_PLUGIN,
	FUNC_INITIALISE_SCRIPTS, // CTheScripts::Init
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

class CPlugin
{
public:
	char name[16];
	char author[32];
	char fileName[32];
	char version[8];
	unsigned int versionId;
	unsigned int game;
	void *additionalData;
	int reserved[2];
};

class CVehicle;
class CPed;

namespace plugin
{
    struct dummy_func_t { };
    static const dummy_func_t dummy_func;

    inline void** GetVMT(const void* self)
    {
        return *(void***)(self);
    }

    inline void* GetVMT(const void* self, size_t index)
    {
        return GetVMT(self)[index];
    }
    
	namespace Core
	{
		PLUGIN_API unsigned int GetVersion();
		PLUGIN_API void RegisterFunc(eFuncType type, tRegisteredFunction func);
		PLUGIN_API void DeviceResetAfterFunc();
		PLUGIN_API void DeviceResetBeforeFunc();
		PLUGIN_API long DeviceResetFuncExe();
		PLUGIN_API long DeviceResetChangeFuncExe();
		PLUGIN_API void DefaultDrawingFunc();
		PLUGIN_API void DefaultDrawingFuncExe();
		PLUGIN_API void MenuDrawingFunc();
		PLUGIN_API void __fastcall MenuDrawingFuncExe(int menuMgr);
		PLUGIN_API void PreRenderBeforeFunc();
		PLUGIN_API void PreRenderBeforeFuncExe();
		PLUGIN_API void PreRenderAfterFunc();
		PLUGIN_API void PreRenderAfterFuncExe();
		PLUGIN_API void InitialiseRwFunc();
		PLUGIN_API void InitialiseRwFuncExe();
		PLUGIN_API void InitialiseTheScriptsFunc();
		PLUGIN_API void InitialiseTheScriptsFuncExe();
		PLUGIN_API void ShutdownRwFunc();
		PLUGIN_API void ShutdownRwFuncExe();
		PLUGIN_API void InitGameFunc();
		PLUGIN_API void InitGameFuncExe();
		PLUGIN_API void ReInitGameFunc();
		PLUGIN_API void ReInitGameFuncExe();
		PLUGIN_API void GameProcessFunc();
		PLUGIN_API void GameProcessFuncExe();
		PLUGIN_API void GameProcessScriptsFuncExe();
		PLUGIN_API void GameProcessBeforeScriptsFunc();
		PLUGIN_API void GameProcessAfterScriptsFunc();
		PLUGIN_API void DrawBlipsAfterFunc();
		PLUGIN_API void DrawBlipsBeforeFunc();
		PLUGIN_API void DrawBlipsFuncExe();
		PLUGIN_API void RegisterRwPluginFunc();
		PLUGIN_API bool RegisterRwPluginFuncExe();
		PLUGIN_API void DrawBeforeHUDFunc();
		PLUGIN_API void DrawAfterHUDFunc();
		PLUGIN_API void DrawHUDExe();
		PLUGIN_API void PostProcessFunc();
		PLUGIN_API void PostProcessFuncExe();
		PLUGIN_API void VehicleCtorFunc(CVehicle *vehicle);
		PLUGIN_API void VehicleCtorFuncExe();
		PLUGIN_API void PedCtorFunc(CPed *ped);
		PLUGIN_API void PedCtorFuncExe();
		PLUGIN_API void VehicleDtorFunc(CVehicle *vehicle);
		PLUGIN_API void VehicleDtorFuncExe();
		PLUGIN_API void PedDtorFunc(CPed *ped);
		PLUGIN_API void PedDtorFuncExe();
		PLUGIN_API void PoolsBeforeInitialisationFunc();
		PLUGIN_API void PoolsAfterInitialisationFunc();
		PLUGIN_API void PoolsInitialisationFuncExe();
	};
	namespace System
	{
		PLUGIN_API CPlugin const * RegisterPlugin(char *name, char *author, char *filename, char *version, unsigned int versionId, 
			unsigned int game, void *additionalData);
		PLUGIN_API CPlugin const * GetPluginByName(char *name);
	};
	namespace StructPlugins
	{
		// returns plugin index
		PLUGIN_API unsigned int RegisterVehiclePlugin(unsigned int size, unsigned int userId, void *constructor, void *destructor);
		PLUGIN_API void *GetVehiclePlugin(CVehicle *vehicle, unsigned int id);
		PLUGIN_API void *FindVehiclePluginByUserId(CVehicle *vehicle, unsigned int userId);
		PLUGIN_API unsigned int RegisterPedPlugin(unsigned int size, unsigned int userId, void *constructor, void *destructor);
		PLUGIN_API void *GetPedPlugin(CPed *ped, unsigned int id);
		PLUGIN_API void *FindPedPluginByUserId(CPed *ped, unsigned int userId);
	};
#ifndef _SKIP_POST_PROCESS
	namespace PostProcess
	{
		PLUGIN_API void PostProcessCreate();
		PLUGIN_API void PostProcessDestroy();
		PLUGIN_API extern RwRaster *GameScreenRaster;
	};
#endif
};

using plugin::GetVMT;
