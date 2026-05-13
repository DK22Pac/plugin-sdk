/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CKeybrd {
public:
    unsigned short m_nKeys[256];
    int m_nLayout;

public:
    bool Keydown(unsigned short key);
};
VALIDATE_OFFSET(CKeybrd, m_nKeys, 0x0);
VALIDATE_OFFSET(CKeybrd, m_nLayout, 0x200);
VALIDATE_SIZE(CKeybrd, 0x204);

extern CKeybrd** gKeybrd;
extern CKeybrd* GetKeybrd();
