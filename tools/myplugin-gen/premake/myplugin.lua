local folderPath = projectPath .. "source/"

local cmd = "mkdir \"" .. folderPath .. "\""
local result = os.execute(cmd)

local filename = projectPath.. "source/Main.cpp"
local cppCode = [[
#include "plugin.h"

using namespace plugin;

class ]] .. projectName .. [[ {
public:
    ]] .. projectName ..[[() {
		
	};
} ]] .. projectName .. [[Plugin;
]]

local file = io.open(filename, "w")

if file then
    file:write(cppCode)

    file:close()

    print("Main.cpp created successfully.")
else
    print("Error creating Main.cpp.")
end
