#include "plugin.h"
#include <d3d9.h>
#include <list>
#include <cstdio>
#include <patch/CPatch.h>
#include <game_sa/CPool.h>
#include <game_sa/CVehicle.h>
#include <game_sa/RenderWare.h>
#include <game_sa/CFont.h>

using namespace std;

RwRaster *plugin::PostProcess::GameScreenRaster;

void AllocateAdditional();
void ReleaseAdditional();

unsigned int RyosukesChange3D = 0;
unsigned int RyosukesReset3D = 0;
HRESULT RyosukeResult;
void CheckForRyosukesPlugins();

void **vehicleAdditional;
unsigned int vehiclePluginsSize;
void **pedAdditional;
unsigned int pedPluginsSize;

unsigned int gVehicleCounter = 0;
unsigned int gPedCounter = 0;

struct tStructPluginDesc
{
	unsigned int size;
	unsigned int userId;
	void *constructor;
	void *destructor;
};

list<tStructPluginDesc*>vehiclePlugins;
list<tStructPluginDesc*>pedPlugins;

#define ProcessOneCommand(script) ((void (__thiscall *)(CRunningScript *))0x469EB0)(script);

list<CPlugin*>pluginList;
list<void (*)()>DeviceResetBeforeList;
list<void (*)()>DeviceResetAfterList;
list<void (*)()>DefaultDrawingList;
list<void (*)()>MenuDrawingList;
list<void (*)()>PreRenderBeforeList;
list<void (*)()>PreRenderAfterList;
list<void (*)()>InitialiseRWList;
list<void (*)()>InitialiseTheScriptsList;
list<void (*)()>ShutdownRWList;
list<void (*)()>InitGameList;
list<void (*)()>ReInitGameList;
list<void (*)()>GameProcessList;
list<void (*)()>GameProcessBeforeScriptsList;
list<void (*)()>GameProcessAfterScriptsList;
list<void (*)()>DrawBlipsBeforeList;
list<void (*)()>DrawBlipsAfterList;
list<void (*)()>RegisterRwPluginList;
list<void (*)()>DrawBeforeHUDList;
list<void (*)()>DrawAfterHUDList;
list<void (*)()>VehicleCtorList;
list<void (*)()>VehicleDtorList;
list<void (*)()>PedCtorList;
list<void (*)()>PedDtorList;
list<void (*)()>PoolsBeforeInitialisationList;
list<void (*)()>PoolsAfterInitialisationList;
list<void (*)()>PostProcessDrawList;

void Initialise();
void Shutdown();

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		Initialise();
		break;
	case DLL_PROCESS_DETACH:
		Shutdown();
	}
	return TRUE;
}

/*unsigned int DeviceResetAddr[] = {0x7F9788, 0x7F9710, 0x7F935C, 0x7F9248, 0x7F9A16, 0x7F839F, 0x7F8327, 0x7F81FF,
	0x7F8187, 0x7F7AA4, 0x7F8B79, 0x7F7990, 0x7F9B43, 0x7F8C86, 0x7F87C4 };*/

FILE *dbg;

