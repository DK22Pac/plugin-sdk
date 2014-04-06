#include <list>

#include "plugin.h"
#include "injector/hooking.hpp"

#include "internal/SharedData.hpp"
#include "internal/CallbackManager.hpp"
#include "internal/PedPluginManager.hpp"
#include "internal/VehPluginManager.hpp"

using namespace injector;
using namespace plugin;

static ControllerBlockManager& cbm = ControllerBlockManager::GetInstance();

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




static PedPluginManager     pped;
static VehiclePluginManager pveh;




// TODO PROTOTYPE DIFF


// Registers a new plugin
const CPlugin* plugin::System::RegisterPlugin(const char *name, 
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



// Adds a callback function
void plugin::Core::RegisterFunc(eFuncType type, tRegisteredFunction func)
{
	switch(type)
	{
        /*
        case FUNC_BEFORE_RESET:
            DeviceResetBeforeList.push_back(func);
            break;
        case FUNC_AFTER_RESET:
            DeviceResetAfterList.push_back(func);
            break;
        case FUNC_DRAWING:
            DefaultDrawingList.push_back(func);
            break;
        case FUNC_MENU_DRAWING:
            MenuDrawingList.push_back(func);
            break;
         */
        
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
            
        /*
        case FUNC_VEHICLE_CONSTRUCTOR:
            VehicleCtorList.push_back(func);
            break;
        case FUNC_VEHICLE_DESTRUCTOR:
            VehicleDtorList.push_back(func);
            break;
        case FUNC_PED_CONSTRUCTOR:
            PedDtorList.push_back(func);
            break;
        case FUNC_PED_DESTRUCTOR:
            PedDtorList.push_back(func);
            break;
         */
         
        case FUNC_BEFORE_POOLS_INITIALISATION:
            PoolsInitialisationFunc.RegisterFuncBefore(func);
            break;
        case FUNC_AFTER_POOLS_INITIALISATION:
            PoolsInitialisationFunc.RegisterFuncAfter(func);
            break;
            
        /*
        case FUNC_POST_PROCESS_DRAWING:
            PostProcessFunc.RegisterFuncAfter(func);
            break;
        */
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





/*
 * 
 * 
 * 
 * 
 	CheckForRyosukesPlugins();
	CPatch::RedirectCall(0x7F9788, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F978D, 6);
	CPatch::RedirectCall(0x7F9710, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F9715, 6);
	CPatch::RedirectCall(0x7F935C, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F9361, 6);
	CPatch::RedirectCall(0x7F9248, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F924D, 6);
	CPatch::RedirectCall(0x7F9A16, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F9A1B, 6);
	CPatch::RedirectCall(0x7F839F, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F83A4, 6);
	CPatch::RedirectCall(0x7F8327, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F832C, 6);
	CPatch::RedirectCall(0x7F81FF, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F8204, 6);
	CPatch::RedirectCall(0x7F8187, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F818C, 6);
	CPatch::RedirectCall(0x7F7AA4, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F7AA9, 6);
	CPatch::RedirectCall(0x7F8B7B, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F8B80, 4);
	CPatch::RedirectCall(0x7F7990, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F7995, 6);
	CPatch::RedirectCall(0x7F9B43, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F9B48, 6);
	CPatch::RedirectCall(0x7F8C88, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F8C8D, 4);
	CPatch::RedirectCall(0x7F87C6, (void*) plugin::Core::DeviceResetFuncExe);
	CPatch::Nop(0x7F87CB, 4);
	CPatch::RedirectCall(0x7F86C4, (void*) plugin::Core::DeviceResetChangeFuncExe);
	CPatch::Nop(0x7F86C9, 4);
 * 
 * 
 * 
	CPatch::RedirectCall(0x53E293, (void*) plugin::Core::DefaultDrawingFuncExe);
	CPatch::RedirectCall(0x53E82D, (void*) plugin::Core::MenuDrawingFuncExe);
	CPatch::RedirectCall(0x53EB8C, (void*) plugin::Core::MenuDrawingFuncExe);

 * 
 * 
 * 
	CPatch::RedirectJump(0x6D624B, (void*) plugin::Core::VehicleCtorFuncExe);
	CPatch::RedirectCall(0x6E2D35, (void*) plugin::Core::VehicleDtorFuncExe);
	CPatch::RedirectJump(0x5E85FC, (void*) plugin::Core::PedCtorFuncExe);
	CPatch::RedirectCall(0x5E880C, (void*) plugin::Core::PedDtorFuncExe);
 
 */



