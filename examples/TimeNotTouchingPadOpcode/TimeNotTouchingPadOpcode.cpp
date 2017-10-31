#include "CLEO.h"
#include "CTimer.h"
#include "CPad.h"

class TimeNotTouchingPadOpcode {
public:
    static OpcodeResult WINAPI OpcodeFunc(CScriptThread* thread) {
        int playerId = CLEO_GetIntOpcodeParam(thread);
        CLEO_SetIntOpcodeParam(thread, CTimer::m_snTimeInMilliseconds - CPad::GetPad(playerId)->LastTimeTouched);
        return OR_CONTINUE;
    }

    TimeNotTouchingPadOpcode() {
        CLEO_RegisterOpcode(0x1A00, OpcodeFunc); // 1A00=2,%2d% = get_player %1d% time_not_touching_pad
    }
} timeNotTouchingPadOpcode;