void Initialise()
{
	//dbg = fopen("plugin.log", "w");
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
	CPatch::RedirectCall(0x53E293, (void*) plugin::Core::DefaultDrawingFuncExe);
	CPatch::RedirectCall(0x53E82D, (void*) plugin::Core::MenuDrawingFuncExe);
	CPatch::RedirectCall(0x53EB8C, (void*) plugin::Core::MenuDrawingFuncExe);
	CPatch::RedirectCall(0x53EA03, (void*) plugin::Core::PreRenderAfterFuncExe);
	CPatch::RedirectCall(0x5BD779, (void*) plugin::Core::InitialiseRwFuncExe);
	CPatch::RedirectCall(0x53BC21, (void*) plugin::Core::ShutdownRwFuncExe);
	CPatch::RedirectCall(0x748CFB, (void*) plugin::Core::InitGameFuncExe);
	CPatch::RedirectCall(0x748E09, (void*) plugin::Core::ReInitGameFuncExe);
	CPatch::RedirectCall(0x748E48, (void*) plugin::Core::ReInitGameFuncExe);
	CPatch::RedirectCall(0x53E981, (void*) plugin::Core::GameProcessFuncExe);
	CPatch::RedirectCall(0x440A0D, (void*) plugin::Core::GameProcessScriptsFuncExe);
	CPatch::RedirectCall(0x53BCC9, (void*) plugin::Core::GameProcessScriptsFuncExe); // _LoadGame
	CPatch::RedirectCall(0x53BE8D, (void*) plugin::Core::GameProcessScriptsFuncExe); // CGame::ReInitGameObjectVariables()
	CPatch::RedirectCall(0x53BFC7, (void*) plugin::Core::GameProcessScriptsFuncExe); // CGame::Process
	CPatch::RedirectCall(0x618F05, (void*) plugin::Core::GameProcessScriptsFuncExe);
	CPatch::RedirectJump(0x58AA2D, (void*) plugin::Core::DrawBlipsFuncExe);
	CPatch::RedirectCall(0x53ECA1, (void*) plugin::Core::RegisterRwPluginFuncExe);
	CPatch::RedirectCall(0x46937B, (void*) plugin::Core::InitialiseTheScriptsFuncExe);
	CPatch::RedirectCall(0x53E4FF, (void*) plugin::Core::DrawHUDExe);
	CPatch::RedirectCall(0x5BF85B, (void*) plugin::Core::PoolsInitialisationFuncExe);
	CPatch::RedirectCall(0x53EAD3, (void*) plugin::Core::PostProcessFuncExe);
	/************additional data*************/
	CPatch::RedirectJump(0x6D624B, (void*) plugin::Core::VehicleCtorFuncExe);
	CPatch::RedirectCall(0x6E2D35, (void*) plugin::Core::VehicleDtorFuncExe);
	CPatch::RedirectJump(0x5E85FC, (void*) plugin::Core::PedCtorFuncExe);
	CPatch::RedirectCall(0x5E880C, (void*) plugin::Core::PedDtorFuncExe);
	/****************************************/
}

void LOG(const char *format, ...)
{
	/*char final[512];
	va_list ap;
	va_start(ap, format);
	vsnprintf(final, 512, format, ap);
	va_end(ap);
	fputs(final, dbg);
	fputs("\n", dbg);*/
}

void Shutdown()
{
	for(auto i = pluginList.begin(); i != pluginList.end(); ++i)
		delete *i;
	ReleaseAdditional();
}

void CheckForRyosukesPlugins()
{
	if(CPatch::CheckChar(0x7F86C4, 0xE8))
		RyosukesChange3D = *(unsigned __int32 *)0x7F86C5 + 0x7F86C9;
	if(CPatch::CheckChar(0x7F9710, 0xE8))
		RyosukesReset3D = *(unsigned __int32 *)0x7F9711 + 0x7F9715;
	else if(CPatch::CheckChar(0x7F9788, 0xE8))
		RyosukesReset3D = *(unsigned __int32 *)0x7F9789 + 0x7F978D;
	else if(CPatch::CheckChar(0x7F9A16, 0xE8))
		RyosukesReset3D = *(unsigned __int32 *)0x7F9A17 + 0x7F9A1B;
}

unsigned int plugin::Core::GetVersion()
{
	return _PLUGIN_VERSION;
}


///// post process

void plugin::PostProcess::PostProcessCreate()
{
	if(GameScreenRaster)
	{
		if(GameScreenRaster->width != (*(RwCamera **)0xC1703C)->frameBuffer->width || 
			GameScreenRaster->height != (*(RwCamera **)0xC1703C)->frameBuffer->height)
		{
			RwRasterDestroy(GameScreenRaster);
			GameScreenRaster = RwRasterCreate((*(RwCamera **)0xC1703C)->frameBuffer->width, (*(RwCamera **)0xC1703C)->frameBuffer->height,
				(*(RwCamera **)0xC1703C)->frameBuffer->depth, 5);
		}
	}
	else
	{
		GameScreenRaster = RwRasterCreate((*(RwCamera **)0xC1703C)->frameBuffer->width, (*(RwCamera **)0xC1703C)->frameBuffer->height,
				(*(RwCamera **)0xC1703C)->frameBuffer->depth, 5);
	}
}

