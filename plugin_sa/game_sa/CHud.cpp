#include "CHud.h"

char (*CHud::m_BigMessage)[128] = (char (*)[128])0xBAACC0;
Bool &CHud::bScriptForceDisplayWithCounters = *(Bool *)0xBAA3FA;

void CHud::SetHelpMessage(char const *text, bool quickMessage, bool permanent, bool addToBrief) {
    ((void(__cdecl *)(char const *, bool, bool, bool))0x588BE0)(text, quickMessage, permanent, addToBrief);
}