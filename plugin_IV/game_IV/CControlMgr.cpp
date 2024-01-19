/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CControlMgr.h"

CKeyboard& CControlMgr::m_keyboard = *gpatternt(CKeyboard, "BE ? ? ? ? BF ? ? ? ? 8D 64 24 00 81 EE ? ? ? ? 8B CE E8 ? ? ? ? 4F 79 F0 5F 5E C3 CC CC CC CC CC CC CC CC CC CC CC CC CC B9 ? ? ? ? E8 ? ? ? ? B9", 1);
CControl* CControlMgr::m_controls = gpatternt(CControl, "B8 ? ? ? ? C3 B8 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC CC", 1); // [4]