/////

/******************************* additional data *********************************/

void AllocateAdditional()
{
	vehicleAdditional = new void*[(*(CPool<void *> **)0xB74494)->m_Size];
	vehiclePluginsSize = 0;
	LOG("AllocateAdditional: allocating vehicle data for %d vehicles", (*(CPool<void *> **)0xB74494)->m_Size);
	pedAdditional = new void*[(*(CPool<void *> **)0xB74490)->m_Size];
	pedPluginsSize = 0;
	LOG("AllocateAdditional: allocating ped data for %d peds", (*(CPool<void *> **)0xB74490)->m_Size);
}

void ReleaseAdditional()
{
	delete[] vehicleAdditional;
	for(auto i = vehiclePlugins.begin(); i != vehiclePlugins.end(); ++i)
		delete *i;
	LOG("ReleaseAdditional: releasing vehicle data (%d vehicle plugins were registered)", vehiclePlugins.size());
	delete[] pedAdditional;
	for(auto i = pedPlugins.begin(); i != pedPlugins.end(); ++i)
		delete *i;
	LOG("ReleaseAdditional: releasing ped data (%d ped plugins were registered)", pedPlugins.size());
}

/******************************* vehicle additional data *********************************/

unsigned int plugin::StructPlugins::RegisterVehiclePlugin(unsigned int size, unsigned int userId, void *constructor, void *destructor)
{
	tStructPluginDesc *plugin = new tStructPluginDesc;
	plugin->size = size;
	plugin->userId = userId;
	plugin->constructor = constructor;
	plugin->destructor = destructor;
	vehiclePlugins.push_back(plugin);
	unsigned int result = vehiclePluginsSize;
	vehiclePluginsSize += size;
	char pluginId[8];
	strncpy(pluginId, (char *)&userId, 4);
	pluginId[4] = '\0';
	LOG("plugin::StructPlugins::RegisterVehiclePlugin: Registering plugin %s with size %d. Plugins total size: %d", 
		pluginId, size, vehiclePluginsSize);
	return result;
}

void *plugin::StructPlugins::GetVehiclePlugin(CVehicle *vehicle, unsigned int id)
{
	unsigned int vehicleId = ((unsigned int)vehicle - (unsigned int)((*(CPool<void> **)0xB74494)->m_Objects)) / 0xA18;
	return (void *)((unsigned int)vehicleAdditional[vehicleId] + id);
}

void *plugin::StructPlugins::FindVehiclePluginByUserId(CVehicle *vehicle, unsigned int userId)
{
	unsigned int vehicleId = ((unsigned int)vehicle - (unsigned int)((*(CPool<void> **)0xB74494)->m_Objects)) / 0xA18;
	unsigned int size = 0;
	for(auto i = vehiclePlugins.begin(); i != vehiclePlugins.end(); ++i)
	{
		if((*i)->userId == userId)
			return (void *)((unsigned int)vehicleAdditional[vehicleId] + size);
		size += (*i)->size;
	}
	return NULL;
}

void __fastcall OnVehicleConstructor(CVehicle *vehicle)
{
	gVehicleCounter++;
	unsigned int vehicleId = ((unsigned int)vehicle - (unsigned int)((*(CPool<void> **)0xB74494)->m_Objects)) / 0xA18;
	LOG("OnVehicleConstructor: vehicle %d, vehicleId - %d, vehicleCount - %d", vehicle, vehicleId, gVehicleCounter);
	unsigned int size = 0;
	char pluginId[8];
	if(vehiclePluginsSize)
	{
		vehicleAdditional[vehicleId] = new __int8[vehiclePluginsSize];
		LOG("  OnVehicleConstructor: allocated vehicle additional data with size %d", vehiclePluginsSize);
		for(auto i = vehiclePlugins.begin(); i != vehiclePlugins.end(); ++i)
		{
			((void (*)(CVehicle *, void *))(*i)->constructor)(vehicle, (void *)((unsigned int)vehicleAdditional[vehicleId] + size));
			strncpy(pluginId, (char *)&(*i)->userId, 4);
			pluginId[4] = '\0';
			LOG("    OnVehicleConstructor: constructor for %s plugin (size %d) at %d", pluginId, (*i)->size, 
				(unsigned int)vehicleAdditional[vehicleId] + size);
			size += (*i)->size;
		}
		LOG("  OnVehicleConstructor: registered %d plugins, total size %d", vehiclePlugins.size(), size);
	}
	else
		LOG("  OnVehicleConstructor: no vehicle plugins registered");
};

