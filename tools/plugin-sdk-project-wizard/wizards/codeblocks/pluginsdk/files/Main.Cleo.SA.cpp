#include "plugin.h"
#include "CLEO.h"

using namespace plugin;

class $classname$ {
public:
    static OpcodeResult WINAPI OpcodeFunc(CScriptThread* thread) {
        // opcode body
        
        return OR_CONTINUE;
    }

    $classname$() {
        CLEO_RegisterOpcode(/*Opcode ID*/, OpcodeFunc);
    }
} $classinstancename$;