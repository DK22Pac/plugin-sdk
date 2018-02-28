/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CEntity;

class CReference {
public:
    CReference *m_pNext;
    CEntity **m_ppEntity;
};

VALIDATE_SIZE(CReference, 8);