void __fastcall OnVehicleDestructor(CVehicle *vehicle)
{
	gVehicleCounter--;
	unsigned int vehicleId = ((unsigned int)vehicle - (unsigned int)(*(CPool<void> **)0xB74494)->m_Objects) / 0xA18;
	LOG("OnVehicleDestructor: vehicle %d, vehicleId - %d, vehicleCount - %d", vehicle, vehicleId, gVehicleCounter);
	unsigned int size = 0;
	char pluginId[8];
	for(auto i = vehiclePlugins.begin(); i != vehiclePlugins.end(); ++i)
	{
		((void (*)(CVehicle *, void *))(*i)->destructor)(vehicle, (void *)((unsigned int)vehicleAdditional[vehicleId] + size));
		strncpy(pluginId, (char *)&(*i)->userId, 4);
		pluginId[5] = '\0';
		LOG("   OnVehicleDestructor: destructor for %s plugin (size %d) at %d", pluginId, (*i)->size, 
			(unsigned int)vehicleAdditional[vehicleId] + size);
		size += (*i)->size;
	}
	if(vehiclePluginsSize)
	{
		delete (__int8*)(vehicleAdditional[vehicleId]);
		LOG("  OnVehicleDestructor: deleted vehicle additional data");
	}
	else
		LOG("  OnVehicleDestructor: no vehicle plugins registered (%d)", vehiclePluginsSize);
};

/********************************************** ped additional data *************************************************/

unsigned int plugin::StructPlugins::RegisterPedPlugin(unsigned int size, unsigned int userId, void *constructor, void *destructor)
{
	tStructPluginDesc *plugin = new tStructPluginDesc;
	plugin->size = size;
	plugin->userId = userId;
	plugin->constructor = constructor;
	plugin->destructor = destructor;
	pedPlugins.push_back(plugin);
	unsigned int result = pedPluginsSize;
	pedPluginsSize += size;
	char pluginId[8];
	strncpy(pluginId, (char *)&userId, 4);
	pluginId[4] = '\0';
	LOG("plugin::StructPlugins::RegisterPedPlugin: Registering plugin %s with size %d. Plugins total size: %d", 
		pluginId, size, pedPluginsSize);
	return result;
}

void *plugin::StructPlugins::GetPedPlugin(CPed *ped, unsigned int id)
{
	unsigned int pedId = ((unsigned int)ped - (unsigned int)(*(CPool<void> **)0xB74490)->m_Objects) / 0x7C4;
	return (void *)((unsigned int)pedAdditional[pedId] + id);
}

void *plugin::StructPlugins::FindPedPluginByUserId(CPed *vehicle, unsigned int userId)
{
	unsigned int pedId = ((unsigned int)vehicle - (unsigned int)(*(CPool<void> **)0xB74490)->m_Objects) / 0x7C4;
	unsigned int size = 0;
	for(auto i = pedPlugins.begin(); i != pedPlugins.end(); ++i)
	{
		if((*i)->userId == userId)
			return (void *)((unsigned int)pedAdditional[pedId] + size);
		size += (*i)->size;
	}
	return NULL;
}

void __fastcall OnPedConstructor(CPed *ped)
{
	gPedCounter++;
	unsigned int pedId = ((unsigned int)ped - (unsigned int)(*(CPool<void> **)0xB74490)->m_Objects) / 0x7C4;
	LOG("OnPedConstructor: ped %d, pedId - %d, pedCounter - %d", ped, pedId, gPedCounter);
	unsigned int size = 0;
	char pluginId[8];
	if(pedPluginsSize)
	{
		pedAdditional[pedId] = new __int8[pedPluginsSize];
		LOG("  OnPedConstructor: allocated ped additional data with size %d", pedPluginsSize);
		for(auto i = pedPlugins.begin(); i != pedPlugins.end(); ++i)
		{
			((void (*)(CPed *, void *))(*i)->constructor)(ped, (void *)((unsigned int)pedAdditional[pedId] + size));
			strncpy(pluginId, (char *)&(*i)->userId, 4);
			pluginId[4] = '\0';
			LOG("    OnPedConstructor: constructor for %s plugin (size %d) at %d", pluginId, (*i)->size, 
				(unsigned int)pedAdditional[pedId] + size);
			size += (*i)->size;
		}
		LOG("  OnPedConstructor: no ped plugins registered");
	}
	else
		LOG("  OnPedConstructor: no ped plugins registered");
};

