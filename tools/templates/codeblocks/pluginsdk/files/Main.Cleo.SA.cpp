#include "plugin.h"
#include "CLEO.h"

using namespace plugin;

class $classname$ {
public:
    static OpcodeResult WINAPI OpcodeFunc(CScriptThread* thread) {
        // Write opcode body here
        
        return OR_CONTINUE;
    }

    $classname$() {
        CLEO_RegisterOpcode(/*Write opcode ID here*/, OpcodeFunc);
    }
} $classinstancename$;
