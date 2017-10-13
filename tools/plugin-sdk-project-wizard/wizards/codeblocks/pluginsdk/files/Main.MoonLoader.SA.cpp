#include "plugin.h"
#include "lua_module.h"

using namespace plugin;

sol::table open(sol::this_state ts) {
	sol::state_view lua(ts);
	sol::table module = lua.create_table();
	module["VERSION"] = 1000;
    
    // test function
	module.set_function("test", [](sol::this_state ts) {
		sol::state_view lua{ts};
		lua["print"]("testing testing, 1 2 3");
	});

	return module;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        // Uncomment these lines to make module unloadable
        //HMODULE hModule;
        //GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_PIN, reinterpret_cast<LPCWSTR>(&DllMain), &hModule);
    }
    return TRUE;
}

SOL_MODULE_ENTRYPOINT(open);