void __fastcall OnPedDestructor(CPed *ped)
{
	gPedCounter--;
	unsigned int pedId = ((unsigned int)ped - (unsigned int)(*(CPool<void> **)0xB74490)->m_Objects) / 0x7C4;
	LOG("OnPedDestructor: ped %d, pedId - %d", ped, pedId);
	char pluginId[8];
	unsigned int size = 0;
	for(auto i = pedPlugins.begin(); i != pedPlugins.end(); ++i)
	{
		((void (*)(CPed *, void *))(*i)->destructor)(ped, (void *)((unsigned int)pedAdditional[pedId] + size));
		strncpy(pluginId, (char *)&(*i)->userId, 4);
		pluginId[5] = '\0';
		LOG("    OnPedDestructor: destructor for %s plugin (size %d) at %d", pluginId, (*i)->size, 
			(unsigned int)pedAdditional[pedId] + size);
		size += (*i)->size;
	}
	if(pedPluginsSize)
	{
		delete (__int8*)(pedAdditional[pedId]);
		LOG("  OnPedDestructor: deleted ped additional data");
	}
	else
		LOG("  OnPedDestructor: no ped plugins registered");
};

/*************************************************************************************************/

void plugin::Core::RegisterFunc(eFuncType type, tRegisteredFunction func)
{
	switch(type)
	{
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
	case FUNC_PRERENDER_BEFORE:
		PreRenderBeforeList.push_back(func);
		break;
	case FUNC_PRERENDER_AFTER:
		PreRenderAfterList.push_back(func);
		break;
	case FUNC_INITIALISE_RW:
		InitialiseRWList.push_back(func);
		break;
	case FUNC_SHUTDOWN_RW:
		ShutdownRWList.push_back(func);
		break;
	case FUNC_INIT_GAME:
		InitGameList.push_back(func);
		break;
	case FUNC_RE_INIT_GAME:
		ReInitGameList.push_back(func);
		break;
	case FUNC_GAME_PROCESS:
		GameProcessList.push_back(func);
		break;
	case FUNC_GAME_PROCESS_BEFORE_SCRIPTS:
		GameProcessBeforeScriptsList.push_back(func);
		break;
	case FUNC_GAME_PROCESS_AFTER_SCRIPTS:
		GameProcessAfterScriptsList.push_back(func);
		break;
	case FUNC_DRAWING_BEFORE_BLIPS:
		DrawBlipsBeforeList.push_back(func);
		break;
	case FUNC_DRAWING_AFTER_BLIPS:
		DrawBlipsAfterList.push_back(func);
		break;
	case FUNC_REGISTER_RW_PLUGIN:
		RegisterRwPluginList.push_back(func);
		break;
	case FUNC_INITIALISE_SCRIPTS:
		InitialiseTheScriptsList.push_back(func);
		break;
	case FUNC_DRAWING_BEFORE_HUD:
		DrawBeforeHUDList.push_back(func);
		break;
	case FUNC_DRAWING_AFTER_HUD:
		DrawAfterHUDList.push_back(func);
		break;
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
	case FUNC_BEFORE_POOLS_INITIALISATION:
		PoolsBeforeInitialisationList.push_back(func);
		break;
	case FUNC_AFTER_POOLS_INITIALISATION:
		PoolsAfterInitialisationList.push_back(func);
		break;
	case FUNC_POST_PROCESS_DRAWING:
		PostProcessDrawList.push_back(func);
		break;
	}
}

