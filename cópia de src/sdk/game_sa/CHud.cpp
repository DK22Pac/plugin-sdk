#include "CHud.h"

char (*CHud::m_BigMessage)[128] = (char (*)[128])0xBAACC0;
Bool &CHud::bScriptForceDisplayWithCounters = *(Bool *)0xBAA3FA;