CPlugin const * plugin::System::RegisterPlugin(const char *name, 
						  const char *author, 
						  const char *filename, 
						  const char *version, 
						  unsigned int versionId, 
						  unsigned int game, 
						  void *additionalData)
{
	CPlugin *plug = new CPlugin;
	strcpy_s(plug->author, author);
	strcpy_s(plug->fileName, filename);
	strcpy_s(plug->name, name);
	strcpy_s(plug->version, version);
	plug->game = game;
	plug->additionalData = additionalData;
	plug->versionId = versionId;
	pluginList.push_back(plug);
	return plug;
}

CPlugin const * plugin::System::GetPluginByName(char *name)
{
	for(auto i = pluginList.begin(); i != pluginList.end(); ++i)
	{
		if(!strcmp((*i)->name, name))
			return *i;
	}
	return NULL;
}

void __declspec(naked) RyosukeReset3DSafeFunc()
{
	__asm mov eax, dword ptr ds:[0xC97C28]
	RyosukeResult = ((HRESULT (__cdecl *)())RyosukesReset3D)();
	__asm retn
}

HRESULT RyosukeReset3DFunc()
{
	RyosukeReset3DSafeFunc();
	return RyosukeResult;
}

void __declspec(naked) RyosukeChange3DSafeFunc()
{
	__asm mov eax, dword ptr ds:[0xC97C28]
	__asm mov ecx, [eax]
	RyosukeResult = ((HRESULT (__cdecl *)())RyosukesChange3D)();
	__asm retn
}

HRESULT RyosukeChange3DFunc()
{
	RyosukeChange3DSafeFunc();
	return RyosukeResult;
}

long plugin::Core::DeviceResetChangeFuncExe()
{
	HRESULT result;
	plugin::Core::DeviceResetBeforeFunc();
	if(RyosukesChange3D)
		result = RyosukeChange3DFunc();
	else
		result = (*(IDirect3DDevice9 **)0xC97C28)->Reset((D3DPRESENT_PARAMETERS *)0xC9C040);
	plugin::Core::DeviceResetAfterFunc();
	return result;
}

long plugin::Core::DeviceResetFuncExe()
{
	HRESULT result;
	plugin::Core::DeviceResetBeforeFunc();
	if(RyosukesReset3D)
		result = RyosukeReset3DFunc();
	else
		result = (*(IDirect3DDevice9 **)0xC97C28)->Reset((D3DPRESENT_PARAMETERS *)0xC9C040);
	plugin::Core::DeviceResetAfterFunc();
	return result;
}

void plugin::Core::DeviceResetBeforeFunc()
{
	for(auto i = DeviceResetBeforeList.begin(); i != DeviceResetBeforeList.end(); ++i)
		(*i)();
}

void plugin::Core::DeviceResetAfterFunc()
{
	for(auto i = DeviceResetAfterList.begin(); i != DeviceResetAfterList.end(); ++i)
		(*i)();
}

void plugin::Core::DefaultDrawingFunc()
{
	for(auto i = DefaultDrawingList.begin(); i != DefaultDrawingList.end(); ++i)
		(*i)();
}

void plugin::Core::DefaultDrawingFuncExe()
{
	plugin::Core::DefaultDrawingFunc();
}

void plugin::Core::MenuDrawingFunc()
{
	for(auto i = MenuDrawingList.begin(); i != MenuDrawingList.end(); ++i)
		(*i)();
}

void __fastcall plugin::Core::MenuDrawingFuncExe(int menuMgr)
{
	((void (__thiscall *)(int))0x57C290)(menuMgr);
	if(!(*(__int8 *)0xBA677A))
		plugin::Core::MenuDrawingFunc();
}

void plugin::Core::PreRenderAfterFunc()
{
	for(auto i = PreRenderAfterList.begin(); i != PreRenderAfterList.end(); ++i)
		(*i)();
}

void plugin::Core::PreRenderAfterFuncExe()
{
	CALLVOID(0x563430);
	plugin::Core::PreRenderAfterFunc();
}

PLUGIN_API void plugin::Core::InitialiseRwFunc()
{
	for(auto i = InitialiseRWList.begin(); i != InitialiseRWList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::InitialiseRwFuncExe()
{
	CALLVOID(0x704630);
	plugin::Core::InitialiseRwFunc();
}

PLUGIN_API void plugin::Core::ShutdownRwFunc()
{
	for(auto i = ShutdownRWList.begin(); i != ShutdownRWList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::ShutdownRwFuncExe()
{
	CALLVOID(0x730900);
	plugin::Core::ShutdownRwFunc();
}

PLUGIN_API void plugin::Core::InitGameFunc()
{
	for(auto i = InitGameList.begin(); i != InitGameList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::InitGameFuncExe()
{
	CALLVOID(0x53E580); // call LoadTheGame() at WinMain()
	plugin::Core::InitGameFunc();
}

PLUGIN_API void plugin::Core::ReInitGameFunc()
{
	for(auto i = ReInitGameList.begin(); i != ReInitGameList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::ReInitGameFuncExe()
{
	CALLVOID(0x53C680); // call CGame::InitialiseWhenRestarting() at WinMain()
	plugin::Core::ReInitGameFunc();
}

PLUGIN_API void plugin::Core::GameProcessFunc()
{
	for(auto i = GameProcessList.begin(); i != GameProcessList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::GameProcessFuncExe()
{
	CALLVOID(0x53BEE0); // call CGame::Process() at Idle()
	plugin::Core::GameProcessFunc();
}

PLUGIN_API void plugin::Core::GameProcessScriptsFuncExe()
{
	plugin::Core::GameProcessBeforeScriptsFunc();
	CALLVOID(0x46A000); // call CTheScripts::Process
	plugin::Core::GameProcessAfterScriptsFunc();
}

PLUGIN_API void plugin::Core::GameProcessBeforeScriptsFunc()
{
	for(auto i = GameProcessBeforeScriptsList.begin(); i != GameProcessBeforeScriptsList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::GameProcessAfterScriptsFunc()
{
	for(auto i = GameProcessAfterScriptsList.begin(); i != GameProcessAfterScriptsList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::DrawBlipsAfterFunc()
{
	for(auto i = DrawBlipsAfterList.begin(); i != DrawBlipsAfterList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::DrawBlipsBeforeFunc()
{
	for(auto i = DrawBlipsBeforeList.begin(); i != DrawBlipsBeforeList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::DrawBlipsFuncExe()
{
	plugin::Core::DrawBlipsBeforeFunc();
	CALLVOID(0x588050);
	plugin::Core::DrawBlipsAfterFunc();
}

PLUGIN_API void plugin::Core::RegisterRwPluginFunc()
{
	for(auto i = RegisterRwPluginList.begin(); i != RegisterRwPluginList.end(); ++i)
		(*i)();
}

PLUGIN_API bool plugin::Core::RegisterRwPluginFuncExe()
{
	bool result = ((bool (__cdecl *)())0x53D870)();
	plugin::Core::RegisterRwPluginFunc();
	return result;
}

PLUGIN_API void plugin::Core::InitialiseTheScriptsFunc()
{
	for(auto i = InitialiseTheScriptsList.begin(); i != InitialiseTheScriptsList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::InitialiseTheScriptsFuncExe()
{
	bool result = ((bool (__cdecl *)())0x4B2AD0)();
	plugin::Core::InitialiseTheScriptsFunc();
}

PLUGIN_API void plugin::Core::DrawBeforeHUDFunc()
{
	for(auto i = DrawBeforeHUDList.begin(); i != DrawBeforeHUDList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::DrawAfterHUDFunc()
{
	for(auto i = DrawAfterHUDList.begin(); i != DrawAfterHUDList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::DrawHUDExe()
{
	plugin::Core::DrawBeforeHUDFunc();
	((void (__cdecl *)())0x58FAE0)();
	plugin::Core::DrawAfterHUDFunc();
}

PLUGIN_API void plugin::Core::PoolsBeforeInitialisationFunc()
{
	for(auto i = PoolsBeforeInitialisationList.begin(); i != PoolsBeforeInitialisationList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::PoolsAfterInitialisationFunc()
{
	for(auto i = PoolsAfterInitialisationList.begin(); i != PoolsAfterInitialisationList.end(); ++i)
		(*i)();
}

PLUGIN_API void plugin::Core::PoolsInitialisationFuncExe() // redirect call at 0x5BF85B
{
	plugin::Core::PoolsBeforeInitialisationFunc();
	((void (__cdecl *)())0x550F10)();
	AllocateAdditional();
	plugin::Core::PoolsAfterInitialisationFunc();
}

PLUGIN_API void plugin::Core::VehicleCtorFunc(CVehicle *vehicle)
{
	OnVehicleConstructor(vehicle);
	for(auto i = VehicleCtorList.begin(); i != VehicleCtorList.end(); ++i)
		((void (__cdecl *)(CVehicle *))*i)(vehicle);
}

PLUGIN_API void __declspec(naked) plugin::Core::VehicleCtorFuncExe()
{
	// redirect jump at 0x6D624B
	__asm{
		mov dword ptr [esi+0x574], 0x48484848
		pushad
		push esi
		call plugin::Core::VehicleCtorFunc
		add esp, 4
		popad
		mov eax, 0x6D6255
		jmp eax
	}
}

PLUGIN_API void plugin::Core::VehicleDtorFunc(CVehicle *vehicle)
{
	OnVehicleDestructor(vehicle);
	for(auto i = VehicleDtorList.begin(); i != VehicleDtorList.end(); ++i)
		((void (__cdecl *)(CVehicle *))*i)(vehicle);
}

PLUGIN_API void __declspec(naked) plugin::Core::VehicleDtorFuncExe()
{
	// redirect call at 0x6E2D35
	__asm{
		mov eax, 0x542450 // call CPhysical::~CPhysical
		call eax
		pushad
		push esi
		call plugin::Core::VehicleDtorFunc
		add esp, 4
		popad
		retn
	}
}

PLUGIN_API void plugin::Core::PedCtorFunc(CPed *ped)
{
	OnPedConstructor(ped);
	for(auto i = PedCtorList.begin(); i != PedCtorList.end(); ++i)
		((void (__cdecl *)(CPed *))*i)(ped);
}

PLUGIN_API void __declspec(naked) plugin::Core::PedCtorFuncExe()
{
	// redirect jump at 0x5E85FC
	__asm{
		pushad
		push esi
		call plugin::Core::PedCtorFunc
		add esp, 4
		popad
		mov ecx, [esp+0x2C]
		pop edi
		mov eax, 0x5E8601
		jmp eax
	}
}

PLUGIN_API void plugin::Core::PedDtorFunc(CPed *ped)
{
	OnPedDestructor(ped);
	for(auto i = PedDtorList.begin(); i != PedDtorList.end(); ++i)
		((void (__cdecl *)(CPed *))*i)(ped);
}

PLUGIN_API void __declspec(naked) plugin::Core::PedDtorFuncExe()
{
	// redirect call at 0x5E880C
	__asm{
		mov eax, 0x542450 // call CPhysical::~CPhysical
		call eax
		pushad
		push esi
		call plugin::Core::PedDtorFunc
		add esp, 4
		popad
		retn
	}
}

#define RenderStatesSetHSL() ((void (__cdecl *)())0x700D70)()

PLUGIN_API void plugin::Core::PostProcessFunc()
{
	for(auto i = PostProcessDrawList.begin(); i != PostProcessDrawList.end(); ++i)
	{
		RenderStatesSetHSL();
		(*i)();
	}
}

RwRaster::RwD3DRaster *RasterExt(RwRaster *raster)
{
	return (RwRaster::RwD3DRaster *)((*(unsigned int *)0xC402D8) + (*(unsigned int *)0xB4E9E0));
}

PLUGIN_API void plugin::Core::PostProcessFuncExe() // redirect call at 0x5BF85B
{
	IDirect3DSurface9 *surface, *depth;
	CALLVOID(0x53E170); // RenderEffects
	plugin::PostProcess::PostProcessCreate();
	/* update screen raster */
	RwCameraEndUpdate((*(RwCamera **)0xC1703C));
	RwRasterPushContext(plugin::PostProcess::GameScreenRaster);
	RwRasterRenderFast((*(RwCamera **)0xC1703C)->frameBuffer, 0, 0);
	RwRasterPopContext();
	RsCameraBeginUpdate((*(RwCamera **)0xC1703C));
	/* */
	PostProcessFunc();
}
